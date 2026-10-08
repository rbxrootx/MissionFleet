"""Verify the RTTI-backed mounted-weapon rendering helper closure."""
import csv
import json
from collections import defaultdict, deque
from pathlib import Path
import struct

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import MAIN_GUN_RENDER_ADDRESSES
except ImportError:
    from build_current_main_verifications import MAIN_GUN_RENDER_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-gun-render-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-gun-render-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587B3200
FUNCTIONS = {int(address, 16) for address in MAIN_GUN_RENDER_ADDRESSES}
ALL_FUNCTIONS = FUNCTIONS
EXPECTED_EXPORTS = {"58758EE0", "587CEF70"}
EXPECTED_RANGES = {
    0x587B3200: ((0x587B3200, 139), (0x587B3290, 1993)),
    0x587B1AE0: ((0x587B1AE0, 143),),
    0x5875EC90: ((0x5875EC90, 382),),
    0x5875EC60: ((0x5875EC60, 38),),
    0x588D2B50: ((0x588D2B50, 33),),
    0x588DD370: ((0x588DD370, 66),),
}
EXPECTED_INSTRUCTIONS = {
    0x587B3200: 635,
    0x587B1AE0: 45,
    0x5875EC90: 120,
    0x5875EC60: 13,
    0x588D2B50: 7,
    0x588DD370: 19,
}
EXPECTED_ROOT_OPEN_CALLS = {
    0x587B3509: 0x587B1AE0,
    0x587B35F0: 0x588D2B50,
    0x587B36FA: 0x5875EC90,
    0x587B3713: 0x5875EC60,
    0x587B379C: 0x5875EC90,
    0x587B37C9: 0x5875EC60,
    0x587B3895: 0x5875EC90,
    0x587B392F: 0x5875EC90,
    0x587B395C: 0x5875EC60,
    0x587B3A23: 0x588DD370,
}
EXPECTED_HELPER_CALLS = {
    (0x5875EC90, 0x5875ECB1, 0x58734A30),
    (0x588DD370, 0x588DD3A9, 0x58970C70),
}
EXPECTED_VTABLE_REFS = {
    (ROOT_ADDRESS, 0x58999F10, ROOT_ADDRESS),
    (ROOT_ADDRESS, 0x58999F60, ROOT_ADDRESS),
}
EXPECTED_BYTES = 2794


def read_ranges():
    exports = defaultdict(lambda: defaultdict(list))
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_count = int(row["instruction_count"])
            if address not in ALL_FUNCTIONS:
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
        if set(normalized[export]) != ALL_FUNCTIONS:
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
            if caller not in ALL_FUNCTIONS:
                raise AssertionError(f"Unexpected selected call-edge caller: {row}")
            site = int(row["site"], 16)
            target = int(row["target"], 16)
            exports[export][row["kind"]].add((caller, site, target))
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("Call-edge manifest omits a fresh Ghidra export")
    first, second = (exports[name] for name in sorted(EXPECTED_EXPORTS))
    if first != second:
        raise AssertionError("Fresh Ghidra projects disagree on direct-call/data edges")
    if len(first["CALL"]) != 30:
        raise AssertionError("Unexpected number of direct calls in the selected closure")
    if first["DATA"] != EXPECTED_VTABLE_REFS:
        raise AssertionError("Ghidra vtable data references changed")
    return first["CALL"]


def verify_rtti(image):
    def read_u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address is outside Main.dll: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    expected = (
        (0x58999ED0, 0x589A6A44, 0x589CB724, ".?AVCMountedWeapon_Gun@@", 0x58999F10),
        (0x58999F20, 0x589A6A98, 0x589CB748, ".?AVCMountedWeapon_GunL@@", 0x58999F60),
    )
    for locator_pointer, locator, type_descriptor, class_name, method_slot in expected:
        if read_u32(locator_pointer) != locator:
            raise AssertionError(f"RTTI locator pointer changed at {locator_pointer:08X}")
        fields = tuple(read_u32(locator + offset) for offset in (0, 4, 8, 12, 16))
        if fields != (0, 0, 0, type_descriptor, locator + 20):
            raise AssertionError(f"Unexpected complete-object locator at {locator:08X}")
        name_offset = type_descriptor - BASE + 8
        expected_name = class_name.encode("ascii") + b"\0"
        if image[name_offset:name_offset + len(expected_name)] != expected_name:
            raise AssertionError(f"RTTI type descriptor changed at {type_descriptor:08X}")
        if read_u32(method_slot) != ROOT_ADDRESS:
            raise AssertionError(f"RTTI-identified vtable slot changed at {method_slot:08X}")
        if method_slot - (locator_pointer + 4) != 0x3C:
            raise AssertionError("Mounted-weapon method is no longer at vtable slot +0x3C")


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
    if byte_count != EXPECTED_BYTES or sum(map(len, function_ranges.values())) != 7:
        raise AssertionError("Unexpected mounted-weapon rendering closure size")

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

    if decoded_calls != expected_calls:
        raise AssertionError(
            "Mapped direct calls disagree with both fresh Ghidra exports; "
            f"missing={sorted(expected_calls - decoded_calls)}, "
            f"unexpected={sorted(decoded_calls - expected_calls)}"
        )
    root_calls = {
        site: target for caller, site, target in expected_calls if caller == ROOT_ADDRESS
    }
    open_root_calls = {
        site: target for site, target in root_calls.items() if target in FUNCTIONS
    }
    if open_root_calls != EXPECTED_ROOT_OPEN_CALLS:
        raise AssertionError("Mounted-weapon root's open helper calls changed")
    if not EXPECTED_HELPER_CALLS.issubset(expected_calls):
        raise AssertionError("Expected matched helper-boundary calls are missing")
    for _, _, target in expected_calls:
        if target not in ALL_FUNCTIONS and target not in matched:
            raise AssertionError(f"Selected closure calls unmatched function {target:08X}")

    graph = {address: set() for address in ALL_FUNCTIONS}
    for caller, _, target in expected_calls:
        if caller in ALL_FUNCTIONS and target in ALL_FUNCTIONS:
            graph[caller].add(target)
    reachable = {ROOT_ADDRESS}
    pending = deque([ROOT_ADDRESS])
    while pending:
        for target in graph[pending.popleft()] - reachable:
            reachable.add(target)
            pending.append(target)
    if reachable != ALL_FUNCTIONS:
        raise AssertionError(
            f"The direct-call closure changed: {sorted(ALL_FUNCTIONS - reachable)}"
        )

    print(
        f"Main.dll mounted-weapon render closure: {len(ALL_FUNCTIONS)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across 7 exact Ghidra ranges; "
        "Gun/GunL RTTI slots, 30 direct calls, two fresh Ghidra exports, and "
        "complete direct-call closure pass."
    )


if __name__ == "__main__":
    main()
