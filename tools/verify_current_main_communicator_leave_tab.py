"""Verify the LeaveTab RTTI, byte matches, and open direct-call closure."""
import csv
import hashlib
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM, X86_OP_MEM

try:
    from .build_current_main_verifications import (
        MAIN_COMMUNICATOR_LEAVE_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_LEAVE_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )
except ImportError:
    from build_current_main_verifications import (
        MAIN_COMMUNICATOR_LEAVE_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_LEAVE_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-leave-tab-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-leave-tab-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
TYPE_NAME = b".?AVCPannelCommunicatorConfigLeaveTab@@\0"
COL_POINTER = 0x5899E180
COL = 0x589A8460
TYPE_DESCRIPTOR = 0x589CC668
VTABLE = 0x5899E184
ROOTS = {0x58833640, 0x58833680, 0x588336D0, 0x588337A0}
FUNCTIONS = {int(address, 16) for address in MAIN_COMMUNICATOR_LEAVE_TAB_ADDRESSES}
EXPECTED_EXPORTS = {"58758EE0-FRESH", "587CEF70-FRESH"}
EXPECTED_VTABLE = (
    0x588336D0, 0x588337A0, 0x58833640, 0x588336F0,
    0x5873B360, 0x58902FE0, 0x58833680,
)
CONSTRUCTOR_CALL = (0x58843380, 0x5884421D, 0x58833980)
CONSTRUCTOR_VTABLE_WRITE = 0x588339ED
EXPECTED_BYTES = 750
EXPECTED_RANGES = 8
EXPECTED_INSTRUCTIONS = 241
EXPECTED_CALLS = 22
EXPECTED_INTERNAL_CALLS = 3
EXPECTED_BOUNDARY_SITES = 19
EXPECTED_BOUNDARY_TARGETS = 10
EXPECTED_DATA_REFERENCES = 4


def read_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple(sorted((int(item["address"], 16), int(item["size"]))
                            for item in record["segments"]))
    return ((int(record["address"], 16), int(record["size"])),)


def read_body_ranges():
    exports = defaultdict(lambda: defaultdict(list))
    counts = defaultdict(dict)
    for row in read_rows(RANGE_MANIFEST):
        export = row["export"].upper()
        function = int(row["function"], 16)
        start = int(row["start"], 16)
        size = int(row["length"])
        count = int(row["instruction_count"])
        if function not in FUNCTIONS:
            raise AssertionError(f"Unexpected LeaveTab body: {row}")
        if size <= 0 or int(row["instruction_bytes"]) != size or count <= 0:
            raise AssertionError(f"Incomplete Ghidra body range: {row}")
        exports[export][function].append((start, size))
        counts[export].setdefault(function, {})[(start, size)] = count
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError(f"Unexpected fresh Ghidra projects: {sorted(exports)}")
    normalized = {
        export: {function: tuple(sorted(ranges)) for function, ranges in functions.items()}
        for export, functions in exports.items()
    }
    if normalized["58758EE0-FRESH"] != normalized["587CEF70-FRESH"]:
        raise AssertionError("The two fresh Ghidra body exports disagree")
    if counts["58758EE0-FRESH"] != counts["587CEF70-FRESH"]:
        raise AssertionError("The two fresh Ghidra instruction counts disagree")
    ranges = normalized["58758EE0-FRESH"]
    if set(ranges) != FUNCTIONS:
        raise AssertionError("The body manifests do not contain the exact selected function set")
    if (sum(map(len, ranges.values())) != EXPECTED_RANGES
            or sum(size for parts in ranges.values() for _, size in parts) != EXPECTED_BYTES
            or sum(count for parts in counts["58758EE0-FRESH"].values()
                   for count in parts.values()) != EXPECTED_INSTRUCTIONS):
        raise AssertionError("LeaveTab body, range, or instruction totals changed")
    if len(FUNCTIONS) != 7 or not ROOTS <= FUNCTIONS:
        raise AssertionError("The LeaveTab direct-call closure definition changed")
    return ranges, counts["58758EE0-FRESH"]


def read_edges(matched):
    exports = defaultdict(lambda: {"CALL": set(), "DATA": set()})
    terminators = defaultdict(set)
    target_functions = {}
    for row in read_rows(CALL_EDGE_MANIFEST):
        export = row["export"].upper()
        if export not in EXPECTED_EXPORTS or row["kind"] not in {"CALL", "DATA"}:
            continue
        caller, site, target = (int(row[key], 16) for key in ("function", "site", "target"))
        edge = (caller, site, target)
        if row["kind"] == "CALL":
            if caller not in FUNCTIONS and edge != CONSTRUCTOR_CALL:
                raise AssertionError(f"Unexpected supporting call edge: {row}")
            target_function = int(row["target_function"], 16) if row["target_function"] else target
            target_functions[edge] = target_function
            if row["type"] == "CALL_TERMINATOR":
                terminators[export].add(edge)
        elif caller not in FUNCTIONS:
            raise AssertionError(f"Unexpected supporting data edge: {row}")
        exports[export][row["kind"]].add(edge)
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("LeaveTab call-edge manifest omits a fresh Ghidra export")
    first, second = (exports[name] for name in sorted(EXPECTED_EXPORTS))
    if first != second:
        raise AssertionError("The two fresh Ghidra projects disagree on calls or data references")
    first_terminators, second_terminators = (terminators[name] for name in sorted(EXPECTED_EXPORTS))
    if first_terminators != second_terminators:
        raise AssertionError("The two fresh Ghidra projects disagree on tail-transfer sites")
    calls = first["CALL"]
    selected_calls = {edge for edge in calls if edge[0] in FUNCTIONS}
    if len(selected_calls) != EXPECTED_CALLS:
        raise AssertionError("Unexpected LeaveTab direct-call count")
    if len(calls) != EXPECTED_CALLS + 1 or CONSTRUCTOR_CALL not in calls:
        raise AssertionError("The matched parent constructor edge is missing or changed")
    if len(first["DATA"]) != EXPECTED_DATA_REFERENCES:
        raise AssertionError("Unexpected LeaveTab data-reference count")
    for edge in selected_calls:
        target = target_functions[edge]
        if target not in FUNCTIONS and target not in matched:
            raise AssertionError(f"Open direct-call target escaped the closure: {target:08X}")
    return selected_calls, first["DATA"], target_functions, first_terminators


def read_u32(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Mapped address outside Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def verify_rtti_and_vtable(image):
    if read_u32(image, COL_POINTER) != COL:
        raise AssertionError("LeaveTab RTTI locator pointer changed")
    fields = tuple(read_u32(image, COL + offset) for offset in (0, 4, 8, 12, 16))
    if fields != (0, 0, 0, TYPE_DESCRIPTOR, COL + 0x14):
        raise AssertionError("LeaveTab complete-object locator changed")
    name_offset = TYPE_DESCRIPTOR - BASE + 8
    if image[name_offset:name_offset + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("The RTTI type descriptor no longer names LeaveTab")
    table = tuple(read_u32(image, VTABLE + index * 4) for index in range(len(EXPECTED_VTABLE)))
    if table != EXPECTED_VTABLE:
        raise AssertionError(f"LeaveTab primary vtable changed: {table}")


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(instruction.size for instruction in instructions) != size
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def main():
    image = IMAGE_PATH.read_bytes()
    verify_rtti_and_vtable(image)
    function_ranges, instruction_counts = read_body_ranges()
    inventory = {
        int(row["address"], 16): row for row in read_rows(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, record in records.items()
               if record.get("verified_by") == MARKER}
    if {int(address, 16) for address in MAIN_COMMUNICATOR_LEAVE_TAB_EVIDENCE} != FUNCTIONS:
        raise AssertionError("LeaveTab evidence map and function set disagree")
    expected_calls, data_references, target_functions, terminator_edges = read_edges(matched)
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    decoded_calls = set()
    indirect_calls = defaultdict(set)
    graph = {address: set() for address in FUNCTIONS}
    for address, ranges in function_ranges.items():
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or address not in matched:
            raise AssertionError(f"Missing byte-verified function {address:08X}")
        if sum(size for _, size in ranges) != int(row["size"]):
            raise AssertionError(f"Ghidra body size disagrees with inventory at {address:08X}")
        if int(record["size"]) != int(row["size"]) or record_ranges(record) != ranges:
            raise AssertionError(f"ObjDiff body ranges disagree with Ghidra at {address:08X}")
        if record.get("source_compiler") != SOURCE_COMPILER:
            raise AssertionError(f"Pinned clang-cl provenance is missing at {address:08X}")
        if record.get("evidence") != MAIN_COMMUNICATOR_LEAVE_TAB_EVIDENCE[f"{address:08X}"]:
            raise AssertionError(f"Evidence record differs at {address:08X}")
        source_path = ROOT / record["source"]
        if not source_path.is_file():
            raise AssertionError(f"Missing emitted source at {address:08X}")
        source_bytes = source_path.read_bytes()
        if hashlib.sha256(source_bytes).hexdigest() != record.get("source_sha256"):
            raise AssertionError(f"Emitted source hash changed at {address:08X}")
        for start, size in ranges:
            if size <= 0:
                raise AssertionError(f"Missing source bytes for {address:08X}")
            for instruction in decode_complete(image, decoder, start, size):
                if instruction.id in {X86_INS_CALL, X86_INS_JMP} and instruction.operands:
                    operand = instruction.operands[0]
                    if operand.type == X86_OP_IMM:
                        edge = (address, instruction.address, operand.imm & 0xFFFFFFFF)
                        if instruction.id == X86_INS_CALL or edge in terminator_edges:
                            decoded_calls.add(edge)
                    elif instruction.id == X86_INS_CALL:
                        indirect_calls[address].add(instruction.address)
        if len(ranges) != len(instruction_counts[address]):
            raise AssertionError(f"Fresh instruction range count changed at {address:08X}")
        for start, size in ranges:
            count = instruction_counts[address].get((start, size))
            actual = len(decode_complete(image, decoder, start, size))
            if count != actual:
                raise AssertionError(f"Mapped instruction count changed at {address:08X}:{start:08X}")

    if decoded_calls != expected_calls:
        raise AssertionError(
            "Mapped direct calls disagree with both fresh Ghidra exports; "
            f"missing={sorted(expected_calls - decoded_calls)}, "
            f"unexpected={sorted(decoded_calls - expected_calls)}"
        )
    for call in decoded_calls:
        target = target_functions[call]
        if target in FUNCTIONS:
            graph[call[0]].add(target)
    reached = set(ROOTS)
    pending = deque(ROOTS)
    while pending:
        for target in graph[pending.popleft()] - reached:
            reached.add(target)
            pending.append(target)
    if reached != FUNCTIONS:
        raise AssertionError(f"The four open vtable roots do not reach the closure: {sorted(FUNCTIONS - reached)}")
    if sum(len(values) for values in graph.values()) > EXPECTED_INTERNAL_CALLS:
        raise AssertionError("Unexpected unique internal LeaveTab call targets")
    for caller, site, target in data_references:
        if read_u32(image, site) != target:
            raise AssertionError(f"LeaveTab mapped data reference changed at {site:08X}")

    constructor = records.get(0x58833980)
    parent = records.get(0x58843380)
    for address, record in ((0x58833980, constructor), (0x58843380, parent)):
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Matched LeaveTab constructor path is missing at {address:08X}")
    constructor_evidence = constructor.get("evidence", {})
    if "0x5884421D" not in constructor_evidence.get("called_by", ""):
        raise AssertionError("Matched constructor evidence no longer anchors LeaveTab")
    constructor_decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    constructor_decoder.detail = True
    constructor_vptr_writes = []
    for start, size in record_ranges(constructor):
        for instruction in decode_complete(image, constructor_decoder, start, size):
            if (instruction.address == CONSTRUCTOR_VTABLE_WRITE
                    and instruction.mnemonic == "mov"
                    and len(instruction.operands) == 2
                    and instruction.operands[0].type == X86_OP_MEM
                    and instruction.operands[1].type == X86_OP_IMM
                    and instruction.operands[1].imm & 0xFFFFFFFF == VTABLE):
                constructor_vptr_writes.append(instruction.address)
    if constructor_vptr_writes != [CONSTRUCTOR_VTABLE_WRITE]:
        raise AssertionError("Matched LeaveTab constructor no longer installs its RTTI-identified vtable")

    boundary = {target_functions[edge] for edge in decoded_calls
                if target_functions[edge] not in FUNCTIONS}
    internal_sites = sum(1 for edge in decoded_calls if target_functions[edge] in FUNCTIONS)
    boundary_sites = len(decoded_calls) - internal_sites
    if len(decoded_calls) != EXPECTED_CALLS:
        raise AssertionError("Unexpected LeaveTab direct-call total")
    if internal_sites != EXPECTED_INTERNAL_CALLS:
        raise AssertionError("LeaveTab internal transfer count changed")
    if boundary_sites != EXPECTED_BOUNDARY_SITES:
        raise AssertionError("LeaveTab matched boundary call-site count changed")
    if len(boundary) != EXPECTED_BOUNDARY_TARGETS:
        raise AssertionError("LeaveTab matched direct-call boundary changed")

    indirect_total = sum(map(len, indirect_calls.values()))
    per_function = ", ".join(f"{address:08X}:{len(sites)}" for address, sites in sorted(indirect_calls.items()))
    print("verified LeaveTab RTTI and all seven primary-vtable slots")
    print(f"verified {len(FUNCTIONS)} byte-identical functions / {EXPECTED_BYTES:,} bytes / "
          f"{EXPECTED_INSTRUCTIONS:,} instructions across {EXPECTED_RANGES} exact ranges")
    print(f"verified {len(decoded_calls)} direct transfers ({EXPECTED_INTERNAL_CALLS} internal, "
          f"{EXPECTED_BOUNDARY_SITES} to {len(boundary)} matched targets), "
          f"{len(data_references)} data references, and matched constructor caller")
    print(f"unresolved indirect call sites: {indirect_total} ({per_function})")


if __name__ == "__main__":
    main()
