"""Verify the open RTTI-backed ManageSquad tab slice against Main.dll."""
import csv
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import MAIN_MANAGE_SQUAD_TAB_ADDRESSES
except ImportError:
    from build_current_main_verifications import MAIN_MANAGE_SQUAD_TAB_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-manage-squad-tab-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-manage-squad-tab-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
TYPE_NAME = b".?AVCPannelCommunicatorConfigManageSquadTab@@\0"
TYPE_DESCRIPTOR = 0x589CC6D0
COL_POINTER = 0x5899E324
COL = 0x589A850C
VTABLE = 0x5899E328

FUNCTIONS = {int(address, 16) for address in MAIN_MANAGE_SQUAD_TAB_ADDRESSES}
EXPECTED_EXPORTS = {"58758EE0-FRESH", "587CEF70-FRESH"}
EXPECTED_RANGES = {
    0x587B6A60: ((0x587B6A60, 11),),
    0x587B6A70: ((0x587B6A70, 11),),
    0x587B6A80: ((0x587B6A80, 341),),
    0x587B6ED0: ((0x587B6ED0, 63),),
    0x587B6F10: ((0x587B6F10, 97),),
    0x587BAAE0: ((0x587BAAE0, 120),),
    0x5882F000: ((0x5882F000, 78),),
    0x58833D70: ((0x58833D70, 169),),
    0x58839730: ((0x58839730, 339),),
    0x58839F30: ((0x58839F30, 101),),
    0x58839FA0: ((0x58839FA0, 246),),
    0x5883A0A0: ((0x5883A0A0, 1034),),
    0x5883A4D0: ((0x5883A4D0, 573), (0x5883A710, 1356), (0x5883AC5F, 32)),
    0x5883ACB0: ((0x5883ACB0, 21), (0x5883ACC8, 6)),
    0x5883ACD0: ((0x5883ACD0, 570), (0x5883AF10, 41), (0x5883AF40, 1103)),
    0x5883B500: ((0x5883B500, 1758),),
    0x58848420: ((0x58848420, 37),),
}
EXPECTED_RANGE_INSTRUCTIONS = {
    0x587B6A60: {(0x587B6A60, 11): 4},
    0x587B6A70: {(0x587B6A70, 11): 4},
    0x587B6A80: {(0x587B6A80, 341): 142},
    0x587B6ED0: {(0x587B6ED0, 63): 31},
    0x587B6F10: {(0x587B6F10, 97): 48},
    0x587BAAE0: {(0x587BAAE0, 120): 49},
    0x5882F000: {(0x5882F000, 78): 21},
    0x58833D70: {(0x58833D70, 169): 46},
    0x58839730: {(0x58839730, 339): 107},
    0x58839F30: {(0x58839F30, 101): 31},
    0x58839FA0: {(0x58839FA0, 246): 70},
    0x5883A0A0: {(0x5883A0A0, 1034): 268},
    0x5883A4D0: {
        (0x5883A4D0, 573): 193,
        (0x5883A710, 1356): 428,
        (0x5883AC5F, 32): 7,
    },
    0x5883ACB0: {(0x5883ACB0, 21): 7, (0x5883ACC8, 6): 3},
    0x5883ACD0: {
        (0x5883ACD0, 570): 159,
        (0x5883AF10, 41): 13,
        (0x5883AF40, 1103): 292,
    },
    0x5883B500: {(0x5883B500, 1758): 434},
    0x58848420: {(0x58848420, 37): 15},
}
EXPECTED_INSTRUCTIONS = {
    address: sum(ranges.values()) for address, ranges in EXPECTED_RANGE_INSTRUCTIONS.items()
}
EXPECTED_VTABLE = (
    0x5883ACB0, 0x587B6A60, 0x587B6A70, 0x587B6ED0,
    0x5883A0A0, 0x587B6F10, 0x5883B500, 0x5883ACD0,
    0x5882F000, 0x587B6A80, 0x58833D70,
)
OPEN_VTABLE_ROOTS = set(EXPECTED_VTABLE)
EXPECTED_VTABLE_DATA = {
    (0x587B6A60, 0x5899A0EC, 0x587B6A60),
    (0x587B6A60, 0x5899E1D8, 0x587B6A60),
    (0x587B6A60, 0x5899E32C, 0x587B6A60),
    (0x587B6A70, 0x5899A0F0, 0x587B6A70),
    (0x587B6A70, 0x5899E1DC, 0x587B6A70),
    (0x587B6A70, 0x5899E330, 0x587B6A70),
    (0x587B6A80, 0x5899A10C, 0x587B6A80),
    (0x587B6A80, 0x5899E1F8, 0x587B6A80),
    (0x587B6A80, 0x5899E34C, 0x587B6A80),
    (0x587B6ED0, 0x5899A0F4, 0x587B6ED0),
    (0x587B6ED0, 0x5899E1E0, 0x587B6ED0),
    (0x587B6ED0, 0x5899E334, 0x587B6ED0),
    (0x587B6F10, 0x5899A0FC, 0x587B6F10),
    (0x587B6F10, 0x5899E1E8, 0x587B6F10),
    (0x587B6F10, 0x5899E33C, 0x587B6F10),
    (0x5882F000, 0x5899E008, 0x5882F000),
    (0x5882F000, 0x5899E1F4, 0x5882F000),
    (0x5882F000, 0x5899E348, 0x5882F000),
    (0x58833D70, 0x5899E1FC, 0x58833D70),
    (0x58833D70, 0x5899E350, 0x58833D70),
    (0x5883A0A0, 0x5899E338, 0x5883A0A0),
    (0x5883ACB0, 0x5899E328, 0x5883ACB0),
    (0x5883ACD0, 0x5899E344, 0x5883ACD0),
    (0x5883B500, 0x5899E340, 0x5883B500),
}
EXPECTED_EXTERNAL_CONSTRUCTOR_CALL = (0x58843380, 0x588442E6, 0x5883BBE0)
EXPECTED_BYTES = 8107
EXPECTED_BODY_RANGE_COUNT = 22
EXPECTED_DIRECT_CALL_COUNT = 140
EXPECTED_DATA_REFERENCE_COUNT = 24
EXPECTED_INDIRECT_CALL_COUNTS = {
    0x587B6ED0: 3,
    0x587B6F10: 2,
    0x587BAAE0: 1,
    0x58839FA0: 1,
    0x5883A0A0: 1,
    0x5883A4D0: 62,
    0x5883ACD0: 1,
    0x5883B500: 15,
}


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
    if normalized["58758EE0-FRESH"] != normalized["587CEF70-FRESH"]:
        raise AssertionError("Fresh Ghidra projects disagree on body ranges")
    if len(FUNCTIONS) != 17 or sum(map(len, EXPECTED_RANGES.values())) != EXPECTED_BODY_RANGE_COUNT:
        raise AssertionError("The selected ManageSquad slice definition changed")
    if sum(size for ranges in EXPECTED_RANGES.values() for _, size in ranges) != EXPECTED_BYTES:
        raise AssertionError("The selected ManageSquad byte total changed")
    if sum(EXPECTED_INSTRUCTIONS.values()) != 2372:
        raise AssertionError("The selected ManageSquad instruction total changed")
    return normalized["58758EE0-FRESH"]


