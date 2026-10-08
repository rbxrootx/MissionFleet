"""Project two fresh Ghidra exports for the CPannelHotKeysInfo input path."""
import csv
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
FUNCTIONS = {"588772c0", "58877310", "58877880", "588778d0"}
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
CONFIG_DIR = ROOT / "config/NF2_2026"


def read_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def write_rows(path, columns, rows):
    with path.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(columns)
        writer.writerows(rows)


def main():
    body_exports = []
    call_edges = []
    canonical_ranges = None

    for project in EXPORTS:
        export = f"{project}-fresh"
        bodies = [row for row in read_rows(
            FRESH_DIR / f"{export}-function-bodies.tsv")
                  if row["function"].lower() in FUNCTIONS]
        if not bodies:
            raise ValueError(f"{export} contains no body ranges for this input path")
        ranges = [(
            row["function"].lower(), row["start"].lower(), row["length"],
            row["instruction_bytes"], row["instruction_count"],
        ) for row in bodies]
        if canonical_ranges is None:
            canonical_ranges = ranges
        elif ranges != canonical_ranges:
            raise ValueError(f"Fresh Ghidra body ranges disagree: {ranges}")
        body_exports.extend((export, *row) for row in ranges)

        edges = [row for row in read_rows(
            FRESH_DIR / f"{export}-function-edges.tsv")
                 if row["kind"] in {"CALL", "DATA"}
                 and (row["function"].lower() in FUNCTIONS
                      or row["target"].lower() in FUNCTIONS)]
        call_edges.extend((
            export, row["kind"], row["function"].lower(), row["site"].lower(),
            row["type"], row["target"].lower(), row["target_function"].lower(),
        ) for row in edges)

    if canonical_ranges is None:
        raise ValueError("No Ghidra body exports were read")

    write_rows(
        CONFIG_DIR / "main-hotkeys-info-input-body-ranges.tsv",
        ("function", "start", "length", "instruction_bytes", "instruction_count"),
        canonical_ranges,
    )
    write_rows(
        CONFIG_DIR / "main-hotkeys-info-input-body-exports.tsv",
        ("export", "function", "start", "length", "instruction_bytes", "instruction_count"),
        body_exports,
    )
    write_rows(
        CONFIG_DIR / "main-hotkeys-info-input-call-edges.tsv",
        ("export", "kind", "function", "site", "type", "target", "target_function"),
        sorted(call_edges),
    )
    print(f"Exported {len(body_exports)} body rows and {len(call_edges)} call/data-edge rows")


if __name__ == "__main__":
    main()
