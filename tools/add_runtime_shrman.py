"""Stage the shared VC6 three-word mantissa right-shift helper."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004bf2b0", 236),
    ("save-server", "0047c990", 236),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 18h", "push esi",
    "mov eax, dword ptr [ebp+0ch]", "cdq", "and edx, 1fh", "add eax, edx",
    "sar eax, 5", "mov dword ptr [ebp-18h], eax", "mov eax, dword ptr [ebp+0ch]",
    "and eax, 8000001fh", "jns remainder", "dec eax", "or eax, 0ffffffe0h", "inc eax",
    "remainder:", "mov dword ptr [ebp-4], eax", "or edx, 0ffffffffh",
    "mov ecx, dword ptr [ebp-4]", "shl edx, cl", "not edx",
    "mov dword ptr [ebp-14h], edx", "mov dword ptr [ebp-8], 0",
    "mov dword ptr [ebp-0ch], 0", "jmp shift_test", "shift_next:",
    "mov eax, dword ptr [ebp-0ch]", "add eax, 1", "mov dword ptr [ebp-0ch], eax",
    "shift_test:", "cmp dword ptr [ebp-0ch], 3", "jge relocate_start",
    "mov ecx, dword ptr [ebp-0ch]", "mov edx, dword ptr [ebp+8]",
    "mov eax, dword ptr [edx+ecx*4]", "and eax, dword ptr [ebp-14h]",
    "mov dword ptr [ebp-10h], eax", "mov ecx, dword ptr [ebp-0ch]",
    "mov edx, dword ptr [ebp+8]", "mov eax, dword ptr [edx+ecx*4]",
    "mov ecx, dword ptr [ebp-4]", "shr eax, cl", "mov ecx, dword ptr [ebp-0ch]",
    "mov edx, dword ptr [ebp+8]", "mov dword ptr [edx+ecx*4], eax",
    "mov eax, dword ptr [ebp-0ch]", "mov ecx, dword ptr [ebp+8]",
    "mov edx, dword ptr [ecx+eax*4]", "or edx, dword ptr [ebp-8]",
    "mov eax, dword ptr [ebp-0ch]", "mov ecx, dword ptr [ebp+8]",
    "mov dword ptr [ecx+eax*4], edx", "mov ecx, 20h", "sub ecx, dword ptr [ebp-4]",
    "mov edx, dword ptr [ebp-10h]", "shl edx, cl", "mov dword ptr [ebp-8], edx",
    "jmp shift_next", "relocate_start:", "mov dword ptr [ebp-0ch], 2",
    "jmp relocate_test", "relocate_next:", "mov eax, dword ptr [ebp-0ch]",
    "sub eax, 1", "mov dword ptr [ebp-0ch], eax", "relocate_test:",
    "cmp dword ptr [ebp-0ch], 0", "jl done", "mov ecx, dword ptr [ebp-0ch]",
    "cmp ecx, dword ptr [ebp-18h]", "jl clear_word", "mov edx, dword ptr [ebp-0ch]",
    "sub edx, dword ptr [ebp-18h]", "mov eax, dword ptr [ebp-0ch]",
    "mov ecx, dword ptr [ebp+8]", "mov esi, dword ptr [ebp+8]",
    "mov edx, dword ptr [esi+edx*4]", "mov dword ptr [ecx+eax*4], edx", "jmp relocated",
    "clear_word:", "mov eax, dword ptr [ebp-0ch]", "mov ecx, dword ptr [ebp+8]",
    "mov dword ptr [ecx+eax*4], 0", "relocated:", "jmp relocate_next", "done:",
    "pop esi", "mov esp, ebp", "pop ebp", "ret",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact shared VC6 three-word mantissa right shift.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredRuntimeShrMan{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
