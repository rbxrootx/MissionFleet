"""Stage the shared VC6 decimal digit storage helper."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004afc50", 172),
    ("save-server", "0046c780", 172),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 0ch", "mov eax, dword ptr [ebp+0ch]",
    "mov ecx, dword ptr [eax]", "mov dword ptr [ebp-4], ecx",
    "mov edx, dword ptr [ebp+10h]", "cmp dword ptr [edx], 1", "jbe first_done",
    "first_digits:", "mov eax, dword ptr [ebp+8]", "cdq", "mov ecx, 0ah", "idiv ecx", "add edx, 30h",
    "mov eax, dword ptr [ebp-4]", "mov byte ptr [eax], dl", "mov ecx, dword ptr [ebp-4]",
    "add ecx, 1", "mov dword ptr [ebp-4], ecx", "mov edx, dword ptr [ebp+10h]",
    "mov eax, dword ptr [edx]", "sub eax, 1", "mov ecx, dword ptr [ebp+10h]",
    "mov dword ptr [ecx], eax", "mov eax, dword ptr [ebp+8]", "cdq", "mov ecx, 0ah",
    "idiv ecx", "mov dword ptr [ebp+8], eax", "cmp dword ptr [ebp+8], 0", "jle positive_done",
    "mov edx, dword ptr [ebp+10h]", "cmp dword ptr [edx], 1", "ja first_digits",
    "positive_done:", "first_done:", "mov eax, dword ptr [ebp+0ch]",
    "mov ecx, dword ptr [eax]", "mov dword ptr [ebp-8], ecx", "mov edx, dword ptr [ebp+0ch]",
    "mov eax, dword ptr [ebp-4]", "mov dword ptr [edx], eax", "mov ecx, dword ptr [ebp-4]",
    "sub ecx, 1", "mov dword ptr [ebp-4], ecx", "reverse:",
    "mov edx, dword ptr [ebp-4]", "mov al, byte ptr [edx]", "mov byte ptr [ebp-0ch], al",
    "mov ecx, dword ptr [ebp-4]", "mov edx, dword ptr [ebp-8]", "mov al, byte ptr [edx]",
    "mov byte ptr [ecx], al", "mov ecx, dword ptr [ebp-4]", "sub ecx, 1",
    "mov dword ptr [ebp-4], ecx", "mov edx, dword ptr [ebp-8]",
    "mov al, byte ptr [ebp-0ch]", "mov byte ptr [edx], al", "mov ecx, dword ptr [ebp-8]",
    "add ecx, 1", "mov dword ptr [ebp-8], ecx", "mov edx, dword ptr [ebp-8]",
    "cmp edx, dword ptr [ebp-4]", "jb reverse", "mov esp, ebp", "pop ebp", "ret",
)


def render(address):
    lines = "\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact shared VC6 decimal digit storage helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredCRTStoreNumber{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
