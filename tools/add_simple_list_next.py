"""Stage intrusive-list link accessors; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    pairs = (("game-server", "0048f0d0", "00547EE0"),
             ("save-server", "0044b700", "00542F80"))
    for component, address, owner_address in pairs:
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 57]
        file_address = operand_target(code, int(address, 16),
                                      {"offset": 19, "kind": "absolute"})
        assert_address = operand_target(code, int(address, 16), {"offset": 24})
        class_name = f"RecoveredListPush{owner_address}"
        source = f"src/{component}/matches/RecoveredListNext.cpp"
        (ROOT / source).write_text(f'''// Return the intrusive link field embedded at the list's configured offset.
// Keep the original debug assertion for a null node.
extern "C" char File{file_address:08X};
extern "C" int __stdcall Assert{assert_address:08X}(const char *, int);
class {class_name} {{
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
}};
void *&{class_name}::Next(void *node)
{{
    do {{
        if (node == 0 && Assert{assert_address:08X}(&File{file_address:08X}, 0x40))
            __asm int 3
    }} while (0);
    return *reinterpret_cast<void **>(static_cast<char *>(node) + linkOffset);
}}
''', encoding="ascii")
        records.append({
            "component": component,
            "address": address,
            "size": 57,
            "source": source,
            "symbol": f"?Next@{class_name}@@QAEAAPAXPAX@Z",
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
