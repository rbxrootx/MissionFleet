"""Stage paired thread-list head wrappers; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "00548ed0"),
                               ("save-server", "00543f70")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 19]
        target = operand_target(code, int(address, 16), {"offset": 12})
        class_name = f"RecoveredThreadList{address.upper()}"
        source = f"src/{component}/matches/RecoveredThreadListHead.cpp"
        (ROOT / source).write_text(f'''// Forward the embedded thread-list head lookup and preserve its returned pointer.
class {class_name} {{
public:
    void *BaseHead();
    void *Head();
}};
void *{class_name}::Head()
{{
    return BaseHead();
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 19,
            "source": source, "symbol": f"?Head@{class_name}@@QAEPAXXZ",
            "flags": ["/Od", "/GX-"],
            "relocations": [{"offset": 12,
                             "symbol": f"?BaseHead@{class_name}@@QAEPAXXZ"}],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
