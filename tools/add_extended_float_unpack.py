"""Stage the shared extended-float unpack and rounding helper."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004bf630", "Recovered004BF110", 191),
    ("save-server", "0047cd10", "Recovered0047C7F0", 191),
)

BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 18h", "mov dword ptr [ebp-14h], 0",
    "mov eax, dword ptr [ebp+8]", "xor ecx, ecx", "mov cx, word ptr [eax+0ah]",
    "and ecx, 7fffh", "mov word ptr [ebp-4], cx", "mov edx, dword ptr [ebp+8]",
    "xor eax, eax", "mov ax, word ptr [edx+0ah]", "and eax, 8000h",
    "mov word ptr [ebp-18h], ax", "mov ecx, dword ptr [ebp+8]",
    "mov edx, dword ptr [ecx+6]", "mov dword ptr [ebp-10h], edx",
    "mov eax, dword ptr [ebp+8]", "mov ecx, dword ptr [eax+2]",
    "mov dword ptr [ebp-0ch], ecx", "mov edx, dword ptr [ebp+8]",
    "xor eax, eax", "mov ax, word ptr [edx]", "shl eax, 10h",
    "mov dword ptr [ebp-8], eax", "push 40h", "lea ecx, [ebp-10h]", "push ecx",
    "call ROUND", "add esp, 8", "test eax, eax", "je exponent_check",
    "mov dword ptr [ebp-10h], 80000000h", "mov dx, word ptr [ebp-4]",
    "add dx, 1", "mov word ptr [ebp-4], dx", "exponent_check:",
    "mov eax, dword ptr [ebp-4]", "and eax, 0ffffh", "cmp eax, 7fffh",
    "jne store", "mov dword ptr [ebp-14h], 1", "store:",
    "mov ecx, dword ptr [ebp+0ch]", "mov edx, dword ptr [ebp-10h]",
    "mov dword ptr [ecx+4], edx", "mov eax, dword ptr [ebp+0ch]",
    "mov ecx, dword ptr [ebp-0ch]", "mov dword ptr [eax], ecx",
    "mov edx, dword ptr [ebp-18h]", "and edx, 0ffffh",
    "mov eax, dword ptr [ebp-4]", "and eax, 0ffffh", "or edx, eax",
    "mov ecx, dword ptr [ebp+0ch]", "mov word ptr [ecx+8], dx",
    "mov eax, dword ptr [ebp-14h]", "mov esp, ebp", "pop ebp", "ret",
)


def render(address, rounding):
    lines = "\n".join(f"    __asm {line.replace('ROUND', rounding)}" for line in BODY)
    return (f'extern "C" void {rounding}();\n'
            "// Exact recovered extended-float unpack/rounding helper.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, rounding, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredExtendedFloat{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, rounding), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"],
                        "relocations": [{"offset": 89, "symbol": f"_{rounding}"}]})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
