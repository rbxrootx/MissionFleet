"""Validate the installed Main.dll 0x80020F02 record-consumer slice."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import MAIN_MESSAGE_80020F02_CONSUMER_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-message-80020f02-consumer-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588471E0
HELPER_ADDRESS = 0x58753E60
MATCHED_MESSAGE_HANDLER = 0x58847770
MATCHED_DISPATCHERS = (0x587BB700, 0x588C1650)
EXPECTED_INTERNAL_TRANSFERS = {0x5884765E: HELPER_ADDRESS}
EXPECTED_BOUNDARY_TRANSFERS = {
    (0x58847216, 0x58731CE0),
    (0x58847269, 0x58731CE0),
    (0x588472A4, 0x58731CE0),
    (0x588472D4, 0x58778B20),
    (0x588472ED, 0x58731CE0),
    (0x588472FC, 0x58731CE0),
    (0x588473BD, 0x58731CE0),
    (0x588473EE, 0x58755FF0),
    (0x588473FA, 0x587316C0),
    (0x58847441, 0x587316C0),
    (0x58847470, 0x587316C0),
    (0x58847483, 0x587316C0),
    (0x58847550, 0x58902D20),
    (0x58847560, 0x58902D20),
    (0x58847642, 0x58731CE0),
    (0x58847674, 0x587B9270),
    (0x588476B6, 0x58731CE0),
    (0x588476F0, 0x5897CBDA),
    (0x58753E6B, 0x587538B0),
}
EXPECTED_CALLERS = {
    0x58847A24: (MATCHED_MESSAGE_HANDLER, ROOT_ADDRESS),
    0x587BDFCB: (MATCHED_DISPATCHERS[0], MATCHED_MESSAGE_HANDLER),
    0x588C1744: (MATCHED_DISPATCHERS[1], MATCHED_MESSAGE_HANDLER),
}
EXPECTED_FUNCTIONS = 2
EXPECTED_BYTES = 1329
EXPECTED_RANGES = 2


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
    selected = {int(address, 16) for address in MAIN_MESSAGE_80020F02_CONSUMER_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges) or selected != {ROOT_ADDRESS, HELPER_ADDRESS}:
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(
        sum(size for _, size in parts) for parts in function_ranges.values()
    )
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected message-consumer closure shape")

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
                        f"Unmatched {location} call to {target:08X} "
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
        raise AssertionError("Ghidra in-closure transfer differs from mapped Main.dll")
    if boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary transfers: {boundary_transfers}"
        )

    for site, (caller_address, target) in EXPECTED_CALLERS.items():
        caller = records.get(caller_address)
        if caller is None or caller_address not in matched:
            raise AssertionError(f"Incoming caller {caller_address:08X} is not verified")
        if not any(
            start <= site < start + size
            for start, size in record_ranges(caller)
        ):
            raise AssertionError(f"Call site {site:08X} is outside its matched caller")
        verify_transfer(image, decoder, site, target)

    print(
        f"Main.dll 0x80020F02 consumer: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; exact direct-call closure, {len(boundary_transfers)} "
        f"matched boundary calls, and the matched dispatcher-to-consumer route pass"
    )


if __name__ == "__main__":
    main()
