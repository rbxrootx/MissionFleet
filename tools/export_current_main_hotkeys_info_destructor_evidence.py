"""Project fresh Ghidra exports and the wrapper's post-call raw-byte gap."""
import csv
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
FUNCTIONS = {"58876d40", "58876f80"}
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
CONFIG_DIR = ROOT / "config/NF2_2026"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
RAW_GAP = ("58876f80", 0x58876F95, 3)


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
            raise ValueError(f"{export} contains no body ranges for this destructor pair")
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

    image = IMAGE_PATH.read_bytes()
    gap_address = RAW_GAP[1]
    gap_size = RAW_GAP[2]
    offset = gap_address - BASE
    gap_bytes = image[offset:offset + gap_size]
    if gap_bytes != bytes.fromhex("83 C4 04"):
        raise ValueError(f"Unexpected raw gap bytes at {gap_address:08X}: {gap_bytes.hex()}")

    write_rows(
        CONFIG_DIR / "main-hotkeys-info-destructor-body-ranges.tsv",
        ("function", "start", "length", "instruction_bytes", "instruction_count"),
        canonical_ranges,
    )
    write_rows(
        CONFIG_DIR / "main-hotkeys-info-destructor-body-exports.tsv",
        ("export", "function", "start", "length", "instruction_bytes", "instruction_count"),
        body_exports,
    )
    write_rows(
        CONFIG_DIR / "main-hotkeys-info-destructor-call-edges.tsv",
        ("export", "kind", "function", "site", "type", "target", "target_function"),
        sorted(call_edges),
    )
    write_rows(
        CONFIG_DIR / "main-hotkeys-info-destructor-raw-gaps.tsv",
        ("function", "address", "length", "bytes_hex", "instruction_count", "instruction"),
        [(RAW_GAP[0], f"{gap_address:08x}", gap_size, gap_bytes.hex().upper(), 1, "add esp, 4")],
    )
    print(
        f"Exported {len(body_exports)} body rows, {len(call_edges)} call/data-edge rows, "
        f"and {gap_size} raw continuation bytes"
    )


if __name__ == "__main__":
    main()
