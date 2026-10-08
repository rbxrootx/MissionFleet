"""Write the open convoy-aircraft update manifests from fresh Ghidra evidence."""
import csv
import re
from pathlib import Path

try:
    from .build_current_main_verifications import MAIN_OPCONVOY_AIRCRAFT_UPDATE_ADDRESSES
except ImportError:  # Support direct execution as a script.
    from build_current_main_verifications import MAIN_OPCONVOY_AIRCRAFT_UPDATE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = {address.upper() for address in MAIN_OPCONVOY_AIRCRAFT_UPDATE_ADDRESSES}
NEXT = ROOT / "var/current-main-next"
FRESH_LOG = NEXT / "opconvoy-aircraft-update-fresh-ghidra.log"
BODY_INVENTORY = NEXT / "main-function-bodies.tsv"
EDGE_INVENTORY = NEXT / "main-function-edges.tsv"
OUT = ROOT / "config/NF2_2026"

ROOT_MANIFESTS = {
    "587CBE00": ("shared-update", NEXT / "opconvoy-shared-update-closure.tsv"),
    "587CA9E0": ("cargo-slot-18", NEXT / "opconvoy-cargo-dispatch-closure.tsv"),
    "587CADF0": ("fighter-slot-18", NEXT / "opconvoy-fighter-dispatch-closure.tsv"),
}

FUNCTION_RE = re.compile(
    r"DumpExactFunctionRanges\.java> FUNCTION FUN_([0-9a-fA-F]+) "
    r"entry=([0-9a-fA-F]+) bodyBytes=(\d+)"
)
RANGE_RE = re.compile(
    r"DumpExactFunctionRanges\.java> RANGE ([0-9a-fA-F]+)\.\."
    r"([0-9a-fA-F]+) length=(\d+)"
)
COVERAGE_RE = re.compile(
    r"DumpExactFunctionRanges\.java> COVERAGE instructionCount=(\d+) "
    r"instructionBytes=(\d+) rangeBytes=(\d+) bodyBytes=(\d+)"
)
CALL_RE = re.compile(
    r"DumpExactFunctionRanges\.java> CALL ([0-9a-fA-F]+) -> "
    r"([0-9a-fA-F]+)(?: FUN_([0-9a-fA-F]+))?"
)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def write_tsv(path, columns, rows):
    with path.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(columns)
        writer.writerows(rows)


