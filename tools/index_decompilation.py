"""Index evidence linking decompiled functions to embedded source-path strings."""
import csv
import json
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def main():
    directory = ROOT / "private-inputs/decompilation/pseudocode"
    result = {}
    for name in ("login-server", "game-server", "save-server"):
        grouped = defaultdict(set)
        with (directory / f"{name}-string-xrefs.tsv").open(encoding="utf-8") as stream:
            for row in csv.DictReader(stream, delimiter="\t"):
                if ".cpp" in row["text"].lower() and row["function"]:
                    grouped[row["text"]].add(row["function"])
        result[name] = {path: sorted(functions) for path, functions in sorted(grouped.items())}
    (directory / "source-function-index.json").write_text(json.dumps(result, indent=2), encoding="utf-8")
    lines = ["# Embedded source-path references", "",
             "These are referencing functions, not recovered original function names or source files.", ""]
    for name, groups in result.items():
        lines.extend([f"## {name}", "", "| Embedded path | Referring functions |", "| --- | --- |"])
        for path, functions in groups.items():
            lines.append(f"| {path.replace('|', '&#124;')} | {', '.join(functions)} |")
        lines.append("")
    (directory / "source-function-index.md").write_text("\n".join(lines), encoding="utf-8")
    print(json.dumps({name: {"paths": len(groups), "distinct_referencing_functions": len(set().union(*map(set, groups.values()))) if groups else 0}
                      for name, groups in result.items()}))


if __name__ == "__main__":
    main()
