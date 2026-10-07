"""Validate the current Main.dll map-object state-update call closure."""
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_MAP_OBJECT_STATE_UPDATE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-map-object-state-update-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
ROOT_ADDRESS = 0x588DE3D0
EXPECTED_FUNCTIONS = 10
EXPECTED_BYTES = 2_325
EXPECTED_RANGES = 10

EXPECTED_INTERNAL_TRANSFERS = {
    0x587A6E5D: 0x587B1A40,
    0x587A71B7: 0x587B0920,
    0x587B1A4A: 0x587B1410,
    0x588D7C09: 0x587B1A40,
    0x588D7C32: 0x587A6DC0,
    0x588DA414: 0x58853F90,
    0x588DE3E1: 0x588D7BD0,
    0x588DE4A4: 0x587B0920,
    0x588DE532: 0x588DA350,
    0x588DE54C: 0x58756670,
    0x588DE566: 0x58756670,
    0x588DE578: 0x587A6DC0,
    0x588DE58B: 0x587A71A0,
    0x588DE5A9: 0x58756670,
}
EXPECTED_BOUNDARY_TRANSFERS = {
    0x587A6E39: 0x58903290,
    0x587B1559: 0x587B0930,
    0x587B161C: 0x587B0630,
    0x588DE41E: 0x58902F50,
    0x588DE4C9: 0x587561F0,
    0x588DE4E0: 0x587565F0,
    0x588DE4F4: 0x587561F0,
    0x588DE50B: 0x587565F0,
    0x588DE53F: 0x587565F0,
    0x588DE559: 0x587565F0,
}
EXPECTED_TAIL_TRANSFERS = {
    0x58756732: 0x58734920,
    0x58756743: 0x58734920,
}
MATCHED_CALLS = (
    (0x587F8760, 0x587F9614, 0x588DE3D0),
    (0x588DEB30, 0x588DEFD4, 0x58756670),
    (0x588DEB30, 0x588DEFEE, 0x58756670),
    (0x588DEB30, 0x588DF001, 0x587A6DC0),
    (0x588DEB30, 0x588DF013, 0x587A71A0),
    (0x588DEB30, 0x588DF0AC, 0x588DA350),
    (0x588DEB30, 0x588DF1B1, 0x58756670),
    (0x588E05C0, 0x588E1144, 0x587B1A40),
    (0x588E05C0, 0x588E116D, 0x587A6DC0),
    (0x588E5150, 0x588E60CC, 0x588D7BD0),
    (0x588E5150, 0x588E63FD, 0x588D7BD0),
)


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
    if not any(
        start <= site < start + size for start, size in record_ranges(record)
    ):
        raise AssertionError(f"Call site {site:08X} is outside its matched caller")
    require_call(image, decoder, site, target)


def main():
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
    selected = {int(address, 16) for address in MAIN_MAP_OBJECT_STATE_UPDATE_ADDRESSES}
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
        raise AssertionError("Unexpected map-object state-update closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    internal_transfers = {}
    boundary_transfers = {}
    tail_transfers = {}
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or address not in matched:
            raise AssertionError(f"Missing byte-verified inventory row for {address:08X}")
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
                elif target in matched:
                    transfers = tail_transfers if instruction.id == X86_INS_JMP else boundary_transfers
                    transfers[instruction.address] = target
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
        raise AssertionError("Internal direct transfers differ from fresh Ghidra")
    if boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            "Boundary call transfers differ from fresh Ghidra"
        )
    if tail_transfers != EXPECTED_TAIL_TRANSFERS:
        raise AssertionError("Tail transfers differ from fresh Ghidra")

    for caller, site, target in MATCHED_CALLS:
        verify_matched_caller(image, decoder, records, matched, caller, site, target)

    print(
        f"Main.dll map-object state-update closure: {len(selected)} functions / "
        f"{byte_count:,} bytes across {range_count} exact Ghidra ranges; "
        f"{len(internal_transfers)} internal calls, "
        f"{len(boundary_transfers) + len(tail_transfers)} outbound transfers "
        "to matched code, and 11 calls from four byte-matched callers pass"
    )


if __name__ == "__main__":
    main()
