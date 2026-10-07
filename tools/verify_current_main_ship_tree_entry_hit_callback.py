"""Verify the exact ship-tree entry callback body and matched hit-test caller."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_MOV, X86_INS_PUSH,
    X86_OP_IMM, X86_OP_MEM, X86_OP_REG,
    X86_REG_EAX, X86_REG_ECX, X86_REG_ESI,
)

from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-ship-tree-entry-hit-callback-body-ranges.tsv"
)
FUNCTION = 0x588B1B40
CALLER = 0x588B1580
CALL_SITE = 0x588B17B4
EXPECTED_RANGES = (
    (0x588B1B40, 196, 57),
    (0x588B1C10, 265, 73),
    (0x588B1D20, 699, 201),
)
CALL_TARGETS = (
    (0x588B1B53, 0x58778AD0),
    (0x588B1B70, 0x58903290),
    (0x588B1B8A, 0x58907360),
    (0x588B1B96, 0x58907360),
    (0x588B1BA2, 0x58907360),
    (0x588B1BB1, 0x58907360),
)


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
    if sum(length for _, length, _ in actual_ranges) != 1160:
        raise AssertionError("Fresh Ghidra body ranges no longer total 1,160 bytes")

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
    if FUNCTION not in inventory or inventory[FUNCTION]["size"] != "1160":
        raise AssertionError("Inventory differs from the fresh Ghidra function size")
    if record is None or FUNCTION not in matched:
        raise AssertionError("Ship-tree entry hit callback is not verified")
    expected_record_ranges = tuple((start, length) for start, length, _ in EXPECTED_RANGES)
    if record_ranges(record) != expected_record_ranges:
        raise AssertionError("Catalog body segments differ from the fresh Ghidra ranges")

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
                raise AssertionError(f"CALL at {insn.address:08X} leaves the mapped image")
            calls.append((insn.address, target))
            if target not in matched:
                raise AssertionError(
                    f"CALL at {insn.address:08X} targets unverified function {target:08X}"
                )
    if tuple(calls) != CALL_TARGETS:
        raise AssertionError("Direct CALL sites differ from fresh Ghidra's six-call list")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("Byte-matched CPannelShipTree handler is missing")
    caller_ranges = tuple(
        (address, address + length) for address, length in record_ranges(caller)
    )
    for address in (0x588B17AC, 0x588B17AD, 0x588B17AE, CALL_SITE):
        if not any(lo <= address < hi for lo, hi in caller_ranges):
            raise AssertionError(f"Caller evidence {address:08X} is outside matched code")

    push_x = instruction_at(image, decoder, 0x588B17AC)
    push_entry = instruction_at(image, decoder, 0x588B17AD)
    set_receiver = instruction_at(image, decoder, 0x588B17AE)
    call = instruction_at(image, decoder, CALL_SITE)
    if (push_x.id != X86_INS_PUSH or len(push_x.operands) != 1
            or push_x.operands[0].type != X86_OP_REG
            or push_x.operands[0].reg != X86_REG_EAX):
        raise AssertionError("Hit-test caller no longer pushes its adjusted coordinate")
    if (push_entry.id != X86_INS_PUSH or len(push_entry.operands) != 1
            or push_entry.operands[0].type != X86_OP_REG
            or push_entry.operands[0].reg != X86_REG_ECX):
        raise AssertionError("Hit-test caller no longer pushes its indexed entry value")
    if (set_receiver.id != X86_INS_MOV or len(set_receiver.operands) != 2
            or set_receiver.operands[0].type != X86_OP_REG
            or set_receiver.operands[0].reg != X86_REG_ECX
            or set_receiver.operands[1].type != X86_OP_MEM
            or set_receiver.operands[1].mem.base != X86_REG_ESI
            or set_receiver.operands[1].mem.disp != 0x2478):
        raise AssertionError("Hit-test caller's callback receiver field changed")
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
        raise AssertionError("Matched ship-tree handler no longer calls this callback")

    print(
        "FUN_588b1b40: 1,160 byte-identical bytes / 331 instructions in three "
        "Ghidra ranges; six outgoing CALL targets byte-verified; matched "
        "CPannelShipTree handler passes the hit-tested entry and callback target"
    )


if __name__ == "__main__":
    main()
