"""Audit the ManageFleetTab event-dispatch byte-match closure."""
import csv
import json
import struct
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_JMP, X86_INS_MOV, X86_OP_IMM, X86_OP_MEM,
)

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTION_RANGES = {
    0x58835F70: ((0x58835F70, 0x58A), (0x58836500, 0x3F4)),
    0x587A8520: ((0x587A8520, 0x3F),),
    0x587B6BE0: ((0x587B6BE0, 0x74),),
    0x587B6C60: ((0x587B6C60, 0xAE),),
    0x587B9400: ((0x587B9400, 0x20),),
    0x587B9420: ((0x587B9420, 0x20),),
    0x587B94A0: ((0x587B94A0, 0x32),),
    0x587BA070: ((0x587BA070, 0x2E),),
    0x587BA9E0: ((0x587BA9E0, 0x75),),
    0x587C8190: ((0x587C8190, 0x0D),),
    0x587C8910: ((0x587C8910, 0x44),),
    0x58834030: ((0x58834030, 0xE6),),
    0x58834520: ((0x58834520, 0xF6),),
    0x58834B00: ((0x58834B00, 0x2B),),
    0x58835B30: ((0x58835B30, 0x28), (0x58835B60, 0xE6)),
}

OPEN_CALLS = {
    (0x58835F70, 0x58835FBB, 0x587B6C60),
    (0x58835F70, 0x5883605E, 0x587B6BE0),
    (0x58835F70, 0x58836135, 0x58834520),
    (0x58835F70, 0x58836173, 0x58834520),
    (0x58835F70, 0x588361E8, 0x58835B30),
    (0x58835F70, 0x58836262, 0x58834030),
    (0x58835F70, 0x58836345, 0x587C8190),
    (0x58835F70, 0x5883636C, 0x587C8910),
    (0x58835F70, 0x588363CB, 0x587C8190),
    (0x58835F70, 0x588363F2, 0x587C8910),
    (0x58835F70, 0x58836530, 0x58834B00),
    (0x58835F70, 0x5883659B, 0x587A8520),
    (0x58835F70, 0x588365F8, 0x587B9400),
    (0x58835F70, 0x588366D1, 0x587BA9E0),
    (0x58835F70, 0x588367A2, 0x587B9420),
    (0x58835F70, 0x588367CA, 0x587B94A0),
    (0x58835F70, 0x58836819, 0x587BA070),
}

VTABLE_ADDRESS = 0x5899E1D4
VTABLE_SLOT_ADDRESS = VTABLE_ADDRESS + 0x18
ROOT_ADDRESS = 0x58835F70
VERIFIED_CONSTRUCTOR = 0x58836B90
VTABLE_WRITES = (0x58836BFF, 0x58834C2B)


def ranges_for_record(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def main():
    image = IMAGE_PATH.read_bytes()
    inventory_rows = csv.DictReader(INVENTORY_PATH.open(encoding="utf-8"), delimiter="\t")
    inventory = {int(row["address"], 16): row for row in inventory_rows}
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    selected = set(FUNCTION_RANGES)
    byte_count = sum(size for segments in FUNCTION_RANGES.values()
                     for _, size in segments)
    if len(selected) != 15 or byte_count != 3930 or len(OPEN_CALLS) != 17:
        raise AssertionError("Expected the audited 15-function, 3,930-byte, 17-edge closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    seen_open_calls = set()
    checked_direct_transfers = 0

    for address, expected_ranges in FUNCTION_RANGES.items():
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff byte-identical record for {address:08X}")
        if address not in inventory:
            raise AssertionError(f"Missing Ghidra inventory row for {address:08X}")
        expected_size = sum(size for _, size in expected_ranges)
        if int(inventory[address]["size"]) != expected_size or int(record["size"]) != expected_size:
            raise AssertionError(f"Unexpected function size for {address:08X}")
        if ranges_for_record(record) != expected_ranges:
            raise AssertionError(f"Unexpected Ghidra body ranges for {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            offset = start - BASE
            code = image[offset:offset + size]
            instructions = list(decoder.disasm(code, start))
            if (not instructions or instructions[0].address != start
                    or sum(insn.size for insn in instructions) != size
                    or instructions[-1].address + instructions[-1].size != start + size):
                raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
            for insn in instructions:
                if insn.id not in (X86_INS_CALL, X86_INS_JMP) or not insn.operands:
                    continue
                operand = insn.operands[0]
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                if not BASE <= target < BASE + len(image):
                    continue
                if any(lo <= target < hi for lo, hi in own_ranges):
                    continue
                checked_direct_transfers += 1
                if target in selected:
                    seen_open_calls.add((address, insn.address, target))
                elif target not in matched:
                    raise AssertionError(
                        f"Unmatched external callee {target:08X} from {insn.address:08X}")

    if seen_open_calls != OPEN_CALLS:
        missing = sorted(OPEN_CALLS - seen_open_calls)
        unexpected = sorted(seen_open_calls - OPEN_CALLS)
        raise AssertionError(f"Open call closure mismatch; missing={missing}, unexpected={unexpected}")

    slot_offset = VTABLE_SLOT_ADDRESS - BASE
    if struct.unpack_from("<I", image, slot_offset)[0] != ROOT_ADDRESS:
        raise AssertionError("The ManageFleetTab vtable slot +0x18 no longer points to the event method")
    if VERIFIED_CONSTRUCTOR not in matched:
        raise AssertionError("ManageFleetTab constructor is not byte-verified")
    for site in VTABLE_WRITES:
        instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
        if (instruction is None or instruction.id != X86_INS_MOV
                or len(instruction.operands) != 2
                or instruction.operands[0].type != X86_OP_MEM
                or instruction.operands[1].type != X86_OP_IMM
                or instruction.operands[1].imm & 0xFFFFFFFF != VTABLE_ADDRESS):
            raise AssertionError(f"Expected a vtable write at {site:08X}")

    print(
        f"ManageFleetTab event path: {len(selected)} functions / {byte_count:,} bytes ObjDiff-identical; "
        f"vtable slot +0x18 anchored, {len(OPEN_CALLS)} open call edges closed, "
        f"{checked_direct_transfers} mapped direct transfers checked"
    )


if __name__ == "__main__":
    main()
