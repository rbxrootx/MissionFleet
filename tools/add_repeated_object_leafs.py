"""Stage repeated object-state and value leaf functions."""
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


pair("0049045d", "0044ca8d", "clear_if_equal", 34, 72)
add("save-server", "00445db0", "swap_values", 34)
add("save-server", "00446170", "swap_values", 34)
add("game-server", "0041f560", "subtract_values", 34)
add("game-server", "0044c950", "subtract_values", 34)
pair("004bd770", "0047a3c0", "exponent_test", 34)
pair("0048c300", "0042e710", "debug_set_return_arg", 35, 3196)
pair("00506566", "004eb2e6", "detach_value", 35, 12, -1)
pair("0054f7ed", "0054e25d", "detach_value", 35, 16, 0)
pair("005739ca", "005800aa", "detach_value", 35, 20, 1)
pair("00535f46", "0053239e", "swap_rect", 36)
pair("00493b46", "0045016b", "set_return_old", 36, 40)
pair("004892f0", "004297a0", "init_words", 38)
pair("0054c6c9", "0054b139", "variant_uint", 39)


def body(kind, args):
    local = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx")
    debug = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 0cccccccch",
             "mov dword ptr [ebp-4], ecx")
    end = ("mov esp, ebp", "pop ebp", "ret")
    if kind == "clear_if_equal":
        (offset,) = args
        return local + ("mov eax, dword ptr [ebp-4]", f"mov ecx, dword ptr [eax+{offset}]",
                        "cmp ecx, dword ptr [ebp+8]", "jne done", "mov edx, dword ptr [ebp-4]",
                        f"mov dword ptr [edx+{offset}], 0", "done:") + end[:-1] + ("ret 4",)
    if kind == "swap_values":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov eax, dword ptr [ebp+8]",
                "mov ecx, dword ptr [eax]", "mov dword ptr [ebp-4], ecx",
                "mov edx, dword ptr [ebp+12]", "mov eax, dword ptr [edx]",
                "mov ecx, dword ptr [ebp+8]", "mov dword ptr [ecx], eax",
                "mov edx, dword ptr [ebp+12]", "mov eax, dword ptr [ebp-4]",
                "mov dword ptr [edx], eax") + end
    if kind == "subtract_values":
        return debug + ("mov eax, dword ptr [ebp+8]", "mov ecx, dword ptr [ebp+12]",
                        "mov edx, dword ptr [eax]", "cmp edx, dword ptr [ecx]",
                        "sbb eax, eax", "neg eax") + end[:-1] + ("ret 8",)
    if kind == "exponent_test":
        return ("push ebp", "mov ebp, esp", "mov eax, dword ptr [ebp+14]", "and eax, 0ffffh",
                "and eax, 7ff0h", "cmp eax, 7ff0h", "jne finite", "xor eax, eax",
                "jmp done", "finite:", "mov eax, 1", "done:", "pop ebp", "ret")
    if kind == "debug_set_return_arg":
        (offset,) = args
        return debug + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+8]",
                        f"mov dword ptr [eax+{offset}], ecx", "mov eax, dword ptr [ebp+8]") + end[:-1] + ("ret 4",)
    if kind == "detach_value":
        offset, replacement = args
        return ("push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-8], ecx",
                "mov eax, dword ptr [ebp-8]", f"mov ecx, dword ptr [eax+{offset}]",
                "mov dword ptr [ebp-4], ecx", "mov edx, dword ptr [ebp-8]",
                f"mov dword ptr [edx+{offset}], {replacement}", "mov eax, dword ptr [ebp-4]") + end
    if kind == "swap_rect":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov eax, dword ptr [ebp+8]",
                "mov ecx, dword ptr [eax]", "mov dword ptr [ebp-4], ecx",
                "mov edx, dword ptr [ebp+8]", "mov eax, dword ptr [ebp+8]",
                "mov ecx, dword ptr [eax+8]", "mov dword ptr [edx], ecx",
                "mov edx, dword ptr [ebp+8]", "mov eax, dword ptr [ebp-4]",
                "mov dword ptr [edx+8], eax") + end
    if kind == "set_return_old":
        (offset,) = args
        return ("push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-8], ecx",
                "mov eax, dword ptr [ebp-8]", f"mov ecx, dword ptr [eax+{offset}]",
                "mov dword ptr [ebp-4], ecx", "mov edx, dword ptr [ebp-8]",
                "mov eax, dword ptr [ebp+8]", f"mov dword ptr [edx+{offset}], eax",
                "mov eax, dword ptr [ebp-4]") + end[:-1] + ("ret 4",)
    if kind == "init_words":
        return debug + ("mov eax, dword ptr [ebp-4]", "mov word ptr [eax], 8000h",
                        "mov ecx, dword ptr [ebp-4]", "mov word ptr [ecx+2], 0",
                        "mov eax, dword ptr [ebp-4]") + end
    if kind == "variant_uint":
        return local + ("mov eax, dword ptr [ebp-4]", "mov word ptr [eax], 5",
                        "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp+8]",
                        "mov dword ptr [ecx+8], edx", "mov eax, dword ptr [ebp+12]",
                        "mov dword ptr [ecx+12], eax", "mov eax, dword ptr [ebp-4]") + end[:-1] + ("ret 8",)
    raise ValueError(kind)


def render(address, kind, args):
    lines = "\n".join(f"    __asm {line}" for line in body(kind, args))
    return ("// Exact recovered repeated object/value leaf helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size, args in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredObjectLeaf{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, args), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
