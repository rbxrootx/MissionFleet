"""Verify the encoded type-0x06 child-state helper and its caller evidence."""
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
    "config/NF2_2026/current-main-type-06-child-state-helper-body-ranges.tsv"
)
FUNCTION = 0x587B4910
EXPECTED_RANGE = (FUNCTION, 123, 33)
CALL_TARGETS = (
    (0x587B4973, 0x587A15E0),
    (0x587B4982, 0x587A15E0),
)
CALLERS = (
    (0x587B4A30, 0x587B4ADB, True),
    (0x588DEB30, 0x588DEE55, True),
    (0x587A74C0, 0x587A7550, False),
)


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    if len(rows) != 1:
        raise AssertionError("Expected one fresh Ghidra body range")
    row = rows[0]
    body = (int(row["start"], 16), int(row["length"]),
            int(row["instruction_count"]))
    if (int(row["function"], 16), body, int(row["instruction_bytes"])) != (
            FUNCTION, EXPECTED_RANGE, EXPECTED_RANGE[1]):
        raise AssertionError(f"Fresh Ghidra body range changed: {row}")

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(item["address"], 16): item
            for item in csv.DictReader(stream, delimiter="\t")
            if item["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    record = records.get(FUNCTION)
    if (FUNCTION not in inventory
            or inventory[FUNCTION]["size"] != str(EXPECTED_RANGE[1])):
        raise AssertionError("Inventory differs from the fresh Ghidra function size")
    if record is None or FUNCTION not in matched:
        raise AssertionError("Type-0x06 child-state helper is not verified")
    if record_ranges(record) != ((FUNCTION, EXPECTED_RANGE[1]),):
        raise AssertionError("Catalog body range differs from fresh Ghidra")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    start, size, expected_instructions = EXPECTED_RANGE
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (len(code) != size or len(instructions) != expected_instructions
            or sum(item.size for item in instructions) != size
            or not instructions or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError("Capstone coverage/count differs from fresh Ghidra")
    calls = []
    for insn in instructions:
        if (insn.id == X86_INS_CALL and insn.operands
                and insn.operands[0].type == X86_OP_IMM):
            calls.append((insn.address, insn.operands[0].imm & 0xFFFFFFFF))
    if tuple(calls) != CALL_TARGETS:
        raise AssertionError("Direct CALL sites differ from fresh Ghidra")
    if any(target not in matched for _, target in CALL_TARGETS):
        raise AssertionError("An outgoing call target is not independently verified")

    for caller_address, call_site, should_be_matched in CALLERS:
        caller = records.get(caller_address)
        is_matched = caller_address in matched
        if is_matched != should_be_matched:
            raise AssertionError(
                f"Caller verification state changed for {caller_address:08X}"
            )
        if should_be_matched:
            if caller is None:
                raise AssertionError(f"Matched caller record missing at {caller_address:08X}")
            if not any(start <= call_site < start + length
                       for start, length in record_ranges(caller)):
                raise AssertionError(
                    f"Matched caller site is outside verified code: {call_site:08X}"
                )
        call = instruction_at(image, decoder, call_site)
        if (call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
            raise AssertionError(f"Incoming call target changed at {call_site:08X}")

    print(
        "FUN_587B4910 type-0x06 child-state helper: 1 function, 123 bytes, "
        "33 instructions in one fresh Ghidra range; both outgoing calls target "
        "verified code; two matched callers and one unmatched caller verified"
    )


if __name__ == "__main__":
    main()
