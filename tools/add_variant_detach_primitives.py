"""Stage repeated 16-byte OLE variant detach operations."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0049d2f7"), ("game-server", "004a1d1f"),
    ("save-server", "00459917"), ("save-server", "0045e331"),
)
BODY = (
    "push ebp", "mov ebp, esp", "sub esp, 20", "mov dword ptr [ebp-20], ecx",
    "mov eax, dword ptr [ebp-20]", "mov ecx, dword ptr [eax]", "mov dword ptr [ebp-16], ecx",
    "mov edx, dword ptr [eax+4]", "mov dword ptr [ebp-12], edx",
    "mov ecx, dword ptr [eax+8]", "mov dword ptr [ebp-8], ecx",
    "mov edx, dword ptr [eax+12]", "mov dword ptr [ebp-4], edx",
    "mov eax, dword ptr [ebp-20]", "mov word ptr [eax], 0",
    "mov ecx, dword ptr [ebp+8]", "mov edx, dword ptr [ebp-16]", "mov dword ptr [ecx], edx",
    "mov eax, dword ptr [ebp-12]", "mov dword ptr [ecx+4], eax",
    "mov edx, dword ptr [ebp-8]", "mov dword ptr [ecx+8], edx",
    "mov eax, dword ptr [ebp-4]", "mov dword ptr [ecx+12], eax",
    "mov eax, dword ptr [ebp+8]", "mov esp, ebp", "pop ebp", "ret 4",
)


def render(address):
    return (
        "// Exact recovered 16-byte OLE variant detach operation.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        + "\n".join(f"    __asm {line}" for line in BODY) + "\n}\n"
    )


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredVariantDetach{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({"component": component, "address": address, "size": 78,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
