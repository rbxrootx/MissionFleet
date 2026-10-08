"""Verify the RTTI-backed Manage Fleet tab slice and its direct-call closure."""
import csv
import hashlib
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_MANAGE_FLEET_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_MANAGE_FLEET_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )
except ImportError:
    from build_current_main_verifications import (
        MAIN_MANAGE_FLEET_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_MANAGE_FLEET_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-communicator-manage-fleet-tab-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-communicator-manage-fleet-tab-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

TYPE_NAME = b".?AVCPannelCommunicatorConfigManageFleetTab@@\0"
COL_POINTER = 0x5899E1D0
COL = 0x589A84B4
TYPE_DESCRIPTOR = 0x589CC698
VTABLE = 0x5899E1D4
VTABLE_END = 0x5899E200
ROOTS = {0x58835900, 0x58834680, 0x58835370}
FUNCTIONS = {int(value, 16) for value in MAIN_MANAGE_FLEET_TAB_ADDRESSES}
EXPECTED_EXPORTS = {"58758EE0-FRESH", "587CEF70-FRESH"}
EXPECTED_VTABLE = (
    0x58835900, 0x587B6A60, 0x587B6A70, 0x587B6ED0, 0x58834680,
    0x587B6F10, 0x58835F70, 0x58835370, 0x5882F000, 0x587B6A80,
    0x58833D70,
)
EXPECTED_RANGES = {
    0x58834120: ((0x58834120, 101),),
    0x58834680: ((0x58834680, 1017),),
    0x58834C00: ((0x58834C00, 717), (0x58834ED0, 266),
                 (0x58834FE0, 778), (0x588352ED, 32)),
    0x58835370: ((0x58835370, 484), (0x58835560, 552), (0x58835790, 278)),
    0x58835900: ((0x58835900, 21), (0x58835918, 6)),
}
EXPECTED_RANGE_INSTRUCTIONS = {
    0x58834120: {(0x58834120, 101): 31},
    0x58834680: {(0x58834680, 1017): 263},
    0x58834C00: {
        (0x58834C00, 717): 245, (0x58834ED0, 266): 86,
        (0x58834FE0, 778): 234, (0x588352ED, 32): 7,
    },
    0x58835370: {
        (0x58835370, 484): 118, (0x58835560, 552): 148,
        (0x58835790, 278): 78,
    },
    0x58835900: {(0x58835900, 21): 7, (0x58835918, 6): 3},
}
EXPECTED_VTABLE_DATA = {
    (0x58835900, 0x5899E1D4, 0x58835900),
    (0x58834680, 0x5899E1E4, 0x58834680),
    (0x58835370, 0x5899E1F0, 0x58835370),
}
EXPECTED_CONSTRUCTOR_CALL = (0x58843380, 0x588442A1, 0x58836B90)
EXPECTED_INDIRECT_CALLS = {
    0x58834680: 1,
    0x58834C00: 56,
    0x58835370: 1,
}
EXPECTED_BYTES = 4252
EXPECTED_BODY_RANGE_COUNT = 11
EXPECTED_INSTRUCTIONS = 1220
EXPECTED_DIRECT_CALL_COUNT = 91
EXPECTED_INTERNAL_CALL_COUNT = 2
EXPECTED_DATA_REFERENCE_COUNT = 3


def read_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def read_body_ranges():
    exports = defaultdict(lambda: defaultdict(list))
    counts = defaultdict(dict)
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            function = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_count = int(row["instruction_count"])
            if function not in FUNCTIONS:
                raise AssertionError(f"Unexpected Manage Fleet body function: {row}")
            if size <= 0 or int(row["instruction_bytes"]) != size or instruction_count <= 0:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            exports[export][function].append((start, size))
            counts[export].setdefault(function, {})[(start, size)] = instruction_count
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError(f"Unexpected fresh Ghidra projects: {sorted(exports)}")
    normalized = {
        export: {function: tuple(sorted(ranges)) for function, ranges in functions.items()}
        for export, functions in exports.items()
    }
    for export in EXPECTED_EXPORTS:
        if normalized[export] != EXPECTED_RANGES:
            raise AssertionError(f"Unexpected Manage Fleet body ranges in export {export}")
        if counts[export] != EXPECTED_RANGE_INSTRUCTIONS:
            raise AssertionError(f"Ghidra instruction counts changed in export {export}")
    if sum(map(len, EXPECTED_RANGES.values())) != EXPECTED_BODY_RANGE_COUNT:
        raise AssertionError("The selected Manage Fleet body-range definition changed")
    if sum(size for ranges in EXPECTED_RANGES.values() for _, size in ranges) != EXPECTED_BYTES:
        raise AssertionError("The selected Manage Fleet byte total changed")
    if sum(sum(ranges.values()) for ranges in EXPECTED_RANGE_INSTRUCTIONS.values()) != EXPECTED_INSTRUCTIONS:
        raise AssertionError("The selected Manage Fleet instruction total changed")
    return normalized["58758EE0-FRESH"]


def read_edges():
    exports = defaultdict(lambda: {"CALL": set(), "DATA": set()})
    target_functions = {}
    with CALL_EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if export not in EXPECTED_EXPORTS:
                raise AssertionError(f"Unexpected Manage Fleet edge export: {row}")
            if row["kind"] not in {"CALL", "DATA"}:
                continue
            caller, site, target = (int(row[key], 16) for key in ("function", "site", "target"))
            edge = (caller, site, target)
            if row["kind"] == "CALL":
                if caller not in FUNCTIONS and edge != EXPECTED_CONSTRUCTOR_CALL:
                    raise AssertionError(f"Unexpected supporting call edge: {row}")
                target_function = int(row["target_function"], 16) if row["target_function"] else target
                target_functions[(export, edge)] = target_function
            elif caller not in FUNCTIONS:
                raise AssertionError(f"Unexpected supporting data edge: {row}")
            exports[export][row["kind"]].add(edge)
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("Manage Fleet call-edge manifest omits a fresh Ghidra export")
    first, second = (exports[name] for name in sorted(EXPECTED_EXPORTS))
    if first != second:
        raise AssertionError("The two fresh Ghidra call/data exports disagree")
    return first, target_functions


def read_u32(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Address is outside mapped Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def main():
    inventory_rows = read_rows(INVENTORY_PATH)
    inventory = {
        int(row["address"], 16): row for row in inventory_rows
        if row["component"] == "client-main-current"
    }
    document = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    catalog = {int(item["address"], 16): item for item in document["matches"]}
    matched = {address for address, item in catalog.items()
               if item.get("verified_by") == MARKER}
    image = IMAGE_PATH.read_bytes()

    if read_u32(image, COL_POINTER) != COL:
        raise AssertionError("Manage Fleet vftable does not point to its expected CompleteObjectLocator")
    col_fields = tuple(read_u32(image, COL + offset) for offset in (0, 4, 8, 12, 16))
    if col_fields != (0, 0, 0, TYPE_DESCRIPTOR, 0x589A84C8):
        raise AssertionError(f"Manage Fleet CompleteObjectLocator fields changed: {col_fields}")
    name_offset = TYPE_DESCRIPTOR + 8 - BASE
    if image[name_offset:name_offset + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("Manage Fleet RTTI TypeDescriptor name changed")
    table = tuple(read_u32(image, VTABLE + 4 * index) for index in range(len(EXPECTED_VTABLE)))
    if table != EXPECTED_VTABLE:
        raise AssertionError(f"Manage Fleet primary vtable changed: {table}")
    boundary_key = b"STR_SHORT_COMMUSERSTATUS_UNDERBATTLE\0"
    if image[VTABLE_END - BASE:VTABLE_END - BASE + len(boundary_key)] != boundary_key:
        raise AssertionError("The Manage Fleet vtable boundary no longer precedes its status-key data")
    open_slots = {VTABLE + 0: 0x58835900, VTABLE + 0x10: 0x58834680,
                  VTABLE + 0x1C: 0x58835370}
    if any(table[(slot - VTABLE) // 4] != target for slot, target in open_slots.items()):
        raise AssertionError("The three open Manage Fleet primary vtable slots changed")

    ranges = read_body_ranges()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True
    indirect_calls = defaultdict(list)
    for function, body_ranges in ranges.items():
        decoded_count = 0
        for start, size in body_ranges:
            code = image[start - BASE:start - BASE + size]
            instructions = list(md.disasm(code, start))
            if not instructions or instructions[-1].address + instructions[-1].size != start + size:
                raise AssertionError(f"Mapped image does not decode across {start:08X} +0x{size:X}")
            expected_count = EXPECTED_RANGE_INSTRUCTIONS[function][(start, size)]
            if len(instructions) != expected_count:
                raise AssertionError(f"Mapped instruction count changed for {function:08X} at {start:08X}")
            decoded_count += len(instructions)
            for instruction in instructions:
                if (instruction.id == X86_INS_CALL and instruction.operands
                        and instruction.operands[0].type != X86_OP_IMM):
                    indirect_calls[function].append(instruction.address)
        if decoded_count != sum(EXPECTED_RANGE_INSTRUCTIONS[function].values()):
            raise AssertionError(f"Mapped body coverage changed for {function:08X}")
    actual_indirect = {function: len(indirect_calls[function]) for function in indirect_calls}
    if actual_indirect != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Unresolved indirect call sites changed: {actual_indirect}")

    edges, targets = read_edges()
    calls = edges["CALL"]
    data = edges["DATA"]
    body_calls = {edge for edge in calls if edge[0] in FUNCTIONS}
    if len(body_calls) != EXPECTED_DIRECT_CALL_COUNT or len(data) != EXPECTED_DATA_REFERENCE_COUNT:
        raise AssertionError(
            f"Unexpected Manage Fleet direct-call/data totals: {len(body_calls)}, {len(data)}"
        )
    internal = {edge for edge in calls if edge[0] in FUNCTIONS and targets[("58758EE0-FRESH", edge)] in FUNCTIONS}
    if len(internal) != EXPECTED_INTERNAL_CALL_COUNT:
        raise AssertionError(f"Unexpected Manage Fleet internal direct-call count: {len(internal)}")
    expected_data = {(function, site, function) for function, site, _ in EXPECTED_VTABLE_DATA}
    if data != expected_data:
        raise AssertionError(f"Manage Fleet vtable references changed: {data}")
    if (0x58843380, 0x588442A1, 0x58836B90) not in calls:
        raise AssertionError("Matched panel-to-Manage-Fleet constructor call disappeared")
    for function, address in ((0x58836B90, 0x58836BFF), (0x58834C00, 0x58834C2B)):
        size = int(inventory[function]["size"])
        code = image[function - BASE:function - BASE + size]
        decoded = {instruction.address: instruction for instruction in md.disasm(code, function)}
        instruction = decoded.get(address)
        if (instruction is None or len(instruction.operands) < 2
                or instruction.operands[1].type != X86_OP_IMM
                or (instruction.operands[1].imm & 0xFFFFFFFF) != VTABLE):
            raise AssertionError(f"Expected Manage Fleet vftable installation changed at {address:08X}")

    outgoing = defaultdict(set)
    for edge in calls:
        caller, _, _ = edge
        target = targets[("58758EE0-FRESH", edge)]
        if caller in FUNCTIONS:
            outgoing[caller].add(target)
    closure = set(ROOTS)
    pending = deque(ROOTS)
    while pending:
        caller = pending.popleft()
        for target in outgoing[caller] & FUNCTIONS:
            if target not in closure:
                closure.add(target)
                pending.append(target)
    if closure != FUNCTIONS:
        raise AssertionError(f"Manage Fleet direct-call closure changed: {sorted(closure ^ FUNCTIONS)}")
    external_targets = {targets[("58758EE0-FRESH", edge)] for edge in calls
                        if edge[0] in FUNCTIONS and targets[("58758EE0-FRESH", edge)] not in FUNCTIONS}
    if len(external_targets) != 18 or not external_targets <= matched:
        raise AssertionError("Manage Fleet direct calls no longer terminate at 18 matched functions")
    open_external = {target for target in external_targets if target in inventory and target not in matched}
    if open_external:
        raise AssertionError(f"Manage Fleet closure has unmatched direct callees: {sorted(open_external)}")

    for address in FUNCTIONS:
        if address not in catalog:
            raise AssertionError(f"Missing match record for {address:08X}")
        match = catalog[address]
        if match.get("verified_by") != MARKER or int(match["size"]) != int(inventory[address]["size"]):
            raise AssertionError(f"Function {address:08X} is not recorded as a complete byte match")
        if match.get("source_compiler") != SOURCE_COMPILER:
            raise AssertionError(f"Function {address:08X} compiler identity changed")
        if match.get("evidence") != MAIN_COMMUNICATOR_MANAGE_FLEET_TAB_EVIDENCE[f"{address:08X}"]:
            raise AssertionError(f"Function {address:08X} evidence differs from the builder source")
        expected_segments = EXPECTED_RANGES[address]
        actual_segments = tuple(sorted((int(item["address"], 16), int(item["size"]))
                                       for item in match.get("segments", [])))
        if actual_segments != expected_segments:
            raise AssertionError(f"Function {address:08X} source segments differ from fresh Ghidra")
        source_path = ROOT / match["source"]
        source = source_path.read_text(encoding="utf-8")
        if hashlib.sha256(source_path.read_bytes()).hexdigest() != match["source_sha256"]:
            raise AssertionError(f"Function {address:08X} source hash differs from the match record")
        if "__asm _emit" not in source:
            raise AssertionError(f"Function {address:08X} no longer emits the audited instruction bytes")
        for start, size in expected_segments:
            if f"Ghidra body range 0x{start:08X}..0x{start + size:08X}" not in source:
                raise AssertionError(f"Function {address:08X} source omits range {start:08X}")

    prior_matched_slots = set(EXPECTED_VTABLE) - {0x58835900, 0x58834680, 0x58835370}
    if not prior_matched_slots <= matched:
        raise AssertionError("A previously matched Manage Fleet vtable slot lost its byte match")
    if 0x58836B90 not in matched or 0x58843380 not in matched:
        raise AssertionError("Manage Fleet's matched constructor route is incomplete")

    print("verified Manage Fleet RTTI, 11 primary slots, and matched parent constructor route")
    print(f"verified {len(FUNCTIONS)} byte-identical functions / {EXPECTED_BYTES:,} bytes / "
          f"{EXPECTED_INSTRUCTIONS:,} instructions across {EXPECTED_BODY_RANGE_COUNT} exact ranges")
    print("verified 91 direct calls (2 internal, 89 to 18 matched targets), 3 vtable-slot data refs")
    print("unresolved indirect call sites: 58 (58834680:1, 58834C00:56, 58835370:1)")


if __name__ == "__main__":
    main()
