"""Stage the repeated encoded-record cursor helper."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0048da12", 173),
    ("save-server", "0044a002", 173),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 8", "cmp dword ptr [ebp+0ch], 0",
    "je short_header", "mov eax, dword ptr [ebp+8]", "add eax, 18h",
    "mov dword ptr [ebp-8], eax", "jmp first", "short_header:",
    "mov ecx, dword ptr [ebp+8]", "add ecx, 12h", "mov dword ptr [ebp-8], ecx", "first:",
    "mov edx, dword ptr [ebp-8]", "xor eax, eax", "mov ax, word ptr [edx]",
    "cmp eax, 0ffffh", "jne first_scan", "mov ecx, dword ptr [ebp-8]",
    "add ecx, 4", "mov dword ptr [ebp-8], ecx", "jmp second", "first_scan:",
    "mov edx, dword ptr [ebp-8]", "xor eax, eax", "mov ax, word ptr [edx]",
    "mov ecx, dword ptr [ebp-8]", "add ecx, 2", "mov dword ptr [ebp-8], ecx",
    "test eax, eax", "je second", "jmp first_scan", "second:",
    "mov edx, dword ptr [ebp-8]", "xor eax, eax", "mov ax, word ptr [edx]",
    "cmp eax, 0ffffh", "jne second_scan", "mov ecx, dword ptr [ebp-8]",
    "add ecx, 4", "mov dword ptr [ebp-8], ecx", "jmp payload", "second_scan:",
    "mov edx, dword ptr [ebp-8]", "xor eax, eax", "mov ax, word ptr [edx]",
    "mov ecx, dword ptr [ebp-8]", "add ecx, 2", "mov dword ptr [ebp-8], ecx",
    "test eax, eax", "je payload", "jmp second_scan", "payload:",
    "mov edx, dword ptr [ebp-8]", "mov ax, word ptr [edx]", "mov word ptr [ebp-4], ax",
    "mov ecx, dword ptr [ebp-8]", "add ecx, 2", "mov dword ptr [ebp-8], ecx",
    "mov edx, dword ptr [ebp-4]", "and edx, 0ffffh", "mov eax, dword ptr [ebp-8]",
    "lea eax, [eax+edx+3]", "and al, 0fch", "mov esp, ebp", "pop ebp", "ret 8",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact recovered encoded-record cursor helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredEncodedCursor{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
