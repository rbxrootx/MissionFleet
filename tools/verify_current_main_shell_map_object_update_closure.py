"""Verify the byte-matched CShell_MapObjectScreen update helper closure."""
import csv
import json
from collections import defaultdict, deque
from pathlib import Path
import struct

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_SHELL_MAP_OBJECT_UPDATE_ADDRESSES,
    )
except ImportError:
    from build_current_main_verifications import (
        MAIN_SHELL_MAP_OBJECT_UPDATE_ADDRESSES,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-shell-map-object-update-body-exports.tsv"
CALL_EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-shell-map-object-update-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588D4300
FUNCTIONS = {int(address, 16) for address in MAIN_SHELL_MAP_OBJECT_UPDATE_ADDRESSES}
ALL_FUNCTIONS = FUNCTIONS | {ROOT_ADDRESS}
EXPECTED_FUNCTIONS = 15
EXPECTED_BYTES = 3376
EXPECTED_SELECTED_CALLS = 49
EXPECTED_SELECTED_BOUNDARIES = 41
EXPECTED_ROOT_CALLS = {
    0x588D4999: 0x58734AC0,
    0x588D49CE: 0x58734B60,
    0x588D4EC5: 0x588D31B0,
    0x588D4F96: 0x587367C0,
    0x588D5388: 0x588D2CB0,
    0x588D545E: 0x588D3830,
    0x588D55B0: 0x58748CB0,
    0x588D5728: 0x587E8690,
    0x588D5869: 0x588D3830,
    0x588D59A9: 0x58748CB0,
    0x588D5DB3: 0x588D3830,
    0x588D5E44: 0x587E8690,
    0x588D5E5D: 0x588D2DB0,
    0x588D5E87: 0x587367C0,
    0x588D6198: 0x5875BC80,
}
EXPECTED_INTERNAL_TRANSFERS = {
    **EXPECTED_ROOT_CALLS,
    0x5873689B: 0x58735DD0,
    0x5873691F: 0x58735DD0,
    0x587369D6: 0x58735DD0,
    0x58736A0E: 0x58735DD0,
    0x587A5681: 0x587B0BC0,
    0x587B0BCA: 0x587891A0,
    0x587E86C5: 0x587A5670,
    0x588D3909: 0x5875E290,
}
EXPECTED_EXPORTS = {"58758EE0", "587CEF70"}


def read_ranges():
    exports = defaultdict(lambda: defaultdict(list))
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            if address not in FUNCTIONS:
                raise AssertionError(f"Unexpected body in Ghidra manifest: {row}")
            if (
                size <= 0
                or int(row["instruction_bytes"]) != size
                or int(row["instruction_count"]) <= 0
            ):
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            exports[export][address].append((start, size))
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError(f"Unexpected fresh Ghidra exports: {sorted(exports)}")
    normalized = {}
    for export, functions in exports.items():
        normalized[export] = {
            address: tuple(parts) for address, parts in functions.items()
        }
        if set(normalized[export]) != FUNCTIONS:
            raise AssertionError(f"Ghidra export {export} omits selected bodies")
    if normalized["58758EE0"] != normalized["587CEF70"]:
        raise AssertionError("Fresh Ghidra projects disagree on exact body ranges")
    return normalized["58758EE0"]


def read_call_edges():
    exports = defaultdict(set)
    with CALL_EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if export not in EXPECTED_EXPORTS or row["kind"] != "CALL":
                continue
            caller = int(row["function"], 16)
            if caller in ALL_FUNCTIONS:
                target = int(row["target"], 16)
                # This manifest records the selected updater-to-helper edges;
                # other updater calls are outside this focused closure.
                if caller == ROOT_ADDRESS and target not in FUNCTIONS:
                    continue
                exports[export].add(
                    (caller, int(row["site"], 16), target)
                )
    if set(exports) != EXPECTED_EXPORTS:
        raise AssertionError("Call-edge manifest omits a fresh Ghidra export")
    if exports["58758EE0"] != exports["587CEF70"]:
        raise AssertionError("Fresh Ghidra projects disagree on direct-call edges")
    edges = exports["58758EE0"]
    if len(edges) != EXPECTED_SELECTED_CALLS + len(EXPECTED_ROOT_CALLS):
        raise AssertionError("Unexpected direct-call count in the Ghidra closure")
    root_edges = {
        site: target
        for caller, site, target in edges
        if caller == ROOT_ADDRESS
    }
    if root_edges != EXPECTED_ROOT_CALLS:
        raise AssertionError("The shell-map updater's direct helper calls changed")
    return edges


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


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


def verify_rtti(image):
    def read_u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"RTTI address is outside mapped Main.dll: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    if read_u32(0x589A0F78) != 0x589AA258:
        raise AssertionError("CShell_MapObjectScreen vtable locator pointer changed")
    if read_u32(0x589A0F88) != ROOT_ADDRESS:
        raise AssertionError("The identified shell-map vtable no longer points to the updater")
    if read_u32(0x589AA264) != 0x589CD948:
        raise AssertionError("The shell-map complete-object locator type pointer changed")
    name_offset = 0x589CD948 - BASE + 8
    expected_name = b".?AVCShell_MapObjectScreen@@\0"
    if image[name_offset:name_offset + len(expected_name)] != expected_name:
        raise AssertionError("RTTI no longer identifies CShell_MapObjectScreen")


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    verify_rtti(image)

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
    function_ranges = read_ranges()
    if len(FUNCTIONS) != EXPECTED_FUNCTIONS or set(function_ranges) != FUNCTIONS:
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    byte_count = sum(
        sum(size for _, size in function_ranges[address]) for address in FUNCTIONS
    )
    range_count = sum(len(function_ranges[address]) for address in FUNCTIONS)
    if byte_count != EXPECTED_BYTES or range_count != EXPECTED_FUNCTIONS:
        raise AssertionError("Unexpected shell-map helper closure shape")

    root_record = records.get(ROOT_ADDRESS)
    if root_record is None or root_record.get("verified_by") != MARKER:
        raise AssertionError("The RTTI-identified shell-map root is not byte-verified")
    if sum(size for _, size in record_ranges(root_record)) != int(root_record["size"]):
        raise AssertionError("Matched shell-map root ranges do not cover its body")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    expected_edges = read_call_edges()
    selected_edge_count = sum(
        1 for caller, _, _ in expected_edges if caller in FUNCTIONS
    )
    if selected_edge_count != EXPECTED_SELECTED_CALLS:
        raise AssertionError("Unexpected helper-to-helper and boundary transfer count")
    graph = {address: set() for address in ALL_FUNCTIONS}
    decoded_edges = set()
    internal_transfers = {}
    boundary_transfers = set()

    for address in sorted(ALL_FUNCTIONS):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or address not in matched:
            raise AssertionError(f"Missing byte-verified function {address:08X}")
        expected_ranges = (
            record_ranges(root_record)
            if address == ROOT_ADDRESS
            else function_ranges[address]
        )
        if (
            int(record["size"]) != int(row["size"])
            or sum(size for _, size in expected_ranges) != int(row["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            for instruction in decode_complete(image, decoder, start, size):
                if instruction.id not in {X86_INS_CALL, X86_INS_JMP} or not instruction.operands:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                edge = (address, instruction.address, target)
                # Ghidra marks the one observed tail-call jump as
                # CALL_TERMINATOR. Other direct jumps are control flow inside
                # the function rather than function-to-function transfers.
                if instruction.id == X86_INS_JMP and edge not in expected_edges:
                    continue
                if target in ALL_FUNCTIONS:
                    decoded_edges.add(edge)
                    graph[address].add(target)
                    internal_transfers[instruction.address] = target
                elif address in FUNCTIONS and target in matched:
                    decoded_edges.add(edge)
                    boundary_transfers.add((instruction.address, target))
                elif address == ROOT_ADDRESS:
                    continue
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} call to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    if decoded_edges != expected_edges:
        raise AssertionError(
            "Mapped direct calls disagree with both fresh Ghidra exports; "
            f"missing={sorted(expected_edges - decoded_edges)}, "
            f"unexpected={sorted(decoded_edges - expected_edges)}"
        )
    if internal_transfers != EXPECTED_INTERNAL_TRANSFERS:
        raise AssertionError("The in-closure call graph differs from the mapped image")
    if len(boundary_transfers) != EXPECTED_SELECTED_BOUNDARIES:
        raise AssertionError("Unexpected number of matched outside-call boundaries")
    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != ALL_FUNCTIONS:
        raise AssertionError(
            f"Not the exact direct-call closure: {sorted(ALL_FUNCTIONS - reachable)}"
        )

    print(
        f"Main.dll CShell_MapObjectScreen update closure: {len(FUNCTIONS)} helpers / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; RTTI root, {len(EXPECTED_ROOT_CALLS)} root transfers, "
        f"{EXPECTED_SELECTED_CALLS} helper transfers, {len(boundary_transfers)} "
        "matched outside-call boundaries, and exact closure pass"
    )


if __name__ == "__main__":
    main()
