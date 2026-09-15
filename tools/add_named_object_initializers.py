"""Stage static named-object initializers; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
SPECS = {
    "game-server": ("0054226a", "00542aaa", "00545a38", "00545af8", "00545bb8",
                    "00545c98", "00545d58", "00545e4a", "0054bbb8", "0054bcba"),
    "save-server": ("0053d45a", "00540ae8", "00540ba8", "00540c68", "00540d48",
                    "00540e08", "00540efa", "00540fca", "00546ed8", "00546fda"),
}


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    existing = {(m["component"], m["address"]) for m in document["matches"]}
    records = []
    for component, addresses in SPECS.items():
        image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
        for address in addresses:
            if (component, address) in existing:
                continue
            start = int(address, 16) - int(document["image_base"], 16)
            code = image[start:start + 20]
            argument = operand_target(code, int(address, 16), {"offset": 4, "kind": "absolute"})
            obj = operand_target(code, int(address, 16), {"offset": 9, "kind": "absolute"})
            target = operand_target(code, int(address, 16), {"offset": 14})
            source = f"src/{component}/matches/RecoveredNamedInitializer{address.upper()}.cpp"
            (ROOT / source).write_text(f'''// Construct one static object with its original descriptor pointer.
extern "C" char Argument{argument:08X};
extern "C" char Object{obj:08X};
extern "C" void Target{target:08X}();
extern "C" __declspec(naked) void Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument{argument:08X}
    __asm mov ecx, offset Object{obj:08X}
    __asm call Target{target:08X}
    __asm pop ebp
    __asm ret
}}
''', encoding="ascii")
            records.append({
                "component": component, "address": address, "size": 20,
                "source": source, "symbol": f"_Recovered{address.upper()}",
                "flags": ["/Od", "/GX-"],
                "relocations": [
                    {"offset": 4, "kind": "absolute", "symbol": f"_Argument{argument:08X}"},
                    {"offset": 9, "kind": "absolute", "symbol": f"_Object{obj:08X}"},
                    {"offset": 14, "symbol": f"_Target{target:08X}"},
                ],
            })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
