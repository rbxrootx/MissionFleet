"""Validate the installed Main.dll CSantaAircraft constructor match."""
import csv
import json
import struct
from pathlib import Path

import capstone

if __package__:
    from .build_current_main_verifications import (
        MAIN_SANTA_AIRCRAFT_CONSTRUCTOR_ADDRESSES,
    )
else:
    from build_current_main_verifications import (
        MAIN_SANTA_AIRCRAFT_CONSTRUCTOR_ADDRESSES,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-santa-aircraft-constructor-body-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588D2480
EXPECTED_BYTES = 87
EXPECTED_INSTRUCTION_COUNT = 28
EXPECTED_BODY = ((ROOT_ADDRESS, EXPECTED_BYTES, EXPECTED_INSTRUCTION_COUNT),)
BASE_CONSTRUCTOR = 0x58741C20
BASE_CALL_SITE = 0x588D24B2
INCOMING_CALLER = 0x587F5760
INCOMING_CALL_SITE = 0x587F5866
VTABLE = 0x589A0F38
EXPECTED_LANDMARKS = {
    0x588D2488: ("push", "esi"),
    0x588D24B2: ("call", "0x58741c20"),
    0x588D24B7: ("mov", "dword ptr [esi], 0x589a0f38"),
    0x588D24BD: ("mov", "dword ptr [esi + 0x560], 6"),
    0x588D24C7: ("mov", "dword ptr [esi + 0x4f8], 1"),
    0x588D24D1: ("mov", "eax, esi"),
    0x588D24D4: ("ret", "0x24"),
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


def read_rtti_hierarchy(image, vtable):
    locator = read_u32(image, vtable - 4)
    hierarchy = read_u32(image, locator + 16)
    count = read_u32(image, hierarchy + 8)
    base_array = read_u32(image, hierarchy + 12)
    names = []
    for index in range(count):
        base_descriptor = read_u32(image, base_array + index * 4)
        type_descriptor = read_u32(image, base_descriptor)
        name_offset = type_descriptor - BASE + 8
        if name_offset < 0 or name_offset >= len(image):
            raise AssertionError("RTTI base type descriptor is outside mapped Main.dll")
        names.append(image[name_offset:name_offset + 64].split(b"\0", 1)[0])
    return tuple(names)


def read_body_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in rows if int(row["function"], 16) == ROOT_ADDRESS
    )
    if actual != EXPECTED_BODY:
        raise AssertionError(f"Unexpected Ghidra body extent in {path.name}: {actual}")
    if any(int(row["instruction_bytes"]) != int(row["length"])
           for row in rows if int(row["function"], 16) == ROOT_ADDRESS):
        raise AssertionError("Ghidra reports an incompletely decoded body range")
    return actual


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def main():
    image = IMAGE_PATH.read_bytes()
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
                for address in MAIN_SANTA_AIRCRAFT_CONSTRUCTOR_ADDRESSES}
    if selected != {ROOT_ADDRESS}:
        raise AssertionError("Builder set does not identify CSantaAircraft constructor")

    row = inventory.get(ROOT_ADDRESS)
    record = records.get(ROOT_ADDRESS)
    if row is None or record is None or ROOT_ADDRESS not in matched:
        raise AssertionError("CSantaAircraft constructor is missing from verified catalog")
    if (int(row["size"]) != EXPECTED_BYTES
            or int(record["size"]) != EXPECTED_BYTES
            or record_ranges(record) != ((ROOT_ADDRESS, EXPECTED_BYTES),)):
        raise AssertionError("Catalog extent does not match the exact Ghidra body")
    manifest_rows = read_body_rows(RANGE_MANIFEST)
    if manifest_rows != EXPECTED_BODY:
        raise AssertionError("Tracked body manifest changed")
    for path in BODY_EXPORTS:
        if read_body_rows(path) != EXPECTED_BODY:
            raise AssertionError(f"Fresh Ghidra body changed: {path.name}")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    offset = ROOT_ADDRESS - BASE
    instructions = list(decoder.disasm(image[offset:offset + EXPECTED_BYTES], ROOT_ADDRESS))
    if (len(instructions) != EXPECTED_INSTRUCTION_COUNT
            or sum(item.size for item in instructions) != EXPECTED_BYTES
            or instructions[0].address != ROOT_ADDRESS
            or instructions[-1].address + instructions[-1].size
            != ROOT_ADDRESS + EXPECTED_BYTES):
        raise AssertionError("Mapped instruction coverage differs from Ghidra body")
    instruction_by_address = {item.address: item for item in instructions}
    for address, (mnemonic, operands) in EXPECTED_LANDMARKS.items():
        actual = instruction_by_address.get(address)
        if actual is None or (actual.mnemonic, actual.op_str) != (mnemonic, operands):
            raise AssertionError(f"Unexpected constructor instruction at {address:08X}: {actual}")

    if read_rtti_name(image, VTABLE) != b".?AVCSantaAircraft@@":
        raise AssertionError("Constructor vtable RTTI no longer identifies CSantaAircraft")
    expected_hierarchy = (
        b".?AVCSantaAircraft@@",
        b".?AVCAircraft@@",
        b".?AVCNavyMapObjectScreen@@",
        b".?AVCMapObjectScreen@@",
        b".?AVCScreen@@",
    )
    if read_rtti_hierarchy(image, VTABLE) != expected_hierarchy:
        raise AssertionError("CSantaAircraft RTTI base hierarchy changed")
    if BASE_CONSTRUCTOR not in matched:
        raise AssertionError("CAircraft base constructor is not byte-verified")
    if INCOMING_CALLER in matched:
        raise AssertionError("The recorded creation caller is no longer unmatched")

    for path in EDGE_EXPORTS:
        with path.open(encoding="utf-8", newline="") as stream:
            edges = list(csv.DictReader(stream, delimiter="\t"))
        incoming = {
            (int(edge["function"], 16), int(edge["site"], 16))
            for edge in edges
            if edge["kind"] == "CALL" and int(edge["target"], 16) == ROOT_ADDRESS
        }
        outgoing = {
            (int(edge["site"], 16), int(edge["target"], 16))
            for edge in edges
            if edge["kind"] == "CALL" and int(edge["function"], 16) == ROOT_ADDRESS
        }
        if incoming != {(INCOMING_CALLER, INCOMING_CALL_SITE)}:
            raise AssertionError(f"Unexpected incoming calls in {path.name}: {incoming}")
        if outgoing != {(BASE_CALL_SITE, BASE_CONSTRUCTOR)}:
            raise AssertionError(f"Unexpected outgoing calls in {path.name}: {outgoing}")

    print(
        f"Main.dll CSantaAircraft constructor: {EXPECTED_BYTES} bytes / "
        f"{EXPECTED_INSTRUCTION_COUNT} instructions byte-identical; RTTI, matched "
        "CAircraft constructor call, derived-field writes, and caller edge verified"
    )


if __name__ == "__main__":
    main()
