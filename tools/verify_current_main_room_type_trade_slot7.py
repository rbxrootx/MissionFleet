"""Validate CRoomTypeTrade's installed Main.dll vtable slot 7 body."""
import csv
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import MAIN_ROOM_TYPE_TRADE_SLOT7_ADDRESSES
else:
    from build_current_main_verifications import MAIN_ROOM_TYPE_TRADE_SLOT7_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-room-type-trade-slot7-body-ranges.tsv"
EDGE_EXPORT = ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588D2080
EXPECTED_BYTES = 285
EXPECTED_INSTRUCTION_COUNT = 97
EXPECTED_VTABLE = 0x589A0EE8
EXPECTED_SLOT_ADDRESS = 0x589A0F04
EXPECTED_SLOT = 7
EXPECTED_TEXT_KEY_ADDRESS = 0x5899A5C4
EXPECTED_TEXT_KEY = b"MESSAGESTRING_ROOMTYPE_TRADE\0"
EXPECTED_TEXT_CALLBACK_SLOT = 0x5898C030
EXPECTED_TEXT_CALLBACK_TARGET = 0x59A98290
EXPECTED_TRANSFERS = {
    0x588D2090: 0x5897CC48,
    0x588D209D: 0x5897CC48,
}
EXPECTED_SEGMENTS = (
    (0x588D2080, 233, 72),
    (0x588D2170, 52, 25),
)
EXPECTED_INSTRUCTIONS = {
    0x588D2088: ("push", "0xc4"),
    0x588D208D: ("push", "0"),
    0x588D208F: ("push", "eax"),
    0x588D2090: ("call", "0x5897cc48"),
    0x588D2098: ("push", "0x50"),
    0x588D209A: ("push", "0"),
    0x588D209C: ("push", "ecx"),
    0x588D209D: ("call", "0x5897cc48"),
    0x588D20AA: ("mov", "dword ptr [edx + 0x18], ebx"),
    0x588D20D3: ("mov", "dword ptr [ecx + 0x38], 0x80"),
    0x588D2102: ("mov", "word ptr [eax + 0x84], dx"),
    0x588D2117: ("and", "dl, 0xf2"),
    0x588D211A: ("or", "dl, 2"),
    0x588D2127: ("and", "dl, 0xb0"),
    0x588D212A: ("or", "dl, 0x30"),
    0x588D213F: ("and", "dword ptr [eax + 0x3c], 0xfffffffd"),
    0x588D2146: ("and", "dword ptr [eax + 0x3c], 0xfffffffe"),
    0x588D214D: ("or", "dword ptr [eax + 0x3c], 4"),
    0x588D2151: ("push", "0x5899a5c4"),
    0x588D2156: ("call", "dword ptr [0x5898c030]"),
    0x588D215C: ("mov", "esi, dword ptr [esi + 0x50]"),
    0x588D2162: ("mov", "edi, 0x30"),
    0x588D217A: ("mov", "cl, byte ptr [eax]"),
    0x588D2180: ("mov", "byte ptr [esi], cl"),
    0x588D2186: ("sub", "edi, ebx"),
    0x588D218D: ("mov", "byte ptr [esi], 0"),
    0x588D2192: ("ret", "4"),
    0x588D219C: ("mov", "byte ptr [esi], 0"),
    0x588D21A1: ("ret", "4"),
}


