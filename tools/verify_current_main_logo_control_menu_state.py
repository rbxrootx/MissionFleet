"""Validate the RTTI-backed CLogoControlMenuScreen state-update closure."""
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_LOGO_CONTROL_MENU_STATE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-logo-control-menu-state-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58791590
VTABLE_ADDRESS_POINT = 0x58996BFC
VTABLE_COL = 0x589A62FC
TYPE_DESCRIPTOR = 0x589C2F40
TYPE_NAME = b".?AVCLogoControlMenuScreen@@\0"
EXPECTED_FUNCTIONS = 43
EXPECTED_BYTES = 14_771
EXPECTED_RANGES = 66
EXPECTED_INSTRUCTIONS = 4_756
EXPECTED_BOUNDARY_CALL_SITES = 304
EXPECTED_BOUNDARY_TARGETS = 56
EXPECTED_ROOT_RANGES = ((0x58791590, 617), (0x58791800, 1_503))
EXPECTED_INCOMING_CALLS = {
    (0x58758240, 0x58758282, 0x58758150),
    (0x58792730, 0x587927F4, 0x58792680),
    (0x58792730, 0x5879285B, 0x58792680),
    (0x58899B10, 0x58899B45, 0x58899840),
    (0x5889A0B0, 0x5889A0C3, 0x58899C80),
    (0x5889A110, 0x5889A129, 0x58899C80),
    (0x5889A160, 0x5889A1EF, 0x58899C80),
    (0x5889A730, 0x5889A93E, 0x58899C80),
}


def read_u32(image, address):
    return struct.unpack_from("<I", image, address - BASE)[0]


def read_ranges():
    ranges = {}
    with RANGE_PATH.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            function = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_bytes = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if size <= 0 or instruction_bytes != size or instruction_count <= 0:
                raise AssertionError(f"Invalid Ghidra body range: {row}")
            ranges.setdefault(function, []).append((start, size, instruction_count))
    for function, parts in ranges.items():
        parts.sort()
        previous_end = None
        for start, size, _ in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges at {start:08X}")
            previous_end = start + size
        if not parts or parts[0][0] != function:
            raise AssertionError(f"First body range does not begin at {function:08X}")
    return ranges


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


def require_direct_call(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or not instruction.operands
        or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed direct call at {site:08X} to {target:08X}")


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
    selected = {int(address, 16) for address in MAIN_LOGO_CONTROL_MENU_STATE_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges) or ROOT_ADDRESS not in selected:
        raise AssertionError("Builder address set and Ghidra body manifest disagree")

    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    instruction_count = sum(count for parts in function_ranges.values() for _, _, count in parts)
    root_ranges = tuple((start, size) for start, size, _ in function_ranges[ROOT_ADDRESS])
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
        or instruction_count != EXPECTED_INSTRUCTIONS
        or root_ranges != EXPECTED_ROOT_RANGES
    ):
        raise AssertionError("Unexpected logo control-menu closure shape or split root ranges")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_calls = set()
    boundary_targets = set()
    tail_transfers = set()
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
                elif target in matched:
                    if instruction.id == X86_INS_CALL:
                        boundary_calls.add((instruction.address, target))
                        boundary_targets.add(target)
                    else:
                        tail_transfers.add((instruction.address, target))
                elif BASE <= target < image_end:
                    raise AssertionError(
                        f"Unmatched mapped transfer to {target:08X} "
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
    if len(boundary_calls) != EXPECTED_BOUNDARY_CALL_SITES:
        raise AssertionError(f"Expected {EXPECTED_BOUNDARY_CALL_SITES} matched boundary calls, got {len(boundary_calls)}")
    if len(boundary_targets) != EXPECTED_BOUNDARY_TARGETS:
        raise AssertionError(f"Expected {EXPECTED_BOUNDARY_TARGETS} matched boundary targets, got {len(boundary_targets)}")
    if tail_transfers:
        raise AssertionError(f"Unexpected cross-function tail transfers: {sorted(tail_transfers)}")

    seen_incoming = set()
    for caller, site, target in EXPECTED_INCOMING_CALLS:
        row = inventory.get(caller)
        if row is None or caller in matched:
            raise AssertionError(f"Expected open incoming caller {caller:08X} is missing or matched")
        if not caller <= site < caller + int(row["size"]):
            raise AssertionError(f"Incoming call {site:08X} is outside caller extent {caller:08X}")
        require_direct_call(image, decoder, site, target)
        seen_incoming.add((caller, site, target))
    if seen_incoming != EXPECTED_INCOMING_CALLS:
        raise AssertionError("Incoming callsite audit differs from the expected open-call inventory")

    if read_u32(image, VTABLE_ADDRESS_POINT - 4) != VTABLE_COL:
        raise AssertionError("CLogoControlMenuScreen vtable no longer points to its expected COL")
    col = struct.unpack_from("<IIIII", image, VTABLE_COL - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR, 0x589A6310):
        raise AssertionError(f"Unexpected CLogoControlMenuScreen complete-object locator: {col}")
    if image[TYPE_DESCRIPTOR - BASE + 8:TYPE_DESCRIPTOR - BASE + 8 + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI type descriptor no longer names CLogoControlMenuScreen")
    if read_u32(image, VTABLE_ADDRESS_POINT + 0x0C) != ROOT_ADDRESS:
        raise AssertionError("CLogoControlMenuScreen slot +0x0C no longer points to state update")
    for constructor in (0x5878D6D0, 0x5878E2D0):
        if constructor not in matched:
            raise AssertionError(f"RTTI-backed sibling/constructor {constructor:08X} is not byte-matched")

    print(
        f"Main.dll CLogoControlMenuScreen slot +0x0C: {len(selected)} functions / "
        f"{byte_count:,} bytes in {range_count} exact Ghidra ranges and "
        f"{instruction_count} instructions; {len(boundary_calls)} matched calls to "
        f"{len(boundary_targets)} targets, {len(seen_incoming)} open incoming callsites, "
        "RTTI, vtable, and direct-call closure pass"
    )


if __name__ == "__main__":
    main()
