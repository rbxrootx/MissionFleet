"""Validate the installed Main.dll shell-map nearby-effect processing slice."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import (
    MAIN_SHELL_MAP_NEARBY_EFFECT_PROCESSING_ADDRESSES,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-shell-map-nearby-effect-processing-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588D3390
EXPECTED_INTERNAL_TRANSFERS = {
    0x588D35E5: 0x588DCD80,
    0x588D36DE: 0x588DC990,
    0x588DCB85: 0x588E6650,
    0x588DCB96: 0x588DC830,
}
EXPECTED_BOUNDARY_TRANSFERS = {
    (0x588D33D6, 0x588D66D0),
    (0x588D3459, 0x5873A250),
    (0x588D3551, 0x5897CC90),
    (0x588D3556, 0x5897CCA0),
    (0x588D357C, 0x5876BF80),
    (0x588D366F, 0x588DCE50),
    (0x588D36A0, 0x588DCDD0),
    (0x588D3726, 0x587E6480),
    (0x588D37D7, 0x5877ABA0),
    (0x588D37F4, 0x5877ABA0),
    (0x588D381D, 0x5897CBDA),
}
EXPECTED_MATCHED_CALLERS = {
    0x588D45EF: (0x588D4300, ROOT_ADDRESS),
    0x587F05FD: (0x587EFD60, 0x588DC990),
    0x5873F5AB: (0x5873F020, 0x588DCD80),
    0x588DE99E: (0x588DE620, 0x588DCD80),
    0x587F478C: (0x587F2DD0, 0x588E6650),
}
EXPECTED_FUNCTIONS = 5
EXPECTED_BYTES = 2131
EXPECTED_RANGES = 6


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
    instruction = next(decoder.disasm(image[address - BASE:address - BASE + 15], address), None)
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
    selected = {
        int(address, 16)
        for address in MAIN_SHELL_MAP_NEARBY_EFFECT_PROCESSING_ADDRESSES
    }
    function_ranges = read_ranges()
    if selected != set(function_ranges) or ROOT_ADDRESS not in selected:
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
        raise AssertionError("Unexpected shell-map nearby-effect closure shape")

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
        raise AssertionError("Ghidra in-closure transfers differ from mapped Main.dll")
    if boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary transfers: {boundary_transfers}"
        )

    for site, (caller_address, target) in EXPECTED_MATCHED_CALLERS.items():
        caller = records.get(caller_address)
        if caller is None or caller_address not in matched:
            raise AssertionError(f"Incoming caller {caller_address:08X} is not verified")
        if not any(
            start <= site < start + size
            for start, size in record_ranges(caller)
        ):
            raise AssertionError(f"Call site {site:08X} is outside its matched caller")
        verify_transfer(image, decoder, site, target)

    for literal in (b"MESSAGESTRING__BATTLE_MESSAGE_16\0",
                    b"MESSAGESTRING__BATTLE_MESSAGE_1\0"):
        if literal not in image:
            raise AssertionError(f"Observed message literal is missing: {literal!r}")

    print(
        f"Main.dll shell-map nearby-effect processor: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; exact direct-call closure, {len(boundary_transfers)} "
        f"matched boundary calls, and {len(EXPECTED_MATCHED_CALLERS)} matched "
        f"incoming calls pass"
    )


if __name__ == "__main__":
    main()
