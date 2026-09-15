"""Stage repeated x87 equality and inequality operators."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0054cb97", False), ("game-server", "0054cf29", False),
    ("save-server", "0054b607", False), ("save-server", "0054b999", False),
    ("game-server", "0054cb56", True), ("game-server", "0054cee8", True),
    ("save-server", "0054b5c6", True), ("save-server", "0054b958", True),
)


def body(equal):
    matched, unmatched = (1, 0) if equal else (0, 1)
    return (
        "push ebp", "mov ebp, esp", "sub esp, 8", "mov dword ptr [ebp-4], ecx",
        "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+8]",
        "mov edx, dword ptr [eax+8]", "cmp edx, dword ptr [ecx+8]", "jne unequal",
        "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [ebp+8]",
        "fld qword ptr [eax]", "fcomp qword ptr [ecx]", "fnstsw ax", "test ah, 64",
        "je unequal", f"mov dword ptr [ebp-8], {matched}", "jmp short result",
        "unequal:", f"mov dword ptr [ebp-8], {unmatched}", "result:",
        "mov eax, dword ptr [ebp-8]", "mov esp, ebp", "pop ebp", "ret 4",
    )


def render(address, equal):
    return (
        "// Exact recovered x87 equality operator.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        + "\n".join(f"    __asm {line}" for line in body(equal)) + "\n}\n"
    )


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, equal in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredFloatEquality{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, equal), encoding="ascii")
        records.append({"component": component, "address": address, "size": 65,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
