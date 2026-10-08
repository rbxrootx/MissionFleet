"""Verify the RTTI-backed aircraft fire-control event-handler closure."""
import csv
import json
from collections import defaultdict, deque
from pathlib import Path
import struct

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import MAIN_FIRE_CONTROL_AIRCRAFT_ADDRESSES
except ImportError:
    from build_current_main_verifications import MAIN_FIRE_CONTROL_AIRCRAFT_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-fire-control-aircraft-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-fire-control-aircraft-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x5885A460
FUNCTIONS = {int(address, 16) for address in MAIN_FIRE_CONTROL_AIRCRAFT_ADDRESSES}
EXPECTED_EXPORTS = {"58758EE0", "587CEF70"}
EXPECTED_RANGES = {
    0x5885A460: ((0x5885A460, 1494),),
    0x588585D0: ((0x588585D0, 126),),
    0x58858AB0: ((0x58858AB0, 287),),
    0x58858F20: ((0x58858F20, 335),),
    0x58859070: ((0x58859070, 584),),
}
EXPECTED_INSTRUCTIONS = {
    0x5885A460: 401,
    0x588585D0: 45,
    0x58858AB0: 84,
    0x58858F20: 66,
    0x58859070: 111,
}
EXPECTED_ROOT_OPEN_CALLS = {
    0x5885A561: 0x58858F20,
    0x5885A594: 0x58858F20,
    0x5885A7B5: 0x58859070,
    0x5885A924: 0x588585D0,
    0x5885A936: 0x588585D0,
    0x5885A962: 0x588585D0,
    0x5885A9AC: 0x58858F20,
    0x5885AA16: 0x58858F20,
    0x5885AA27: 0x58858F20,
}
EXPECTED_HELPER_CALLS = {
    (0x58858F20, 0x58859066, 0x58858AB0),
}
EXPECTED_INDIRECT_CALL_SITES = {
    ROOT_ADDRESS: {0x5885A48B, 0x5885A69D, 0x5885A8E9, 0x5885A909},
}
EXPECTED_VTABLE_REF = (ROOT_ADDRESS, 0x5899EA24, ROOT_ADDRESS)
EXPECTED_BYTES = 2826


def read_ranges():
    exports = defaultdict(lambda: defaultdict(list))
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_count = int(row["instruction_count"])
            if address not in FUNCTIONS:
                raise AssertionError(f"Unexpected Ghidra function body: {row}")
            if size <= 0 or int(row["instruction_bytes"]) != size or instruction_count <= 0:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            exports[export][address].append((start, size))
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError(f"Unexpected fresh Ghidra exports: {sorted(exports)}")
    normalized = {}
    for export, functions in exports.items():
        normalized[export] = {
            address: tuple(sorted(parts)) for address, parts in functions.items()
        }
        if set(normalized[export]) != FUNCTIONS:
            raise AssertionError(f"Ghidra export {export} omits a selected function")
        if normalized[export] != EXPECTED_RANGES:
            raise AssertionError(f"Unexpected exact body ranges in export {export}")
    if normalized["58758EE0"] != normalized["587CEF70"]:
        raise AssertionError("Fresh Ghidra projects disagree on body ranges")
    return normalized["58758EE0"]


def read_edges():
    exports = defaultdict(lambda: {"CALL": set(), "DATA": set()})
    with CALL_EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if export not in EXPECTED_EXPORTS:
                raise AssertionError(f"Unexpected Ghidra call-edge export: {row}")
            if row["kind"] not in {"CALL", "DATA"}:
                continue
            caller = int(row["function"], 16)
            if caller not in FUNCTIONS:
                raise AssertionError(f"Unexpected selected call-edge caller: {row}")
            site = int(row["site"], 16)
            target = int(row["target"], 16)
            exports[export][row["kind"]].add((caller, site, target))
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("Call-edge manifest omits a fresh Ghidra export")
    first, second = (exports[name] for name in sorted(EXPECTED_EXPORTS))
    if first != second:
        raise AssertionError("Fresh Ghidra projects disagree on direct calls/data refs")
    if len(first["CALL"]) != 36:
        raise AssertionError("Unexpected direct-call count for selected closure")
    if first["DATA"] != {EXPECTED_VTABLE_REF}:
        raise AssertionError("Ghidra RTTI vtable data reference changed")
    return first["CALL"]


