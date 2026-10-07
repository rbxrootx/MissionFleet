"""Verify the page-result control-menu cleanup body and its RTTI-backed caller."""
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
    "config/NF2_2026/current-main-page-result-control-menu-cleanup-body-ranges.tsv"
)
FUNCTION = 0x588092F0
EXPECTED_RANGES = (
    (0x588092F0, 397, 132),
    (0x58809480, 710, 242),
)
CALLS = ((0x5880972D, 0x58902C10),)
CALLER = 0x58809890
CALL_SITE = 0x58809893
VTABLE_SLOT = 0x5899D5F4


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual_ranges = []
    for row in rows:
        start = int(row["start"], 16)
        length = int(row["length"])
        instruction_bytes = int(row["instruction_bytes"])
        instruction_count = int(row["instruction_count"])
        if length <= 0 or instruction_bytes != length or instruction_count <= 0:
            raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
        actual_ranges.append((start, length, instruction_count))
    if (len(rows) != len(EXPECTED_RANGES)
            or any(int(row["function"], 16) != FUNCTION for row in rows)
            or tuple(actual_ranges) != EXPECTED_RANGES):
        raise AssertionError(f"Fresh Ghidra body ranges changed: {actual_ranges}")
    if sum(length for _, length, _ in actual_ranges) != 1107:
        raise AssertionError("Fresh Ghidra body ranges no longer total 1,107 bytes")

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    calls = []
    for start, length, expected_count in EXPECTED_RANGES:
        code = image[start - BASE:start - BASE + length]
        instructions = list(decoder.disasm(code, start))
        if (len(code) != length or len(instructions) != expected_count
                or sum(item.size for item in instructions) != length
                or not instructions or instructions[0].address != start
                or instructions[-1].address + instructions[-1].size != start + length):
            raise AssertionError(f"Capstone coverage/count differs at {start:08X}")
        for insn in instructions:
            if insn.id != X86_INS_CALL or not insn.operands or insn.operands[0].type != X86_OP_IMM:
                continue
            target = insn.operands[0].imm & 0xFFFFFFFF
            if not BASE <= target < image_end:
                raise AssertionError(f"CALL at {insn.address:08X} leaves Main.dll")
            calls.append((insn.address, target))
    if tuple(calls) != CALLS:
        raise AssertionError("Direct CALL sites differ from fresh Ghidra's call list")

    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(item["address"], 16): item
            for item in csv.DictReader(stream, delimiter="\t")
            if item["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    record = records.get(FUNCTION)
    if FUNCTION not in inventory or inventory[FUNCTION]["size"] != "1107":
        raise AssertionError("Inventory differs from the fresh Ghidra function size")
    if record is None or FUNCTION not in matched:
        raise AssertionError("Page-result cleanup body is not verified")
    if record_ranges(record) != tuple((start, length) for start, length, _ in EXPECTED_RANGES):
        raise AssertionError("Catalog body ranges differ from fresh Ghidra")
    for address, target in CALLS:
        if target not in matched:
            raise AssertionError(f"CALL at {address:08X} targets unverified {target:08X}")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("Byte-matched vtable slot +0x00 method is missing")
    caller_ranges = tuple(
        (address, address + length) for address, length in record_ranges(caller)
    )
    if not any(lo <= CALL_SITE < hi for lo, hi in caller_ranges):
        raise AssertionError("Cleanup call is outside the matched vtable method")
    call = instruction_at(image, decoder, CALL_SITE)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
        raise AssertionError("RTTI-backed slot method no longer calls the cleanup body")

    vtable_entry = int.from_bytes(
        image[VTABLE_SLOT - BASE:VTABLE_SLOT - BASE + 4], "little"
    )
    if vtable_entry != CALLER:
        raise AssertionError(
            f"RTTI vtable +0x00 now points to {vtable_entry:08X}, not {CALLER:08X}"
        )

    print(
        "FUN_588092F0: 1,107 byte-identical bytes / 374 instructions in two "
        "exact Ghidra ranges; direct cleanup helper byte-verified; matched "
        "RTTI vtable +0x00 method calls the cleanup body"
    )


if __name__ == "__main__":
    main()
