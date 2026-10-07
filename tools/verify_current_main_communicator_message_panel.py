"""Verify the exact CPannelCommunicatorMessage constructor slice."""
import csv
import json
import struct
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_MOV, X86_OP_IMM

from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-communicator-message-panel-body-ranges.tsv"
)
FUNCTION = 0x5884CA60
CALLER = 0x58849B70
CALL_SITE = 0x5884A46D
CALL_TARGETS = (
    (0x5884CAAB, 0x589031A0),
    (0x5884CAC9, 0x5897CC4E),
    (0x5884CB09, 0x58731C60),
    (0x5884CB1A, 0x58731C60),
    (0x5884CB2C, 0x5897CC4E),
    (0x5884CB6C, 0x58731C60),
    (0x5884CB7D, 0x58731C60),
    (0x5884CB8F, 0x5897CC4E),
    (0x5884CBCF, 0x58731C60),
    (0x5884CBE0, 0x58731C60),
    (0x5884CBF8, 0x58902D20),
    (0x5884CC05, 0x58902CE0),
    (0x5884CC12, 0x58902D20),
    (0x5884CC1C, 0x5897CC4E),
    (0x5884CC5A, 0x58761090),
    (0x5884CC6F, 0x5897CC4E),
    (0x5884CCAD, 0x58761090),
    (0x5884CCD7, 0x58748E40),
    (0x5884CCF0, 0x58748E40),
    (0x5884CCFA, 0x5897CC4E),
    (0x5884CD55, 0x5875DDA0),
    (0x5884CD6A, 0x5897CC4E),
    (0x5884CDC5, 0x5875DDA0),
    (0x5884CDDA, 0x5897CC4E),
    (0x5884CE35, 0x5875DDA0),
    (0x5884CE4A, 0x5897CC4E),
    (0x5884CEA5, 0x5875DDA0),
    (0x5884CEBD, 0x58902D20),
    (0x5884CECA, 0x58902D20),
    (0x5884CED7, 0x58902D20),
    (0x5884CEE4, 0x58902D20),
)
EXPECTED_RANGE = (FUNCTION, 1298, 397)
MESSAGE_VTABLE = 0x5899E7F4
MESSAGE_TYPE_NAME = ".?AVCPannelCommunicatorMessage@@"


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
        raise AssertionError("CPannelCommunicatorMessage constructor is not verified")
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
        raise AssertionError("Direct CALL sites differ from fresh Ghidra's 31-call list")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("Byte-matched communicator ID-panel constructor is missing")
    caller_ranges = tuple(
        (address, address + length) for address, length in record_ranges(caller)
    )
    if not any(lo <= CALL_SITE < hi for lo, hi in caller_ranges):
        raise AssertionError("Message-panel call site is outside the matched caller body")
    call = instruction_at(image, decoder, CALL_SITE)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
        raise AssertionError("Matched ID-panel constructor no longer calls the message panel")
    store = instruction_at(image, decoder, 0x5884A480)
    if (store.id != X86_INS_MOV or len(store.operands) != 2
            or store.operands[0].type != capstone.x86.X86_OP_MEM
            or store.operands[0].mem.base != capstone.x86_const.X86_REG_ESI
            or store.operands[0].mem.disp != 0x110
            or store.operands[1].type != capstone.x86.X86_OP_REG
            or store.operands[1].reg != capstone.x86_const.X86_REG_EAX):
        raise AssertionError("Matched parent no longer stores the returned child at +0x110")

    def u32(address):
        return struct.unpack_from("<I", image, address - BASE)[0]

    if u32(MESSAGE_VTABLE - 4) == 0:
        raise AssertionError("Message-panel vtable has no RTTI complete-object locator")
    locator = u32(MESSAGE_VTABLE - 4)
    type_descriptor = u32(locator + 12)
    name_start = type_descriptor + 8 - BASE
    name_end = image.find(b"\0", name_start)
    if image[name_start:name_end].decode("ascii") != MESSAGE_TYPE_NAME:
        raise AssertionError("Message-panel vtable RTTI name changed")
    vtable_store = image[0x5884CAC3 - BASE:0x5884CAC3 - BASE + 6]
    if vtable_store != b"\xc7\x06" + struct.pack("<I", MESSAGE_VTABLE):
        raise AssertionError("Constructor no longer installs its RTTI-backed vtable")

    print(
        f"FUN_5884CA60: {size:,} byte-identical bytes / {expected_instructions} "
        f"instructions; 31 outgoing CALL targets byte-verified; matched ID-panel "
        "caller stores the child at +0x110; RTTI confirms CPannelCommunicatorMessage"
    )


if __name__ == "__main__":
    main()
