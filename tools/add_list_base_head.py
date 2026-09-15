"""Stage paired base list-head accessors; verify before progress credit."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(config.read_text())
    records = []
    for component, address in (("game-server", "0048d880"),
                               ("save-server", "00449e70")):
        if any(m["component"] == component and m["address"] == address
               for m in document["matches"]):
            continue
        class_name = f"RecoveredBaseList{address.upper()}"
        source = f"src/{component}/matches/RecoveredListBaseHead.cpp"
        (ROOT / source).write_text(f'''// Return the first node stored in this intrusive list.
class {class_name} {{
    void *head;
public:
    void *Head();
}};
void *{class_name}::Head()
{{
    return head;
}}
''', encoding="ascii")
        records.append({
            "component": component, "address": address, "size": 16,
            "source": source, "symbol": f"?Head@{class_name}@@QAEPAXXZ",
            "flags": ["/Od", "/GX-"], "relocations": [],
        })
    if records:
        append_records(config, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
