"""Project fresh Ghidra evidence, skipped bytes, and switch tables."""
import csv
import struct
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
FUNCTIONS = {
    "587b60a0", "58877ad0", "58877b60", "58877b90", "58877bc0", "58878180",
}
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
CONFIG_DIR = ROOT / "config/NF2_2026"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000

RAW_GAPS = (
    ("58877ad0", 0x58877B12, 2, "8BFF", 1, "mov edi, edi", "before-switch-table"),
    ("58877bc0", 0x5887814A, 2, "8BFF", 1, "mov edi, edi", "before-switch-table"),
    ("58878180", 0x5887820D, 3, "8D4900", 1, "lea ecx, [ecx]", "skipped-alignment"),
)
MODE_MAPPER_TARGETS = (
    0x58877B0F, 0x58877B0F, 0x58877AE5, 0x58877AED, 0x58877AF5,
    0x58877AF5, 0x58877AFD, 0x58877AFD, 0x58877B02, 0x58877B0A,
)
REFRESH_SELECTOR = (0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 2, 3)
REFRESH_TARGETS = (0x58877C09, 0x58877CF1, 0x58877DE9, 0x58877D5C, 0x58877E7D)


def read_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def write_rows(path, columns, rows):
    with path.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(columns)
        writer.writerows(rows)


def read_u32(image, address):
    return struct.unpack_from("<I", image, address - BASE)[0]


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
            raise ValueError(f"{export} contains no body ranges for this update slice")
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
    gap_rows = []
    for function, address, length, expected_hex, count, instruction, role in RAW_GAPS:
        data = image[address - BASE:address - BASE + length]
        if data.hex().upper() != expected_hex:
            raise ValueError(f"Unexpected raw bytes at {address:08X}: {data.hex().upper()}")
        gap_rows.append((function, f"{address:08x}", length, expected_hex,
                         count, instruction, role))

    table_rows = []
    mapper_table = 0x58877B14
    mapper_targets = tuple(read_u32(image, mapper_table + 4 * index)
                           for index in range(len(MODE_MAPPER_TARGETS)))
    if mapper_targets != MODE_MAPPER_TARGETS:
        raise ValueError(f"Mode-mapper switch table changed: {mapper_targets}")
    table_rows.extend(
        ("58877ad0", f"{mapper_table:08x}", index, "absolute_target",
         f"{target:08x}", f"{target:08x}")
        for index, target in enumerate(mapper_targets)
    )

    refresh_target_table = 0x5887814C
    refresh_targets = tuple(read_u32(image, refresh_target_table + 4 * index)
                            for index in range(len(REFRESH_TARGETS)))
    if refresh_targets != REFRESH_TARGETS:
        raise ValueError(f"Display-refresh switch targets changed: {refresh_targets}")
    table_rows.extend(
        ("58877bc0", f"{refresh_target_table:08x}", index, "absolute_target",
         f"{target:08x}", f"{target:08x}")
        for index, target in enumerate(refresh_targets)
    )

    refresh_selector_table = 0x58878160
    selector = tuple(image[refresh_selector_table - BASE:
                           refresh_selector_table - BASE + len(REFRESH_SELECTOR)])
    if selector != REFRESH_SELECTOR:
        raise ValueError(f"Display-refresh mode selector changed: {selector}")
    table_rows.extend(
        ("58877bc0", f"{refresh_selector_table:08x}", index, "case_index",
         f"{value:02x}", f"{refresh_targets[value]:08x}")
        for index, value in enumerate(selector)
    )

    write_rows(
        CONFIG_DIR / "main-battle-room-update-body-ranges.tsv",
        ("function", "start", "length", "instruction_bytes", "instruction_count"),
        canonical_ranges,
    )
    write_rows(
        CONFIG_DIR / "main-battle-room-update-body-exports.tsv",
        ("export", "function", "start", "length", "instruction_bytes", "instruction_count"),
        body_exports,
    )
    write_rows(
        CONFIG_DIR / "main-battle-room-update-call-edges.tsv",
        ("export", "kind", "function", "site", "type", "target", "target_function"),
        sorted(call_edges),
    )
    write_rows(
        CONFIG_DIR / "main-battle-room-update-raw-fragments.tsv",
        ("function", "address", "length", "bytes_hex", "instruction_count", "instruction", "role"),
        gap_rows,
    )
    write_rows(
        CONFIG_DIR / "main-battle-room-update-switch-tables.tsv",
        ("function", "table_address", "index", "entry_kind", "raw_value", "resolved_target"),
        table_rows,
    )
    print(
        f"Exported {len(body_exports)} body rows, {len(call_edges)} call/data-edge rows, "
        f"{len(gap_rows)} raw fragments, and {len(table_rows)} switch-table entries"
    )


if __name__ == "__main__":
    main()