def main():
    manifest_members = {}
    for root, (role, path) in ROOT_MANIFESTS.items():
        rows = read_tsv(path)
        members = {row["function"].upper() for row in rows}
        if not members or root not in members:
            raise ValueError(f"Closure manifest does not include its root {root}: {path}")
        for member in members:
            if member not in ADDRESSES:
                raise ValueError(f"Unexpected open function {member} in {role} closure")
            manifest_members.setdefault(member, []).append((root, role))
    if set(manifest_members) != ADDRESSES:
        missing = sorted(ADDRESSES - set(manifest_members))
        extra = sorted(set(manifest_members) - ADDRESSES)
        raise ValueError(f"Root closures differ from selected slice; missing={missing}, extra={extra}")

    current = None
    fresh_functions, fresh_ranges, fresh_coverage = {}, {}, {}
    fresh_calls = {address: [] for address in ADDRESSES}
    for line in FRESH_LOG.read_text(encoding="utf-8", errors="replace").splitlines():
        found = FUNCTION_RE.search(line)
        if found:
            current = found.group(1).upper()
            if current != found.group(2).upper():
                raise ValueError(f"Unexpected fresh Ghidra function entry: {line}")
            if current in ADDRESSES:
                fresh_functions[current] = int(found.group(3))
                fresh_ranges[current] = []
            continue
        found = RANGE_RE.search(line)
        if found and current in ADDRESSES:
            start, end, length = found.groups()
            start_value, end_value, length_value = int(start, 16), int(end, 16), int(length)
            if end_value - start_value + 1 != length_value:
                raise ValueError(f"Malformed fresh Ghidra range: {line}")
            fresh_ranges[current].append((start.lower(), length_value))
            continue
        found = COVERAGE_RE.search(line)
        if found and current in ADDRESSES:
            fresh_coverage[current] = tuple(map(int, found.groups()))
            continue
        found = CALL_RE.search(line)
        if found and current in ADDRESSES:
            site, target, _target_function = found.groups()
            fresh_calls[current].append((current.lower(), site.lower(), target.lower()))

    if set(fresh_functions) != ADDRESSES or set(fresh_coverage) != ADDRESSES:
        raise ValueError("Fresh Ghidra output does not cover the selected function set")

    body_rows = read_tsv(BODY_INVENTORY)
    inventory_bodies = {
        address: [row for row in body_rows if row["function"].upper() == address]
        for address in ADDRESSES
    }
    if any(not rows for rows in inventory_bodies.values()):
        raise ValueError("Independent Ghidra body inventory is missing a selected function")

    range_rows = []
    for address in sorted(ADDRESSES):
        rows = inventory_bodies[address]
        expected = sorted((row["start"].lower(), int(row["length"])) for row in rows)
        if sorted(fresh_ranges[address]) != expected:
            raise ValueError(f"Fresh targeted and independent Ghidra ranges differ at {address}")
        instruction_count, instruction_bytes, range_bytes, body_bytes = fresh_coverage[address]
        expected_bytes = sum(length for _, length in expected)
        expected_instructions = sum(int(row["instruction_count"]) for row in rows)
        if (
            fresh_functions[address] != expected_bytes
            or instruction_bytes != expected_bytes
            or range_bytes != expected_bytes
            or body_bytes != expected_bytes
            or instruction_count != expected_instructions
        ):
            raise ValueError(f"Fresh Ghidra instruction coverage differs at {address}")
        for row in rows:
            range_rows.append((
                address.lower(), row["start"].lower(), int(row["length"]),
                int(row["instruction_bytes"]), int(row["instruction_count"]),
            ))

    edge_rows = read_tsv(EDGE_INVENTORY)
    inventory_calls = {address: [] for address in ADDRESSES}
    for row in edge_rows:
        address = row["function"].upper()
        if row["kind"] == "CALL" and address in ADDRESSES:
            inventory_calls[address].append((
                address.lower(), row["site"].lower(), row["type"],
                row["target"].lower(), row["target_function"].lower(),
            ))
    for address in ADDRESSES:
        inventory_signature = sorted(
            (function, site, target)
            for function, site, _kind, target, _target_function in inventory_calls[address]
        )
        if inventory_signature != sorted(fresh_calls[address]):
            raise ValueError(f"Fresh targeted and independent Ghidra calls differ at {address}")

    write_tsv(
        OUT / "main-opconvoy-aircraft-update-body-ranges.tsv",
        ("function", "start", "length", "instruction_bytes", "instruction_count"),
        range_rows,
    )

    body_export_rows = []
    for address in sorted(ADDRESSES):
        for row in inventory_bodies[address]:
            body_export_rows.append((
                "main-function-bodies-inventory", row["function"], row["start"],
                row["length"], row["instruction_bytes"], row["instruction_count"],
            ))
    body_export_rows.extend(("targeted-fresh-ghidra", *row) for row in range_rows)
    write_tsv(
        OUT / "main-opconvoy-aircraft-update-body-exports.tsv",
        ("export", "function", "start", "length", "instruction_bytes", "instruction_count"),
        body_export_rows,
    )

    edge_export_rows = []
    for address in sorted(ADDRESSES):
        for row in sorted(inventory_calls[address]):
            edge_export_rows.append(("main-function-edges-inventory", "CALL", *row))
    for address in sorted(ADDRESSES):
        inventory_types = {
            (site, target): (kind, target_function)
            for function, site, kind, target, target_function in inventory_calls[address]
        }
        for function, site, target in sorted(fresh_calls[address]):
            kind, target_function = inventory_types[(site, target)]
            edge_export_rows.append((
                "targeted-fresh-ghidra", "CALL", function, site,
                kind, target, target_function,
            ))
    write_tsv(
        OUT / "main-opconvoy-aircraft-update-call-edges.tsv",
        ("export", "kind", "function", "site", "type", "target", "target_function"),
        edge_export_rows,
    )

    root_rows = []
    for root, (role, path) in ROOT_MANIFESTS.items():
        for row in read_tsv(path):
            root_rows.append((root, role, row["function"].upper(), row["start"].lower(),
                              int(row["length"]), int(row["instruction_count"])))
    write_tsv(
        OUT / "main-opconvoy-aircraft-update-root-closures.tsv",
        ("root", "role", "function", "start", "length", "instruction_count"),
        root_rows,
    )

    print(
        f"wrote convoy-aircraft update manifests; {len(ADDRESSES)} functions, "
        f"{sum(fresh_functions.values()):,} bytes, {len(range_rows)} exact ranges, "
        f"{sum(map(len, fresh_calls.values()))} direct calls"
    )


if __name__ == "__main__":
    main()
