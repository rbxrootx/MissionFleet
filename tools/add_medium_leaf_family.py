"""Stage repeated medium-size leaf accessors with no linker dependencies."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = []


def add(component, address, kind, size, *args):
    TARGETS.append((component, address, kind, size, args))


def pair(game, save, kind, size, *args):
    add("game-server", game, kind, size, *args); add("save-server", save, kind, size, *args)


pair("00403ff0", "0042e7f0", "debug_get", 27, 264)
add("game-server", "00410e30", "debug_get", 27, 268); add("game-server", "0044a680", "debug_get", 27, 268)
pair("0044f3d0", "0042c320", "debug_get", 27, 3196)
pair("0048c360", "0042e770", "debug_get", 27, 3200)
pair("00403fb0", "0042e790", "debug_get", 27, 3204)
pair("00436ce0", "00429920", "debug_get", 27, 172)
pair("0048c2e0", "0042e6f0", "debug_get", 27, 224)
pair("0053df36", "0052d996", "nonzero", 28, 160)
pair("0049c730", "00458d50", "copy_field", 28, 192)
pair("0048f010", "0044b590", "copy_field", 28, 196)
pair("00531948", "00525711", "compare_fields", 28)
pair("0048a090", "004297d0", "debug_set", 28, 0)
add("game-server", "0040a4d0", "debug_zero", 28, 12); add("game-server", "00426020", "debug_zero", 28, 12)
pair("0048bd60", "0042e110", "debug_zero", 28, 24)
pair("0048bd40", "0042e0f0", "debug_const", 28, 24, 1)
pair("0048ba53", "0042de03", "debug_zero", 28, 84)
pair("0048ba37", "0042dde7", "debug_const", 28, 84, 1)
add("save-server", "0043de60", "minus_four", 28); add("save-server", "0043de80", "minus_four", 28)


def body(kind, args):
    debug = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 0cccccccch",
             "mov dword ptr [ebp-4], ecx")
    finish = ("mov esp, ebp", "pop ebp", "ret")
    if kind == "debug_get":
        (offset,) = args
        return debug + ("mov eax, dword ptr [ebp-4]", f"mov eax, dword ptr [eax+{offset}]",) + finish
    if kind == "nonzero":
        (offset,) = args
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "xor ecx, ecx", f"cmp dword ptr [eax+{offset}], 0",
                "setne cl", "mov eax, ecx") + finish
    if kind == "copy_field":
        (offset,) = args
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+4]",
                "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [edx]",
                f"mov dword ptr [ecx+{offset}], eax") + finish
    if kind == "compare_fields":
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp-4]",
                "mov edx, dword ptr [eax+36]", "xor eax, eax", "cmp edx, dword ptr [ecx+40]",
                "sete al") + finish
    if kind == "debug_set":
        return debug + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+8]",
                        "mov dword ptr [eax], ecx") + ("mov esp, ebp", "pop ebp", "ret 4")
    if kind == "debug_zero":
        (offset,) = args
        return debug + ("mov eax, dword ptr [ebp-4]", f"mov dword ptr [eax+{offset}], 0") + finish
    if kind == "debug_const":
        offset, value = args
        return debug + ("mov eax, dword ptr [ebp-4]", f"mov dword ptr [eax+{offset}], {value}") + finish
    if kind == "minus_four":
        return ("push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-8], ecx",
                "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [eax+4]",
                "mov dword ptr [ebp-4], ecx", "mov eax, dword ptr [ebp-4]", "sub eax, 4") + finish
    raise ValueError(kind)


def render(address, kind, args):
    return ("// Exact recovered state leaf helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
            + "\n".join(f"    __asm {line}" for line in body(kind, args)) + "\n}\n")


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size, args in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredStateLeaf{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, args), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
