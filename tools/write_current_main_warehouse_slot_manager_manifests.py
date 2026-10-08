"""Write exact-body and direct-transfer manifests for the warehouse reset slice."""
import csv
import re
from pathlib import Path

try:
    from .build_current_main_verifications import (
        MAIN_CWAREHOUSE_SLOT_MANAGER_ADDRESSES,
        MAIN_WAREHOUSE_RESET_CALLER_ADDRESSES,
    )
except ImportError:  # Support direct execution as a script.
    from build_current_main_verifications import (
        MAIN_CWAREHOUSE_SLOT_MANAGER_ADDRESSES,
        MAIN_WAREHOUSE_RESET_CALLER_ADDRESSES,
    )


ROOT = Path(__file__).resolve().parents[1]
NEXT = ROOT / "var/current-main-next"
FRESH_LOG = NEXT / "warehouse-slot-manager-primary-vtable-fresh-ghidra.log"
BODY_INVENTORY = NEXT / "main-function-bodies.tsv"
EDGE_INVENTORY = NEXT / "main-function-edges.tsv"
OUT = ROOT / "config/NF2_2026"
ADDRESSES = {
    address.upper() for address in (
        *MAIN_CWAREHOUSE_SLOT_MANAGER_ADDRESSES,
        *MAIN_WAREHOUSE_RESET_CALLER_ADDRESSES,
    )
}
ROOT_MANIFESTS = {
    "588FFD90": ("slot-0-deleting-destructor", NEXT / "warehouseslotmanager-588ffd90-a413d91.tsv"),
    "588FF890": ("slot-0x0C-update", NEXT / "warehouseslotmanager-588ff890-a413d91.tsv"),
    "588FF940": ("slot-0x10-event", NEXT / "warehouseslotmanager-588ff940-a413d91.tsv"),
    "588FF6B0": ("slot-0x18-event", NEXT / "warehouseslotmanager-588ff6b0-a413d91.tsv"),
    "588FFC90": ("aux-warehouse-manager-reset-caller", NEXT / "warehousemanager-resetcaller-588ffc90.tsv"),
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
    root_rows = []
    manifest_members = {}
    for root, (role, path) in ROOT_MANIFESTS.items():
        rows = read_tsv(path)
        members = {row["function"].upper() for row in rows}
        if root not in members:
            raise ValueError(f"Root closure {role} omits {root}")
        for member in members:
            if member not in ADDRESSES:
                raise ValueError(f"Unexpected open member {member} in {role}")
            manifest_members.setdefault(member, set()).add(root)
        root_rows.extend((
            root, role, row["function"].upper(), row["start"].lower(),
            int(row["length"]), int(row["instruction_count"]),
        ) for row in rows)
    if set(manifest_members) != ADDRESSES:
        raise ValueError(
            f"Open closure union differs from the selected class slice: "
            f"missing={sorted(ADDRESSES - set(manifest_members))}, "
            f"extra={sorted(set(manifest_members) - ADDRESSES)}"
        )

    current = None
    fresh_functions, fresh_ranges, fresh_coverage = {}, {}, {}
    fresh_calls = {address: [] for address in ADDRESSES}
    for line in FRESH_LOG.read_text(encoding="utf-8", errors="replace").splitlines():
        found = FUNCTION_RE.search(line)
        if found:
            current = found.group(1).upper()
            if current != found.group(2).upper():
                raise ValueError(f"Fresh function entry changed: {line}")
            if current in ADDRESSES:
                fresh_functions[current] = int(found.group(3))
                fresh_ranges[current] = []
            continue
        found = RANGE_RE.search(line)
        if found and current in ADDRESSES:
            start, end, length = found.groups()
            if int(end, 16) - int(start, 16) + 1 != int(length):
                raise ValueError(f"Malformed body range: {line}")
            fresh_ranges[current].append((start.lower(), int(length)))
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
        raise ValueError("Fresh Ghidra output does not cover all selected members")

    body_rows = read_tsv(BODY_INVENTORY)
    inventory_bodies = {
        address: [row for row in body_rows if row["function"].upper() == address]
        for address in ADDRESSES
    }
    if any(not rows for rows in inventory_bodies.values()):
        raise ValueError("Independent function-body inventory is incomplete")

    ranges = []
    for address in sorted(ADDRESSES):
        bodies = inventory_bodies[address]
        expected = sorted((row["start"].lower(), int(row["length"])) for row in bodies)
        if sorted(fresh_ranges[address]) != expected:
            raise ValueError(f"Fresh and independent body ranges differ at {address}")
        counts = fresh_coverage[address]
        byte_count = sum(length for _, length in expected)
        instruction_count = sum(int(row["instruction_count"]) for row in bodies)
        if counts != (instruction_count, byte_count, byte_count, byte_count):
            raise ValueError(f"Incomplete fresh instruction coverage at {address}: {counts}")
        if fresh_functions[address] != byte_count:
            raise ValueError(f"Fresh body size differs at {address}")
        ranges.extend((
            address.lower(), row["start"].lower(), int(row["length"]),
            int(row["instruction_bytes"]), int(row["instruction_count"]),
        ) for row in bodies)

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
        expected = sorted((function, site, target)
                          for function, site, _kind, target, _target_name
                          in inventory_calls[address])
        if expected != sorted(fresh_calls[address]):
            raise ValueError(f"Fresh and independent direct transfers differ at {address}")

    write_tsv(
        OUT / "main-warehouse-slot-manager-body-ranges.tsv",
        ("function", "start", "length", "instruction_bytes", "instruction_count"),
        ranges,
    )
    body_exports = []
    for address in sorted(ADDRESSES):
        body_exports.extend((
            "main-function-bodies-inventory", row["function"], row["start"],
            row["length"], row["instruction_bytes"], row["instruction_count"],
        ) for row in inventory_bodies[address])
    body_exports.extend(("targeted-fresh-ghidra", *row) for row in ranges)
    write_tsv(
        OUT / "main-warehouse-slot-manager-body-exports.tsv",
        ("export", "function", "start", "length", "instruction_bytes", "instruction_count"),
        body_exports,
    )

    exports = []
    for address in sorted(ADDRESSES):
        exports.extend(("main-function-edges-inventory", "CALL", *row)
                       for row in sorted(inventory_calls[address]))
    for address in sorted(ADDRESSES):
        types = {(site, target): (kind, target_name)
                 for _function, site, kind, target, target_name in inventory_calls[address]}
        for function, site, target in sorted(fresh_calls[address]):
            kind, target_name = types[(site, target)]
            exports.append(("targeted-fresh-ghidra", "CALL", function, site,
                            kind, target, target_name))
    write_tsv(
        OUT / "main-warehouse-slot-manager-call-edges.tsv",
        ("export", "kind", "function", "site", "type", "target", "target_function"),
        exports,
    )
    write_tsv(
        OUT / "main-warehouse-slot-manager-root-closures.tsv",
        ("root", "role", "function", "start", "length", "instruction_count"),
        root_rows,
    )
    print(
        f"wrote warehouse slot-manager manifests: {len(ADDRESSES)} functions, "
        f"{sum(fresh_functions.values()):,} bytes, {len(ranges)} exact ranges, "
        f"{sum(map(len, fresh_calls.values()))} direct calls/transfers"
    )


if __name__ == "__main__":
    main()