def read_edges():
    exports = defaultdict(lambda: {"CALL": set(), "DATA": set()})
    call_target_functions = {}
    with CALL_EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if export not in EXPECTED_EXPORTS:
                raise AssertionError(f"Unexpected edge export: {row}")
            kind = row["kind"]
            if kind not in {"CALL", "DATA"}:
                continue
            caller, site, target = (int(row[key], 16) for key in ("function", "site", "target"))
            if kind == "CALL":
                call = (caller, site, target)
                if caller not in FUNCTIONS and call != EXPECTED_EXTERNAL_CONSTRUCTOR_CALL:
                    raise AssertionError(f"Unexpected supporting caller edge: {row}")
                target_function = int(row["target_function"], 16) if row["target_function"] else target
                call_target_functions[call] = target_function
            elif caller not in FUNCTIONS:
                raise AssertionError(f"Unexpected supporting data edge: {row}")
            exports[export][kind].add((caller, site, target))
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("Call-edge manifest omits a fresh Ghidra export")
    first, second = (exports[name] for name in sorted(EXPECTED_EXPORTS))
    if first != second:
        raise AssertionError("Fresh Ghidra projects disagree on calls or data references")
    selected_calls = {edge for edge in first["CALL"] if edge[0] in FUNCTIONS}
    if len(selected_calls) != EXPECTED_DIRECT_CALL_COUNT:
        raise AssertionError("Unexpected direct-call count in the ManageSquad closure")
    if len(first["CALL"]) != EXPECTED_DIRECT_CALL_COUNT + 1:
        raise AssertionError("The matched constructor edge must be the sole supporting call")
    if first["DATA"] != EXPECTED_VTABLE_DATA:
        raise AssertionError("ManageSquad vtable data references changed")
    if len(first["DATA"]) != EXPECTED_DATA_REFERENCE_COUNT:
        raise AssertionError("Unexpected ManageSquad vtable data-reference count")
    if EXPECTED_EXTERNAL_CONSTRUCTOR_CALL not in first["CALL"]:
        raise AssertionError("Matched constructor-to-derived-constructor call is missing")
    return selected_calls, first["DATA"], call_target_functions


