"""Stage repeated field, accessor, and value-constructor leaf functions."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = []


def add(component, address, kind, size, *args):
    TARGETS.append((component, address, kind, size, args))


def pair(game, save, kind, size, *args):
    add("game-server", game, kind, size, *args)
    add("save-server", save, kind, size, *args)


pair("0054c998", "0054b408", "currency_copy", 32)
pair("00533fbe", "00527d87", "or_field", 32, 140, 32)
pair("0053dee9", "0052d949", "or_field", 32, 184, 2)
add("game-server", "004037a0", "indexed_get", 32, 12)
add("game-server", "0040a2c0", "indexed_get", 32, 12)
add("game-server", "00438720", "debug_set", 32, 260)
add("game-server", "0044a370", "debug_set", 32, 260)
add("game-server", "00410e50", "debug_set", 32, 268)
add("game-server", "0044a660", "debug_set", 32, 268)
pair("004386c0", "0042e7b0", "debug_set", 32, 3200)
pair("004386e0", "0042e7d0", "debug_set", 32, 3204)
add("save-server", "0043dde0", "scaled_address", 32)
add("save-server", "0043de00", "scaled_address", 32)
pair("0054c6a8", "0054b118", "variant_float", 33)
pair("0054c65e", "0054b0ce", "variant_byte", 33)
pair("00575e93", "00582573", "dispatch_init", 33)
pair("0049a170", "00456790", "modular_add", 33)


def body(kind, args):
    local = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx")
    debug = ("push ebp", "mov ebp, esp", "push ecx",
             "mov dword ptr [ebp-4], 0cccccccch", "mov dword ptr [ebp-4], ecx")
    end = ("mov esp, ebp", "pop ebp", "ret")
    if kind == "currency_copy":
        return local + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax]",
                        "mov edx, dword ptr [eax+4]", "mov eax, dword ptr [ebp+8]",
                        "mov dword ptr [eax], ecx", "mov dword ptr [eax+4], edx",
                        "mov eax, dword ptr [ebp+8]") + end[:-1] + ("ret 4",)
    if kind == "or_field":
        offset, mask = args
        return local + ("mov eax, dword ptr [ebp-4]", f"mov ecx, dword ptr [eax+{offset}]",
                        f"or ecx, {mask}", "mov edx, dword ptr [ebp-4]",
                        f"mov dword ptr [edx+{offset}], ecx") + end
    if kind == "indexed_get":
        (offset,) = args
        return debug + ("mov eax, dword ptr [ebp-4]", f"mov ecx, dword ptr [eax+{offset}]",
                        "mov edx, dword ptr [ebp+8]", "mov eax, dword ptr [ecx+edx*4]") + end[:-1] + ("ret 4",)
    if kind == "debug_set":
        (offset,) = args
        return debug + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+8]",
                        f"mov dword ptr [eax+{offset}], ecx") + end[:-1] + ("ret 4",)
    if kind == "scaled_address":
        return ("push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-8], ecx",
                "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [eax]",
                "mov dword ptr [ebp-4], ecx", "mov edx, dword ptr [ebp+8]",
                "mov eax, dword ptr [ebp-4]", "lea eax, dword ptr [eax+edx*4]",
                "mov esp, ebp", "pop ebp", "ret 4")
    if kind == "variant_float":
        return local + ("mov eax, dword ptr [ebp-4]", "mov word ptr [eax], 4",
                        "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp+8]",
                        "mov dword ptr [ecx+8], edx", "mov eax, dword ptr [ebp-4]") + end[:-1] + ("ret 4",)
    if kind == "variant_byte":
        return local + ("mov eax, dword ptr [ebp-4]", "mov word ptr [eax], 11h",
                        "mov ecx, dword ptr [ebp-4]", "mov dl, byte ptr [ebp+8]",
                        "mov byte ptr [ecx+8], dl", "mov eax, dword ptr [ebp-4]") + end[:-1] + ("ret 4",)
    if kind == "dispatch_init":
        return local + ("mov eax, dword ptr [ebp-4]", "mov dword ptr [eax], 0",
                        "mov ecx, dword ptr [ebp-4]", "mov dword ptr [ecx+4], 1",
                        "mov eax, dword ptr [ebp-4]") + end
    if kind == "modular_add":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 4",
                "mov ecx, dword ptr [ebp+8]", "add ecx, dword ptr [ebp+12]",
                "mov eax, dword ptr [ebp+12]", "xor edx, edx", "div dword ptr [ebp-4]",
                "add ecx, edx", "mov eax, ecx", "mov esp, ebp", "pop ebp", "ret")
    raise ValueError(kind)


def render(address, kind, args):
    lines = "\n".join(f"    __asm {line}" for line in body(kind, args))
    return ("// Exact recovered repeated field/value leaf helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size, args in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredRepeatedField{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, args), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
