"""Stage the repeated 32-entry permutation-state initializer."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0048c98e", 249),
    ("save-server", "0042edde", 249),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 10h", "push esi",
    "mov eax, 0cccccccch", "mov dword ptr [ebp-10h], eax",
    "mov dword ptr [ebp-0ch], eax", "mov dword ptr [ebp-8], eax",
    "mov dword ptr [ebp-4], eax", "mov dword ptr [ebp-10h], ecx",
    "mov dword ptr [ebp-8], 0", "jmp seed_test", "seed_next:",
    "mov eax, dword ptr [ebp-8]", "add eax, 1", "mov dword ptr [ebp-8], eax",
    "seed_test:", "cmp dword ptr [ebp-8], 20h", "jae seeded",
    "mov ecx, dword ptr [ebp+8]", "imul ecx, dword ptr [ebp-8]",
    "or edx, 0ffffffffh", "sub edx, ecx", "mov eax, dword ptr [ebp-8]",
    "mov ecx, dword ptr [ebp-10h]", "mov dword ptr [ecx+eax*4+14h], edx",
    "jmp seed_next", "seeded:", "mov edx, dword ptr [ebp-10h]",
    "mov eax, dword ptr [edx+4]", "mov dword ptr [ebp-0ch], eax",
    "mov ecx, dword ptr [ebp-10h]", "cmp dword ptr [ecx+8], 0", "jne count_ready",
    "mov edx, dword ptr [ebp-0ch]", "add edx, 400h", "mov dword ptr [ebp-0ch], edx",
    "count_ready:", "mov dword ptr [ebp-4], 0", "jmp mix_test", "mix_next:",
    "mov eax, dword ptr [ebp-4]", "add eax, 1", "mov dword ptr [ebp-4], eax",
    "mix_test:", "mov ecx, dword ptr [ebp-4]", "cmp ecx, dword ptr [ebp-0ch]",
    "jae done", "mov eax, dword ptr [ebp-4]", "xor edx, edx", "mov ecx, 20h", "div ecx",
    "mov eax, dword ptr [ebp-10h]", "mov ecx, dword ptr [eax+0ch]",
    "mov eax, dword ptr [ebp-4]", "mov esi, dword ptr [ebp-10h]",
    "mov edx, dword ptr [esi+edx*4+14h]", "mov dword ptr [ecx+eax*4], edx",
    "mov eax, dword ptr [ebp-4]", "xor edx, edx", "mov ecx, 20h", "div ecx",
    "mov ecx, edx", "mov edx, dword ptr [ebp-10h]", "mov eax, dword ptr [ebp-4]",
    "add eax, dword ptr [edx+94h]", "xor edx, edx", "mov esi, 20h", "div esi",
    "mov eax, dword ptr [ebp-10h]", "mov esi, dword ptr [ebp-10h]",
    "mov ecx, dword ptr [eax+ecx*4+14h]", "xor ecx, dword ptr [esi+edx*4+14h]",
    "mov eax, dword ptr [ebp-4]", "xor edx, edx", "mov esi, 20h", "div esi",
    "mov eax, dword ptr [ebp-10h]", "mov dword ptr [eax+edx*4+14h], ecx",
    "jmp mix_next", "done:", "mov ecx, dword ptr [ebp-10h]",
    "mov dword ptr [ecx+10h], 0", "pop esi", "mov esp, ebp", "pop ebp", "ret 4",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact recovered 32-entry permutation-state initializer.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredPermutationInit{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
