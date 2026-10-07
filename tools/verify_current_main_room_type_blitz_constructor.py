"""Validate the installed Main.dll CRoomTypeBlitz constructor match."""
import csv
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import MAIN_ROOM_TYPE_BLITZ_CONSTRUCTOR_ADDRESSES
else:
    from build_current_main_verifications import MAIN_ROOM_TYPE_BLITZ_CONSTRUCTOR_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-room-type-blitz-constructor-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588CBEB0
MATCHED_CALLER = 0x588C9280
EXPECTED_BYTES = 275
EXPECTED_INSTRUCTIONS = 89
EXPECTED_VTABLE = 0x589A0CC0
EXPECTED_TRANSFERS = {0x588CBECE: 0x588D02E0}
CALLER_INSTRUCTIONS = {
    0x588CAAE2: ("push", "0x70"),
    0x588CAAEF: ("call", "0x5897cc4e"),
    0x588CAB00: ("test", "eax, eax"),
    0x588CAB02: ("je", "0x588cab1b"),
    0x588CAB04: ("lea", "edx, [esi + 0x12c]"),
    0x588CAB0A: ("push", "edx"),
    0x588CAB0B: ("lea", "ecx, [esi + 0x68]"),
    0x588CAB0E: ("push", "ecx"),
    0x588CAB0F: ("push", "ebx"),
    0x588CAB10: ("push", "ebp"),
    0x588CAB11: ("push", "esi"),
    0x588CAB12: ("mov", "ecx, eax"),
    0x588CAB14: ("call", "0x588cbeb0"),
    0x588CAB24: ("mov", "dword ptr [esi + 0x190], eax"),
}


def read_ranges():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    if len(rows) != 1:
        raise AssertionError(f"Expected one exact Ghidra range, found {len(rows)}")
    row = rows[0]
    address = int(row["function"], 16)
    start = int(row["start"], 16)
    size = int(row["length"])
    if (address != ROOT_ADDRESS or start != ROOT_ADDRESS or size != EXPECTED_BYTES
            or int(row["instruction_bytes"]) != size
            or int(row["instruction_count"]) != EXPECTED_INSTRUCTIONS):
        raise AssertionError(f"Unexpected Ghidra function body row: {row}")
    return ((start, size),)


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def read_u32(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"RTTI address is outside mapped Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def instruction_at(image, decoder, address):
    offset = address - BASE
    instruction = next(decoder.disasm(image[offset:offset + 15], address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def decode_complete(image, decoder, start, size):
    offset = start - BASE
    instructions = list(decoder.disasm(image[offset:offset + size], start))
    if (len(instructions) != EXPECTED_INSTRUCTIONS
            or not instructions
            or instructions[0].address != start
            or sum(instruction.size for instruction in instructions) != size
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def verify_rtti(image):
    # The mov [esi], imm32 instruction begins at +0x23; its immediate is +2.
    if read_u32(image, ROOT_ADDRESS + 0x25) != EXPECTED_VTABLE:
        raise AssertionError("Constructor no longer installs the expected vtable")
    locator = read_u32(image, EXPECTED_VTABLE - 4)
    type_descriptor = read_u32(image, locator + 12)
    name_offset = type_descriptor - BASE + 8
    if name_offset < 0 or name_offset >= len(image):
        raise AssertionError("RTTI type descriptor is outside mapped Main.dll")
    name = image[name_offset:name_offset + 64].split(b"\0", 1)[0]
    if name != b".?AVCRoomTypeBlitz@@":
        raise AssertionError(f"Unexpected constructor RTTI type: {name!r}")


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    selected = {int(address, 16) for address in MAIN_ROOM_TYPE_BLITZ_CONSTRUCTOR_ADDRESSES}
    ranges = read_ranges()
    if selected != {ROOT_ADDRESS}:
        raise AssertionError("Builder set does not identify the CRoomTypeBlitz constructor")

    row = inventory.get(ROOT_ADDRESS)
    record = records.get(ROOT_ADDRESS)
    if row is None or record is None or ROOT_ADDRESS not in matched:
        raise AssertionError("CRoomTypeBlitz constructor is missing from the verified catalog")
    if (int(row["size"]) != EXPECTED_BYTES
            or int(record["size"]) != EXPECTED_BYTES
            or record_ranges(record) != ranges):
        raise AssertionError("Catalog extent does not match the exact Ghidra body")

    caller = records.get(MATCHED_CALLER)
    if caller is None or MATCHED_CALLER not in matched:
        raise AssertionError("CRoomSettingManager caller is not byte-verified")
    if "CRoomSettingManager" not in json.dumps(caller.get("evidence", {})):
        raise AssertionError("Matched caller evidence does not identify CRoomSettingManager")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    caller_ranges = tuple((start, start + size) for start, size in record_ranges(caller))
    for address, (mnemonic, operands) in CALLER_INSTRUCTIONS.items():
        if not any(start <= address < end for start, end in caller_ranges):
            raise AssertionError(
                f"Caller setup {address:08X} is outside matched CRoomSettingManager"
            )
        actual = instruction_at(image, decoder, address)
        if actual.mnemonic != mnemonic or actual.op_str != operands:
            raise AssertionError(
                f"Changed resource-gated constructor path at {address:08X}: "
                f"{actual.mnemonic} {actual.op_str}"
            )

    verify_rtti(image)
    observed_transfers = {}
    for instruction in decode_complete(image, decoder, *ranges[0]):
        if ((instruction.id != X86_INS_CALL and not instruction.group(CS_GRP_JUMP))
                or not instruction.operands
                or instruction.operands[0].type != X86_OP_IMM):
            continue
        target = instruction.operands[0].imm & 0xFFFFFFFF
        if not BASE <= target < image_end:
            continue
        if ranges[0][0] <= target < ranges[0][0] + ranges[0][1]:
            continue
        if target not in matched:
            raise AssertionError(
                f"Unmatched external transfer to {target:08X} "
                f"from {instruction.address:08X}"
            )
        observed_transfers[instruction.address] = target

    if observed_transfers != EXPECTED_TRANSFERS:
        raise AssertionError(
            "Outgoing transfers disagree with the fresh Ghidra export: "
            f"{observed_transfers}"
        )
    print(
        f"Main.dll CRoomTypeBlitz constructor: {EXPECTED_BYTES} bytes / "
        f"{EXPECTED_INSTRUCTIONS} instructions byte-identical; RTTI confirms "
        "the class, resource-0x70 caller path, and base-constructor call"
    )


if __name__ == "__main__":
    main()
