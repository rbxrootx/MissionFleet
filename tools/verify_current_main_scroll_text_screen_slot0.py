"""Validate Main.dll CScrollTextScreen deleting-destructor bytes and RTTI."""

import csv
import json
import struct
from pathlib import Path

import capstone

if __package__:
    from .build_current_main_verifications import MAIN_SCROLL_TEXT_SCREEN_SLOT0_ADDRESSES
else:
    from build_current_main_verifications import MAIN_SCROLL_TEXT_SCREEN_SLOT0_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
GHIDRA_RANGE_MANIFEST = ROOT / "config/NF2_2026/main-scroll-text-screen-slot0-ghidra-ranges.tsv"
MATCH_RANGE_MANIFEST = ROOT / "config/NF2_2026/main-scroll-text-screen-slot0-match-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
MARKER = "objdiff-3.8.0-byte-identical"

ADDRESS = 0x588D2840
SIZE = 96
INSTRUCTION_COUNT = 28
GHIDRA_RANGES = (
    (ADDRESS, 25, 8),
    (0x588D2866, 19, 6),
    (0x588D2883, 20, 6),
    (0x588D289A, 6, 3),
)
MATCH_RANGES = ((ADDRESS, SIZE, INSTRUCTION_COUNT),)
VTABLE = 0x589A0F5C
EXPECTED_CALLS = {
    (0x588D2854, 0x5897CC42, "CALL_TERMINATOR"),
    (0x588D2874, 0x5897CC42, "CALL_TERMINATOR"),
    (0x588D2885, 0x58903450, "UNCONDITIONAL_CALL"),
    (0x588D2892, 0x5897CC42, "CALL_TERMINATOR"),
}
HELPERS = {0x5897CC42, 0x58903450}
EXPECTED_LANDMARKS = {
    0x588D2840: ("push", "esi"),
    0x588D2841: ("mov", "esi, ecx"),
    0x588D2843: ("mov", "eax, dword ptr [esi + 0x84]"),
    0x588D2849: ("mov", "dword ptr [esi], 0x589a0f5c"),
    0x588D2851: ("je", "0x588d2866"),
    0x588D2854: ("call", "0x5897cc42"),
    0x588D2859: ("add", "esp, 4"),
    0x588D285C: ("mov", "dword ptr [esi + 0x84], 0"),
    0x588D2866: ("mov", "eax, dword ptr [esi + 0x6c]"),
    0x588D2869: ("mov", "dword ptr [esi], 0x5898c94c"),
    0x588D2874: ("call", "0x5897cc42"),
    0x588D2879: ("add", "esp, 4"),
    0x588D287C: ("mov", "dword ptr [esi + 0x6c], 0"),
    0x588D2885: ("call", "0x58903450"),
    0x588D288A: ("test", "byte ptr [esp + 8], 1"),
    0x588D2892: ("call", "0x5897cc42"),
    0x588D2897: ("add", "esp, 4"),
    0x588D289A: ("mov", "eax, esi"),
    0x588D289C: ("pop", "esi"),
    0x588D289D: ("ret", "4"),
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
    return image[name_offset:name_offset + 64].split(bytes([0]), 1)[0]


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
        names.append(image[name_offset:name_offset + 64].split(bytes([0]), 1)[0])
    return tuple(names)


def read_range_rows(path, expected, *, description):
    with path.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in rows if int(row["function"], 16) == ADDRESS
    )
    if actual != expected:
        raise AssertionError(f"Unexpected {description} ranges in {path.name}: {actual}")
    if any(int(row["instruction_bytes"]) != int(row["length"])
           for row in rows if int(row["function"], 16) == ADDRESS):
        raise AssertionError(f"{description} manifest leaves instruction bytes undecoded")
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
    selected = {int(value, 16) for value in MAIN_SCROLL_TEXT_SCREEN_SLOT0_ADDRESSES}
    if selected != {ADDRESS}:
        raise AssertionError("Builder set does not identify the CScrollTextScreen slot-0 method")

    row = inventory.get(ADDRESS)
    record = records.get(ADDRESS)
    if row is None or record is None or ADDRESS not in matched:
        raise AssertionError("CScrollTextScreen slot 0 is missing from the verified catalog")
    segments = record.get("segments", [])
    if (int(row["size"]) != SIZE or int(record["size"]) != SIZE
            or len(segments) != 1
            or int(segments[0]["address"], 16) != ADDRESS
            or int(segments[0]["size"]) != SIZE):
        raise AssertionError("Catalog extent does not cover the complete mapped method")
    read_range_rows(GHIDRA_RANGE_MANIFEST, GHIDRA_RANGES, description="Ghidra body")
    read_range_rows(MATCH_RANGE_MANIFEST, MATCH_RANGES, description="matched body")
    for path in BODY_EXPORTS:
        read_range_rows(path, GHIDRA_RANGES, description="Ghidra body")

    offset = ADDRESS - BASE
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoded = list(decoder.disasm(image[offset:offset + SIZE], ADDRESS))
    if (len(decoded) != INSTRUCTION_COUNT
            or sum(item.size for item in decoded) != SIZE
            or decoded[0].address != ADDRESS
            or decoded[-1].address + decoded[-1].size != ADDRESS + SIZE):
        raise AssertionError("Mapped instruction coverage differs from the complete body extent")
    instructions = {item.address: item for item in decoded}
    for address, expected in EXPECTED_LANDMARKS.items():
        actual = instructions.get(address)
        if actual is None or (actual.mnemonic, actual.op_str) != expected:
            raise AssertionError(f"Unexpected destructor instruction at {address:08X}: {actual}")

    if read_u32(image, VTABLE) != ADDRESS:
        raise AssertionError("CScrollTextScreen vtable slot 0 no longer points to this method")
    expected_hierarchy = (
        b".?AVCScrollTextScreen@@",
        b".?AVCStaticTextScreen@@",
        b".?AVCTextScreen@@",
        b".?AVCScreen@@",
    )
    if read_rtti_name(image, VTABLE) != expected_hierarchy[0]:
        raise AssertionError("CScrollTextScreen RTTI owner changed")
    if read_rtti_hierarchy(image, VTABLE) != expected_hierarchy:
        raise AssertionError("CScrollTextScreen RTTI base hierarchy changed")
    if not HELPERS.issubset(matched):
        raise AssertionError("A destructor helper cited as byte-verified is not matched")

    for path in EDGE_EXPORTS:
        with path.open(encoding="utf-8", newline="") as stream:
            edges = list(csv.DictReader(stream, delimiter="\t"))
        outgoing = {
            (int(edge["site"], 16), int(edge["target"], 16), edge["type"])
            for edge in edges
            if edge["kind"] == "CALL" and int(edge["function"], 16) == ADDRESS
        }
        if outgoing != EXPECTED_CALLS:
            raise AssertionError(f"Outgoing destructor calls changed in {path.name}: {outgoing}")
        if any(edge["kind"] == "CALL" and int(edge["target"], 16) == ADDRESS
               for edge in edges):
            raise AssertionError(f"Unexpected incoming direct call in {path.name}")
        if not any(edge["kind"] == "DATA"
                   and int(edge["function"], 16) == ADDRESS
                   and int(edge["site"], 16) == VTABLE
                   and int(edge["target"], 16) == ADDRESS
                   for edge in edges):
            raise AssertionError(f"RTTI vtable reference changed in {path.name}")

    print(
        f"Main.dll CScrollTextScreen slot 0: {SIZE} bytes / {INSTRUCTION_COUNT} "
        "instructions byte-identical; RTTI hierarchy, reachable post-call bridges, "
        "field cleanup, helper calls, and deleting flag verified"
    )


if __name__ == "__main__":
    main()
