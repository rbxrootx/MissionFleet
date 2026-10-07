"""Validate the installed client's 0x80020115 pending-state cleanup closure."""
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import (
    MAIN_EVENT_80020115_PENDING_STATE_CLEANUP_ADDRESSES,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = (
    ROOT
    / "config/NF2_2026/main-event-80020115-pending-state-cleanup-body-ranges.tsv"
)
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587CF530
EVENT_ID = 0x80020115
EVENT_CASE = 0x587BCA1B
DISPATCH_TABLE = 0x587C1D30
DISPATCH_ADD = 0x7FFDFEEE
INCOMING_TRANSFERS = {
    0x587BB700: (
        (0x587BCA99, 0x587D0AA0),
        (0x587BCAA4, ROOT_ADDRESS),
    ),
    0x587D51D0: ((0x587D52F1, 0x587D02B0),),
}
CALLER_INSTRUCTIONS = {
    0x587BC9F5: ("cmp", "eax, 0x8002040a"),
    0x587BC9FA: ("ja", "0x587bd785"),
    0x587BCA06: ("add", "eax, 0x7ffdfeee"),
    0x587BCA0B: ("cmp", "eax, 0xb"),
    0x587BCA0E: ("ja", "0x587c145d"),
    0x587BCA14: ("jmp", "dword ptr [eax*4 + 0x587c1d30]"),
    0x587BCA1B: ("cmp", "word ptr [ebp + 0xa], 0xa"),
    0x587BCA20: ("jne", "0x587c145d"),
    0x587BCA93: ("mov", "ecx, dword ptr [0x58a245a0]"),
    0x587BCA9E: ("mov", "ecx, dword ptr [0x58a245a0]"),
}
EXPECTED_INTERNAL_TRANSFERS = {
    0x5874AB12: 0x5874AA70,
    0x5874AB23: 0x5874A9B0,
    0x5874AE7C: 0x58796C80,
    0x5874AEC9: 0x587D02B0,
    0x5874B02E: 0x5874AAE0,
    0x5874B05F: 0x5874ADD0,
    0x5874B0F4: 0x5874AE20,
    0x587CF552: 0x58789710,
    0x587CF564: 0x5874B0E0,
    0x587D0319: 0x587CF190,
    0x587D031E: 0x587CF0A0,
    0x587D0323: 0x587CF450,
    0x587D032F: 0x587CF280,
    0x587D0334: 0x587CF450,
    0x587D034E: 0x587CF450,
    0x587D0353: 0x587CF280,
    0x587D0358: 0x587CF370,
}
EXPECTED_FUNCTIONS = 15
EXPECTED_BYTES = 2831
EXPECTED_RANGES = 17
EXPECTED_BOUNDARY_TRANSFERS = 28


def read_ranges():
    ranges = {}
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            if size <= 0 or int(row["instruction_bytes"]) != size:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            if int(row["instruction_count"]) <= 0:
                raise AssertionError(f"Empty Ghidra instruction range: {row}")
            ranges.setdefault(address, []).append((start, size))
    return {address: tuple(parts) for address, parts in ranges.items()}


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


def instruction_at(image, decoder, address):
    code = image[address - BASE:address - BASE + 15]
    instruction = next(decoder.disasm(code, address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def verify_transfer(image, decoder, site, target):
    actual = instruction_at(image, decoder, site)
    if (
        actual.id != X86_INS_CALL
        or not actual.operands
        or actual.operands[0].type != X86_OP_IMM
        or (actual.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed call at {site:08X}; expected {target:08X}")


def verify_matched_caller(image, decoder, records, matched, caller_address, transfers):
    caller = records.get(caller_address)
    if caller is None or caller_address not in matched:
        raise AssertionError(f"Incoming caller {caller_address:08X} is not byte-verified")
    caller_ranges = record_ranges(caller)
    for site, target in transfers:
        if not any(start <= site < start + size for start, size in caller_ranges):
            raise AssertionError(f"Callsite {site:08X} is outside its matched caller")
        verify_transfer(image, decoder, site, target)


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
        address
        for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    selected = {
        int(address, 16)
        for address in MAIN_EVENT_80020115_PENDING_STATE_CLEANUP_ADDRESSES
    }
    function_ranges = read_ranges()
    if selected != set(function_ranges):
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(
        sum(size for _, size in parts) for parts in function_ranges.values()
    )
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or ROOT_ADDRESS not in selected
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected event-cleanup closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    internal_transfers = {}
    boundary_transfers = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        expected_ranges = function_ranges[address]
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified function {address:08X}")
        if (
            int(record["size"]) != int(row["size"])
            or sum(size for _, size in expected_ranges) != int(row["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            for instruction in decode_complete(image, decoder, start, size):
                if (
                    instruction.id != X86_INS_CALL
                    and not instruction.group(CS_GRP_JUMP)
                ) or not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if not BASE <= target < image_end:
                    continue
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                    internal_transfers[instruction.address] = target
                elif target in matched:
                    boundary_transfers.add((instruction.address, target))
                else:
                    raise AssertionError(
                        f"Unmatched external transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(
            f"Not the exact direct-call closure: {sorted(selected - reachable)}"
        )
    if internal_transfers != EXPECTED_INTERNAL_TRANSFERS:
        raise AssertionError("Fresh Ghidra internal transfers disagree with mapped code")
    if len(boundary_transfers) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary-transfer count: {len(boundary_transfers)}"
        )

    for address, (mnemonic, operands) in CALLER_INSTRUCTIONS.items():
        actual = instruction_at(image, decoder, address)
        if actual.mnemonic != mnemonic or actual.op_str != operands:
            raise AssertionError(
                f"Changed event-dispatch instruction at {address:08X}: "
                f"{actual.mnemonic} {actual.op_str}"
            )
    dispatch_index = (EVENT_ID + DISPATCH_ADD) & 0xFFFFFFFF
    if dispatch_index != 3:
        raise AssertionError("The audited event no longer maps to dispatch index 3")
    table_offset = DISPATCH_TABLE - BASE + dispatch_index * 4
    if DISPATCH_TABLE + dispatch_index * 4 + 4 > image_end:
        raise AssertionError("The event jump-table entry is outside the mapped image")
    if struct.unpack_from("<I", image, table_offset)[0] != EVENT_CASE:
        raise AssertionError("The 0x80020115 jump-table entry changed")

    for caller, transfers in INCOMING_TRANSFERS.items():
        verify_matched_caller(image, decoder, records, matched, caller, transfers)

    print(
        f"Main.dll event 0x80020115 pending-state cleanup: "
        f"{len(selected)} functions / {byte_count:,} bytes ObjDiff-identical "
        f"across {range_count} exact Ghidra ranges; the event jump-table route, "
        f"two matched callers, {len(internal_transfers)} in-closure transfers, "
        f"and {len(boundary_transfers)} verified boundary transfers pass"
    )


if __name__ == "__main__":
    main()
