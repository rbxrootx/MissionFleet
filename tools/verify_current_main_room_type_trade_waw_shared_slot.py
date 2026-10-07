"""Validate the installed Main.dll shared Trade/WAW room-type method."""
import csv
import json
import struct
from pathlib import Path

import capstone

if __package__:
    from .build_current_main_verifications import (
        MAIN_ROOM_TYPE_TRADE_WAW_SHARED_SLOT_ADDRESSES,
    )
else:
    from build_current_main_verifications import (
        MAIN_ROOM_TYPE_TRADE_WAW_SHARED_SLOT_ADDRESSES,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-room-type-trade-waw-shared-slot-body-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588D2300
EXPECTED_BYTES = 369
EXPECTED_INSTRUCTION_COUNT = 111
EXPECTED_RANGE = ((ROOT_ADDRESS, EXPECTED_BYTES, EXPECTED_INSTRUCTION_COUNT),)
TRADE_VTABLE = 0x589A0EE8
TRADE_SLOT = 17
WAW_VTABLE = 0x589A0F10
WAW_SLOT = 7
SHARED_SLOT_ADDRESS = 0x589A0F2C
EXPECTED_TEXT_KEY_ADDRESS = 0x5899A4C8
EXPECTED_TEXT_KEY = b"MESSAGESTRING_ROOMTYPE_WAW\0"
EXPECTED_TEXT_CALLBACK_SLOT = 0x5898C030
EXPECTED_TEXT_CALLBACK_TARGET = 0x59A98290
EXPECTED_TRANSFERS = {
    0x588D2310: 0x5897CC48,
    0x588D231D: 0x5897CC48,
}
EXPECTED_LANDMARKS = {
    0x588D2310: ("call", "0x5897cc48"),
    0x588D231D: ("call", "0x5897cc48"),
    0x588D2325: ("mov", "dword ptr [edx + 0x24], 1"),
    0x588D235E: ("mov", "dword ptr [eax + 0x38], 0x80"),
    0x588D23AE: ("and", "bl, 0xf2"),
    0x588D23BE: ("and", "bl, 0xc0"),
    0x588D23E4: ("or", "dword ptr [eax + 0x3c], 4"),
    0x588D23E8: ("push", "0x5899a4c8"),
    0x588D23ED: ("call", "dword ptr [0x5898c030]"),
    0x588D23F9: ("mov", "edi, 0x30"),
    0x588D2417: ("jne", "0x588d2400"),
    0x588D2420: ("mov", "byte ptr [ecx], 0"),
    0x588D2423: ("mov", "eax, dword ptr [0x58a24754]"),
    0x588D2428: ("cmp", "dword ptr [eax + 0x164], 0"),
    0x588D2431: ("cmp", "dword ptr [eax + 0x18c], 0"),
    0x588D2444: ("xor", "eax, eax"),
    0x588D2446: ("mov", "edx, dword ptr [esi + 4]"),
    0x588D2449: ("mov", "ecx, dword ptr [eax + 4]"),
    0x588D244C: ("lea", "eax, [ecx + edx + 0x2c]"),
    0x588D2453: ("mov", "dword ptr [ecx + 0x6c], eax"),
    0x588D2459: ("mov", "edx, dword ptr [esi + 0x88]"),
    0x588D245F: ("mov", "eax, dword ptr [esi + 0x8c]"),
    0x588D2466: ("mov", "dword ptr [esi + 0x50], edx"),
    0x588D2469: ("mov", "dword ptr [esi + 0x54], eax"),
    0x588D246E: ("ret", "4"),
}


def read_u32(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Mapped address is outside Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def read_rtti_name(image, vtable):
    locator = read_u32(image, vtable - 4)
    type_descriptor = read_u32(image, locator + 12)
    name_offset = type_descriptor - BASE + 8
    if name_offset < 0 or name_offset >= len(image):
        raise AssertionError("Vtable RTTI type descriptor is outside mapped Main.dll")
    return image[name_offset:name_offset + 64].split(b"\0", 1)[0]


def read_ranges(path):
    with path.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in rows if int(row["function"], 16) == ROOT_ADDRESS
    )
    if actual != EXPECTED_RANGE:
        raise AssertionError(f"Unexpected fresh Ghidra body ranges in {path.name}: {actual}")
    if any(int(row["instruction_bytes"]) != int(row["length"])
           for row in rows if int(row["function"], 16) == ROOT_ADDRESS):
        raise AssertionError("Ghidra reports an incompletely decoded body range")
    return actual


def read_edge_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


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
    selected = {int(address, 16)
                for address in MAIN_ROOM_TYPE_TRADE_WAW_SHARED_SLOT_ADDRESSES}
    if selected != {ROOT_ADDRESS}:
        raise AssertionError("Builder set does not identify the shared Trade/WAW method")

    row = inventory.get(ROOT_ADDRESS)
    record = records.get(ROOT_ADDRESS)
    if row is None or record is None or ROOT_ADDRESS not in matched:
        raise AssertionError("Shared Trade/WAW method is missing from verified catalog")
    ranges = read_ranges(RANGE_MANIFEST)
    expected_ranges = tuple((start, size) for start, size, _ in EXPECTED_RANGE)
    if ranges != EXPECTED_RANGE:
        raise AssertionError("Tracked range manifest differs from exact Ghidra body")
    for path in BODY_EXPORTS:
        if read_ranges(path) != EXPECTED_RANGE:
            raise AssertionError(f"Fresh Ghidra body changed: {path.name}")
    if (int(row["size"]) != EXPECTED_BYTES
            or int(record["size"]) != EXPECTED_BYTES
            or record_ranges(record) != expected_ranges):
        raise AssertionError("Catalog extent does not match exact Ghidra body range")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    offset = ROOT_ADDRESS - BASE
    instructions = list(decoder.disasm(image[offset:offset + EXPECTED_BYTES], ROOT_ADDRESS))
    if (len(instructions) != EXPECTED_INSTRUCTION_COUNT
            or sum(item.size for item in instructions) != EXPECTED_BYTES
            or instructions[0].address != ROOT_ADDRESS
            or instructions[-1].address + instructions[-1].size
            != ROOT_ADDRESS + EXPECTED_BYTES):
        raise AssertionError("Mapped instruction coverage differs from the Ghidra body")
    instruction_by_address = {item.address: item for item in instructions}
    for address, (mnemonic, operands) in EXPECTED_LANDMARKS.items():
        actual = instruction_by_address.get(address)
        if actual is None or (actual.mnemonic, actual.op_str) != (mnemonic, operands):
            raise AssertionError(f"Unexpected instruction at {address:08X}: {actual}")

    if read_u32(image, TRADE_VTABLE + 4 * TRADE_SLOT) != ROOT_ADDRESS:
        raise AssertionError("Trade vtable slot 17 no longer points to the method")
    if read_u32(image, WAW_VTABLE + 4 * WAW_SLOT) != ROOT_ADDRESS:
        raise AssertionError("WAW vtable slot 7 no longer points to the method")
    if TRADE_VTABLE + 4 * TRADE_SLOT != SHARED_SLOT_ADDRESS:
        raise AssertionError("Trade vtable slot address changed")
    if WAW_VTABLE + 4 * WAW_SLOT != SHARED_SLOT_ADDRESS:
        raise AssertionError("WAW vtable slot address changed")
    if read_rtti_name(image, TRADE_VTABLE) != b".?AVCRoomTypeTrade@@":
        raise AssertionError("Trade vtable RTTI owner changed")
    if read_rtti_name(image, WAW_VTABLE) != b".?AVCRoomTypeWAW@@":
        raise AssertionError("WAW vtable RTTI owner changed")

    key_offset = EXPECTED_TEXT_KEY_ADDRESS - BASE
    if image[key_offset:key_offset + len(EXPECTED_TEXT_KEY)] != EXPECTED_TEXT_KEY:
        raise AssertionError("WAW message key differs from the mapped resource string")
    if read_u32(image, EXPECTED_TEXT_CALLBACK_SLOT) != EXPECTED_TEXT_CALLBACK_TARGET:
        raise AssertionError("Captured text callback pointer changed")

    for path in EDGE_EXPORTS:
        edge_rows = read_edge_rows(path)
        body_calls = {
            (int(edge["site"], 16), int(edge["target"], 16))
            for edge in edge_rows
            if edge["kind"] == "CALL" and int(edge["function"], 16) == ROOT_ADDRESS
        }
        if body_calls != set(EXPECTED_TRANSFERS.items()):
            raise AssertionError(f"Outgoing direct calls changed in {path.name}: {body_calls}")
        if not any(edge["kind"] == "DATA"
                   and int(edge["function"], 16) == ROOT_ADDRESS
                   and int(edge["site"], 16) == SHARED_SLOT_ADDRESS
                   and int(edge["target"], 16) == ROOT_ADDRESS
                   for edge in edge_rows):
            raise AssertionError(f"Vtable data edge changed in {path.name}")
        if any(edge["kind"] == "CALL"
               and int(edge["target"], 16) == ROOT_ADDRESS for edge in edge_rows):
            raise AssertionError(f"Unexpected incoming direct call in {path.name}")

    for target in EXPECTED_TRANSFERS.values():
        if target not in matched:
            raise AssertionError(f"Direct target {target:08X} is not byte-verified")
    print(
        f"Main.dll shared Trade slot 17 / WAW slot 7 method: {EXPECTED_BYTES} bytes / "
        f"{EXPECTED_INSTRUCTION_COUNT} instructions byte-identical; both RTTI table views, "
        "WAW key, state and record-lookup landmarks verified"
    )


if __name__ == "__main__":
    main()
