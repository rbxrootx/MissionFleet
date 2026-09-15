"""Stage small paired accessors and value converters."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "004f64d9", "constant", 18), ("save-server", "004d4409", "constant", 18),
    ("game-server", "0052ce15", "offset", 19), ("save-server", "00514534", "offset", 19),
    ("game-server", "004f7213", "flag16", 20), ("save-server", "004d5143", "flag16", 20),
    ("game-server", "0055d784", "flag2", 20), ("save-server", "00560804", "flag2", 20),
    ("game-server", "00533afc", "nested", 20), ("save-server", "005278c5", "nested", 20),
    ("game-server", "005343a2", "field128", 20), ("save-server", "0052813e", "field128", 20),
    ("game-server", "004fcd30", "convert", 20), ("save-server", "004dbaf0", "convert", 20),
)

BODIES = {
    "constant": ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                 "mov eax, 65535", "mov esp, ebp", "pop ebp", "ret 8"),
    "offset": ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
               "mov eax, dword ptr [ebp-4]", "add eax, 76", "mov esp, ebp", "pop ebp", "ret 8"),
    "flag16": ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
               "mov eax, dword ptr [ebp-4]", "mov eax, dword ptr [eax+36]", "and eax, 16",
               "mov esp, ebp", "pop ebp", "ret"),
    "flag2": ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
              "mov eax, dword ptr [ebp-4]", "mov eax, dword ptr [eax+100]", "and eax, 2",
              "mov esp, ebp", "pop ebp", "ret"),
    "nested": ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
               "mov eax, dword ptr [ebp-4]", "mov ecx, dword ptr [eax+104]",
               "mov eax, dword ptr [ecx+16]", "mov esp, ebp", "pop ebp", "ret"),
    "field128": ("push ebp", "mov ebp, esp", "push ecx", "mov dword ptr [ebp-4], ecx",
                 "mov eax, dword ptr [ebp-4]", "mov eax, dword ptr [eax+128]",
                 "mov esp, ebp", "pop ebp", "ret"),
    "convert": ("push ebp", "mov ebp, esp", "mov eax, dword ptr [ebp+8]", "neg eax",
                "sbb eax, eax", "and eax, 2", "add eax, 1", "shl eax, 1", "pop ebp", "ret"),
}


def render(address, kind):
    return (
        "// Exact recovered leaf accessor/value conversion.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        + "\n".join(f"    __asm {line}" for line in BODIES[kind]) + "\n}\n"
    )


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, address, kind, size in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredLeafAccessor{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, kind), encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": []})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
