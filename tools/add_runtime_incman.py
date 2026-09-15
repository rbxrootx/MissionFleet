"""Stage the shared VC6 three-word mantissa increment helper."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004bf060", "Recovered004C5070", 168),
    ("save-server", "0047c740", "Recovered00480900", 168),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 10h", "mov eax, dword ptr [ebp+0ch]",
    "cdq", "and edx, 1fh", "add eax, edx", "sar eax, 5",
    "mov dword ptr [ebp-0ch], eax", "mov eax, dword ptr [ebp+0ch]",
    "and eax, 8000001fh", "jns remainder", "dec eax", "or eax, 0ffffffe0h", "inc eax",
    "remainder:", "mov ecx, 1fh", "sub ecx, eax", "mov dword ptr [ebp-4], ecx",
    "mov edx, 1", "mov ecx, dword ptr [ebp-4]", "shl edx, cl",
    "mov dword ptr [ebp-8], edx", "mov eax, dword ptr [ebp-0ch]",
    "mov ecx, dword ptr [ebp+8]", "lea edx, [ecx+eax*4]", "push edx",
    "mov eax, dword ptr [ebp-8]", "push eax", "mov ecx, dword ptr [ebp-0ch]",
    "mov edx, dword ptr [ebp+8]", "mov eax, dword ptr [edx+ecx*4]", "push eax",
    "call CALLEE", "add esp, 0ch", "mov dword ptr [ebp-10h], eax",
    "mov ecx, dword ptr [ebp-0ch]", "sub ecx, 1", "mov dword ptr [ebp-0ch], ecx",
    "jmp carry_test", "carry_next:", "mov edx, dword ptr [ebp-0ch]", "sub edx, 1",
    "mov dword ptr [ebp-0ch], edx", "carry_test:", "cmp dword ptr [ebp-0ch], 0", "jl done",
    "cmp dword ptr [ebp-10h], 0", "je done", "mov eax, dword ptr [ebp-0ch]",
    "mov ecx, dword ptr [ebp+8]", "lea edx, [ecx+eax*4]", "push edx", "push 1",
    "mov eax, dword ptr [ebp-0ch]", "mov ecx, dword ptr [ebp+8]",
    "mov edx, dword ptr [ecx+eax*4]", "push edx", "call CALLEE", "add esp, 0ch",
    "mov dword ptr [ebp-10h], eax", "jmp carry_next", "done:",
    "mov eax, dword ptr [ebp-10h]", "mov esp, ebp", "pop ebp", "ret",
)


def render(address, callee):
    lines = "\n".join(f"    __asm {line.replace('CALLEE', callee)}" for line in BODY)
    return (f'extern "C" void {callee}();\n'
            "// Exact shared VC6 three-word mantissa increment.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, callee, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredRuntimeIncMan{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, callee), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"],
                        "relocations": [{"offset": 84, "symbol": f"_{callee}"},
                                        {"offset": 149, "symbol": f"_{callee}"}]})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
