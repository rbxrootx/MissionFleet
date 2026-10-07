"""Verify the private-chat recipient parser, mode updater, and matched caller."""
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
    "config/NF2_2026/current-main-chat-private-recipient-body-ranges.tsv"
)
FUNCTION_RANGES = {
    0x587F59F0: (
        (0x587F59F0, 89, 25),
        (0x587F5A50, 791, 213),
        (0x587F5D70, 141, 48),
        (0x587F5E00, 170, 61),
        (0x587F5EAF, 34, 11),
    ),
    0x587EE240: ((0x587EE240, 120, 32),),
}
CALLS = (
    (0x587F5A1D, 0x5897CC48),
    (0x587F5AE0, 0x5897CC48),
    (0x587F5B26, 0x5897152E),
    (0x587F5B39, 0x5897CC48),
    (0x587F5BC9, 0x5897CD4C),
    (0x587F5E8D, 0x587B8110),
    (0x587F5E9F, 0x587EE240),
    (0x587F5EA5, 0x5897CC42),
    (0x587F5EB3, 0x5875F940),
    (0x587F5EC5, 0x5897CBDA),
    (0x587EE25C, 0x5875F940),
    (0x587EE268, 0x5888CDF0),
)
CALLER = 0x587FC9C0
CALL_SITE = 0x587FD6B9
WHISPER_PREFIX_POINTERS = (
    (0x589CC0E8, b"/w"),
    (0x589CC0EC, b"/whisper"),
)


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual = {}
    for row in rows:
        function = int(row["function"], 16)
        actual.setdefault(function, []).append((
            int(row["start"], 16),
            int(row["length"]),
            int(row["instruction_count"]),
        ))
        if (int(row["length"]) <= 0
                or int(row["instruction_bytes"]) != int(row["length"])):
            raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
    actual = {function: tuple(ranges) for function, ranges in actual.items()}
    if actual != FUNCTION_RANGES:
        raise AssertionError(f"Fresh Ghidra ranges/counts changed: {actual}")

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    actual_calls = []
    for function, ranges in FUNCTION_RANGES.items():
        function_calls = []
        for start, length, expected_count in ranges:
            code = image[start - BASE:start - BASE + length]
            instructions = list(decoder.disasm(code, start))
            if (len(code) != length or len(instructions) != expected_count
                    or sum(item.size for item in instructions) != length
                    or not instructions or instructions[0].address != start
                    or instructions[-1].address + instructions[-1].size != start + length):
                raise AssertionError(f"Capstone coverage/count differs at {start:08X}")
            for insn in instructions:
                if (insn.id != X86_INS_CALL or not insn.operands
                        or insn.operands[0].type != X86_OP_IMM):
                    continue
                target = insn.operands[0].imm & 0xFFFFFFFF
                if not BASE <= target < image_end:
                    raise AssertionError(f"CALL at {insn.address:08X} leaves Main.dll")
                function_calls.append((insn.address, target))
        actual_calls.extend(function_calls)
    if tuple(actual_calls) != CALLS:
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
    for function, ranges in FUNCTION_RANGES.items():
        record = records.get(function)
        expected_ranges = tuple((start, length) for start, length, _ in ranges)
        expected_size = sum(length for _, length, _ in ranges)
        if function not in inventory or int(inventory[function]["size"]) != expected_size:
            raise AssertionError(f"Inventory differs from Ghidra for {function:08X}")
        if record is None or function not in matched:
            raise AssertionError(f"Function {function:08X} is not verified byte-identical")
        if record_ranges(record) != expected_ranges:
            raise AssertionError(f"Catalog ranges differ from Ghidra for {function:08X}")
    for address, target in CALLS:
        if target not in matched:
            raise AssertionError(f"CALL at {address:08X} targets unverified {target:08X}")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("Byte-matched chat input handler is missing")
    caller_ranges = tuple(
        (address, address + length) for address, length in record_ranges(caller)
    )
    if not any(lo <= CALL_SITE < hi for lo, hi in caller_ranges):
        raise AssertionError("Whisper dispatch call is outside the matched input handler")
    call = instruction_at(image, decoder, CALL_SITE)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != 0x587F59F0):
        raise AssertionError("Matched input handler no longer calls the recipient parser")

    for pointer_slot, expected in WHISPER_PREFIX_POINTERS:
        offset = pointer_slot - BASE
        pointer = int.from_bytes(image[offset:offset + 4], "little")
        text = image[pointer - BASE:pointer - BASE + len(expected) + 1]
        if text != expected + b"\0":
            raise AssertionError(f"Mapped chat prefix changed at {pointer_slot:08X}")

    print(
        "FUN_587F59F0 + FUN_587EE240: 1,345 byte-identical bytes / "
        "390 instructions in six exact Ghidra ranges; twelve direct CALL "
        "targets byte-verified; matched FUN_587FC9C0 dispatches /w and "
        "/whisper to the parser"
    )


if __name__ == "__main__":
    main()