def read_ranges():
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in rows
        if int(row["function"], 16) == ROOT_ADDRESS
    )
    if actual != EXPECTED_SEGMENTS:
        raise AssertionError(f"Unexpected fresh Ghidra body ranges: {actual}")
    if any(int(row["instruction_bytes"]) != int(row["length"])
           for row in rows if int(row["function"], 16) == ROOT_ADDRESS):
        raise AssertionError("Ghidra reports an incompletely decoded body range")
    if (sum(size for _, size, _ in actual) != EXPECTED_BYTES
            or sum(count for _, _, count in actual) != EXPECTED_INSTRUCTION_COUNT):
        raise AssertionError("Ghidra body range totals changed")
    return tuple((start, size) for start, size, _ in actual)


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def read_u32(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Mapped address is outside Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def instruction_at(image, decoder, address):
    offset = address - BASE
    instruction = next(decoder.disasm(image[offset:offset + 15], address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


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
    selected = {int(address, 16) for address in MAIN_ROOM_TYPE_TRADE_SLOT7_ADDRESSES}
    ranges = read_ranges()
    expected_ranges = tuple((start, size) for start, size, _ in EXPECTED_SEGMENTS)
    if selected != {ROOT_ADDRESS}:
        raise AssertionError("Builder set does not identify CRoomTypeTrade slot 7")
    if ranges != expected_ranges:
        raise AssertionError("Manifest ranges differ from the fresh Ghidra body export")

    row = inventory.get(ROOT_ADDRESS)
    record = records.get(ROOT_ADDRESS)
    if row is None or record is None or ROOT_ADDRESS not in matched:
        raise AssertionError("CRoomTypeTrade vtable slot 7 is missing from verified catalog")
    if (int(row["size"]) != EXPECTED_BYTES
            or int(record["size"]) != EXPECTED_BYTES
            or record_ranges(record) != ranges):
        raise AssertionError("Catalog extent does not match exact Ghidra body ranges")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = {}
    for start, size in ranges:
        offset = start - BASE
        segment = list(decoder.disasm(image[offset:offset + size], start))
        expected_count = next(count for expected_start, _, count in EXPECTED_SEGMENTS
                              if expected_start == start)
        if (not segment or segment[0].address != start
                or sum(item.size for item in segment) != size
                or segment[-1].address + segment[-1].size != start + size
                or len(segment) != expected_count):
            raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
        instructions.update((item.address, item) for item in segment)

    for address, (mnemonic, operands) in EXPECTED_INSTRUCTIONS.items():
        if address not in instructions:
            raise AssertionError(f"Expected method instruction is outside its body: {address:08X}")
        actual = instructions[address]
        if actual.mnemonic != mnemonic or actual.op_str != operands:
            raise AssertionError(
                f"Changed method behavior at {address:08X}: {actual.mnemonic} {actual.op_str}"
            )

    if read_u32(image, EXPECTED_SLOT_ADDRESS) != ROOT_ADDRESS:
        raise AssertionError("Trade vtable slot 7 no longer points to this method")
    locator = read_u32(image, EXPECTED_VTABLE - 4)
    type_descriptor = read_u32(image, locator + 12)
    type_offset = type_descriptor - BASE + 8
    if type_offset < 0 or type_offset >= len(image):
        raise AssertionError("Trade RTTI type descriptor is outside mapped Main.dll")
    type_name = image[type_offset:type_offset + 64].split(b"\0", 1)[0]
    if type_name != b".?AVCRoomTypeTrade@@":
        raise AssertionError(f"Unexpected vtable RTTI owner: {type_name!r}")

    key_offset = EXPECTED_TEXT_KEY_ADDRESS - BASE
    if image[key_offset:key_offset + len(EXPECTED_TEXT_KEY)] != EXPECTED_TEXT_KEY:
        raise AssertionError("Trade message key differs from the mapped resource string")
    if read_u32(image, EXPECTED_TEXT_CALLBACK_SLOT) != EXPECTED_TEXT_CALLBACK_TARGET:
        raise AssertionError("Captured Trade text callback pointer changed")

    observed_transfers = {}
    for instruction in instructions.values():
        if ((instruction.id != X86_INS_CALL and not instruction.group(CS_GRP_JUMP))
                or not instruction.operands
                or instruction.operands[0].type != X86_OP_IMM):
            continue
        target = instruction.operands[0].imm & 0xFFFFFFFF
        if not BASE <= target < image_end:
            continue
        if any(start <= target < start + size for start, size in ranges):
            continue
        if target not in matched:
            raise AssertionError(
                f"Unmatched external transfer to {target:08X} "
                f"from {instruction.address:08X}"
            )
        observed_transfers[instruction.address] = target
    if observed_transfers != EXPECTED_TRANSFERS:
        raise AssertionError(f"Unexpected direct outgoing transfers: {observed_transfers}")

    with EDGE_EXPORT.open(encoding="utf-8", newline="") as stream:
        edge_rows = [line.rstrip("\r\n").split("\t") for line in stream]
    direct_edges = {
        (int(row[2], 16), int(row[4], 16))
        for row in edge_rows
        if len(row) >= 5 and row[0] == "CALL" and row[1].lower() == "588d2080"
    }
    if direct_edges != set(EXPECTED_TRANSFERS.items()):
        raise AssertionError(f"Direct calls disagree with fresh Ghidra edges: {direct_edges}")
    if not any(len(row) >= 5 and row[0] == "DATA" and row[1].lower() == "588d2080"
               and row[2].lower() == "589a0f04" for row in edge_rows):
        raise AssertionError("Fresh Ghidra data edges no longer show the vtable slot reference")

    print(
        f"Main.dll CRoomTypeTrade vtable slot 7: {EXPECTED_BYTES} bytes / "
        f"{EXPECTED_INSTRUCTION_COUNT} instructions byte-identical across two Ghidra ranges; "
        "RTTI, state writes, message key and bounded copy verified"
    )


if __name__ == "__main__":
    main()
