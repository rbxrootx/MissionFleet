"""Validate Main.dll CShell_MapObjectScreen vtable slot +0x14 and its exact body."""

import csv
import json
import struct
from pathlib import Path

import capstone

if __package__:
    from .build_current_main_verifications import MAIN_SHELL_MAP_OBJECT_SCREEN_SLOT5_ADDRESSES
else:
    from build_current_main_verifications import MAIN_SHELL_MAP_OBJECT_SCREEN_SLOT5_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-shell-map-object-screen-slot5-body-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
MARKER = "objdiff-3.8.0-byte-identical"

ADDRESS = 0x588D2EE0
SIZE = 705
INSTRUCTION_COUNT = 222
EXPECTED_RANGE = ((ADDRESS, SIZE, INSTRUCTION_COUNT),)
VTABLE = 0x589A0F7C
SLOT_CELL = VTABLE + 5 * 4
FRAME_HELPERS = {0x5897CC90, 0x5897CCA0, 0x5873A5D0}
EXPECTED_CALLS = {
    (0x588D2F22, 0x5897CC90, "UNCONDITIONAL_CALL"),
    (0x588D2F27, 0x5897CCA0, "UNCONDITIONAL_CALL"),
    (0x588D2F46, 0x5897CC90, "UNCONDITIONAL_CALL"),
    (0x588D2F4B, 0x5897CCA0, "UNCONDITIONAL_CALL"),
    (0x588D3070, 0x5873A5D0, "UNCONDITIONAL_CALL"),
    (0x588D316A, 0x5873A5D0, "UNCONDITIONAL_CALL"),
}
EXPECTED_LANDMARKS = {
    0x588D2EE0: ("sub", "esp, 0x18"),
    0x588D2EEA: ("test", "al, 1"),
    0x588D2EEC: ("je", "0x588d319a"),
    0x588D2EF2: ("cmp", "dword ptr [esi + 0x80], 0"),
    0x588D2F22: ("call", "0x5897cc90"),
    0x588D2F27: ("call", "0x5897cca0"),
    0x588D2F82: ("cmp", "ax, 3"),
    0x588D303E: ("cmp", "ax, 5"),
    0x588D3070: ("call", "0x5873a5d0"),
    0x588D316A: ("call", "0x5873a5d0"),
    0x588D3180: ("mov", "esi, dword ptr [esi + 0x4c]"),
    0x588D318D: ("mov", "eax, dword ptr [eax + 0x14]"),
    0x588D3195: ("call", "eax"),
    0x588D319E: ("ret", "0xc"),
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
    target_rows = [row for row in rows if int(row["function"], 16) == ADDRESS]
    actual = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in target_rows
    )
    if actual != EXPECTED_RANGE:
        raise AssertionError(f"Unexpected body ranges in {path.name}: {actual}")
    if any(int(row["instruction_bytes"]) != int(row["length"])
           for row in target_rows):
        raise AssertionError("Body manifest does not cover every mapped instruction byte")
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
    selected = {int(address, 16) for address in MAIN_SHELL_MAP_OBJECT_SCREEN_SLOT5_ADDRESSES}
    if selected != {ADDRESS}:
        raise AssertionError("Builder set does not identify CShell_MapObjectScreen vtable slot +0x14")

    row = inventory.get(ADDRESS)
    record = records.get(ADDRESS)
    if row is None or record is None or ADDRESS not in matched:
        raise AssertionError("CShell_MapObjectScreen slot +0x14 is missing from verified catalog")
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
        raise AssertionError("Mapped instruction coverage differs from fresh Ghidra body exports")
    instructions = {item.address: item for item in decoded}
    for address, expected in EXPECTED_LANDMARKS.items():
        actual = instructions.get(address)
        if actual is None or (actual.mnemonic, actual.op_str) != expected:
            raise AssertionError(f"Unexpected slot +0x14 instruction at {address:08X}: {actual}")

    if read_u32(image, SLOT_CELL) != ADDRESS:
        raise AssertionError("CShell_MapObjectScreen vtable slot +0x14 no longer points to this method")
    if read_rtti_name(image, VTABLE) != b".?AVCShell_MapObjectScreen@@":
        raise AssertionError("CShell_MapObjectScreen vtable RTTI owner changed")
    expected_hierarchy = (
        b".?AVCShell_MapObjectScreen@@",
        b".?AVCNavyMapObjectScreen@@",
        b".?AVCMapObjectScreen@@",
        b".?AVCScreen@@",
    )
    if read_rtti_hierarchy(image, VTABLE) != expected_hierarchy:
        raise AssertionError("CShell_MapObjectScreen RTTI base hierarchy changed")

    if not FRAME_HELPERS.issubset(matched):
        raise AssertionError("A direct frame helper cited as byte-verified is not in the match catalog")

    for path in EDGE_EXPORTS:
        with path.open(encoding="utf-8", newline="") as stream:
            edges = list(csv.DictReader(stream, delimiter="\t"))
        outgoing = {
            (int(edge["site"], 16), int(edge["target"], 16), edge["type"])
            for edge in edges
            if edge["kind"] == "CALL" and int(edge["function"], 16) == ADDRESS
        }
        if outgoing != EXPECTED_CALLS:
            raise AssertionError(f"Outgoing direct calls changed in {path.name}: {outgoing}")
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
        f"Main.dll CShell_MapObjectScreen vtable slot +0x14: {SIZE} bytes / "
        f"{INSTRUCTION_COUNT} instructions byte-identical; RTTI, complete body, "
        "matched frame helpers, mode branches, and final virtual callback verified"
    )


if __name__ == "__main__":
    main()
