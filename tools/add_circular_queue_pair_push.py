"""Stage the repeated two-word circular-queue insertion routine."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0048c1f0", 153),
    ("save-server", "0042e600", 153),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 0ch", "push esi",
    "mov dword ptr [ebp-0ch], 0cccccccch",
    "mov dword ptr [ebp-8], 0cccccccch", "mov dword ptr [ebp-4], 0cccccccch",
    "mov dword ptr [ebp-8], ecx", "mov eax, dword ptr [ebp-8]",
    "mov ecx, dword ptr [eax+0ch]", "mov dword ptr [ebp-4], ecx",
    "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+4]", "sub eax, 1",
    "mov ecx, dword ptr [ebp-8]", "cmp dword ptr [ecx+0ch], eax", "jne increment",
    "mov dword ptr [ebp-0ch], 0", "jmp update", "increment:",
    "mov edx, dword ptr [ebp-8]", "mov eax, dword ptr [edx+0ch]", "add eax, 1",
    "mov dword ptr [ebp-0ch], eax", "update:", "mov ecx, dword ptr [ebp-8]",
    "mov edx, dword ptr [ebp-0ch]", "mov dword ptr [ecx+0ch], edx",
    "mov eax, dword ptr [ebp-8]", "mov ecx, dword ptr [ebp-0ch]",
    "cmp ecx, dword ptr [eax+10h]", "je full", "mov edx, dword ptr [ebp+8]",
    "mov eax, dword ptr [edx]", "mov ecx, dword ptr [edx+4]",
    "mov edx, dword ptr [ebp-8]", "mov edx, dword ptr [edx+14h]",
    "mov esi, dword ptr [ebp-4]", "mov dword ptr [edx+esi*8], eax",
    "mov dword ptr [edx+esi*8+4], ecx", "mov eax, dword ptr [ebp-8]",
    "mov ecx, dword ptr [eax+8]", "add ecx, 1", "mov edx, dword ptr [ebp-8]",
    "mov dword ptr [edx+8], ecx", "mov eax, 1", "jmp done", "full:",
    "xor eax, eax", "done:", "pop esi", "mov esp, ebp", "pop ebp", "ret 4",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact recovered two-word circular-queue insertion.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredCircularPairPush{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
