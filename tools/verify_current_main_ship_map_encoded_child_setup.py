"""Verify the exact ship-map encoded child-state setup body and caller."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_MOV, X86_INS_PUSH,
    X86_OP_IMM, X86_OP_MEM, X86_OP_REG,
    X86_REG_EAX, X86_REG_ECX, X86_REG_ESP, X86_REG_ESI,
)

from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-ship-map-selected-entry-setup-body-ranges.tsv"
)
FUNCTION = 0x588D6EA0
CALLER = 0x588E05C0
CALL_SITE = 0x588E2FA4
EXPECTED_RANGE = (FUNCTION, 1202, 330)
CALL_TARGETS = (
    (0x588D6EEF, 0x58907360),
    (0x588D6F15, 0x58903290),
    (0x588D6FAD, 0x58903290),
    (0x588D701F, 0x58903290),
    (0x588D702B, 0x58907360),
    (0x588D706F, 0x58903290),
    (0x588D70E1, 0x58903290),
    (0x588D70ED, 0x58907360),
    (0x588D712E, 0x58903290),
    (0x588D71A0, 0x58903290),
    (0x588D71AC, 0x58907360),
    (0x588D71ED, 0x58903290),
    (0x588D725F, 0x58903290),
    (0x588D726B, 0x58907360),
    (0x588D72AC, 0x58903290),
    (0x588D731E, 0x58903290),
    (0x588D732A, 0x58907360),
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
    if FUNCTION not in inventory or inventory[FUNCTION]["size"] != str(EXPECTED_RANGE[1]):
        raise AssertionError("Inventory differs from the fresh Ghidra function size")
    if record is None or FUNCTION not in matched:
        raise AssertionError("Ship-map encoded child setup is not verified")
    if record_ranges(record) != ((FUNCTION, EXPECTED_RANGE[1]),):
        raise AssertionError("Catalog body range differs from the fresh Ghidra range")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    start, size, expected_instructions = EXPECTED_RANGE
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (len(code) != size or len(instructions) != expected_instructions
            or sum(item.size for item in instructions) != size
            or not instructions or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError("Capstone coverage/count differs from the fresh Ghidra body")

    calls = []
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
        raise AssertionError("Direct CALL sites differ from fresh Ghidra's 17-call list")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("Byte-matched CShip_MapObjectScreen constructor is missing")
    caller_ranges = tuple(
        (address, address + length) for address, length in record_ranges(caller)
    )
    for address in (0x588E2F97, 0x588E2F9B, 0x588E2FA1, 0x588E2FA2, CALL_SITE):
        if not any(lo <= address < hi for lo, hi in caller_ranges):
            raise AssertionError(f"Caller evidence {address:08X} is outside matched code")

    load_stack_value = instruction_at(image, decoder, 0x588E2F97)
    load_encoded_value = instruction_at(image, decoder, 0x588E2F9B)
    push_argument = instruction_at(image, decoder, 0x588E2FA1)
    set_receiver = instruction_at(image, decoder, 0x588E2FA2)
    call = instruction_at(image, decoder, CALL_SITE)
    if (load_stack_value.id != X86_INS_MOV or len(load_stack_value.operands) != 2
            or load_stack_value.operands[0].type != X86_OP_REG
            or load_stack_value.operands[0].reg != X86_REG_EAX
            or load_stack_value.operands[1].type != X86_OP_MEM
            or load_stack_value.operands[1].mem.base != X86_REG_ESP
            or load_stack_value.operands[1].mem.disp != 0x2C):
        raise AssertionError("Caller no longer loads the encoded-value object from [ESP+0x2C]")
    if (load_encoded_value.id != X86_INS_MOV or len(load_encoded_value.operands) != 2
            or load_encoded_value.operands[0].type != X86_OP_REG
            or load_encoded_value.operands[0].reg != X86_REG_ECX
            or load_encoded_value.operands[1].type != X86_OP_MEM
            or load_encoded_value.operands[1].mem.base != X86_REG_EAX
            or load_encoded_value.operands[1].mem.disp != 0x110):
        raise AssertionError("Caller no longer loads the encoded value from object +0x110")
    if (push_argument.id != X86_INS_PUSH or len(push_argument.operands) != 1
            or push_argument.operands[0].type != X86_OP_REG
            or push_argument.operands[0].reg != X86_REG_ECX):
        raise AssertionError("Caller no longer passes the loaded value on the stack")
    if (set_receiver.id != X86_INS_MOV or len(set_receiver.operands) != 2
            or set_receiver.operands[0].type != X86_OP_REG
            or set_receiver.operands[0].reg != X86_REG_ECX
            or set_receiver.operands[1].type != X86_OP_REG
            or set_receiver.operands[1].reg != X86_REG_ESI):
        raise AssertionError("Caller no longer sets the screen receiver in ECX")
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
        raise AssertionError("Matched map-screen constructor no longer calls this helper")

    print(
        f"FUN_588d6ea0: {size:,} byte-identical bytes / {expected_instructions} "
        "instructions; 17 outgoing CALL targets byte-verified; matched "
        "CShip_MapObjectScreen caller passes its +0x110 value in the original "
        "thiscall sequence"
    )


if __name__ == "__main__":
    main()
