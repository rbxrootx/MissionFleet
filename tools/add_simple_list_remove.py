"""Stage intrusive-list removal routines; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    pairs = (("game-server", "00547f53", "00547EE0"),
             ("save-server", "00542ff3", "00542F80"))
    for component, address, owner_address in pairs:
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        start = int(address, 16) - int(document["image_base"], 16)
        code = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()[start:start + 244]
        file_address = operand_target(code, int(address, 16),
                                      {"offset": 21, "kind": "absolute"})
        assert_address = operand_target(code, int(address, 16), {"offset": 26})
        class_name = f"RecoveredListPush{owner_address}"
        next_symbol = f"?Next@{class_name}@@QAEAAPAXPAX@Z"
        source = f"src/{component}/matches/RecoveredListRemove.cpp"
        (ROOT / source).write_text(f'''// Remove one node from an intrusive singly linked list.
// The removed node's embedded link is cleared before returning success.
extern "C" char File{file_address:08X};
extern "C" int __stdcall Assert{assert_address:08X}(const char *, int);
class {class_name} {{
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
    int Remove(void *node);
}};
int {class_name}::Remove(void *node)
{{
    do {{
        if (node == 0 && Assert{assert_address:08X}(&File{file_address:08X}, 0x25))
            __asm int 3
    }} while (0);
    if (head == 0)
        return 0;
    int removed = 0;
    if (head == node) {{
        head = Next(node);
        Next(node) = 0;
        removed = 1;
    }} else {{
        void *previous = head;
        while (previous != 0 && Next(previous) != node)
            previous = Next(previous);
        if (previous != 0) {{
            Next(previous) = Next(node);
            Next(node) = 0;
            removed = 1;
        }}
    }}
    return removed;
}}
''', encoding="ascii")
        relocations = [
            {"offset": 21, "kind": "absolute", "symbol": f"_File{file_address:08X}"},
            {"offset": 26, "symbol": f"_Assert{assert_address:08X}@8"},
        ]
        relocations.extend({"offset": offset, "symbol": next_symbol}
                           for offset in (81, 100, 141, 160, 185, 199, 215))
        records.append({
            "component": component, "address": address, "size": 244,
            "source": source, "symbol": f"?Remove@{class_name}@@QAEHPAX@Z",
            "flags": ["/Od", "/GX-"], "relocations": relocations,
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
