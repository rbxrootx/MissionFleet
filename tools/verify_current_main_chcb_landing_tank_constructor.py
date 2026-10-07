"""Verify the exact CHCB_LandingTank constructor slice and original caller."""
import csv
import json
import struct
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_CMP, X86_INS_JL, X86_INS_MOV,
    X86_OP_IMM, X86_OP_MEM, X86_OP_REG,
    X86_REG_EAX, X86_REG_EBX, X86_REG_EDI,
)

from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-chcb-landing-tank-constructor-body-ranges.tsv"
)
FUNCTION = 0x58782810
CALLER = 0x588E05C0
CALL_SITE = 0x588E378F
CALL_TARGETS = (
    (0x5878285B, 0x589031A0),
    (0x5878288C, 0x5897CC4E),
    (0x587828B3, 0x589031A0),
    (0x587828D6, 0x58902D20),
    (0x587828F2, 0x5897CC4E),
    (0x58782919, 0x589031A0),
    (0x5878294E, 0x58902D20),
    (0x58782963, 0x5897CC4E),
    (0x587829CB, 0x589031A0),
    (0x58782A1C, 0x58902D20),
    (0x58782A82, 0x5897CC4E),
    (0x58782AE0, 0x589031A0),
    (0x58782B54, 0x5897CC4E),
    (0x58782BA2, 0x589031A0),
    (0x58782C00, 0x58902D20),
    (0x58782C0A, 0x5897CC4E),
    (0x58782C22, 0x587B7350),
    (0x58782C42, 0x5897CC4E),
    (0x58782C5A, 0x587B7350),
    (0x58782C7C, 0x5897CC4E),
    (0x58782CB4, 0x587B7350),
    (0x58782CC5, 0x58782790),
)
EXPECTED_RANGE = (FUNCTION, 1234, 379)
VTABLE = 0x58996A68
RTTI_LOCATOR = 0x589A5EF4
TYPE_DESCRIPTOR = 0x589C2D70
TYPE_NAME = ".?AVCHCB_LandingTank@@"
KNOWN_VTABLE_METHOD = 0x58782CF0


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    if len(rows) != 1:
        raise AssertionError("Expected one fresh Ghidra body range")
    row = rows[0]
    body = (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
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
        raise AssertionError("CHCB_LandingTank constructor is not verified")
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
        raise AssertionError("Direct CALL sites differ from fresh Ghidra's 22-call list")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("Byte-matched CShip_MapObjectScreen constructor is missing")
    caller_ranges = tuple(
        (address, address + length) for address, length in record_ranges(caller)
    )
    if not any(lo <= CALL_SITE < hi for lo, hi in caller_ranges):
        raise AssertionError("Landing-tank call site is outside the matched map-screen body")
    call = instruction_at(image, decoder, CALL_SITE)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
        raise AssertionError("Matched map-screen constructor no longer calls this constructor")
    store = instruction_at(image, decoder, 0x588E3798)
    if (store.id != X86_INS_MOV or len(store.operands) != 2
            or store.operands[0].type != X86_OP_MEM
            or store.operands[0].mem.base != X86_REG_EBX
            or store.operands[0].mem.disp != 0
            or store.operands[1].type != X86_OP_REG
            or store.operands[1].reg != X86_REG_EAX):
        raise AssertionError("Matched map-screen caller no longer stores the child pointer")
    limit = instruction_at(image, decoder, 0x588E379E)
    branch = instruction_at(image, decoder, 0x588E37A6)
    if (limit.id != X86_INS_CMP or len(limit.operands) != 2
            or limit.operands[0].type != X86_OP_REG
            or limit.operands[0].reg != X86_REG_EDI
            or limit.operands[1].type != X86_OP_IMM
            or limit.operands[1].imm != 8
            or branch.id != X86_INS_JL or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != 0x588E3729):
        raise AssertionError("Matched caller's eight-entry construction loop changed")

    def u32(address):
        return struct.unpack_from("<I", image, address - BASE)[0]

    if u32(VTABLE - 4) != RTTI_LOCATOR or u32(RTTI_LOCATOR + 12) != TYPE_DESCRIPTOR:
        raise AssertionError("CHCB_LandingTank vtable RTTI links changed")
    name_start = TYPE_DESCRIPTOR + 8 - BASE
    name_end = image.find(b"\x00", name_start)
    if name_end < name_start or image[name_start:name_end].decode("ascii") != TYPE_NAME:
        raise AssertionError("CHCB_LandingTank RTTI class name changed")
    if image[0x58782874 - BASE:0x58782874 - BASE + 6] != (
            b"\xc7\x07" + struct.pack("<I", VTABLE)):
        raise AssertionError("Constructor no longer installs the RTTI-backed vtable")
    if u32(VTABLE + 0x0C) != KNOWN_VTABLE_METHOD or KNOWN_VTABLE_METHOD not in matched:
        raise AssertionError("Known CHCB_LandingTank vtable +0x0C method changed")

    print(
        f"FUN_58782810: {size:,} byte-identical bytes / {expected_instructions} "
        "instructions; 22 outgoing CALL targets byte-verified; matched map-screen "
        "caller stores it in its eight-entry loop; RTTI confirms CHCB_LandingTank"
    )


if __name__ == "__main__":
    main()
