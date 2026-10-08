"""Build tracked CForce body and call manifests from fresh Ghidra exports."""
import csv
import re
from pathlib import Path

try:
    from .build_current_main_verifications import MAIN_CFORCE_PRIMARY_VTABLE_ADDRESSES
except ImportError:  # Support direct execution as a script.
    from build_current_main_verifications import MAIN_CFORCE_PRIMARY_VTABLE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = {address.upper() for address in MAIN_CFORCE_PRIMARY_VTABLE_ADDRESSES}
NEXT = ROOT / "var/current-main-next"
FRESH_LOG = NEXT / "cforce-primary-fresh-ghidra.log"
BODY_INVENTORY = NEXT / "main-function-bodies.tsv"
EDGE_INVENTORY = NEXT / "main-function-edges.tsv"
OUT = ROOT / "config/NF2_2026"

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


def main():
    current = None
    fresh_functions = {}
    fresh_ranges = {}
    fresh_coverage = {}
    fresh_calls = {address: [] for address in ADDRESSES}
    text = FRESH_LOG.read_text(encoding="utf-8", errors="replace")
    for line in text.splitlines():
        found = FUNCTION_RE.search(line)
        if found:
            current = found.group(1).upper()
            entry = found.group(2).upper()
            if current != entry:
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
        raise ValueError("Fresh Ghidra function set or coverage differs from the CForce slice")

    body_rows = read_tsv(BODY_INVENTORY)
    inventory_bodies = {
        address: [row for row in body_rows if row["function"].upper() == address]
        for address in ADDRESSES
    }
    if any(not rows for rows in inventory_bodies.values()):
        raise ValueError("Independent Ghidra body inventory is missing a CForce function")

    normalized_ranges = {}
    range_rows = []
    for address in sorted(ADDRESSES):
        rows = inventory_bodies[address]
        expected = sorted((row["start"].lower(), int(row["length"])) for row in rows)
        if sorted(fresh_ranges[address]) != expected:
            raise ValueError(f"Fresh targeted and independent Ghidra ranges differ at {address}")
        instruction_total, instruction_bytes, range_bytes, body_bytes = fresh_coverage[address]
        body_size = sum(length for _, length in expected)
        instruction_count = sum(int(row["instruction_count"]) for row in rows)
        if (
            fresh_functions[address] != body_size
            or instruction_bytes != body_size
            or range_bytes != body_size
            or body_bytes != body_size
            or instruction_total != instruction_count
        ):
            raise ValueError(f"Fresh Ghidra instruction coverage differs at {address}")
        for row in rows:
            range_rows.append((
                address.lower(), row["start"].lower(), int(row["length"]),
                int(row["instruction_bytes"]), int(row["instruction_count"]),
            ))
        normalized_ranges[address] = expected

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

    range_path = OUT / "main-cforce-primary-body-ranges.tsv"
    with range_path.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(("function", "start", "length", "instruction_bytes", "instruction_count"))
        writer.writerows(range_rows)

    body_export_path = OUT / "main-cforce-primary-body-exports.tsv"
    with body_export_path.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(("export", "function", "start", "length", "instruction_bytes", "instruction_count"))
        for address in sorted(ADDRESSES):
            for row in inventory_bodies[address]:
                writer.writerow(("main-function-bodies-inventory", row["function"], row["start"],
                                 row["length"], row["instruction_bytes"], row["instruction_count"]))
        for row in range_rows:
            writer.writerow(("targeted-fresh-ghidra", *row))

    edge_export_path = OUT / "main-cforce-primary-call-edges.tsv"
    with edge_export_path.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(("export", "kind", "function", "site", "type", "target", "target_function"))
        for address in sorted(ADDRESSES):
            for row in sorted(inventory_calls[address]):
                writer.writerow(("main-function-edges-inventory", "CALL", *row))
        for address in sorted(ADDRESSES):
            inventory_types = {
                (site, target): (kind, target_function)
                for function, site, kind, target, target_function in inventory_calls[address]
            }
            for function, site, target in sorted(fresh_calls[address]):
                kind, target_function = inventory_types[(site, target)]
                writer.writerow(("targeted-fresh-ghidra", "CALL", function, site,
                                 kind, target, target_function))

    print(
        f"wrote {range_path.name}, {body_export_path.name}, and {edge_export_path.name}; "
        f"{len(ADDRESSES)} functions, {sum(fresh_functions.values()):,} bytes, "
        f"{len(range_rows)} exact ranges, {sum(map(len, fresh_calls.values()))} direct calls"
    )


if __name__ == "__main__":
    main()
