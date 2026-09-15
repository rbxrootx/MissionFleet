"""Stage paired four-byte buffer read methods; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "00531e86"),
                               ("save-server", "00525c4f")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 89]
        require_address = operand_target(code, int(address, 16), {"offset": 48})
        class_name = f"RecoveredReadBuffer{address.upper()}"
        source = f"src/{component}/matches/RecoveredBufferRead.cpp"
        (ROOT / source).write_text(f'''// Read one 32-bit value, requesting exactly the number of missing bytes first.
class {class_name} {{
    unsigned char reserved[36];
    unsigned char *cursor;
    unsigned char *end;
    void Require(unsigned long missing);
public:
    {class_name} *Read(unsigned long *value);
}};
{class_name} *{class_name}::Read(unsigned long *value)
{{
    if (cursor + 4 > end)
        Require(4 - (end - cursor));
    *value = *reinterpret_cast<unsigned long *>(cursor);
    cursor += 4;
    return this;
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 89,
            "source": source, "symbol": f"?Read@{class_name}@@QAEPAV1@PAK@Z",
            "flags": ["/Od", "/GX-"],
            "relocations": [{"offset": 48,
                             "symbol": f"?Require@{class_name}@@AAEXK@Z"}],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
