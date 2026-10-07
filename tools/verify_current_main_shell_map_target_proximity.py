"""Validate the installed Main.dll shell-map target-proximity slice."""
import argparse
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import (
    MAIN_SHELL_MAP_TARGET_PROXIMITY_ADDRESSES,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-shell-map-target-proximity-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58787B70
CHILD_ADDRESS = 0x587870B0
CALLER_ADDRESS = 0x588D4300
EXPECTED_INTERNAL_TRANSFERS = {0x58787F99: CHILD_ADDRESS}
EXPECTED_MATCHED_CALLERS = {0x588D5C23, 0x588D5F35}
EXPECTED_FUNCTIONS = 2
EXPECTED_BYTES = 1_462
EXPECTED_RANGES = 2
EXPECTED_BOUNDARY_CALLS = 31


def read_ranges():
    ranges = {}
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            if size <= 0 or int(row["instruction_bytes"]) != size:
                raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
            count = int(row["instruction_count"])
            if count <= 0:
                raise AssertionError(f"Empty fresh Ghidra instruction range: {row}")
            ranges.setdefault(address, []).append((start, size, count))
    result = {}
    for address, parts in ranges.items():
        parts.sort()
        previous_end = None
        for start, size, _ in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges at {start:08X}")
            previous_end = start + size
        if not parts or parts[0][0] != address:
            raise AssertionError(f"First Ghidra body range does not start at {address:08X}")
        result[address] = tuple(parts)
    return result


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (
        not instructions
        or instructions[0].address != start
        or sum(instruction.size for instruction in instructions) != size
        or instructions[-1].address + instructions[-1].size != start + size
    ):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def is_direct_call_to(instruction, target):
    return (
        instruction.id == X86_INS_CALL
        and instruction.operands
        and instruction.operands[0].type == X86_OP_IMM
        and (instruction.operands[0].imm & 0xFFFFFFFF) == target
    )


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--allow-candidates", action="store_true",
        help="audit before byte-match status is recorded",
    )
    args = parser.parse_args()

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    selected = {int(address, 16) for address in MAIN_SHELL_MAP_TARGET_PROXIMITY_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges) or selected != {ROOT_ADDRESS, CHILD_ADDRESS}:
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected shell-map target-proximity closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    internal_transfers = {}
    boundary_transfers = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None:
            raise AssertionError(f"Missing inventory/catalog row for {address:08X}")
        status = record.get("verified_by")
        if status != MARKER and not (
            args.allow_candidates and status == "candidate-not-yet-verified"
        ):
            raise AssertionError(f"Missing byte-verified function {address:08X}")
        expected_ranges = tuple((start, size) for start, size, _ in function_ranges[address])
        if (
            int(record["size"]) != int(row["size"])
            or sum(size for _, size in expected_ranges) != int(row["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size, expected_count in function_ranges[address]:
            instructions = decode_complete(image, decoder, start, size)
            if len(instructions) != expected_count:
                raise AssertionError(
                    f"Capstone/Ghidra instruction count differs at {start:08X}: "
                    f"{len(instructions)} != {expected_count}"
                )
            for instruction in instructions:
                if instruction.id != X86_INS_CALL or not instruction.operands:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                    internal_transfers[instruction.address] = target
                elif target in matched:
                    boundary_transfers.add((instruction.address, target))
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} direct call to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact direct-call closure: {sorted(selected - reachable)}")
    if internal_transfers != EXPECTED_INTERNAL_TRANSFERS:
        raise AssertionError("Fresh in-closure call differs from the audited Ghidra graph")
    if len(boundary_transfers) != EXPECTED_BOUNDARY_CALLS:
        raise AssertionError(f"Unexpected matched boundary-call count: {len(boundary_transfers)}")

    caller = records.get(CALLER_ADDRESS)
    if caller is None or caller.get("verified_by") != MARKER:
        raise AssertionError("RTTI-identified matched CShell_MapObjectScreen caller is missing")
    caller_ranges = record_ranges(caller)
    if any(
        not any(start <= site < start + size for start, size in caller_ranges)
        for site in EXPECTED_MATCHED_CALLERS
    ):
        raise AssertionError("A target-proximity call site lies outside the matched caller")
    caller_calls = set()
    for start, size in caller_ranges:
        for instruction in decode_complete(image, decoder, start, size):
            if is_direct_call_to(instruction, ROOT_ADDRESS):
                caller_calls.add(instruction.address)
    if caller_calls != EXPECTED_MATCHED_CALLERS:
        raise AssertionError(f"Matched caller references changed: {caller_calls}")

    print(
        f"Main.dll shell-map target-proximity path: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; exact direct-call closure, {len(boundary_transfers)} "
        f"calls to matched code, no unmatched mapped direct calls, and both "
        "matched CShell_MapObjectScreen caller sites pass"
    )


if __name__ == "__main__":
    main()
