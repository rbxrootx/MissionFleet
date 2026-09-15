"""Stage repeated record-interface and fixed-bitset helpers."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = [
    ("game-server", "004a33de", "record_update", 131),
    ("save-server", "0045f9ee", "record_update", 131),
    ("game-server", "004befd0", "bitset_clear_tail", 132),
    ("save-server", "0047c6b0", "bitset_clear_tail", 132),
]


def body(kind):
    if kind == "record_update":
        return (
            "push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
            "cmp dword ptr [ebp+10h], 0", "je done",
            "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+4]",
            "cmp ecx, dword ptr [ebp+8]", "jne done",
            "mov edx, dword ptr [ebp+0ch]", "mov eax, dword ptr [ebp-4]", "add eax, 0ch",
            "mov ecx, dword ptr [edx]", "mov dword ptr [eax], ecx",
            "mov ecx, dword ptr [edx+4]", "mov dword ptr [eax+4], ecx",
            "mov ecx, dword ptr [edx+8]", "mov dword ptr [eax+8], ecx",
            "mov edx, dword ptr [edx+0ch]", "mov dword ptr [eax+0ch], edx",
            "release:", "mov eax, dword ptr [ebp-4]", "cmp dword ptr [eax+1ch], 0", "je attach",
            "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ecx+1ch]",
            "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+1ch]",
            "mov eax, dword ptr [ecx]", "push edx", "call dword ptr [eax+8]",
            "mov ecx, dword ptr [ebp-4]", "mov dword ptr [ecx+1ch], 0",
            "attach:", "xor edx, edx", "test edx, edx", "jne release",
            "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+10h]",
            "mov dword ptr [eax+1ch], ecx", "mov edx, dword ptr [ebp-4]",
            "mov eax, dword ptr [edx+1ch]", "mov ecx, dword ptr [ebp-4]",
            "mov edx, dword ptr [ecx+1ch]", "mov ecx, dword ptr [edx]",
            "push eax", "call dword ptr [ecx+4]", "done:",
            "mov esp, ebp", "pop ebp", "ret 0ch",
        )
    if kind == "bitset_clear_tail":
        return (
            "push ebp", "mov ebp, esp", "sub esp, 0ch",
            "mov eax, dword ptr [ebp+0ch]", "cdq", "and edx, 1fh",
            "add eax, edx", "sar eax, 5", "mov dword ptr [ebp-0ch], eax",
            "mov eax, dword ptr [ebp+0ch]", "and eax, 8000001fh", "jns remainder",
            "dec eax", "or eax, 0ffffffe0h", "inc eax", "remainder:",
            "mov ecx, 1fh", "sub ecx, eax", "mov dword ptr [ebp-4], ecx",
            "or edx, 0ffffffffh", "mov ecx, dword ptr [ebp-4]", "shl edx, cl",
            "not edx", "mov dword ptr [ebp-8], edx", "mov eax, dword ptr [ebp-0ch]",
            "mov ecx, dword ptr [ebp+8]", "mov edx, dword ptr [ecx+eax*4]",
            "and edx, dword ptr [ebp-8]", "test edx, edx", "je advance",
            "xor eax, eax", "jmp done", "advance:", "mov eax, dword ptr [ebp-0ch]",
            "add eax, 1", "mov dword ptr [ebp-0ch], eax", "jmp test_index",
            "next:", "mov ecx, dword ptr [ebp-0ch]", "add ecx, 1",
            "mov dword ptr [ebp-0ch], ecx", "test_index:",
            "cmp dword ptr [ebp-0ch], 3", "jge clear",
            "mov edx, dword ptr [ebp-0ch]", "mov eax, dword ptr [ebp+8]",
            "cmp dword ptr [eax+edx*4], 0", "je next_jump", "xor eax, eax", "jmp done",
            "next_jump:", "jmp next", "clear:", "mov eax, 1", "done:",
            "mov esp, ebp", "pop ebp", "ret",
        )
    raise ValueError(kind)


def render(address, kind):
    lines = "\n".join(f"    __asm {line}" for line in body(kind))
    return ("// Exact recovered record/bitset helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredRecordBitset{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
