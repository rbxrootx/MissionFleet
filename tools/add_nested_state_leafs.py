"""Stage repeated nested-state setters, predicates, and small initializers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = []


def add(component, address, kind, size, *args):
    TARGETS.append((component, address, kind, size, args))


def pair(game, save, kind, size, *args):
    add("game-server", game, kind, size, *args); add("save-server", save, kind, size, *args)


pair("005346d0", "00528451", "word_set", 29, 28)
pair("005346ed", "0052846e", "word_set", 29, 30)
pair("00533ba9", "00527972", "nested_flag", 29, 1)
pair("00533bc6", "0052798f", "nested_flag", 29, 2)
pair("00533c1b", "005279e4", "nested_flag", 29, 16)
pair("00533b4c", "00527915", "nested_eq", 29, 16, 700)
pair("00533a2d", "005277f6", "direct_flag", 29, 144, 1)
pair("00533b10", "005278d9", "nested_byte", 30, 20)
pair("00533b69", "00527932", "nested_byte", 30, 21)
pair("00533b2e", "005278f7", "nested_byte", 30, 22)
pair("0051a0a5", "005032b8", "set_and_true", 30, 128)
add("game-server", "0045c7a0", "debug_const", 30, 0)
add("game-server", "0045c880", "debug_const", 30, 0)
add("game-server", "0045c7c0", "debug_const", 30, 1)
add("game-server", "0045c8a0", "debug_const", 30, 1)


def boolean_tail():
    return ("neg eax", "sbb eax, eax", "neg eax", "mov esp, ebp", "pop ebp", "ret")


def body(kind, args):
    local = ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx")
    if kind == "word_set":
        (offset,) = args
        return local + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax]",
                        "mov edx, dword ptr [ecx+92]", "mov ax, word ptr [ebp+8]",
                        f"mov word ptr [edx+{offset}], ax", "mov esp, ebp", "pop ebp", "ret 4")
    if kind == "nested_flag":
        (mask,) = args
        return local + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+92]",
                        "mov eax, dword ptr [ecx+20]", f"and eax, {mask}") + boolean_tail()
    if kind == "nested_eq":
        offset, value = args
        return local + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+104]",
                        "xor eax, eax", f"cmp dword ptr [ecx+{offset}], {value}",
                        "sete al", "mov esp, ebp", "pop ebp", "ret")
    if kind == "nested_byte":
        (offset,) = args
        return local + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+104]",
                        "xor edx, edx", f"mov dl, byte ptr [ecx+{offset}]", "mov eax, edx") + boolean_tail()
    if kind == "direct_flag":
        offset, mask = args
        return local + ("mov eax, dword ptr [ebp-4]", f"mov eax, dword ptr [eax+{offset}]",
                        f"and eax, {mask}") + boolean_tail()
    if kind == "set_and_true":
        (offset,) = args
        return local + ("mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+8]",
                        f"mov dword ptr [eax+{offset}], ecx", "mov eax, 1",
                        "mov esp, ebp", "pop ebp", "ret 4")
    if kind == "debug_const":
        (value,) = args
        return ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], 0cccccccch",
                "mov dword ptr [ebp-4], ecx", "mov eax, dword ptr [ebp-4]",
                f"mov dword ptr [eax], {value}", "mov eax, dword ptr [ebp-4]",
                "mov esp, ebp", "pop ebp", "ret")
    raise ValueError(kind)


def render(address, kind, args):
    return ("// Exact recovered nested-state leaf helper.\n"
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
        source = f"src/{component}/matches/RecoveredNestedState{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind, args), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
