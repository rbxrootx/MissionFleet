"""Stage the shared x87 floating-point conversion runtime primitive."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("login-server", "004214bc"),
    ("game-server", "004a94fc"),
    ("save-server", "0046dba0"),
)

BODY = (
    "push ebp", "mov ebp, esp", "add esp, -12", "fstcw word ptr [ebp-2]", "fwait",
    "mov ax, word ptr [ebp-2]", "or ah, 12", "mov word ptr [ebp-4], ax",
    "fldcw word ptr [ebp-4]", "fistp qword ptr [ebp-12]",
    "fldcw word ptr [ebp-2]", "mov eax, dword ptr [ebp-12]",
    "mov edx, dword ptr [ebp-8]", "leave", "ret",
)


def render(address):
    return (
        "// Exact x87-to-signed-64-bit conversion helper from the VC6 runtime.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        + "\n".join(f"    __asm {line}" for line in BODY)
        + "\n}\n"
    )


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredFloatConversion{address.upper()}.cpp"
        (ROOT / source).write_text(render(address), encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 39,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"], "relocations": [],
        })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
