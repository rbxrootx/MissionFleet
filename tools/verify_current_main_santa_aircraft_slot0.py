"""Validate the installed Main.dll CSantaAircraft vtable slot-0 match."""
import csv
import json
import struct
from pathlib import Path

import capstone

if __package__:
    from .build_current_main_verifications import MAIN_SANTA_AIRCRAFT_SLOT0_ADDRESSES
else:
    from build_current_main_verifications import MAIN_SANTA_AIRCRAFT_SLOT0_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-santa-aircraft-slot0-body-ranges.tsv"
MATCH_RANGE_MANIFEST = ROOT / "config/NF2_2026/main-santa-aircraft-slot0-match-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588D24F0
EXPECTED_BYTES = 36
EXPECTED_INSTRUCTION_COUNT = 12
GHIDRA_RANGES = (
    (ROOT_ADDRESS, 27, 8),
    (0x588D250E, 6, 3),
)
MATCH_RANGES = (
    (ROOT_ADDRESS, 27, 8),
    (0x588D250B, 3, 1),
    (0x588D250E, 6, 3),
)
VTABLE = 0x589A0F38
BASE_CLEANUP_HELPER = 0x58741990
CONDITIONAL_HELPER = 0x5897CC42
EXPECTED_OUTGOING = {
    (0x588D24F9, BASE_CLEANUP_HELPER, "UNCONDITIONAL_CALL"),
    (0x588D2506, CONDITIONAL_HELPER, "CALL_TERMINATOR"),
}
EXPECTED_LANDMARKS = {
    0x588D24F0: ("push", "esi"),
    0x588D24F3: ("mov", "dword ptr [esi], 0x589a0f38"),
    0x588D24F9: ("call", "0x58741990"),
    0x588D24FE: ("test", "byte ptr [esp + 8], 1"),
    0x588D2503: ("je", "0x588d250e"),
    0x588D2505: ("push", "esi"),
    0x588D2506: ("call", "0x5897cc42"),
    0x588D250B: ("add", "esp, 4"),
    0x588D250E: ("mov", "eax, esi"),
    0x588D2510: ("pop", "esi"),
    0x588D2511: ("ret", "4"),
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


def read_range_rows(path, expected, *, description):
    with path.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    actual = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in rows if int(row["function"], 16) == ROOT_ADDRESS
    )
    if actual != expected:
        raise AssertionError(f"Unexpected {description} ranges in {path.name}: {actual}")
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
    selected = {int(address, 16) for address in MAIN_SANTA_AIRCRAFT_SLOT0_ADDRESSES}
    if selected != {ROOT_ADDRESS}:
        raise AssertionError("Builder set does not identify CSantaAircraft slot 0")

    row = inventory.get(ROOT_ADDRESS)
    record = records.get(ROOT_ADDRESS)
    if row is None or record is None or ROOT_ADDRESS not in matched:
        raise AssertionError("CSantaAircraft slot 0 is missing from verified catalog")
    expected_match_ranges = tuple((start, size) for start, size, _ in MATCH_RANGES)
    if (int(row["size"]) != EXPECTED_BYTES
            or int(record["size"]) != EXPECTED_BYTES
            or record_ranges(record) != expected_match_ranges):
        raise AssertionError("Catalog extent does not match the complete mapped instruction ranges")
    if read_range_rows(RANGE_MANIFEST, GHIDRA_RANGES, description="Ghidra body") != GHIDRA_RANGES:
        raise AssertionError("Tracked body manifest differs from fresh Ghidra ranges")
    if read_range_rows(MATCH_RANGE_MANIFEST, MATCH_RANGES,
                       description="matched instruction") != MATCH_RANGES:
        raise AssertionError("Tracked match manifest differs from the complete mapped stream")
    for path in BODY_EXPORTS:
        if read_range_rows(path, GHIDRA_RANGES, description="Ghidra body") != GHIDRA_RANGES:
            raise AssertionError(f"Fresh Ghidra body changed: {path.name}")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = {}
    for start, size, expected_count in MATCH_RANGES:
        offset = start - BASE
        segment = list(decoder.disasm(image[offset:offset + size], start))
        if (len(segment) != expected_count
                or sum(item.size for item in segment) != size
                or segment[0].address != start
                or segment[-1].address + segment[-1].size != start + size):
            raise AssertionError(f"Mapped instruction coverage failed at {start:08X}")
        instructions.update((item.address, item) for item in segment)
    if len(instructions) != EXPECTED_INSTRUCTION_COUNT:
        raise AssertionError("Instruction count differs from the fresh body exports")
    for address, (mnemonic, operands) in EXPECTED_LANDMARKS.items():
        actual = instructions.get(address)
        if actual is None or (actual.mnemonic, actual.op_str) != (mnemonic, operands):
            raise AssertionError(f"Unexpected slot-0 instruction at {address:08X}: {actual}")

    if read_u32(image, VTABLE) != ROOT_ADDRESS:
        raise AssertionError("CSantaAircraft vtable slot 0 no longer points to the method")
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

    if BASE_CLEANUP_HELPER in matched:
        raise AssertionError("Recorded cleanup helper is no longer unresolved")
    if CONDITIONAL_HELPER not in matched:
        raise AssertionError("Conditional helper is not byte-verified")

    for path in EDGE_EXPORTS:
        with path.open(encoding="utf-8", newline="") as stream:
            edges = list(csv.DictReader(stream, delimiter="\t"))
        outgoing = {
            (int(edge["site"], 16), int(edge["target"], 16), edge["type"])
            for edge in edges
            if edge["kind"] == "CALL" and int(edge["function"], 16) == ROOT_ADDRESS
        }
        if outgoing != EXPECTED_OUTGOING:
            raise AssertionError(f"Outgoing transfers changed in {path.name}: {outgoing}")
        if any(edge["kind"] == "CALL"
               and int(edge["target"], 16) == ROOT_ADDRESS for edge in edges):
            raise AssertionError(f"Unexpected incoming direct call in {path.name}")
        if not any(edge["kind"] == "DATA"
                   and int(edge["function"], 16) == ROOT_ADDRESS
                   and int(edge["site"], 16) == VTABLE
                   and int(edge["target"], 16) == ROOT_ADDRESS
                   for edge in edges):
            raise AssertionError(f"Vtable data reference changed in {path.name}")

    print(
        f"Main.dll CSantaAircraft vtable slot 0: {EXPECTED_BYTES} bytes / "
        f"{EXPECTED_INSTRUCTION_COUNT} instructions byte-identical across two Ghidra "
        "ranges plus the reachable stack-cleanup instruction; RTTI, flag branch, "
        "and direct transfers verified"
    )


if __name__ == "__main__":
    main()
