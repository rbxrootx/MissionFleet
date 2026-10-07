"""Verify the force-screen record refresh ranges, calls, and dispatcher route."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-force-screen-record-refresh-body-ranges.tsv"
)
FUNCTION_RANGES = {
    0x588B4980: (
        (0x588B4980, 74, 26),
        (0x588B49D0, 67, 23),
        (0x588B4A1C, 103, 33),
        (0x588B4A8C, 109, 33),
        (0x588B4B00, 281, 81),
        (0x588B4C20, 363, 105),
    ),
    0x588F3F20: ((0x588F3F20, 70, 20),),
    0x588F44D0: ((0x588F44D0, 33, 14),),
}
EXPECTED_CALLS = (
    (0x588B4A0E, 0x5897CC42),
    (0x588B4A7E, 0x5897CC42),
    (0x588B4AD2, 0x5897152E),
    (0x588B4B05, 0x5897CC4E),
    (0x588B4B24, 0x5877CC30),
    (0x588B4B43, 0x58902CE0),
    (0x588B4B73, 0x5897152E),
    (0x588B4BA2, 0x5897CC4E),
    (0x588B4BC9, 0x588E9F60),
    (0x588B4C27, 0x58908140),
    (0x588B4C33, 0x588F4500),
    (0x588B4C71, 0x58908140),
    (0x588B4C7D, 0x588F4060),
    (0x588B4C91, 0x587D8FF0),
    (0x588B4CA0, 0x587DAD80),
    (0x588B4CAA, 0x587D8F90),
    (0x588B4CB9, 0x587DAC20),
    (0x588B4CC0, 0x588E9880),
    (0x588B4CCD, 0x587DF580),
    (0x588B4CE2, 0x58908140),
    (0x588B4CEE, 0x588F41E0),
    (0x588B4D23, 0x588F44D0),
    (0x588B4D4B, 0x588F3F20),
    (0x588F44DC, 0x5877B130),
    (0x588F44E5, 0x5877B130),
)
DISPATCHER = 0x587BB700
DISPATCH_CALL = 0x587BDF0A
ROOT = 0x588B4980


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        manifest_rows = list(csv.DictReader(stream, delimiter="\t"))
    manifest_ranges = {}
    for row in manifest_rows:
        address = int(row["function"], 16)
        manifest_ranges.setdefault(address, []).append((
            int(row["start"], 16), int(row["length"]),
            int(row["instruction_count"]), int(row["instruction_bytes"]),
        ))
    expected_manifest = {
        address: tuple((start, length, count, length)
                       for start, length, count in ranges)
        for address, ranges in FUNCTION_RANGES.items()
    }
    if {key: tuple(value) for key, value in manifest_ranges.items()} != expected_manifest:
        raise AssertionError("Recorded ranges differ from the fresh Ghidra export")

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    calls = []
    total_bytes = 0
    total_instructions = 0
    for function, ranges in FUNCTION_RANGES.items():
        for start, length, expected_count in ranges:
            code = image[start - BASE:start - BASE + length]
            instructions = list(decoder.disasm(code, start))
            if (len(code) != length or len(instructions) != expected_count
                    or sum(item.size for item in instructions) != length
                    or not instructions or instructions[0].address != start
                    or instructions[-1].address + instructions[-1].size != start + length):
                raise AssertionError(f"Incomplete mapped instruction coverage at {start:08X}")
            total_bytes += length
            total_instructions += len(instructions)
            for instruction in instructions:
                if (instruction.id == X86_INS_CALL and instruction.operands
                        and instruction.operands[0].type == X86_OP_IMM):
                    calls.append((instruction.address,
                                  instruction.operands[0].imm & 0xFFFFFFFF))
    if tuple(calls) != EXPECTED_CALLS:
        raise AssertionError("Direct call sites differ from the fresh Ghidra export")
    if total_bytes != 1100 or total_instructions != 335:
        raise AssertionError("Force-screen closure totals changed")

    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(row["address"], 16): row for row in catalog["matches"]}
    matched = {
        address for address, row in records.items()
        if row.get("verified_by") == MARKER
    }
    for function, ranges in FUNCTION_RANGES.items():
        size = sum(length for _, length, _ in ranges)
        record = records.get(function)
        if (function not in inventory or int(inventory[function]["size"]) != size
                or record is None or function not in matched
                or record_ranges(record) != tuple((start, length)
                                                   for start, length, _ in ranges)):
            raise AssertionError(f"Verified catalog/inventory differs at {function:08X}")
    if any(target not in matched for _, target in EXPECTED_CALLS):
        raise AssertionError("A direct callee is not independently byte-verified")

    caller = records.get(DISPATCHER)
    caller_ranges = record_ranges(caller) if caller else ()
    if caller is None or DISPATCHER not in matched or not any(
            start <= DISPATCH_CALL < start + length
            for start, length in caller_ranges):
        raise AssertionError("Matched 0x80020D0D dispatcher call site is missing")
    call = instruction_at(image, decoder, DISPATCH_CALL)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != ROOT):
        raise AssertionError("Dispatcher no longer calls the force-screen refresh")

    print(
        "FUN_588B4980 force-screen refresh closure: 3 functions, 1,100 bytes, "
        "335 instructions in 8 fresh Ghidra ranges; 25 direct calls target "
        "verified code; matched FUN_587BB700 dispatcher call verified"
    )


if __name__ == "__main__":
    main()
