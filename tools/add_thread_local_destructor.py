"""Stage paired thread-local object destructors; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "00548b0e"),
                               ("save-server", "00543bae")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 54]
        slots_address = operand_target(code, int(address, 16),
                                       {"offset": 17, "kind": "absolute"})
        release_address = operand_target(code, int(address, 16), {"offset": 37})
        source = f"src/{component}/matches/RecoveredThreadLocalDestructor.cpp"
        (ROOT / source).write_text(f'''// Release this object's allocated slot while the process-wide manager exists.
// Clear the slot even when manager teardown has already occurred.
class RecoveredThreadSlots{address.upper()} {{
public:
    void Release(int slot);
}};
extern "C" RecoveredThreadSlots{address.upper()} *Slots{slots_address:08X};
class CThreadLocalObject {{
    int slot;
public:
    ~CThreadLocalObject();
}};
CThreadLocalObject::~CThreadLocalObject()
{{
    if (slot != 0 && Slots{slots_address:08X} != 0)
        Slots{slots_address:08X}->Release(slot);
    slot = 0;
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 54,
            "source": source, "symbol": "??1CThreadLocalObject@@QAE@XZ",
            "flags": ["/Od", "/GX-"],
            "relocations": [
                {"offset": 17, "kind": "absolute", "symbol": f"_Slots{slots_address:08X}"},
                {"offset": 32, "kind": "absolute", "symbol": f"_Slots{slots_address:08X}"},
                {"offset": 37, "symbol": f"?Release@RecoveredThreadSlots{address.upper()}@@QAEXH@Z"},
            ],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
