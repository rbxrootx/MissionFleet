"""Stage the repeated parallel-table availability lookup."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0047ae60", 187),
    ("game-server", "0047b150", 187),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 0ch", "push esi",
    "mov dword ptr [ebp-0ch], 0cccccccch", "mov dword ptr [ebp-8], 0cccccccch",
    "mov dword ptr [ebp-4], 0cccccccch", "mov dword ptr [ebp-8], ecx",
    "cmp dword ptr [ebp+8], -1", "jne indexed", "mov dword ptr [ebp-4], 0",
    "jmp scan_test", "scan_next:", "mov eax, dword ptr [ebp-4]", "add eax, 1",
    "mov dword ptr [ebp-4], eax", "scan_test:", "mov ecx, dword ptr [ebp-8]",
    "mov edx, dword ptr [ebp-4]", "cmp edx, dword ptr [ecx+4]", "jge all_available",
    "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [eax+0ch]",
    "mov edx, dword ptr [ebp-4]", "cmp dword ptr [ecx+edx*4], 0", "jne scan_continue",
    "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [eax+10h]",
    "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+14h]",
    "mov edx, dword ptr [ebp-4]", "mov esi, dword ptr [ebp-4]",
    "mov ecx, dword ptr [ecx+edx*4]", "cmp ecx, dword ptr [eax+esi*4]",
    "jne scan_continue", "xor eax, eax", "jmp done", "scan_continue:",
    "jmp scan_next", "all_available:", "mov eax, 1", "jmp done", "indexed:",
    "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+0ch]",
    "mov ecx, dword ptr [ebp+8]", "cmp dword ptr [eax+ecx*4], 0", "je equal",
    "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+10h]",
    "mov ecx, dword ptr [ebp-8]", "mov edx, dword ptr [ecx+14h]",
    "mov ecx, dword ptr [ebp+8]", "mov esi, dword ptr [ebp+8]",
    "mov eax, dword ptr [eax+ecx*4]", "cmp eax, dword ptr [edx+esi*4]", "je equal",
    "mov dword ptr [ebp-0ch], 1", "jmp result", "equal:",
    "mov dword ptr [ebp-0ch], 0", "result:", "mov eax, dword ptr [ebp-0ch]", "done:",
    "pop esi", "mov esp, ebp", "pop ebp", "ret 4",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact recovered parallel-table availability lookup.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredParallelLookup{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
