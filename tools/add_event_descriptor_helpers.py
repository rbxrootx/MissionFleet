"""Stage repeated event-ring and descriptor-table helpers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = [
    ("game-server", "0048b4ee", "event_write", 133),
    ("save-server", "0042d89e", "event_write", 133),
    ("game-server", "004f3af8", "descriptor_find", 133),
    ("save-server", "004d1a28", "descriptor_find", 133),
]


def body(kind):
    if kind == "event_write":
        return (
            "push ebp", "mov ebp, esp", "push ecx",
            "mov dword ptr [ebp-4], 0cccccccch", "mov dword ptr [ebp-4], ecx",
            "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+68h]", "shl ecx, 4",
            "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [ebp+8]",
            "mov dword ptr [edx+ecx+6ch], eax",
            "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ecx+68h]", "shl edx, 4",
            "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+0ch]",
            "mov dword ptr [eax+edx+70h], ecx",
            "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [edx+68h]", "shl eax, 4",
            "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp+10h]",
            "mov dword ptr [ecx+eax+74h], edx",
            "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+68h]", "shl ecx, 4",
            "mov edx, dword ptr [ebp-4]", "mov eax, dword ptr [ebp+14h]",
            "mov dword ptr [edx+ecx+78h], eax",
            "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ecx+68h]", "add edx, 1",
            "mov eax, dword ptr [ebp-4]", "mov dword ptr [eax+68h], edx",
            "mov ecx, dword ptr [ebp-4]", "cmp dword ptr [ecx+68h], 0b3h", "jl done",
            "mov edx, dword ptr [ebp-4]", "mov dword ptr [edx+68h], 0", "done:",
            "mov esp, ebp", "pop ebp", "ret 10h",
        )
    if kind == "descriptor_find":
        return (
            "push ebp", "mov ebp, esp", "push ebx", "push esi", "push edi",
            "xor eax, eax", "test eax, eax", "je check2", "int 3", "check2:",
            "xor ecx, ecx", "test ecx, ecx", "jne check1",
            "xor edx, edx", "test edx, edx", "je check4", "int 3", "check4:",
            "xor eax, eax", "test eax, eax", "jne check3",
            "xor ecx, ecx", "test ecx, ecx", "je check6", "int 3", "check6:",
            "xor edx, edx", "test edx, edx", "jne check5",
            "xor eax, eax", "test eax, eax", "je check8", "int 3", "check8:",
            "xor ecx, ecx", "test ecx, ecx", "jne check7",
            "xor edx, edx", "test edx, edx", "je check10", "int 3", "check10:",
            "xor eax, eax", "test eax, eax", "jne check9",
            "mov ebx, dword ptr [ebp+8]", "mov eax, dword ptr [ebp+0ch]",
            "mov edx, dword ptr [ebp+10h]", "mov ecx, dword ptr [ebp+14h]", "scan:",
            "cmp dword ptr [ebx+10h], 0", "je missing", "cmp eax, dword ptr [ebx]", "je second",
            "advance:", "add ebx, 18h", "jmp scan", "second:",
            "cmp edx, dword ptr [ebx+4]", "jne advance", "cmp ecx, dword ptr [ebx+8]", "jb advance",
            "cmp ecx, dword ptr [ebx+0ch]", "ja advance", "mov dword ptr [ebp+8], ebx", "jmp result",
            "missing:", "xor eax, eax", "mov dword ptr [ebp+8], eax", "result:",
            "mov eax, dword ptr [ebp+8]", "pop edi", "pop esi", "pop ebx", "pop ebp", "ret 10h",
            "check1:", "jmp check1_body", "check1_body:", "jmp check1_end", "check1_end:",
        )
    raise ValueError(kind)


def descriptor_body():
    # Keep the compiler's deliberately redundant debug checks in their original order.
    return (
        "push ebp", "mov ebp, esp", "push ebx", "push esi", "push edi",
        "l0:", "xor eax, eax", "test eax, eax", "je l1", "int 3", "l1:",
        "xor ecx, ecx", "test ecx, ecx", "jne l0",
        "l2:", "xor edx, edx", "test edx, edx", "je l3", "int 3", "l3:",
        "xor eax, eax", "test eax, eax", "jne l2",
        "l4:", "xor ecx, ecx", "test ecx, ecx", "je l5", "int 3", "l5:",
        "xor edx, edx", "test edx, edx", "jne l4",
        "l6:", "xor eax, eax", "test eax, eax", "je l7", "int 3", "l7:",
        "xor ecx, ecx", "test ecx, ecx", "jne l6",
        "l8:", "xor edx, edx", "test edx, edx", "je l9", "int 3", "l9:",
        "xor eax, eax", "test eax, eax", "jne l8",
        "mov ebx, dword ptr [ebp+8]", "mov eax, dword ptr [ebp+0ch]",
        "mov edx, dword ptr [ebp+10h]", "mov ecx, dword ptr [ebp+14h]", "scan:",
        "cmp dword ptr [ebx+10h], 0", "je missing", "cmp eax, dword ptr [ebx]", "je second",
        "advance:", "add ebx, 18h", "jmp scan", "second:",
        "cmp edx, dword ptr [ebx+4]", "jne advance", "cmp ecx, dword ptr [ebx+8]", "jb advance",
        "cmp ecx, dword ptr [ebx+0ch]", "ja advance", "mov dword ptr [ebp+8], ebx", "jmp result",
        "missing:", "xor eax, eax", "mov dword ptr [ebp+8], eax", "result:",
        "mov eax, dword ptr [ebp+8]", "pop edi", "pop esi", "pop ebx", "pop ebp", "ret 10h",
    )


def render(address, kind):
    selected = descriptor_body() if kind == "descriptor_find" else body(kind)
    lines = "\n".join(f"    __asm {line}" for line in selected)
    return ("// Exact recovered event/descriptor helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredEventDescriptor{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
