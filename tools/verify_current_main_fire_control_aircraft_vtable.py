"""Verify the open primary-vtable remainder for aircraft fire control."""
import csv
import json
from collections import defaultdict, deque
from pathlib import Path
import struct

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import MAIN_FIRE_CONTROL_AIRCRAFT_VTABLE_ADDRESSES
except ImportError:
    from build_current_main_verifications import MAIN_FIRE_CONTROL_AIRCRAFT_VTABLE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-fire-control-aircraft-vtable-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-fire-control-aircraft-vtable-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
TYPE_NAME = b".?AVCPannelFireControlAddOnAircraft@@\0"
TYPE_DESCRIPTOR = 0x589CCD30
COL_POINTER = 0x5899EA10
COL = 0x589A8994
VTABLE = 0x5899EA14

FUNCTIONS = {int(address, 16) for address in MAIN_FIRE_CONTROL_AIRCRAFT_VTABLE_ADDRESSES}
EXPECTED_EXPORTS = {"58758EE0", "587CEF70"}
EXPECTED_RANGES = {
    0x58858670: ((0x58858670, 21), (0x58858688, 6)),
    0x58858030: ((0x58858030, 814),),
    0x58857E40: ((0x58857E40, 114),),
    0x5885C060: ((0x5885C060, 228),),
    0x5885BAF0: ((0x5885BAF0, 1037), (0x5885BF00, 310)),
    0x58857F00: ((0x58857F00, 3),),
    0x58858650: ((0x58858650, 19),),
    0x58858550: ((0x58858550, 59),),
    0x58858590: ((0x58858590, 59),),
}
EXPECTED_INSTRUCTIONS = {
    0x58858670: 10,
    0x58858030: 281,
    0x58857E40: 32,
    0x5885C060: 73,
    0x5885BAF0: 324,
    0x58857F00: 1,
    0x58858650: 4,
    0x58858550: 19,
    0x58858590: 19,
}
EXPECTED_RANGE_INSTRUCTIONS = {
    0x58858670: {(0x58858670, 21): 7, (0x58858688, 6): 3},
    0x58858030: {(0x58858030, 814): 281},
    0x58857E40: {(0x58857E40, 114): 32},
    0x5885C060: {(0x5885C060, 228): 73},
    0x5885BAF0: {(0x5885BAF0, 1037): 241, (0x5885BF00, 310): 83},
    0x58857F00: {(0x58857F00, 3): 1},
    0x58858650: {(0x58858650, 19): 4},
    0x58858550: {(0x58858550, 59): 19},
    0x58858590: {(0x58858590, 59): 19},
}
EXPECTED_VTABLE = (
    0x58858670, 0x58903400, 0x58903420, 0x5885C060,
    0x5885A460, 0x58902FE0, 0x5885BAF0, 0x5874DDD0,
    0x58857F00, 0x588A5380, 0x588A5380, 0x58858650,
    0x58858550, 0x58858590,
)
OPEN_VTABLE_ROOTS = {
    0x58858670, 0x5885C060, 0x5885BAF0, 0x58857F00,
    0x58858650, 0x58858550, 0x58858590,
}
EXPECTED_VTABLE_DATA = {
    (0x58857F00, 0x5899E9F8, 0x58857F00),
    (0x58857F00, 0x5899EA34, 0x58857F00),
    (0x58857F00, 0x5899EAC0, 0x58857F00),
    (0x58857F00, 0x5899EAFC, 0x58857F00),
    (0x58858550, 0x5899EA44, 0x58858550),
    (0x58858590, 0x5899EA48, 0x58858590),
    (0x58858650, 0x5899EA40, 0x58858650),
    (0x58858670, 0x5899EA14, 0x58858670),
    (0x5885BAF0, 0x5899EA2C, 0x5885BAF0),
    (0x5885C060, 0x5899EA20, 0x5885C060),
}
EXPECTED_EXTERNAL_CONSTRUCTOR_CALL = (0x58854A00, 0x58855C6A, 0x5885AAA0)
EXPECTED_INDIRECT_CALL_SITES = {
    0x58857E40: {0x58857E86},
    0x58858030: {
        0x58858077, 0x5885808F, 0x588580A7, 0x588580BF, 0x588580D7,
        0x588580EF, 0x58858107, 0x5885811F, 0x58858137, 0x5885814F,
        0x58858167, 0x5885817F, 0x5885819E, 0x588581C2, 0x588581D3,
        0x588581E7, 0x588581FC, 0x5885820E, 0x5885822B, 0x58858243,
        0x5885825B, 0x58858273, 0x5885828B, 0x588582A3, 0x588582BB,
        0x588582D3, 0x588582EB, 0x58858303, 0x5885831B, 0x58858333,
    },
    0x5885BAF0: {0x5885BD47, 0x5885C01C, 0x5885C02D},
    0x5885C060: {0x5885C131},
}
EXPECTED_BYTES = 2670
EXPECTED_DIRECT_CALL_COUNT = 22
EXPECTED_INDIRECT_CALL_COUNT = 35


