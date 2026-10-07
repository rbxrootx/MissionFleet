"""Validate Main message 0x8002C004/0x8002C006 record-update handlers."""
import argparse
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import (
    MAIN_MESSAGE_8002C004_8002C006_RECORD_UPDATE_ADDRESSES,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / (
    "config/NF2_2026/"
    "main-message-8002c004-8002c006-record-update-body-ranges.tsv"
)
MARKER = "objdiff-3.8.0-byte-identical"
CALLER = 0x587BB700
ROOTS = (0x588869A0, 0x58886AE0)
EXPECTED_CALLS = {
    0x587C14B4: 0x588869A0,
    0x587C14CD: 0x588869A0,
    0x587C14DE: 0x588869A0,
    0x587C150B: 0x58886AE0,
    0x587C1527: 0x58886AE0,
}
EXPECTED_FUNCTIONS = 15
EXPECTED_BYTES = 2_634
EXPECTED_RANGES = 17


def load_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def read_ranges():
    ranges = {}
    for row in load_tsv(RANGE_MANIFEST):
        function = int(row["function"], 16)
        start = int(row["start"], 16)
        size = int(row["length"])
        instruction_bytes = int(row["instruction_bytes"])
        instruction_count = int(row["instruction_count"])
        if size <= 0 or instruction_bytes != size or instruction_count <= 0:
            raise AssertionError(f"Incomplete Ghidra body range: {row}")
        ranges.setdefault(function, []).append((start, size, instruction_count))

    result = {}
    for function, parts in ranges.items():
        parts.sort()
        previous_end = None
        for start, size, _ in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges at {start:08X}")
            previous_end = start + size
        if not parts or parts[0][0] != function:
            raise AssertionError(f"First Ghidra range does not start at {function:08X}")
        result[function] = tuple(parts)
    return result


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def contains(ranges, address):
    return any(start <= address < start + size for start, size in ranges)


def decode_complete(image, decoder, start, size, expected_count):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (
        not instructions
        or instructions[0].address != start
        or sum(instruction.size for instruction in instructions) != size
        or instructions[-1].address + instructions[-1].size != start + size
        or len(instructions) != expected_count
    ):
        raise AssertionError(f"Mapped/Ghidra instruction coverage differs at {start:08X}")
    return instructions


def require_call(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or not instruction.operands
        or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed dispatcher call at {site:08X} to {target:08X}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--allow-candidates", action="store_true",
        help="audit direct-call closure before byte-match status is recorded",
    )
    args = parser.parse_args()

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    inventory = {
        int(row["address"], 16): row
        for row in load_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, record in records.items()
        if record.get("verified_by") == MARKER
    }
    selected = {int(address, 16) for address in MAIN_MESSAGE_8002C004_8002C006_RECORD_UPDATE_ADDRESSES}
    roots = set(ROOTS)
    ranges = read_ranges()
    if selected != set(ranges) or not roots <= selected:
        raise AssertionError("Builder address set and Ghidra range manifest disagree")
    byte_count = sum(size for parts in ranges.values() for _, size, _ in parts)
    range_count = sum(len(parts) for parts in ranges.values())
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected message handler closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_calls = {}
    for address, parts in ranges.items():
        inventory_row = inventory.get(address)
        record = records.get(address)
        if inventory_row is None or record is None:
            raise AssertionError(f"Missing inventory/catalog row for {address:08X}")
        status = record.get("verified_by")
        if status != MARKER and not (
            args.allow_candidates and status == "candidate-not-yet-verified"
        ):
            raise AssertionError(f"Missing byte-verified function {address:08X}")
        expected_ranges = tuple((start, size) for start, size, _ in parts)
        if (
            int(record["size"]) != int(inventory_row["size"])
            or sum(size for _, size in expected_ranges) != int(inventory_row["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size, instruction_count in parts:
            instructions = decode_complete(image, decoder, start, size, instruction_count)
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    if instruction.id == X86_INS_CALL:
                        boundary_calls[instruction.address] = target
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} direct transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    reachable = set(roots)
    queue = deque(roots)
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact paired-handler closure: {sorted(selected - reachable)}")

    caller_record = records.get(CALLER)
    if caller_record is None or CALLER not in matched:
        raise AssertionError("FUN_587BB700 dispatcher is not byte-verified")
    caller_ranges = record_ranges(caller_record)
    if not all(contains(caller_ranges, site) for site in EXPECTED_CALLS):
        raise AssertionError("A documented dispatcher call site is outside FUN_587BB700")
    for site, target in EXPECTED_CALLS.items():
        require_call(image, decoder, site, target)

    print(
        f"Main message 0x8002C004/0x8002C006 record update: "
        f"{len(selected)} functions / {byte_count:,} bytes across {range_count} "
        f"Ghidra ranges; {len(boundary_calls)} outgoing calls resolve to matched "
        f"code and all five dispatcher call sites pass"
    )


if __name__ == "__main__":
    main()
