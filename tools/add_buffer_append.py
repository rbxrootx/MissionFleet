"""Stage paired four-byte buffer append methods; verify before credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "00531b4b"),
                               ("save-server", "00525914")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 67]
        grow_address = operand_target(code, int(address, 16), {"offset": 28})
        class_name = f"RecoveredBuffer{address.upper()}"
        source = f"src/{component}/matches/RecoveredBufferAppend.cpp"
        (ROOT / source).write_text(f'''// Append one 32-bit value to a byte buffer, growing it when four bytes do not fit.
class {class_name} {{
    unsigned char reserved[36];
    unsigned long *cursor;
    unsigned char *end;
    void Grow();
public:
    {class_name} *Append(unsigned long value);
}};
{class_name} *{class_name}::Append(unsigned long value)
{{
    if (reinterpret_cast<unsigned char *>(cursor) + 4 > end)
        Grow();
    *cursor = value;
    cursor = reinterpret_cast<unsigned long *>(
        reinterpret_cast<unsigned char *>(cursor) + 4);
    return this;
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 67,
            "source": source, "symbol": f"?Append@{class_name}@@QAEPAV1@K@Z",
            "flags": ["/Od", "/GX-"],
            "relocations": [{"offset": 28,
                             "symbol": f"?Grow@{class_name}@@AAEXXZ"}],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
