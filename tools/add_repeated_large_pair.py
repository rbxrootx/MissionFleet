"""Stage the remaining large byte-identical cross-server routine pair."""

import json

from tools.add_call_stubs import append_records
from tools.add_repeated_50_99_family import BASE, COMPONENTS, CONFIG_DIR, REGION_DIR, ROOT, decode
from tools.find_repeated_functions import find_groups, load_inventory, load_matched


def discover_targets():
    regions = {c: (REGION_DIR / f"{c}.bin").read_bytes() for c in COMPONENTS}
    groups = find_groups(load_inventory(CONFIG_DIR / "functions.tsv"),
                         load_matched(CONFIG_DIR / "matches.json"), regions,
                         BASE, 100, 2000, 2)
    return tuple((row["component"], row["address"], int(row["size"]))
                 for _, members in groups for row in members)


TARGETS = discover_targets()


def main():
    path = CONFIG_DIR / "verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        declarations, lines, relocations = decode(component, address, size)
        source = f"src/{component}/matches/RecoveredRepeatedLarge{address.upper()}.cpp"
        text = "\n".join(declarations) + "\n// Exact recovered large bitfield transformation.\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join(lines) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
