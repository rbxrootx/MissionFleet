"""Stage the largest relocation-normalized unmatched function group."""

import json

from tools.add_call_stubs import append_records
from tools.add_repeated_50_99_family import BASE, COMPONENTS, CONFIG_DIR, REGION_DIR, ROOT, decode
from tools.find_relocation_normalized_functions import find_normalized
from tools.find_repeated_functions import load_inventory, load_matched


def discover_targets():
    regions = {c: (REGION_DIR / f"{c}.bin").read_bytes() for c in COMPONENTS}
    groups = find_normalized(load_inventory(CONFIG_DIR / "functions.tsv"),
                             load_matched(CONFIG_DIR / "matches.json"), regions,
                             10, 2000, 2)
    if not groups:
        return ()
    return tuple((row["component"], row["address"], int(row["size"]))
                 for row in groups[0][1])


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
        source = f"src/{component}/matches/RecoveredNormalizedTop{address.upper()}.cpp"
        text = "\n".join(declarations) + "\n// Exact recovered relocation-normalized call wrapper.\n"
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