def read_body_ranges():
    exports = defaultdict(lambda: defaultdict(list))
    counts = defaultdict(dict)
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_count = int(row["instruction_count"])
            if address not in FUNCTIONS:
                raise AssertionError(f"Unexpected Ghidra body function: {row}")
            if size <= 0 or int(row["instruction_bytes"]) != size or instruction_count <= 0:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            exports[export][address].append((start, size))
            counts[export].setdefault(address, {})[(start, size)] = instruction_count
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError(f"Unexpected fresh Ghidra projects: {sorted(exports)}")
    normalized = {
        export: {address: tuple(sorted(ranges)) for address, ranges in functions.items()}
        for export, functions in exports.items()
    }
    for export, functions in normalized.items():
        if functions != EXPECTED_RANGES:
            raise AssertionError(f"Unexpected body ranges in export {export}")
        if counts[export] != EXPECTED_RANGE_INSTRUCTIONS:
            raise AssertionError(f"Ghidra instruction counts changed in export {export}")
    if normalized["58758EE0"] != normalized["587CEF70"]:
        raise AssertionError("Fresh Ghidra projects disagree on body ranges")
    return normalized["58758EE0"]


def read_edges():
    exports = defaultdict(lambda: {"CALL": set(), "DATA": set()})
    with CALL_EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if export not in EXPECTED_EXPORTS:
                raise AssertionError(f"Unexpected edge export: {row}")
            kind = row["kind"]
            if kind not in {"CALL", "DATA"}:
                continue
            caller, site, target = (int(row[key], 16) for key in ("function", "site", "target"))
            if kind == "CALL" and caller not in FUNCTIONS and (caller, site, target) != EXPECTED_EXTERNAL_CONSTRUCTOR_CALL:
                raise AssertionError(f"Unexpected supporting caller edge: {row}")
            if kind == "DATA" and caller not in FUNCTIONS:
                raise AssertionError(f"Unexpected supporting data edge: {row}")
            exports[export][kind].add((caller, site, target))
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("Call-edge manifest omits a fresh Ghidra export")
    first, second = (exports[name] for name in sorted(EXPECTED_EXPORTS))
    if first != second:
        raise AssertionError("Fresh Ghidra projects disagree on calls or data references")
    if len(first["CALL"]) != EXPECTED_DIRECT_CALL_COUNT + 1:
        raise AssertionError("Unexpected direct-call count including constructor evidence")
    if first["DATA"] != EXPECTED_VTABLE_DATA:
        raise AssertionError("Vtable data references changed")
    if EXPECTED_EXTERNAL_CONSTRUCTOR_CALL not in first["CALL"]:
        raise AssertionError("Matched constructor-to-derived-constructor call is missing")
    return {edge for edge in first["CALL"] if edge[0] in FUNCTIONS}, first["DATA"]


