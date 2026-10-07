"""Verify the CPageFactory_ControlMenuScreen destructor cleanup closure."""
import csv
import json
import struct
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-control-menu-destructor-body-ranges.tsv"
)
FUNCTION_RANGES = {
    0x587D7000: (1230, 422),
    0x587D6740: (238, 88),
}
EXPECTED_CALLS = (
    (0x587D70DB, 0x587D6740),
    (0x587D74B5, 0x58902C10),
)
VTABLE_SLOT = 0x5899B824
VTABLE_WRAPPER = 0x587DA7D0
WRAPPER_CALLSITE = 0x587DA7D3


def main():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        manifest = list(csv.DictReader(stream, delimiter="\t"))
    actual_ranges = []
    for row in manifest:
        address = int(row["function"], 16)
        actual_ranges.append((
            address, int(row["start"], 16), int(row["length"]),
            int(row["instruction_bytes"]), int(row["instruction_count"]),
        ))
    expected_ranges = tuple(
        (address, address, length, length, instruction_count)
        for address, (length, instruction_count) in sorted(FUNCTION_RANGES.items())
    )
    if tuple(actual_ranges) != expected_ranges:
        raise AssertionError(f"Fresh Ghidra body ranges changed: {actual_ranges}")

    image = IMAGE_PATH.read_bytes()
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, record in records.items()
               if record.get("verified_by") == MARKER}

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    calls = []
    for address, (size, expected_count) in FUNCTION_RANGES.items():
        if (address not in inventory or int(inventory[address]["size"]) != size
                or address not in matched):
            raise AssertionError(f"Verified inventory entry missing at {address:08X}")
        record = records.get(address)
        if record is None or record_ranges(record) != ((address, size),):
            raise AssertionError(f"Verified match range changed at {address:08X}")
        code = image[address - BASE:address - BASE + size]
        instructions = list(decoder.disasm(code, address))
        if (len(code) != size or len(instructions) != expected_count
                or sum(insn.size for insn in instructions) != size
                or not instructions or instructions[0].address != address
                or instructions[-1].address + instructions[-1].size
                != address + size):
            raise AssertionError(f"Mapped instruction coverage changed at {address:08X}")
        for insn in instructions:
            if (insn.id == X86_INS_CALL and insn.operands
                    and insn.operands[0].type == X86_OP_IMM):
                calls.append((insn.address, insn.operands[0].imm & 0xFFFFFFFF))
    if tuple(sorted(calls)) != EXPECTED_CALLS:
        raise AssertionError("Direct cleanup callsites differ from fresh Ghidra")
    if any(target not in matched for _, target in EXPECTED_CALLS):
        raise AssertionError("A direct callee is not independently byte-verified")

    wrapper = records.get(VTABLE_WRAPPER)
    if wrapper is None or VTABLE_WRAPPER not in matched:
        raise AssertionError("The vtable's slot +0x00 wrapper is not verified")
    if not any(start <= WRAPPER_CALLSITE < start + length
               for start, length in record_ranges(wrapper)):
        raise AssertionError("The wrapper callsite is outside verified code")
    call = instruction_at(image, decoder, WRAPPER_CALLSITE)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != 0x587D7000):
        raise AssertionError("The verified vtable wrapper no longer calls the cleanup body")
    vtable_entry = struct.unpack_from("<I", image, VTABLE_SLOT - BASE)[0]
    if vtable_entry != VTABLE_WRAPPER:
        raise AssertionError("CPageFactory_ControlMenuScreen slot +0x00 changed")

    print(
        "CPageFactory_ControlMenuScreen cleanup closure: 2 functions, 1,468 "
        "bytes, 510 instructions in two fresh Ghidra ranges; both direct callees "
        "are verified; vtable slot +0x00 reaches the byte-matched cleanup body"
    )


if __name__ == "__main__":
    main()
