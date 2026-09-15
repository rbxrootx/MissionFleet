"""Stage the shared VC6 integer-to-text helper."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004b13c0", 194),
    ("save-server", "0046d900", 194),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 10h", "mov eax, dword ptr [ebp+0ch]",
    "mov dword ptr [ebp-4], eax", "cmp dword ptr [ebp+14h], 0", "je magnitude",
    "mov ecx, dword ptr [ebp-4]", "mov byte ptr [ecx], 2dh", "mov edx, dword ptr [ebp-4]",
    "add edx, 1", "mov dword ptr [ebp-4], edx", "mov eax, dword ptr [ebp+8]",
    "neg eax", "mov dword ptr [ebp+8], eax", "magnitude:",
    "mov ecx, dword ptr [ebp-4]", "mov dword ptr [ebp-8], ecx", "digit:",
    "mov eax, dword ptr [ebp+8]", "xor edx, edx", "div dword ptr [ebp+10h]",
    "mov dword ptr [ebp-0ch], edx", "mov eax, dword ptr [ebp+8]", "xor edx, edx",
    "div dword ptr [ebp+10h]", "mov dword ptr [ebp+8], eax",
    "cmp dword ptr [ebp-0ch], 9", "jbe decimal", "mov edx, dword ptr [ebp-0ch]",
    "add edx, 57h", "mov eax, dword ptr [ebp-4]", "mov byte ptr [eax], dl",
    "mov ecx, dword ptr [ebp-4]", "add ecx, 1", "mov dword ptr [ebp-4], ecx", "jmp continue",
    "decimal:", "mov edx, dword ptr [ebp-0ch]", "add edx, 30h",
    "mov eax, dword ptr [ebp-4]", "mov byte ptr [eax], dl", "mov ecx, dword ptr [ebp-4]",
    "add ecx, 1", "mov dword ptr [ebp-4], ecx", "continue:",
    "cmp dword ptr [ebp+8], 0", "ja digit", "mov edx, dword ptr [ebp-4]",
    "mov byte ptr [edx], 0", "mov eax, dword ptr [ebp-4]", "sub eax, 1",
    "mov dword ptr [ebp-4], eax", "reverse:", "mov ecx, dword ptr [ebp-4]",
    "mov dl, byte ptr [ecx]", "mov byte ptr [ebp-10h], dl", "mov eax, dword ptr [ebp-4]",
    "mov ecx, dword ptr [ebp-8]", "mov dl, byte ptr [ecx]", "mov byte ptr [eax], dl",
    "mov eax, dword ptr [ebp-8]", "mov cl, byte ptr [ebp-10h]", "mov byte ptr [eax], cl",
    "mov edx, dword ptr [ebp-4]", "sub edx, 1", "mov dword ptr [ebp-4], edx",
    "mov eax, dword ptr [ebp-8]", "add eax, 1", "mov dword ptr [ebp-8], eax",
    "mov ecx, dword ptr [ebp-8]", "cmp ecx, dword ptr [ebp-4]", "jb reverse",
    "mov esp, ebp", "pop ebp", "ret",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact shared VC6 integer-to-text helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredCRTXtoa{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
