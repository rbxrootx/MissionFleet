"""Stage fixed-value object initializers; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
SPECS = (
    ("game-server", "004d1dda"), ("game-server", "004f11de"),
    ("game-server", "004f123c"), ("game-server", "004f129a"),
    ("game-server", "004f12f8"), ("save-server", "004a2f2a"),
    ("save-server", "004cf10e"), ("save-server", "004cf16c"),
    ("save-server", "004cf1ca"), ("save-server", "004cf228"),
)


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    records = []
    for component, address in SPECS:
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 17]
        fixed = int.from_bytes(code[4:5], "little", signed=True)
        obj = operand_target(code, int(address, 16), {"offset": 6, "kind": "absolute"})
        target = operand_target(code, int(address, 16), {"offset": 11})
        source = f"src/{component}/matches/RecoveredFixedInitializer{address.upper()}.cpp"
        (ROOT / source).write_text(f'''// Initialize one static object with its fixed signed mode value.
extern "C" char Object{obj:08X};
extern "C" void Target{target:08X}();
extern "C" __declspec(naked) void Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm push {fixed}
    __asm mov ecx, offset Object{obj:08X}
    __asm call Target{target:08X}
    __asm pop ebp
    __asm ret
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 17,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"],
            "relocations": [
                {"offset": 6, "kind": "absolute", "symbol": f"_Object{obj:08X}"},
                {"offset": 11, "symbol": f"_Target{target:08X}"},
            ],
        })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