def verify_rtti_and_vtable(image):
    def read_u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address outside Main.dll: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    if read_u32(COL_POINTER) != COL:
        raise AssertionError("Aircraft panel RTTI locator pointer changed")
    fields = tuple(read_u32(COL + offset) for offset in (0, 4, 8, 12, 16))
    if fields != (0, 0, 0, TYPE_DESCRIPTOR, COL + 0x14):
        raise AssertionError("Aircraft panel complete-object locator changed")
    name_offset = TYPE_DESCRIPTOR - BASE + 8
    if image[name_offset:name_offset + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI type descriptor no longer names the aircraft panel")
    table = tuple(read_u32(VTABLE + offset * 4) for offset in range(len(EXPECTED_VTABLE)))
    if table != EXPECTED_VTABLE:
        raise AssertionError(f"Aircraft panel primary vtable changed: {table}")
    for _, site, target in EXPECTED_VTABLE_DATA:
        if read_u32(site) != target:
            raise AssertionError(f"Vtable data reference changed at {site:08X}")
    if {table[index] for index in range(len(table)) if table[index] in FUNCTIONS} != OPEN_VTABLE_ROOTS:
        raise AssertionError("Open primary-vtable slots differ from the selected roots")


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(instruction.size for instruction in instructions) != size
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"])) for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def main():
    image = IMAGE_PATH.read_bytes()
    verify_rtti_and_vtable(image)
    function_ranges = read_body_ranges()
    expected_calls, data_references = read_edges()
    total_bytes = sum(size for ranges in function_ranges.values() for _, size in ranges)
    if total_bytes != EXPECTED_BYTES or sum(len(ranges) for ranges in function_ranges.values()) != 11:
        raise AssertionError("Unexpected aircraft fire-control vtable slice size")

    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, record in records.items() if record.get("verified_by") == MARKER}
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    decoded_calls = set()
    indirect_calls = defaultdict(set)
    for address, ranges in function_ranges.items():
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or address not in matched:
            raise AssertionError(f"Missing byte-identical function {address:08X}")
        if int(row["size"]) != sum(size for _, size in ranges):
            raise AssertionError(f"Inventory size disagrees with Ghidra at {address:08X}")
        if int(record["size"]) != int(row["size"]) or record_ranges(record) != ranges:
            raise AssertionError(f"ObjDiff ranges disagree at {address:08X}")
        instructions = [
            instruction
            for start, size in ranges
            for instruction in decode_complete(image, decoder, start, size)
        ]
        if len(instructions) != EXPECTED_INSTRUCTIONS[address]:
            raise AssertionError(f"Instruction count changed at {address:08X}")
        for instruction in instructions:
            if instruction.id != X86_INS_CALL or not instruction.operands:
                continue
            operand = instruction.operands[0]
            if operand.type == X86_OP_IMM:
                decoded_calls.add((address, instruction.address, operand.imm & 0xFFFFFFFF))
            else:
                indirect_calls[address].add(instruction.address)

    if decoded_calls != expected_calls:
        raise AssertionError(
            "Mapped direct calls disagree with both fresh Ghidra exports; "
            f"missing={sorted(expected_calls - decoded_calls)}, "
            f"unexpected={sorted(decoded_calls - expected_calls)}"
        )
    if sum(map(len, indirect_calls.values())) != EXPECTED_INDIRECT_CALL_COUNT:
        raise AssertionError(f"Unexpected indirect-call count: {dict(indirect_calls)}")
    if dict(indirect_calls) != EXPECTED_INDIRECT_CALL_SITES:
        raise AssertionError(f"Indirect call sites changed: {dict(indirect_calls)}")
    if len(decoded_calls) != EXPECTED_DIRECT_CALL_COUNT or len(data_references) != 10:
        raise AssertionError("Direct-call or vtable-data-reference count changed")
    for _, _, target in decoded_calls:
        if target not in FUNCTIONS and target not in matched:
            raise AssertionError(f"Selected vtable methods call unmatched function {target:08X}")

    graph = {address: set() for address in FUNCTIONS}
    for caller, _, target in decoded_calls:
        if target in FUNCTIONS:
            graph[caller].add(target)
    reached = set(OPEN_VTABLE_ROOTS)
    pending = deque(OPEN_VTABLE_ROOTS)
    while pending:
        for target in graph[pending.popleft()] - reached:
            reached.add(target)
            pending.append(target)
    if reached != FUNCTIONS:
        raise AssertionError(f"Vtable roots fail to cover destructor helpers: {sorted(FUNCTIONS - reached)}")

    for constructor in (0x58854A00, 0x5885AAA0):
        record = records.get(constructor)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Class construction evidence is not byte-matched: {constructor:08X}")
    for target in set(EXPECTED_VTABLE):
        record = records.get(target)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Primary-vtable target is not byte-matched: {target:08X}")
    constructor_notes = records[0x5885AAA0].get("evidence", {})
    if ("CPannelFireControlAddOnAircraft::vftable" not in constructor_notes.get("name_in_analysis", "")
            or "CPannelFireControl constructor" not in constructor_notes.get("called_by", "")):
        raise AssertionError("Matched derived-constructor evidence no longer anchors the class")

    print(
        f"Main.dll aircraft fire-control primary-vtable remainder: {len(FUNCTIONS)} "
        f"functions / {total_bytes:,} bytes / 763 instructions ObjDiff-identical; "
        "all seven open slots, both fresh Ghidra exports, RTTI, constructor edge, "
        "22 direct calls and destructor closure pass. Thirty-five indirect "
        "dispatches remain unresolved."
    )


if __name__ == "__main__":
    main()
