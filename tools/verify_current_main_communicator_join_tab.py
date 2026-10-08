"""Verify the RTTI-backed JoinTab source and its complete open call closure."""
import csv
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_COMMUNICATOR_JOIN_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_JOIN_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )
except ImportError:
    from build_current_main_verifications import (
        MAIN_COMMUNICATOR_JOIN_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_JOIN_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-communicator-join-tab-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-communicator-join-tab-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
TYPE_NAME = b".?AVCPannelCommunicatorConfigJoinTab@@\0"
LEAVE_TYPE_NAME = b".?AVCPannelCommunicatorConfigLeaveTab@@\0"
TYPE_DESCRIPTOR = 0x589CC638
COL_POINTER = 0x5899E160
COL = 0x589A840C
VTABLE = 0x5899E164
LEAVE_COL_POINTER = 0x5899E180
LEAVE_COL = 0x589A8460
LEAVE_TYPE_DESCRIPTOR = 0x589CC668

FUNCTIONS = {int(address, 16) for address in MAIN_COMMUNICATOR_JOIN_TAB_ADDRESSES}
EXPECTED_EXPORTS = {"58758EE0-FRESH", "587CEF70-FRESH"}
ROOTS = {0x588318F0, 0x58831C30, 0x58831910, 0x588336F0, 0x58832CF0, 0x588329D0}
EXPECTED_RANGES = {
    0x58753980: ((0x58753980, 198),),
    0x58753B20: ((0x58753B20, 201),),
    0x58754080: ((0x58754080, 19),),
    0x587B92E0: ((0x587B92E0, 30),),
    0x587B9300: ((0x587B9300, 29),),
    0x587BA960: ((0x587BA960, 117),),
    0x588316E0: ((0x588316E0, 93), (0x58831740, 317), (0x58831880, 107)),
    0x588318F0: ((0x588318F0, 21), (0x58831908, 6)),
    0x58831910: ((0x58831910, 140),),
    0x58831C30: ((0x588319A0, 23), (0x588319C0, 285),
                 (0x58831C30, 61), (0x58831C70, 220)),
    0x58831E20: ((0x58831E20, 168),),
    0x588329D0: ((0x588329D0, 796),),
    0x58832CF0: ((0x58832CF0, 189), (0x58832DB0, 1937)),
    0x588336F0: ((0x588336F0, 172),),
}
EXPECTED_RANGE_INSTRUCTIONS = {
    0x58753980: {(0x58753980, 198): 77},
    0x58753B20: {(0x58753B20, 201): 77},
    0x58754080: {(0x58754080, 19): 7},
    0x587B92E0: {(0x587B92E0, 30): 11},
    0x587B9300: {(0x587B9300, 29): 10},
    0x587BA960: {(0x587BA960, 117): 50},
    0x588316E0: {
        (0x588316E0, 93): 35, (0x58831740, 317): 115,
        (0x58831880, 107): 39,
    },
    0x588318F0: {(0x588318F0, 21): 7, (0x58831908, 6): 3},
    0x58831910: {(0x58831910, 140): 36},
    0x58831C30: {
        (0x588319A0, 23): 9, (0x588319C0, 285): 82,
        (0x58831C30, 61): 18, (0x58831C70, 220): 76,
    },
    0x58831E20: {(0x58831E20, 168): 62},
    0x588329D0: {(0x588329D0, 796): 239},
    0x58832CF0: {(0x58832CF0, 189): 61, (0x58832DB0, 1937): 536},
    0x588336F0: {(0x588336F0, 172): 56},
}
EXPECTED_INSTRUCTIONS = {
    address: sum(ranges.values()) for address, ranges in EXPECTED_RANGE_INSTRUCTIONS.items()
}
EXPECTED_VTABLE = (
    0x588318F0, 0x58831C30, 0x58831910, 0x588336F0,
    0x58832CF0, 0x58902FE0, 0x588329D0,
)
EXPECTED_VTABLE_DATA = {
    (0x588318F0, 0x5899E164, 0x588318F0),
    (0x58831C30, 0x5899E168, 0x58831C30),
    (0x58831910, 0x5899E16C, 0x58831910),
    (0x588336F0, 0x5899E170, 0x588336F0),
    (0x58832CF0, 0x5899E174, 0x58832CF0),
    (0x588329D0, 0x5899E17C, 0x588329D0),
    (0x588336F0, 0x5899E190, 0x588336F0),
    (0x588336F0, 0x589A0A8C, 0x588336F0),
}
EXPECTED_EXTERNAL_CONSTRUCTOR_CALL = (0x58843380, 0x588441DE, 0x58831ED0)
EXPECTED_BYTES = 5129
EXPECTED_BODY_RANGE_COUNT = 21
EXPECTED_DIRECT_CALL_COUNT = 165
EXPECTED_INTERNAL_CALL_COUNT = 16
EXPECTED_DATA_REFERENCE_COUNT = 8


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
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            function = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_count = int(row["instruction_count"])
            if function not in FUNCTIONS:
                raise AssertionError(f"Unexpected JoinTab body function: {row}")
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
    for export, functions in normalized.items():
        if functions != EXPECTED_RANGES:
            raise AssertionError(f"Unexpected JoinTab body ranges in export {export}")
        if counts[export] != EXPECTED_RANGE_INSTRUCTIONS:
            raise AssertionError(f"Ghidra instruction counts changed in export {export}")
    if len(FUNCTIONS) != 14 or sum(map(len, EXPECTED_RANGES.values())) != EXPECTED_BODY_RANGE_COUNT:
        raise AssertionError("The selected JoinTab class closure definition changed")
    if sum(size for ranges in EXPECTED_RANGES.values() for _, size in ranges) != EXPECTED_BYTES:
        raise AssertionError("The selected JoinTab byte total changed")
    if sum(EXPECTED_INSTRUCTIONS.values()) != 1606:
        raise AssertionError("The selected JoinTab instruction total changed")
    return normalized["58758EE0-FRESH"]


def read_edges():
    exports = defaultdict(lambda: {"CALL": set(), "DATA": set()})
    target_functions = {}
    with CALL_EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if export not in EXPECTED_EXPORTS:
                raise AssertionError(f"Unexpected JoinTab edge export: {row}")
            if row["kind"] not in {"CALL", "DATA"}:
                continue
            caller, site, target = (int(row[key], 16) for key in ("function", "site", "target"))
            edge = (caller, site, target)
            if row["kind"] == "CALL":
                if caller not in FUNCTIONS and edge != EXPECTED_EXTERNAL_CONSTRUCTOR_CALL:
                    raise AssertionError(f"Unexpected supporting call edge: {row}")
                target_function = int(row["target_function"], 16) if row["target_function"] else target
                target_functions[edge] = target_function
            elif caller not in FUNCTIONS:
                raise AssertionError(f"Unexpected supporting data edge: {row}")
            exports[export][row["kind"]].add(edge)
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("JoinTab call-edge manifest omits a fresh Ghidra export")
    first, second = (exports[name] for name in sorted(EXPECTED_EXPORTS))
    if first != second:
        raise AssertionError("The two fresh Ghidra projects disagree on calls or data references")
    calls = first["CALL"]
    selected_calls = {edge for edge in calls if edge[0] in FUNCTIONS}
    if len(selected_calls) != EXPECTED_DIRECT_CALL_COUNT:
        raise AssertionError("Unexpected direct-call count in the JoinTab closure")
    if len(calls) != EXPECTED_DIRECT_CALL_COUNT + 1:
        raise AssertionError("The parent-constructor call must be the only supporting direct call")
    if first["DATA"] != EXPECTED_VTABLE_DATA:
        raise AssertionError("JoinTab vtable data references changed")
    if len(first["DATA"]) != EXPECTED_DATA_REFERENCE_COUNT:
        raise AssertionError("Unexpected JoinTab data-reference count")
    if EXPECTED_EXTERNAL_CONSTRUCTOR_CALL not in calls:
        raise AssertionError("Matched parent-to-JoinTab constructor call is missing")
    return selected_calls, first["DATA"], target_functions


def read_u32(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Mapped address outside Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def read_type_name(image, descriptor):
    offset = descriptor - BASE + 8
    end = image.find(b"\0", offset)
    if offset < 0 or end < 0:
        raise AssertionError(f"Invalid RTTI type descriptor at {descriptor:08X}")
    return image[offset:end + 1]


def verify_rtti_and_vtable(image):
    if read_u32(image, COL_POINTER) != COL:
        raise AssertionError("JoinTab RTTI locator pointer changed")
    fields = tuple(read_u32(image, COL + offset) for offset in (0, 4, 8, 12, 16))
    if fields != (0, 0, 0, TYPE_DESCRIPTOR, COL + 0x14):
        raise AssertionError("JoinTab complete-object locator changed")
    if read_type_name(image, TYPE_DESCRIPTOR) != TYPE_NAME:
        raise AssertionError("JoinTab type descriptor no longer identifies its class")
    table = tuple(read_u32(image, VTABLE + offset * 4) for offset in range(len(EXPECTED_VTABLE)))
    if table != EXPECTED_VTABLE:
        raise AssertionError(f"JoinTab primary vtable changed: {table}")
    if VTABLE + len(EXPECTED_VTABLE) * 4 != LEAVE_COL_POINTER:
        raise AssertionError("JoinTab primary table no longer ends at the next RTTI pointer")
    if read_u32(image, LEAVE_COL_POINTER) != LEAVE_COL:
        raise AssertionError("The adjacent table no longer begins with the LeaveTab locator")
    leave_fields = tuple(read_u32(image, LEAVE_COL + offset) for offset in (0, 4, 8, 12, 16))
    if leave_fields != (0, 0, 0, LEAVE_TYPE_DESCRIPTOR, LEAVE_COL + 0x14):
        raise AssertionError("Adjacent LeaveTab complete-object locator changed")
    if read_type_name(image, LEAVE_TYPE_DESCRIPTOR) != LEAVE_TYPE_NAME:
        raise AssertionError("The adjacent RTTI descriptor no longer identifies LeaveTab")
    for _, site, target in EXPECTED_VTABLE_DATA:
        if read_u32(image, site) != target:
            raise AssertionError(f"JoinTab data reference changed at {site:08X}")


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
    function_ranges = read_body_ranges()
    expected_calls, data_references, call_target_functions = read_edges()
    if sum(size for ranges in function_ranges.values() for _, size in ranges) != EXPECTED_BYTES:
        raise AssertionError("Unexpected JoinTab primary-vtable slice byte total")

    inventory = {
        int(row["address"], 16): row for row in read_rows(INVENTORY_PATH)
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
            raise AssertionError(f"Missing ObjDiff byte-identical record for {address:08X}")
        if int(row["size"]) != sum(size for _, size in ranges):
            raise AssertionError(f"Ghidra body size disagrees with inventory at {address:08X}")
        if int(record["size"]) != int(row["size"]) or record_ranges(record) != ranges:
            raise AssertionError(f"ObjDiff body ranges disagree with Ghidra at {address:08X}")
        if record.get("source_compiler") != SOURCE_COMPILER:
            raise AssertionError(f"Pinned clang-cl provenance is missing at {address:08X}")
        evidence = record.get("evidence", {})
        if evidence != MAIN_COMMUNICATOR_JOIN_TAB_EVIDENCE[f"{address:08X}"]:
            raise AssertionError(f"Evidence record differs at {address:08X}")
        instructions = []
        range_counts = {}
        for start, size in ranges:
            decoded = decode_complete(image, decoder, start, size)
            instructions.extend(decoded)
            range_counts[(start, size)] = len(decoded)
        if range_counts != EXPECTED_RANGE_INSTRUCTIONS[address]:
            raise AssertionError(f"Mapped instruction count changed at {address:08X}")
        if len(instructions) != EXPECTED_INSTRUCTIONS[address]:
            raise AssertionError(f"Function instruction count changed at {address:08X}")
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
    external_calls = set()
    graph = {address: set() for address in FUNCTIONS}
    for call in decoded_calls:
        target_function = call_target_functions[call]
        if target_function in FUNCTIONS:
            graph[call[0]].add(target_function)
        else:
            if target_function not in matched:
                raise AssertionError(f"Open direct callee escaped the selected closure: {target_function:08X}")
            external_calls.add(call)
    if len(decoded_calls) != EXPECTED_DIRECT_CALL_COUNT:
        raise AssertionError("Unexpected JoinTab direct-call total")
    if len(decoded_calls) - len(external_calls) != EXPECTED_INTERNAL_CALL_COUNT:
        raise AssertionError("Unexpected number of internal JoinTab call sites")
    if len(external_calls) != 149 or len({call_target_functions[call] for call in external_calls}) != 24:
        raise AssertionError("The matched direct-call boundary changed")

    reached = set(ROOTS)
    pending = deque(ROOTS)
    while pending:
        for target in graph[pending.popleft()] - reached:
            reached.add(target)
            pending.append(target)
    if reached != FUNCTIONS:
        raise AssertionError(f"The six open vtable roots do not reach the full closure: {sorted(FUNCTIONS - reached)}")

    expected_data_tuples = {
        (int(row["function"], 16), int(row["site"], 16), int(row["target"], 16))
        for row in read_rows(CALL_EDGE_MANIFEST)
        if row["export"].upper() == "58758EE0-FRESH" and row["kind"] == "DATA"
    }
    if expected_data_tuples != data_references or len(data_references) != EXPECTED_DATA_REFERENCE_COUNT:
        raise AssertionError("JoinTab data references disagree with both Ghidra exports")

    parent, constructor = records.get(0x58843380), records.get(0x58831ED0)
    for address, record in ((0x58843380, parent), (0x58831ED0, constructor)):
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Matched parent/JoinTab constructor evidence is missing at {address:08X}")
    constructor_evidence = constructor.get("evidence", {})
    if ("CPannelCommunicatorConfigJoinTab::vftable" not in constructor_evidence.get("name_in_analysis", "")
            or "0x588441DE" not in constructor_evidence.get("called_by", "")):
        raise AssertionError("Matched constructor evidence no longer anchors JoinTab")

    indirect_total = sum(map(len, indirect_calls.values()))
    per_function = ", ".join(f"{address:08X}:{len(sites)}" for address, sites in sorted(indirect_calls.items()))
    print("verified JoinTab RTTI, seven primary slots, and adjacent LeaveTab boundary")
    print(f"verified {len(FUNCTIONS)} byte-identical functions / {EXPECTED_BYTES:,} bytes / "
          f"{sum(EXPECTED_INSTRUCTIONS.values()):,} instructions across {EXPECTED_BODY_RANGE_COUNT} exact ranges")
    print(f"verified {len(decoded_calls)} direct calls ({EXPECTED_INTERNAL_CALL_COUNT} internal, "
          f"149 to 24 matched targets), {len(data_references)} data references")
    print(f"unresolved indirect call sites: {indirect_total} ({per_function})")


if __name__ == "__main__":
    main()