def verify_rtti(image):
    def read_u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address is outside Main.dll: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    locator_pointer = 0x5899EA10
    locator = 0x589A8994
    type_descriptor = 0x589CCD30
    method_slot = 0x5899EA24
    if read_u32(locator_pointer) != locator:
        raise AssertionError("Aircraft fire-control RTTI locator pointer changed")
    fields = tuple(read_u32(locator + offset) for offset in (0, 4, 8, 12, 16))
    if fields != (0, 0, 0, type_descriptor, locator + 0x14):
        raise AssertionError("Aircraft fire-control complete-object locator changed")
    name_offset = type_descriptor - BASE + 8
    expected_name = b".?AVCPannelFireControlAddOnAircraft@@\0"
    if image[name_offset:name_offset + len(expected_name)] != expected_name:
        raise AssertionError("RTTI type descriptor no longer identifies the panel")
    if read_u32(method_slot) != ROOT_ADDRESS:
        raise AssertionError("RTTI-identified fire-control vtable slot changed")
    if method_slot - (locator_pointer + 4) != 0x10:
        raise AssertionError("Fire-control handler is no longer in vtable slot +0x10")


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (
        not instructions
        or instructions[0].address != start
        or sum(instruction.size for instruction in instructions) != size
        or instructions[-1].address + instructions[-1].size != start + size
    ):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def main():
    image = IMAGE_PATH.read_bytes()
    verify_rtti(image)
    function_ranges = read_ranges()
    expected_calls = read_edges()
    byte_count = sum(size for ranges in function_ranges.values() for _, size in ranges)
    if byte_count != EXPECTED_BYTES or sum(map(len, function_ranges.values())) != 5:
        raise AssertionError("Unexpected aircraft fire-control closure size")

    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address
        for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
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
            raise AssertionError(f"ObjDiff catalog ranges disagree at {address:08X}")
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
                decoded_calls.add(
                    (address, instruction.address, operand.imm & 0xFFFFFFFF)
                )
            else:
                indirect_calls[address].add(instruction.address)

    if decoded_calls != expected_calls:
        raise AssertionError(
            "Mapped direct calls disagree with both fresh Ghidra exports; "
            f"missing={sorted(expected_calls - decoded_calls)}, "
            f"unexpected={sorted(decoded_calls - expected_calls)}"
        )
    if dict(indirect_calls) != EXPECTED_INDIRECT_CALL_SITES:
        raise AssertionError(
            f"Unexpected indirect-call sites: {dict(indirect_calls)}"
        )
    open_root_calls = {
        site: target
        for caller, site, target in expected_calls
        if caller == ROOT_ADDRESS and target in FUNCTIONS
    }
    if open_root_calls != EXPECTED_ROOT_OPEN_CALLS:
        raise AssertionError("Fire-control root's open helper calls changed")
    if not EXPECTED_HELPER_CALLS.issubset(expected_calls):
        raise AssertionError("Expected helper-boundary call is missing")
    for _, _, target in expected_calls:
        if target not in FUNCTIONS and target not in matched:
            raise AssertionError(f"Selected closure calls unmatched function {target:08X}")

    graph = {address: set() for address in FUNCTIONS}
    for caller, _, target in expected_calls:
        if caller in FUNCTIONS and target in FUNCTIONS:
            graph[caller].add(target)
    reachable = {ROOT_ADDRESS}
    pending = deque([ROOT_ADDRESS])
    while pending:
        for target in graph[pending.popleft()] - reachable:
            reachable.add(target)
            pending.append(target)
    if reachable != FUNCTIONS:
        raise AssertionError(
            f"The direct-call closure changed: {sorted(FUNCTIONS - reachable)}"
        )

    print(
        f"Main.dll aircraft fire-control closure: {len(FUNCTIONS)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across five exact Ghidra ranges; "
        "RTTI slot, 36 direct calls, both fresh exports, and full direct-call "
        "closure pass. Four indirect dispatch sites remain unresolved."
    )


if __name__ == "__main__":
    main()
