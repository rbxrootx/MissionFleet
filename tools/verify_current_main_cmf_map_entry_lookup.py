"""Validate the installed Main.dll CMF map-entry lookup closure."""
import argparse
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_CMF_MAP_ENTRY_LOOKUP_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-map-resource-cache-entry-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587FFAA0
MAP_INITIALIZER = 0x58800360
MAP_INITIALIZER_CALL = 0x5880086D
TREE_DESTRUCTOR = 0x587FFBC0
TREE_DESTRUCTOR_CALL = 0x587FFC6F
OPEN_CALLER = 0x58748BC0
OPEN_CALLER_CALL = 0x58748BC5

EXPECTED_INTERNAL_TRANSFERS = {
    0x587FF4D2: 0x587485F0,
    0x587FF59F: 0x587FF470,
    0x587FF635: 0x587EF1A0,
    0x587FF653: 0x587E7F90,
    0x587FF681: 0x587E7F90,
    0x587FF7E9: 0x587FF510,
    0x587FF80C: 0x587EF1F0,
    0x587FF88F: 0x587FF510,
    0x587FF8D0: 0x587481B0,
    0x587FF8EC: 0x587FF510,
    0x587FF929: 0x587481B0,
    0x587FF947: 0x587FF510,
    0x587FF962: 0x587481B0,
    0x587FF97F: 0x587EF1F0,
    0x587FF98F: 0x587481B0,
    0x587FF9AC: 0x587FF510,
    0x587FF9C5: 0x587FF510,
    0x587FF9E1: 0x587481B0,
    0x587FFA0F: 0x587480A0,
    0x587FFA31: 0x587481B0,
    0x587FFA52: 0x587FF510,
    0x587FFA67: 0x587FF510,
    0x587FFA80: 0x587FF710,
    0x587FFB5A: 0x587FF870,
}
EXPECTED_TAIL_TRANSFERS = {
    0x587480B7: 0x5897CC72,
    0x587EF213: 0x5897CC72,
    0x587EF26F: 0x5897CC72,
}
EXPECTED_BOUNDARY_TRANSFERS = {
    0x587480A8: 0x5897CC72,
    0x587481D1: 0x58748110,
    0x58748629: 0x58734F20,
    0x587EF1F8: 0x5897CC72,
    0x587FF49D: 0x5897CC4E,
    0x587FF560: 0x58735000,
    0x587FF572: 0x58735360,
    0x587FF589: 0x5897CC78,
    0x587FF773: 0x58748020,
    0x587FF7D1: 0x5897CC72,
    0x587FF835: 0x58748110,
    0x587FF8B1: 0x5897CC72,
    0x587FF90A: 0x5897CC72,
    0x587FFA1D: 0x58743680,
    0x587FFACE: 0x587FF2B0,
    0x587FFAD9: 0x5897CC72,
    0x587FFAF0: 0x5897CC72,
    0x587FFB16: 0x58748110,
    0x587FFB3D: 0x58734F20,
    0x587FFB70: 0x5897CC42,
    0x587FFB91: 0x5897CC72,
    0x587FFB9D: 0x5897CC72,
}
EXPECTED_FUNCTIONS = 11
EXPECTED_BYTES = 2_355
EXPECTED_RANGES = 12


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
    instruction = next(
        decoder.disasm(image[site - BASE:site - BASE + 15], site), None
    )
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or not instruction.operands
        or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed direct call at {site:08X} to {target:08X}")


def verify_matched_caller(image, decoder, records, matched, caller_address, site, target):
    caller = records.get(caller_address)
    if caller is None or caller_address not in matched:
        raise AssertionError(f"Incoming caller {caller_address:08X} is not byte-verified")
    if not contains(record_ranges(caller), site):
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
    selected = {int(address, 16) for address in MAIN_CMF_MAP_ENTRY_LOOKUP_ADDRESSES}
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
        raise AssertionError("Unexpected CMF map-entry closure shape")

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
                if instruction.id == X86_INS_JMP:
                    if target in matched:
                        tail_transfers[instruction.address] = target
                        continue
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} direct tail transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )
                if target in selected:
                    graph[address].add(target)
                    internal_transfers[instruction.address] = target
                elif target in matched:
                    boundary_transfers[instruction.address] = target
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
        raise AssertionError("Fresh in-closure transfers differ from the audited Ghidra graph")
    if tail_transfers != EXPECTED_TAIL_TRANSFERS:
        raise AssertionError("Ghidra CALL_TERMINATOR tail transfers differ from mapped x86")
    if boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError("Outbound direct calls differ from the audited matched boundary")

    verify_matched_caller(
        image, decoder, records, matched, MAP_INITIALIZER,
        MAP_INITIALIZER_CALL, ROOT_ADDRESS,
    )
    verify_matched_caller(
        image, decoder, records, matched, TREE_DESTRUCTOR,
        TREE_DESTRUCTOR_CALL, 0x587480A0,
    )
    require_call(image, decoder, OPEN_CALLER_CALL, ROOT_ADDRESS)
    if b"map/set<T> too long" not in image:
        raise AssertionError("Original ordered-tree exception literal is missing")

    print(
        f"Main.dll CMF map-entry lookup: {len(selected)} functions / "
        f"{byte_count:,} bytes across {range_count} exact Ghidra ranges; "
        f"exact direct-call closure, {len(internal_transfers)} internal calls, "
        f"{len(boundary_transfers)} calls and {len(tail_transfers)} tail transfers "
        "to matched code, both matched caller sites and the additional open caller pass"
    )


if __name__ == "__main__":
    main()
