"""Validate Main.dll CSantaAircraft vtable slot +0x1C and its exact body."""
import csv
import json
import struct
from pathlib import Path

import capstone

if __package__:
    from .build_current_main_verifications import MAIN_SANTA_AIRCRAFT_SLOT7_ADDRESSES
else:
    from build_current_main_verifications import MAIN_SANTA_AIRCRAFT_SLOT7_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-santa-aircraft-slot7-body-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
MARKER = "objdiff-3.8.0-byte-identical"

ADDRESS = 0x588D2760
SIZE = 139
INSTRUCTION_COUNT = 41
EXPECTED_RANGE = ((ADDRESS, SIZE, INSTRUCTION_COUNT),)
VTABLE = 0x589A0F38
SLOT_CELL = VTABLE + 7 * 4
HE_AIRCRAFT_STATE_HELPER = 0x5873C790
NUMERIC_HELPER = 0x58907990
EXPECTED_CALLS = {
    (0x588D276A, HE_AIRCRAFT_STATE_HELPER, "UNCONDITIONAL_CALL"),
    (0x588D279E, NUMERIC_HELPER, "UNCONDITIONAL_CALL"),
}
EXPECTED_LANDMARKS = {
    0x588D2760: ("mov", "eax, dword ptr [esp + 8]"),
    0x588D2764: ("mov", "edx, dword ptr [esp + 4]"),
    0x588D276A: ("call", "0x5873c790"),
    0x588D276F: ("test", "eax, eax"),
    0x588D2771: ("je", "0x588d27e6"),
    0x588D2778: ("cmp", "dword ptr [eax + 0x170], 1"),
    0x588D279E: ("call", "0x58907990"),
    0x588D27A8: ("cmp", "dword ptr [eax + 0x170], 1"),
    0x588D27CA: ("call", "eax"),
    0x588D27D1: ("ret", "8"),
    0x588D27D4: ("xor", "ecx, ecx"),
    0x588D27D6: ("mov", "edx, dword ptr [ecx]"),
    0x588D27DC: ("call", "eax"),
    0x588D27E3: ("ret", "8"),
    0x588D27E6: ("xor", "eax, eax"),
    0x588D27E8: ("ret", "8"),
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


def read_range_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in rows if int(row["function"], 16) == ADDRESS
    )
    if actual != EXPECTED_RANGE:
        raise AssertionError(f"Unexpected body ranges in {path.name}: {actual}")
    if any(int(row["instruction_bytes"]) != int(row["length"])
           for row in rows if int(row["function"], 16) == ADDRESS):
        raise AssertionError("Body manifest does not cover all mapped instruction bytes")
    return actual


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
    selected = {int(address, 16) for address in MAIN_SANTA_AIRCRAFT_SLOT7_ADDRESSES}
    if selected != {ADDRESS}:
        raise AssertionError("Builder set does not identify CSantaAircraft vtable slot +0x1C")

    row = inventory.get(ADDRESS)
    record = records.get(ADDRESS)
    if row is None or record is None or ADDRESS not in matched:
        raise AssertionError("CSantaAircraft slot +0x1C is missing from verified catalog")
    segments = record.get("segments", [])
    if (int(row["size"]) != SIZE or int(record["size"]) != SIZE
            or len(segments) != 1
            or int(segments[0]["address"], 16) != ADDRESS
            or int(segments[0]["size"]) != SIZE):
        raise AssertionError("Catalog extent does not match the complete function body")
    if read_range_rows(RANGE_MANIFEST) != EXPECTED_RANGE:
        raise AssertionError("Tracked range manifest differs from fresh Ghidra ranges")
    for path in BODY_EXPORTS:
        if read_range_rows(path) != EXPECTED_RANGE:
            raise AssertionError(f"Fresh Ghidra body changed: {path.name}")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoded = list(decoder.disasm(image[ADDRESS - BASE:ADDRESS - BASE + SIZE], ADDRESS))
    if (len(decoded) != INSTRUCTION_COUNT
            or sum(item.size for item in decoded) != SIZE
            or decoded[0].address != ADDRESS
            or decoded[-1].address + decoded[-1].size != ADDRESS + SIZE):
        raise AssertionError("Mapped instruction coverage does not match the fresh body exports")
    instructions = {item.address: item for item in decoded}
    for address, expected in EXPECTED_LANDMARKS.items():
        actual = instructions.get(address)
        if actual is None or (actual.mnemonic, actual.op_str) != expected:
            raise AssertionError(f"Unexpected slot +0x1C instruction at {address:08X}: {actual}")

    if read_u32(image, SLOT_CELL) != ADDRESS:
        raise AssertionError("CSantaAircraft slot +0x1C no longer points to this method")
    if read_rtti_name(image, VTABLE) != b".?AVCSantaAircraft@@":
        raise AssertionError("CSantaAircraft vtable RTTI owner changed")
    expected_hierarchy = (
        b".?AVCSantaAircraft@@",
        b".?AVCAircraft@@",
        b".?AVCNavyMapObjectScreen@@",
        b".?AVCMapObjectScreen@@",
        b".?AVCScreen@@",
    )
    if read_rtti_hierarchy(image, VTABLE) != expected_hierarchy:
        raise AssertionError("CSantaAircraft RTTI base hierarchy changed")

    if HE_AIRCRAFT_STATE_HELPER not in matched:
        raise AssertionError("Recorded HE-damage callback is not byte-verified")
    if NUMERIC_HELPER not in matched:
        raise AssertionError("Numeric helper is not byte-verified")

    for path in EDGE_EXPORTS:
        with path.open(encoding="utf-8", newline="") as stream:
            edges = list(csv.DictReader(stream, delimiter="\t"))
        outgoing = {
            (int(edge["site"], 16), int(edge["target"], 16), edge["type"])
            for edge in edges
            if edge["kind"] == "CALL" and int(edge["function"], 16) == ADDRESS
        }
        if outgoing != EXPECTED_CALLS:
            raise AssertionError(f"Outgoing calls changed in {path.name}: {outgoing}")
        if any(edge["kind"] == "CALL" and int(edge["target"], 16) == ADDRESS
               for edge in edges):
            raise AssertionError(f"Unexpected incoming direct call in {path.name}")
        if not any(edge["kind"] == "DATA"
                   and int(edge["function"], 16) == ADDRESS
                   and int(edge["site"], 16) == SLOT_CELL
                   and int(edge["target"], 16) == ADDRESS
                   for edge in edges):
            raise AssertionError(f"Vtable reference changed in {path.name}")

    print(
        f"Main.dll CSantaAircraft vtable slot +0x1C: {SIZE} bytes / "
        f"{INSTRUCTION_COUNT} instructions byte-identical; RTTI, complete body, "
        "HE-damage helper, global-state branches, and indirect callback sites verified"
    )


if __name__ == "__main__":
    main()
