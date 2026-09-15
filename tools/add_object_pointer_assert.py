"""Stage paired object-pointer assertion helpers; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "004fb26a"),
                               ("save-server", "004da36a")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 46]
        file_address = operand_target(code, int(address, 16),
                                      {"offset": 19, "kind": "absolute"})
        assert_address = operand_target(code, int(address, 16), {"offset": 24})
        source = f"src/{component}/matches/RecoveredObjectPointerAssert.cpp"
        (ROOT / source).write_text(f'''// Validate an object pointer before the MFC object-core path uses it.
// The pointer arrives in ECX; preserve the original debug assertion loop.
extern "C" char File{file_address:08X};
extern "C" int __stdcall Assert{assert_address:08X}(const char *, int);
extern "C" void __fastcall Recovered{address.upper()}(void *object)
{{
    do {{
        if (object == 0 && Assert{assert_address:08X}(&File{file_address:08X}, 0x70))
            __asm int 3
    }} while (0);
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 46,
            "source": source, "symbol": f"@Recovered{address.upper()}@4",
            "flags": ["/Od", "/GX-"],
            "relocations": [
                {"offset": 19, "kind": "absolute", "symbol": f"_File{file_address:08X}"},
                {"offset": 24, "symbol": f"_Assert{assert_address:08X}@8"},
            ],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
