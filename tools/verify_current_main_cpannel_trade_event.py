"""Validate the RTTI-backed CPannelTrade +0x18 event-method closure."""
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_CPANNEL_TRADE_EVENT_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-cpannel-trade-event-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588B8CB0
VTABLE_ADDRESS_POINT = 0x589A0954
VTABLE_SLOT_ADDRESS = 0x589A096C
COL_POINTER_ADDRESS = 0x589A0950
COL_ADDRESS = 0x589A98B0
TYPE_DESCRIPTOR_ADDRESS = 0x589CD57C
TYPE_NAME = b".?AVCPannelTrade@@\0"
EXPECTED_FUNCTIONS = 23
EXPECTED_BYTES = 4_699
EXPECTED_RANGES = 25


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
    selected = {int(address, 16) for address in MAIN_CPANNEL_TRADE_EVENT_ADDRESSES}
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
        raise AssertionError("Unexpected CPannelTrade event closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
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
    if len(boundary_transfers) + len(tail_transfers) != 67:
        raise AssertionError("Outbound transfers to matched code differ from the audit")

    for caller, site, target in (
        (0x588B96B0, 0x588B97DB, 0x588B5DC0),
        (0x588B96B0, 0x588B9804, 0x588B5E30),
        (0x588B96B0, 0x588B9878, 0x588B5DC0),
        (0x588B96B0, 0x588B98A1, 0x588B5E30),
        (0x588B96B0, 0x588B991E, 0x588B5DC0),
        (0x588B96B0, 0x588B9949, 0x588B5E30),
        (0x588B96B0, 0x588B9B0F, 0x588B5DC0),
        (0x588B96B0, 0x588B9B30, 0x588B5E30),
        (0x588B96B0, 0x588B9E5E, 0x588BB220),
        (0x588EC5D0, 0x588EC711, 0x58779890),
        (0x588FD180, 0x588FD217, 0x588BB440),
        (0x588FD180, 0x588FD2D2, 0x588BCA40),
        (0x588FD180, 0x588FD376, 0x588BCAA0),
    ):
        verify_matched_caller(image, decoder, records, matched, caller, site, target)

    if read_u32(image, COL_POINTER_ADDRESS) != COL_ADDRESS:
        raise AssertionError("CPannelTrade vftable does not point to the expected COL")
    col = struct.unpack_from("<IIIII", image, COL_ADDRESS - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR_ADDRESS, 0x589A98C4):
        raise AssertionError(f"Unexpected CPannelTrade complete-object locator: {col}")
    if read_u32(image, VTABLE_SLOT_ADDRESS) != ROOT_ADDRESS:
        raise AssertionError("CPannelTrade vtable slot +0x18 no longer points to the root")
    if VTABLE_SLOT_ADDRESS != VTABLE_ADDRESS_POINT + 0x18:
        raise AssertionError("CPannelTrade slot address is not vtable offset +0x18")
    name_offset = TYPE_DESCRIPTOR_ADDRESS - BASE + 8
    if image[name_offset:name_offset + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI type descriptor no longer names CPannelTrade")

    print(
        f"Main.dll CPannelTrade slot +0x18: {len(selected)} functions / "
        f"{byte_count:,} bytes across {range_count} exact Ghidra ranges; "
        f"{len(boundary_transfers) + len(tail_transfers)} outbound transfers, "
        "three byte-matched caller groups, RTTI slot, and direct-call closure pass"
    )


if __name__ == "__main__":
    main()