def verify_rtti_and_vtable(image):
    def read_u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address outside Main.dll: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    if read_u32(COL_POINTER) != COL:
        raise AssertionError("ManageSquad RTTI locator pointer changed")
    fields = tuple(read_u32(COL + offset) for offset in (0, 4, 8, 12, 16))
    if fields != (0, 0, 0, TYPE_DESCRIPTOR, COL + 0x14):
        raise AssertionError("ManageSquad complete-object locator changed")
    name_offset = TYPE_DESCRIPTOR - BASE + 8
    if image[name_offset:name_offset + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI type descriptor no longer names ManageSquadTab")
    table = tuple(read_u32(VTABLE + offset * 4) for offset in range(len(EXPECTED_VTABLE)))
    if table != EXPECTED_VTABLE:
        raise AssertionError(f"ManageSquad primary vtable changed: {table}")
    for _, site, target in EXPECTED_VTABLE_DATA:
        if read_u32(site) != target:
            raise AssertionError(f"ManageSquad vtable data reference changed at {site:08X}")
    if set(table) != OPEN_VTABLE_ROOTS:
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
    expected_calls, data_references, call_target_functions = read_edges()
    total_bytes = sum(size for ranges in function_ranges.values() for _, size in ranges)
    range_count = sum(len(ranges) for ranges in function_ranges.values())
    if total_bytes != EXPECTED_BYTES or range_count != EXPECTED_BODY_RANGE_COUNT:
        raise AssertionError("Unexpected ManageSquad primary-vtable slice size")

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
    for call in decoded_calls:
        target_function = call_target_functions[call]
        if target_function in FUNCTIONS:
            continue
        if target_function not in matched:
            raise AssertionError(
                f"Open direct callee escaped the selected closure: {target_function:08X}"
            )
    boundary_calls = {
        call for call in decoded_calls if call_target_functions[call] not in FUNCTIONS
    }
    boundary_targets = {call_target_functions[call] for call in boundary_calls}
    if len(boundary_calls) != 129 or len(boundary_targets) != 37:
        raise AssertionError("The matched direct-call boundary changed")

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
        raise AssertionError(f"Open helpers are not covered by the RTTI vtable roots: {sorted(FUNCTIONS - reached)}")

    matched_constructor = records.get(0x58843380)
    derived_constructor = records.get(0x5883BBE0)
    for address, record in ((0x58843380, matched_constructor), (0x5883BBE0, derived_constructor)):
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Matched ManageSquad construction evidence is missing: {address:08X}")
    notes = derived_constructor.get("evidence", {})
    if ("CPannelCommunicatorConfigManageSquadTab::vftable" not in notes.get("name_in_analysis", "")
            or "0x588442E6" not in notes.get("called_by", "")):
        raise AssertionError("Matched derived-constructor evidence no longer anchors the class")

    indirect_count = sum(map(len, indirect_calls.values()))
    unresolved_by_function = {address: len(sites) for address, sites in indirect_calls.items()}
    if indirect_count != 86 or unresolved_by_function != EXPECTED_INDIRECT_CALL_COUNTS:
        raise AssertionError(f"Indirect dispatch sites changed: {unresolved_by_function}")
    print(
        f"Main.dll CPannelCommunicatorConfigManageSquadTab: {len(FUNCTIONS)} "
        f"functions / {total_bytes:,} bytes / {sum(EXPECTED_INSTRUCTIONS.values()):,} "
        f"instructions ObjDiff-identical across {range_count} Ghidra ranges; "
        f"11 RTTI slots, two fresh exports, {len(expected_calls)} direct calls "
        f"({len([call for call in expected_calls if call[2] in FUNCTIONS])} within the slice), "
        f"129 calls to 37 matched functions, {len(data_references)} exact data references, "
        f"and the matched constructor path pass. {indirect_count} indirect call sites "
        f"remain unresolved by function: "
        f"{{{', '.join(f'{address:08X}: {count}' for address, count in sorted(unresolved_by_function.items()))}}}"
    )


if __name__ == "__main__":
    main()
