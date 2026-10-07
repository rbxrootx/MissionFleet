"""Verify FUN_5880B810 against fresh Ghidra ranges and its matched callers."""
import csv
import json
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import (
    CURRENT_MAIN_MASKED_RECORD_PARAMETER_HELPER_ADDRESSES,
)
from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-masked-record-parameter-helper-body-ranges.tsv"
FUNCTION = 0x5880B810
MATCHED_CALLER = 0x5880D270
CALL_SITES = (0x5880D80B, 0x5880D831, 0x5880D83E)
EXPECTED_RANGE = (0x5880B810, 1738, 491)
EXPECTED_RELOCATIONS = 32


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        manifest_rows = list(csv.DictReader(stream, delimiter="\t"))
    if len(manifest_rows) != 1:
        raise AssertionError("Expected one fresh Ghidra body range")
    row = manifest_rows[0]
    manifest_range = (
        int(row["start"], 16), int(row["length"]), int(row["instruction_count"])
    )
    if (int(row["function"], 16), manifest_range[0]) != (FUNCTION, FUNCTION):
        raise AssertionError("Fresh Ghidra range does not start at FUN_5880B810")
    if manifest_range != EXPECTED_RANGE or int(row["instruction_bytes"]) != EXPECTED_RANGE[1]:
        raise AssertionError(f"Unexpected fresh Ghidra body range: {manifest_range}")

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
    selected = {int(item, 16) for item in CURRENT_MAIN_MASKED_RECORD_PARAMETER_HELPER_ADDRESSES}
    if selected != {FUNCTION}:
        raise AssertionError("Unexpected masked-record helper address set")

    function_row = inventory.get(FUNCTION)
    function_record = records.get(FUNCTION)
    if function_row is None or function_record is None or FUNCTION not in matched:
        raise AssertionError("FUN_5880B810 is not recorded as byte-verified")
    if int(function_row["size"]) != EXPECTED_RANGE[1]:
        raise AssertionError("Inventory size differs from the fresh Ghidra body")
    if record_ranges(function_record) != ((FUNCTION, EXPECTED_RANGE[1]),):
        raise AssertionError("Catalog body range differs from fresh Ghidra")
    relocations = (function_record.get("relocations", []) if not function_record.get("segments")
                   else [relocation for segment in function_record["segments"]
                         for relocation in segment.get("relocations", [])])
    if len(relocations) != EXPECTED_RELOCATIONS:
        raise AssertionError("Expected all 32 mapped operand targets in the catalog")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    start, size, expected_instructions = EXPECTED_RANGE
    code = image[start - BASE:start - BASE + size]
    if len(code) != size:
        raise AssertionError("Fresh Ghidra body range is outside the mapped image")
    instructions = list(decoder.disasm(code, start))
    if (len(instructions) != expected_instructions
            or sum(item.size for item in instructions) != size
            or not instructions or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError("Capstone coverage/count differs from fresh Ghidra")

    for insn in instructions:
        if ((insn.id != X86_INS_CALL and not insn.group(CS_GRP_JUMP))
                or not insn.operands or insn.operands[0].type != X86_OP_IMM):
            continue
        target = insn.operands[0].imm & 0xFFFFFFFF
        if BASE <= target < image_end and not start <= target < start + size:
            raise AssertionError(
                f"Unexpected direct transfer out of FUN_5880B810 at {insn.address:08X}"
            )

    caller_record = records.get(MATCHED_CALLER)
    if caller_record is None or MATCHED_CALLER not in matched:
        raise AssertionError("Byte-matched FUN_5880D270 caller is missing")
    caller_ranges = tuple(
        (address, address + length) for address, length in record_ranges(caller_record)
    )
    for site in CALL_SITES:
        insn = instruction_at(image, decoder, site)
        if (insn.id != X86_INS_CALL or not insn.operands
                or insn.operands[0].type != X86_OP_IMM
                or (insn.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
            raise AssertionError(f"Matched updater no longer calls FUN_5880B810 at {site:08X}")
        if not any(lo <= site < hi for lo, hi in caller_ranges):
            raise AssertionError(f"Caller site {site:08X} is outside matched FUN_5880D270")

    print(
        f"FUN_5880B810: {size:,} byte-identical bytes, {expected_instructions} "
        f"instructions in the fresh Ghidra range; 32 mapped operands verified; "
        f"three CALL sites in byte-matched FUN_5880D270 pass"
    )


if __name__ == "__main__":
    main()
