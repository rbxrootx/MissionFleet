"""Validate the installed Main.dll CMapFileFDL/CMF parser closure."""
import argparse
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_CMF_FILE_PARSER_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-cmf-file-parser-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587969D0
MAP_INITIALIZER = 0x58800360
MAP_INITIALIZER_CALL = 0x5880084C
MAP_FILE_SIGNATURE_ADDRESS = 0x589A2A68
MAP_FILE_SIGNATURE = b"Sangduck Map File".ljust(40, b" ")

EXPECTED_INTERNAL_TRANSFERS = {
    0x587969FB: 0x58909F50,
    0x58796A19: 0x589091F0,
    0x58909F66: 0x589091F0,
}
EXPECTED_BOUNDARY_TRANSFERS = {
    0x58796A2B: 0x587750B0,
    0x589092EA: 0x5897CC4E,
    0x58909314: 0x5897CC4E,
    0x58909704: 0x5897CC4E,
    0x5890975D: 0x5897CC4E,
    0x5890982C: 0x5897CC42,
    0x589098EA: 0x5897CC4E,
    0x589099CB: 0x5897CC42,
    0x58909A76: 0x5897CBDA,
}
EXPECTED_FUNCTIONS = 3
EXPECTED_BYTES = 2_283
EXPECTED_RANGES = 8


def read_ranges():
    ranges = {}
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            function = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            count = int(row["instruction_count"])
            if size <= 0 or int(row["instruction_bytes"]) != size or count <= 0:
                raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
            ranges.setdefault(function, []).append((start, size, count))
    result = {}
    for function, parts in ranges.items():
        parts.sort()
        previous_end = None
        for start, size, _ in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges at {start:08X}")
            previous_end = start + size
        if not parts or parts[0][0] != function:
            raise AssertionError(f"First range does not start at {function:08X}")
        result[function] = tuple(parts)
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


def contains(ranges, address):
    return any(start <= address < start + size for start, size in ranges)


def require_call(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or not instruction.operands
        or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed direct call at {site:08X} to {target:08X}")


def verify_matched_caller(image, decoder, records, matched, caller, site, target):
    record = records.get(caller)
    if record is None or caller not in matched:
        raise AssertionError(f"Caller {caller:08X} is not byte-verified")
    if not contains(record_ranges(record), site):
        raise AssertionError(f"Call site {site:08X} is outside its matched caller")
    require_call(image, decoder, site, target)


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
    selected = {int(address, 16) for address in MAIN_CMF_FILE_PARSER_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges) or ROOT_ADDRESS not in selected:
        raise AssertionError("Builder set and fresh Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected CMapFile parser closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    internal_transfers = {}
    boundary_transfers = {}
    tail_transfers = {}
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
        expected_ranges = tuple(
            (start, size) for start, size, _ in function_ranges[address]
        )
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
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                    internal_transfers[instruction.address] = target
                elif instruction.id == X86_INS_JMP and target in matched:
                    tail_transfers[instruction.address] = target
                elif instruction.id == X86_INS_CALL and target in matched:
                    boundary_transfers[instruction.address] = target
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} direct transfer to {target:08X} "
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
        raise AssertionError("Fresh in-closure transfers differ from mapped x86")
    if boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError("Outbound direct calls differ from the audited matched boundary")
    if tail_transfers:
        raise AssertionError(f"Unexpected external tail transfers: {tail_transfers}")

    verify_matched_caller(
        image, decoder, records, matched, MAP_INITIALIZER,
        MAP_INITIALIZER_CALL, ROOT_ADDRESS,
    )
    signature_offset = MAP_FILE_SIGNATURE_ADDRESS - BASE
    if image[signature_offset:signature_offset + len(MAP_FILE_SIGNATURE)] != MAP_FILE_SIGNATURE:
        raise AssertionError("Mapped CMapFile signature differs from the Ghidra reference")

    print(
        f"Main.dll CMapFileFDL parser: {len(selected)} functions / "
        f"{byte_count:,} bytes across {range_count} exact Ghidra ranges; "
        f"exact direct-call closure, {len(internal_transfers)} internal calls, "
        f"{len(boundary_transfers)} calls to matched code; byte-matched map "
        "initializer callsite and 40-byte `Sangduck Map File` signature pass"
    )


if __name__ == "__main__":
    main()
