"""Verify the numeric user-chat command ranges and matched input routes."""
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
    "config/NF2_2026/current-main-user-chat-channel-command-body-ranges.tsv"
)
FUNCTION_RANGES = {
    0x587F6C40: (
        (0x587F6C40, 757, 233),
        (0x587F6F3D, 190, 55),
    ),
    0x587B7870: ((0x587B7870, 89, 41),),
}
EXPECTED_CALLS = (
    (0x587F6D16, 0x5897CCA0),
    (0x587F6D54, 0x5874BA60),
    (0x587F6D9A, 0x587B7870),
    (0x587F6DE0, 0x5897CC48),
    (0x587F6E6A, 0x5897152E),
    (0x587F6E75, 0x5897CC48),
    (0x587F6EAC, 0x5897CD4C),
    (0x587F6EBE, 0x587B81A0),
    (0x587F6EE3, 0x5888D250),
    (0x587F6EF9, 0x5897CC48),
    (0x587F6F17, 0x5874BA60),
    (0x587F6F2A, 0x587EE240),
    (0x587F6F30, 0x5897CC42),
    (0x587F6F5F, 0x5897CC48),
    (0x587F6F81, 0x5874BA60),
    (0x587F6F94, 0x587EE240),
    (0x587F6FB7, 0x5890BD90),
    (0x587F6FD2, 0x5888D250),
    (0x587F6FDD, 0x5875F940),
    (0x587F6FEF, 0x5897CBDA),
)
MATCHED_CALLERS = (
    (0x587FC9C0, 0x587FD022, 0x587F6C40),
    (0x58890110, 0x58891BE4, 0x587B7870),
)


def c_string(image, address):
    offset = address - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"String pointer is outside Main.dll: {address:08X}")
    end = image.find(b"\0", offset, min(offset + 256, len(image)))
    if end < 0:
        raise AssertionError(f"Unterminated string at {address:08X}")
    return image[offset:end]


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        manifest_rows = list(csv.DictReader(stream, delimiter="\t"))
    actual_manifest = {}
    for row in manifest_rows:
        address = int(row["function"], 16)
        actual_manifest.setdefault(address, []).append((
            int(row["start"], 16), int(row["length"]),
            int(row["instruction_count"]), int(row["instruction_bytes"]),
        ))
    expected_manifest = {
        address: tuple((start, length, count, length)
                       for start, length, count in ranges)
        for address, ranges in FUNCTION_RANGES.items()
    }
    if {address: tuple(rows) for address, rows in actual_manifest.items()} != expected_manifest:
        raise AssertionError("Recorded ranges differ from the fresh Ghidra export")

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    calls = []
    total_bytes = 0
    total_instructions = 0
    for ranges in FUNCTION_RANGES.values():
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
        raise AssertionError("Direct calls differ from the fresh Ghidra export")
    if total_bytes != 1036 or total_instructions != 329:
        raise AssertionError("Numeric user-chat command closure totals changed")

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
    if any(target != 0x587B7870 and target not in matched
           for _, target in EXPECTED_CALLS):
        raise AssertionError("A direct callee is not independently byte-verified")

    for caller, callsite, target in MATCHED_CALLERS:
        record = records.get(caller)
        ranges = record_ranges(record) if record else ()
        if record is None or caller not in matched or not any(
                start <= callsite < start + length for start, length in ranges):
            raise AssertionError(f"Matched caller missing at {caller:08X}:{callsite:08X}")
        call = instruction_at(image, decoder, callsite)
        if (call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != target):
            raise AssertionError(f"Caller target changed at {callsite:08X}")

    slash_table_pointer = int.from_bytes(
        image[0x589CC120 - BASE:0x589CC124 - BASE], "little"
    )
    if c_string(image, slash_table_pointer) != b"/":
        raise AssertionError("The matched input handler's slash prefix changed")
    if c_string(image, 0x5898D18C) != b"%d":
        raise AssertionError("The channel-number format string changed")
    for key in (
        b"MESSAGESTRING_ENTER_USERCHAT_CHANNEL_FIRST\0",
        b"MESSAGESTRING__FORBIDDEN_WORD_INCLUDE\0",
        b"MESSAGESTRING_CHANNEL_USERCHANNEL_CHATTING\0",
    ):
        if image.find(key) < 0:
            raise AssertionError(f"Mapped localization key is missing: {key!r}")

    print(
        "FUN_587F6C40 user-chat channel command closure: 2 functions, "
        "1,036 bytes, 329 instructions in 3 fresh Ghidra ranges; 20 direct "
        "calls target verified code or the matched three-entry lookup; both "
        "matched callers and mapped slash/%d/localization evidence verified"
    )


if __name__ == "__main__":
    main()
