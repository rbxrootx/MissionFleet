"""Validate the RTTI-backed CPannelTrade state-reset closure in Main.dll."""
import argparse
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_CPANNEL_TRADE_STATE_RESET_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-cpannel-trade-state-reset-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588B5840
VTABLE_ADDRESS_POINT = 0x589A0954
VTABLE_SLOT_ADDRESS = 0x589A095C
COL_POINTER_ADDRESS = 0x589A0950
COL_ADDRESS = 0x589A98B0
TYPE_DESCRIPTOR_ADDRESS = 0x589CD57C
TYPE_NAME = b".?AVCPannelTrade@@\0"
TRADE_PANEL_EVENT = 0x80010D01

EXPECTED_INTERNAL_TRANSFERS = {
    0x588B585F: 0x587B9110,
    0x588B5ACD: 0x588BB5E0,
    0x588B5ADF: 0x588BCB00,
}
EXPECTED_BOUNDARY_TRANSFERS = {
    0x588B58E2: 0x5875F320,
    0x588B5903: 0x589087F0,
    0x588B590A: 0x589087F0,
    0x588B59F8: 0x5897CC42,
    0x588B5A48: 0x5897CC42,
    0x588B5B4C: 0x58907990,
    0x587B911F: 0x58970C70,
    0x588BB65D: 0x58902F50,
    0x588BB66A: 0x58902EE0,
    0x588BB67B: 0x58902CE0,
    0x588BB695: 0x58902EE0,
    0x588BB69D: 0x58902F50,
    0x588BB6BD: 0x58903290,
    0x588BB6CB: 0x5877CBE0,
    0x588BCB12: 0x589087F0,
}
EXPECTED_FUNCTIONS = 4
EXPECTED_BYTES = 1_164
EXPECTED_RANGES = 6


def read_u32(image, address):
    return struct.unpack_from("<I", image, address - BASE)[0]


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
    selected = {
        int(address, 16) for address in MAIN_CPANNEL_TRADE_STATE_RESET_ADDRESSES
    }
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
        raise AssertionError("Unexpected CPannelTrade closure shape")

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
        raise AssertionError("In-closure direct transfers differ from fresh Ghidra")
    if boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError("Outbound direct calls differ from the audited matched boundary")
    if tail_transfers:
        raise AssertionError(f"Unexpected external tail transfers: {tail_transfers}")

    event_instructions = [
        instruction
        for start, size, _ in function_ranges[0x587B9110]
        for instruction in decode_complete(image, decoder, start, size)
    ]
    if not any(
        operand.type == X86_OP_IMM
        and (operand.imm & 0xFFFFFFFF) == TRADE_PANEL_EVENT
        for instruction in event_instructions
        for operand in instruction.operands
    ):
        raise AssertionError("Trade-panel event helper no longer embeds 0x80010D01")

    verify_matched_caller(
        image, decoder, records, matched, 0x588FC770, 0x588FC7C0, 0x588BB5E0,
    )
    verify_matched_caller(
        image, decoder, records, matched, 0x588FC770, 0x588FC7D2, 0x588BCB00,
    )
    verify_matched_caller(
        image, decoder, records, matched, 0x588FD180, 0x588FD3E7, 0x588BB5E0,
    )

    if read_u32(image, COL_POINTER_ADDRESS) != COL_ADDRESS:
        raise AssertionError("CPannelTrade vftable does not point to the expected COL")
    col = struct.unpack_from("<IIIII", image, COL_ADDRESS - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR_ADDRESS, 0x589A98C4):
        raise AssertionError(f"Unexpected CPannelTrade complete-object locator: {col}")
    if read_u32(image, VTABLE_SLOT_ADDRESS) != ROOT_ADDRESS:
        raise AssertionError("CPannelTrade vtable slot +0x08 no longer points to the root")
    name_offset = TYPE_DESCRIPTOR_ADDRESS - BASE + 8
    if image[name_offset:name_offset + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI type descriptor no longer names CPannelTrade")

    print(
        f"Main.dll CPannelTrade slot +0x08: {len(selected)} functions / "
        f"{byte_count:,} bytes across {range_count} exact Ghidra ranges; "
        f"{len(internal_transfers)} internal calls and {len(boundary_transfers)} "
        "calls to matched code; RTTI slot, matched helper callers, and exact "
        "direct-call closure pass"
    )


if __name__ == "__main__":
    main()
