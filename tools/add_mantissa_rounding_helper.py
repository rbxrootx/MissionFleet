"""Stage the shared mantissa rounding/truncation helper and its real calls."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004bf110", "Recovered004BEFD0", "Recovered004BF060", 219),
    ("save-server", "0047c7f0", "Recovered0047C6B0", "Recovered0047C740", 219),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 1ch", "mov dword ptr [ebp-18h], 0",
    "mov eax, dword ptr [ebp+0ch]", "sub eax, 1", "mov dword ptr [ebp-4], eax",
    "mov ecx, dword ptr [ebp-4]", "add ecx, 1", "mov dword ptr [ebp-0ch], ecx",
    "mov eax, dword ptr [ebp-0ch]", "cdq", "and edx, 1fh", "add eax, edx",
    "sar eax, 5", "mov dword ptr [ebp-14h], eax", "mov edx, dword ptr [ebp-0ch]",
    "and edx, 8000001fh", "jns remainder", "dec edx", "or edx, 0ffffffe0h", "inc edx",
    "remainder:", "mov eax, 1fh", "sub eax, edx", "mov dword ptr [ebp-8], eax",
    "mov edx, 1", "mov ecx, dword ptr [ebp-8]", "shl edx, cl",
    "mov dword ptr [ebp-1ch], edx", "mov eax, dword ptr [ebp-14h]",
    "mov ecx, dword ptr [ebp+8]", "mov edx, dword ptr [ecx+eax*4]",
    "and edx, dword ptr [ebp-1ch]", "test edx, edx", "je mask_tail",
    "mov eax, dword ptr [ebp-0ch]", "add eax, 1", "push eax",
    "mov ecx, dword ptr [ebp+8]", "push ecx", "call TAIL", "add esp, 8",
    "test eax, eax", "jne mask_tail", "mov edx, dword ptr [ebp-4]", "push edx",
    "mov eax, dword ptr [ebp+8]", "push eax", "call INCREMENT", "add esp, 8",
    "mov dword ptr [ebp-18h], eax", "mask_tail:", "or edx, 0ffffffffh",
    "mov ecx, dword ptr [ebp-8]", "shl edx, cl", "mov eax, dword ptr [ebp-14h]",
    "mov ecx, dword ptr [ebp+8]", "mov eax, dword ptr [ecx+eax*4]", "and eax, edx",
    "mov ecx, dword ptr [ebp-14h]", "mov edx, dword ptr [ebp+8]",
    "mov dword ptr [edx+ecx*4], eax", "mov eax, dword ptr [ebp-14h]", "add eax, 1",
    "mov dword ptr [ebp-10h], eax", "jmp clear_test", "clear_next:",
    "mov ecx, dword ptr [ebp-10h]", "add ecx, 1", "mov dword ptr [ebp-10h], ecx",
    "clear_test:", "cmp dword ptr [ebp-10h], 3", "jge done",
    "mov edx, dword ptr [ebp-10h]", "mov eax, dword ptr [ebp+8]",
    "mov dword ptr [eax+edx*4], 0", "jmp clear_next", "done:",
    "mov eax, dword ptr [ebp-18h]", "mov esp, ebp", "pop ebp", "ret",
)


def render(address, tail, increment):
    lines = "\n".join(f"    __asm {line.replace('TAIL', tail).replace('INCREMENT', increment)}" for line in BODY)
    return (f'extern "C" void {tail}();\nextern "C" void {increment}();\n'
            "// Exact recovered mantissa rounding/truncation helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, tail, increment, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredMantissaRound{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, tail, increment), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"],
                        "relocations": [{"offset": 113, "symbol": f"_{tail}"},
                                        {"offset": 133, "symbol": f"_{increment}"}]})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
