"""Verify the RTTI-backed CWarehouseSlotManager byte-match slice."""
import csv
import hashlib
import json
import re
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_CWAREHOUSE_SLOT_MANAGER_ADDRESSES,
        MAIN_WAREHOUSE_RESET_CALLER_ADDRESSES,
    )
except ImportError:  # Support direct execution as a script.
    from build_current_main_verifications import (
        MAIN_CWAREHOUSE_SLOT_MANAGER_ADDRESSES,
        MAIN_WAREHOUSE_RESET_CALLER_ADDRESSES,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-warehouse-slot-manager-body-ranges.tsv"
BODY_EXPORTS_PATH = ROOT / "config/NF2_2026/main-warehouse-slot-manager-body-exports.tsv"
EDGE_EXPORTS_PATH = ROOT / "config/NF2_2026/main-warehouse-slot-manager-call-edges.tsv"
CLOSURE_PATH = ROOT / "config/NF2_2026/main-warehouse-slot-manager-root-closures.tsv"
NEXT = ROOT / "var/current-main-next"
FRESH_LOG = NEXT / "warehouse-slot-manager-primary-vtable-fresh-ghidra.log"
FRESH_DECOMP = NEXT / "warehouse-slot-manager-primary-vtable-fresh-ghidra.c"
INCOMING_REFERENCE_LOG = NEXT / "frontier-warehouse-update-fresh-ghidra.log"
BODY_INVENTORY = NEXT / "main-function-bodies.tsv"
EDGE_INVENTORY = NEXT / "main-function-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = tuple(int(address, 16) for address in (
    *MAIN_CWAREHOUSE_SLOT_MANAGER_ADDRESSES,
    *MAIN_WAREHOUSE_RESET_CALLER_ADDRESSES,
))
SELECTED = set(FUNCTIONS)
RESET_CALLER = 0x588FFC90
EXPECTED_FUNCTIONS = 24
EXPECTED_BYTES = 3987
EXPECTED_RANGES = 27
EXPECTED_DIRECT_TRANSFERS = 95
EXPECTED_INTERNAL_TRANSFERS = 27
EXPECTED_VERIFIED_BOUNDARY_TRANSFERS = 68
EXPECTED_INDIRECT_CALLS = {
    0x588F7E30: 1, 0x588F9C00: 1, 0x588FF180: 1, 0x588FF2F0: 1,
    0x588FF890: 2, 0x588FF940: 1, 0x588FF9A0: 5, 0x588FFC90: 1,
}
EXPECTED_INDIRECT_JUMPS = {0x588F9C00: 1}

ROOT_CLOSURES = {
    0x588FFD90: {0x588FFD90, 0x588FF9A0},
    0x588FF890: {0x588FF890, 0x588F9B80, 0x588F9C00, 0x588F9FD0, 0x588FEFE0},
    0x588FF940: {0x588FF940},
    0x588FF6B0: {
        0x588FF6B0, 0x588F7DF0, 0x588F7E30, 0x588F9B80, 0x588F9C00,
        0x588FAC50, 0x588FAD60, 0x588FAEC0, 0x588FAF30, 0x588FAF70,
        0x588FB850, 0x588FC990, 0x588FCAC0, 0x588FCB80, 0x588FEFE0,
        0x588FF180, 0x588FF200, 0x588FF2F0,
    },
    0x588FFC90: {0x588FFC90, 0x588F9C00, 0x588F9B80},
}

ADDRESS_POINT = 0x589A23C4
CLASS_LOCATOR = 0x589AADC0
TYPE_DESCRIPTOR = 0x589CDE8C
CLASS_HIERARCHY = 0x589AADD4
BASE_NAMES = (
    ".?AVCWarehouseSlotManager@@",
    ".?AVCControlMenuScreen@@",
    ".?AVCMenuScreen@@",
    ".?AVCScreen@@",
)
PRIMARY_SLOTS = (
    0x588FFD90, 0x58903400, 0x58903420, 0x588FF890,
    0x588FF940, 0x58902FE0, 0x588FF6B0,
)
ADJACENT_LOCATOR = 0x589AAE14
ADJACENT_NAME = ".?AVCWarehouseTradePanel@@"
CONSTRUCTOR = 0x588FFE10
CONSTRUCTOR_CALLER = 0x588FB9B0
CONSTRUCTOR_CALLSITE = 0x588FBB0D

FUNCTION_RE = re.compile(
    r"DumpExactFunctionRanges\.java> FUNCTION FUN_([0-9a-fA-F]+) "
    r"entry=([0-9a-fA-F]+) bodyBytes=(\d+)"
)
RANGE_RE = re.compile(
    r"DumpExactFunctionRanges\.java> RANGE ([0-9a-fA-F]+)\.\."
    r"([0-9a-fA-F]+) length=(\d+)"
)
COVERAGE_RE = re.compile(
    r"DumpExactFunctionRanges\.java> COVERAGE instructionCount=(\d+) "
    r"instructionBytes=(\d+) rangeBytes=(\d+) bodyBytes=(\d+)"
)
CALL_RE = re.compile(
    r"DumpExactFunctionRanges\.java> CALL ([0-9a-fA-F]+) -> "
    r"([0-9a-fA-F]+)(?: FUN_([0-9a-fA-F]+))?"
)
REF_FUNCTION_RE = re.compile(
    r"DumpFunctionRefs\.java> FUNCTION FUN_([0-9a-fA-F]+) "
    r"([0-9a-fA-F]+) body=(\d+)"
)
REF_RE = re.compile(
    r"DumpFunctionRefs\.java> REF ([0-9a-fA-F]+) "
    r"type=([A-Z_]+) source=[A-Z_]+ caller=(?:FUN_[0-9a-fA-F]+@)?"
    r"([0-9a-fA-F]+|none)"
)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def read_u32(image, address):
    return struct.unpack_from("<I", image, address - BASE)[0]


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(part["address"], 16), int(part["size"]))
                     for part in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def body_signature(rows):
    return sorted(
        (row["function"].upper(), int(row["start"], 16), int(row["length"]),
         int(row["instruction_bytes"]), int(row["instruction_count"]))
        for row in rows
    )


def edge_signature(rows):
    return sorted(
        (row["kind"], row["function"].upper(), row["site"].upper(), row["type"],
         row["target"].upper(), row["target_function"].upper())
        for row in rows
    )


def parse_log(text, wanted):
    functions, ranges, coverage, calls, refs_to = {}, {}, {}, {}, {}
    current = None
    ref_target = None
    for line in text.splitlines():
        found = FUNCTION_RE.search(line)
        if found:
            current = int(found.group(1), 16)
            if current != int(found.group(2), 16):
                raise AssertionError("Fresh Ghidra function entry changed")
            if current in wanted:
                functions[current] = int(found.group(3))
                ranges[current] = []
                calls[current] = []
            continue
        found = RANGE_RE.search(line)
        if found and current in wanted:
            start, end, size = int(found.group(1), 16), int(found.group(2), 16), int(found.group(3))
            if end - start + 1 != size:
                raise AssertionError("Malformed fresh Ghidra body range")
            ranges[current].append((start, size))
            continue
        found = COVERAGE_RE.search(line)
        if found and current in wanted:
            coverage[current] = tuple(map(int, found.groups()))
            continue
        found = CALL_RE.search(line)
        if found and current in wanted:
            calls[current].append((int(found.group(1), 16), int(found.group(2), 16)))
            continue
        found = REF_FUNCTION_RE.search(line)
        if found:
            ref_target = int(found.group(1), 16)
            refs_to.setdefault(ref_target, [])
            continue
        if "DumpFunctionRefs.java> FUNCTION none" in line:
            ref_target = None
            continue
        found = REF_RE.search(line)
        if found and ref_target is not None:
            caller = found.group(3).lower()
            refs_to[ref_target].append((
                int(found.group(1), 16), found.group(2),
                None if caller == "none" else int(caller, 16),
            ))
    return functions, ranges, coverage, calls, refs_to


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (
        not instructions or instructions[0].address != start
        or sum(instruction.size for instruction in instructions) != size
        or instructions[-1].address + instructions[-1].size != start + size
    ):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def require_call(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None or instruction.id != X86_INS_CALL
        or not instruction.operands or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed direct call at {site:08X} to {target:08X}")


def require_vtable_store(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None or instruction.mnemonic != "mov"
        or not instruction.operands or instruction.operands[-1].type != X86_OP_IMM
        or (instruction.operands[-1].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Missing expected vftable assignment at {site:08X}")


def read_type_name(image, type_descriptor):
    start = type_descriptor - BASE + 8
    end = image.find(b"\0", start)
    if end < 0:
        raise AssertionError(f"Unterminated RTTI type name at {type_descriptor:08X}")
    return image[start:end].decode("ascii")


def reachable_from(root, graph):
    reachable = {root}
    queue = deque((root,))
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    return reachable


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    inventory_rows = read_tsv(INVENTORY_PATH)
    inventory = {
        int(row["address"], 16): row for row in inventory_rows
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(record["address"], 16): record for record in catalog["matches"]}
    matched = {address for address, record in records.items()
               if record.get("verified_by") == MARKER}

    range_rows = read_tsv(RANGE_PATH)
    function_ranges = {}
    for row in range_rows:
        function = int(row["function"], 16)
        start, size = int(row["start"], 16), int(row["length"])
        if size <= 0 or int(row["instruction_bytes"]) != size:
            raise AssertionError(f"Incomplete Ghidra body range: {row}")
        function_ranges.setdefault(function, []).append(
            (start, size, int(row["instruction_count"]))
        )
    for function, parts in function_ranges.items():
        parts.sort()
        previous_end = None
        for start, size, _count in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges at {start:08X}")
            previous_end = start + size
        if not parts or parts[0][0] != function:
            raise AssertionError(f"First range does not start at {function:08X}")
    if set(function_ranges) != SELECTED:
        raise AssertionError("Builder address set and body manifest disagree")

    range_count = sum(map(len, function_ranges.values()))
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    if (len(SELECTED), byte_count, range_count) != (
        EXPECTED_FUNCTIONS, EXPECTED_BYTES, EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected CWarehouseSlotManager slice size")

    decomp = FRESH_DECOMP.read_text(encoding="utf-8", errors="replace")
    if "/* failed:" in decomp:
        raise AssertionError("Fresh Ghidra decompilation failed")
    wanted = SELECTED
    fresh_functions, fresh_ranges, fresh_coverage, fresh_calls, refs_to = parse_log(
        FRESH_LOG.read_text(encoding="utf-8", errors="replace"), wanted
    )
    if set(fresh_functions) != wanted:
        raise AssertionError("Fresh Ghidra output omits a selected member")
    for address in wanted:
        bodies = [row for row in read_tsv(BODY_INVENTORY)
                  if int(row["function"], 16) == address]
        expected = tuple(sorted((int(row["start"], 16), int(row["length"])) for row in bodies))
        if not bodies or tuple(sorted(fresh_ranges.get(address, ()))) != expected:
            raise AssertionError(f"Fresh Ghidra ranges disagree at {address:08X}")
        body_bytes = sum(size for _, size in expected)
        coverage = fresh_coverage[address]
        if coverage != (
            sum(int(row["instruction_count"]) for row in bodies),
            body_bytes, body_bytes, body_bytes,
        ) or fresh_functions[address] != body_bytes:
            raise AssertionError(f"Fresh Ghidra instruction coverage differs at {address:08X}")

    body_exports = read_tsv(BODY_EXPORTS_PATH)
    expected_body_sources = {"main-function-bodies-inventory", "targeted-fresh-ghidra"}
    reference_bodies = [row for row in body_exports
                        if row["export"] == "main-function-bodies-inventory"]
    for source in expected_body_sources:
        exported = [row for row in body_exports if row["export"] == source]
        if body_signature(exported) != body_signature(reference_bodies):
            raise AssertionError(f"CWarehouseSlotManager body export {source} differs")
    if {row["export"] for row in body_exports} != expected_body_sources:
        raise AssertionError("Unexpected body-export source")
    if body_signature(reference_bodies) != body_signature(range_rows):
        raise AssertionError("Tracked ranges disagree with body exports")

    independent_edges = [row for row in read_tsv(EDGE_INVENTORY)
                         if row["kind"] == "CALL" and int(row["function"], 16) in SELECTED]
    edge_exports = read_tsv(EDGE_EXPORTS_PATH)
    expected_edge_sources = {"main-function-edges-inventory", "targeted-fresh-ghidra"}
    reference_edges = [row for row in edge_exports
                       if row["export"] == "main-function-edges-inventory"]
    for source in expected_edge_sources:
        exported = [row for row in edge_exports if row["export"] == source]
        if edge_signature(exported) != edge_signature(reference_edges):
            raise AssertionError(f"CWarehouseSlotManager edge export {source} differs")
    if {row["export"] for row in edge_exports} != expected_edge_sources:
        raise AssertionError("Unexpected edge-export source")
    if len(reference_edges) != EXPECTED_DIRECT_TRANSFERS:
        raise AssertionError("Unexpected independent direct-transfer count")
    fresh_signature = sorted(
        (function, site, target)
        for function, edges in fresh_calls.items() if function in SELECTED
        for site, target in edges
    )
    tracked_signature = sorted(
        (int(row["function"], 16), int(row["site"], 16), int(row["target"], 16))
        for row in reference_edges
    )
    if fresh_signature != tracked_signature:
        raise AssertionError("Fresh targeted transfers disagree with independent inventory")

    closure_rows = read_tsv(CLOSURE_PATH)
    for root, expected_members in ROOT_CLOSURES.items():
        actual = {int(row["function"], 16) for row in closure_rows
                  if int(row["root"], 16) == root}
        if actual != expected_members:
            raise AssertionError(f"Tracked direct closure changed at {root:08X}")
    if set().union(*ROOT_CLOSURES.values()) != SELECTED:
        raise AssertionError("Selected functions are not the union of the four class slots and auxiliary reset root")

    if SELECTED - set(records) or SELECTED - matched:
        raise AssertionError("Not every selected function has an objdiff-verified record")
    if SELECTED - set(inventory):
        raise AssertionError("A selected function is missing from installed-client inventory")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in SELECTED}
    boundary_transfers, indirect_calls, indirect_jumps = {}, {}, {}
    direct_transfers, internal_transfers = set(), set()
    for address in sorted(SELECTED):
        record = records[address]
        expected_ranges = tuple((start, size) for start, size, _ in function_ranges[address])
        if (
            int(record["size"]) != int(inventory[address]["size"])
            or sum(size for _, size in expected_ranges) != int(inventory[address]["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Verified catalog ranges disagree with Ghidra at {address:08X}")
        source_path = ROOT / record["source"]
        if hashlib.sha256(source_path.read_bytes()).hexdigest() != record["source_sha256"]:
            raise AssertionError(f"Catalog source hash is stale at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size, expected_count in function_ranges[address]:
            instructions = decode_complete(image, decoder, start, size)
            if len(instructions) != expected_count:
                raise AssertionError(f"Capstone/Ghidra instruction count differs at {start:08X}")
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP):
                    continue
                if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
                    target_map = indirect_calls if instruction.id == X86_INS_CALL else indirect_jumps
                    target_map[address] = target_map.get(address, 0) + 1
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                direct_transfers.add((address, instruction.address, target))
                if target in SELECTED:
                    internal_transfers.add((address, instruction.address, target))
                    graph[address].add(target)
                elif target in matched:
                    boundary_transfers[instruction.address] = target
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} direct transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    if len(direct_transfers) != EXPECTED_DIRECT_TRANSFERS:
        raise AssertionError(f"Unexpected decoded direct-transfer count: {len(direct_transfers)}")
    if len(boundary_transfers) != EXPECTED_VERIFIED_BOUNDARY_TRANSFERS:
        raise AssertionError("Unexpected number of transfers to byte-verified functions")
    if len(internal_transfers) != EXPECTED_INTERNAL_TRANSFERS:
        raise AssertionError(f"Unexpected internal direct-transfer count: {len(internal_transfers)}")
    if indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Unexpected indirect call sites: {indirect_calls}")
    if indirect_jumps != EXPECTED_INDIRECT_JUMPS:
        raise AssertionError(f"Unexpected indirect jump sites: {indirect_jumps}")
    for root, expected_members in ROOT_CLOSURES.items():
        if reachable_from(root, graph) != expected_members:
            raise AssertionError(f"Direct-call closure changed for root {root:08X}")

    if 0x588F7D00 in SELECTED:
        raise AssertionError("Unexpected inclusion of the indirect tail-dispatch helper")
    if read_u32(image, ADDRESS_POINT - 4) != CLASS_LOCATOR:
        raise AssertionError("CWarehouseSlotManager address point no longer references its locator")
    col = struct.unpack_from("<IIIII", image, CLASS_LOCATOR - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR, CLASS_HIERARCHY):
        raise AssertionError("CWarehouseSlotManager complete-object locator changed")
    if read_type_name(image, TYPE_DESCRIPTOR) != BASE_NAMES[0]:
        raise AssertionError("CWarehouseSlotManager type descriptor changed")
    hierarchy = struct.unpack_from("<IIII", image, CLASS_HIERARCHY - BASE)
    if hierarchy[:3] != (0, 0, len(BASE_NAMES)):
        raise AssertionError("CWarehouseSlotManager class hierarchy descriptor changed")
    names = tuple(
        read_type_name(image, read_u32(image, read_u32(image, hierarchy[3] + index * 4)))
        for index in range(hierarchy[2])
    )
    if names != BASE_NAMES:
        raise AssertionError(f"Unexpected CWarehouseSlotManager base chain: {names}")
    if tuple(read_u32(image, ADDRESS_POINT + index * 4)
             for index in range(len(PRIMARY_SLOTS))) != PRIMARY_SLOTS:
        raise AssertionError("CWarehouseSlotManager primary-vtable slots changed")
    if any(address not in matched for address in PRIMARY_SLOTS[1:3] + PRIMARY_SLOTS[5:6]):
        raise AssertionError("A previously matched inherited primary slot lost verification")
    if read_u32(image, ADDRESS_POINT + 4 * len(PRIMARY_SLOTS)) != ADJACENT_LOCATOR:
        raise AssertionError("Adjacent warehouse vtable locator boundary changed")
    adjacent_col = struct.unpack_from("<IIIII", image, ADJACENT_LOCATOR - BASE)
    if read_type_name(image, adjacent_col[3]) != ADJACENT_NAME:
        raise AssertionError("Adjacent table is not CWarehouseTradePanel")

    for function, slot in (
        (0x588FFD90, ADDRESS_POINT),
        (0x588FF890, ADDRESS_POINT + 0x0C),
        (0x588FF940, ADDRESS_POINT + 0x10),
        (0x588FF6B0, ADDRESS_POINT + 0x18),
    ):
        if (slot, "DATA", None) not in refs_to.get(function, ()):
            raise AssertionError(f"Fresh Ghidra lacks vtable slot reference {slot:08X}->{function:08X}")
    log_text = FRESH_LOG.read_text(encoding="utf-8", errors="replace").lower()
    expected_store_refs = (
        "ref 588ff9cd type=data source=analysis caller=fun_588ff9a0@588ff9a0",
        "ref 588ffe84 type=data source=analysis caller=fun_588ffe10@588ffe10",
    )
    if any(reference not in log_text for reference in expected_store_refs):
        raise AssertionError("Fresh Ghidra lacks destructor or constructor vtable-store references")
    for site in (0x588FF9CD, 0x588FFE84):
        require_vtable_store(image, decoder, site, ADDRESS_POINT)

    if CONSTRUCTOR not in matched or CONSTRUCTOR_CALLER not in matched:
        raise AssertionError("Matched constructor path lost byte verification")
    for address in (CONSTRUCTOR, CONSTRUCTOR_CALLER):
        record = records[address]
        if hashlib.sha256((ROOT / record["source"]).read_bytes()).hexdigest() != record["source_sha256"]:
            raise AssertionError(f"Matched constructor-path source hash is stale at {address:08X}")
    require_call(image, decoder, CONSTRUCTOR_CALLSITE, CONSTRUCTOR)
    caller_record = records[CONSTRUCTOR_CALLER]
    if not any(start <= CONSTRUCTOR_CALLSITE < start + size
               for start, size in record_ranges(caller_record)):
        raise AssertionError("Matched constructor callsite is outside the verified caller body")

    if RESET_CALLER not in matched or RESET_CALLER not in records:
        raise AssertionError("Auxiliary warehouse reset caller lost byte verification")
    reset_record = records[RESET_CALLER]
    if (int(reset_record["size"]) != int(inventory[RESET_CALLER]["size"])
            or len(record_ranges(reset_record)) != 1):
        raise AssertionError("Auxiliary reset-caller match no longer covers its exact body")
    if hashlib.sha256((ROOT / reset_record["source"]).read_bytes()).hexdigest() != reset_record["source_sha256"]:
        raise AssertionError("Auxiliary reset-caller source hash is stale")

    incoming_ref_log = INCOMING_REFERENCE_LOG.read_text(encoding="utf-8", errors="replace").lower()
    expected_incoming_reference = (
        "dumpfunctionrefs.java> ref 588fc7da type=unconditional_call "
        "source=default caller=fun_588fc770@588fc770"
    )
    if expected_incoming_reference not in incoming_ref_log:
        raise AssertionError("Fresh Ghidra lacks the CWarehouseManager caller reference")
    if 0x588FC770 not in matched:
        raise AssertionError("Matched incoming CWarehouseManager caller lost byte verification")
    require_call(image, decoder, 0x588FC7DA, RESET_CALLER)

    expected_reset_transfers = {
        (0x588FFC9F, 0x588F9C00),
        (0x588FFCE1, 0x5897CC72), (0x588FFCFA, 0x5897CC72),
        (0x588FFD13, 0x5897CC72), (0x588FFD37, 0x5897CC72),
        (0x588FFD58, 0x5897CC72), (0x588FFD67, 0x5897CC72),
        (0x588FFD79, 0x587AEDB0),
    }
    actual_reset_transfers = set(fresh_calls[RESET_CALLER])
    if actual_reset_transfers != expected_reset_transfers:
        raise AssertionError(f"Fresh Ghidra reset-caller transfers changed: {actual_reset_transfers}")
    for site, target in expected_reset_transfers:
        require_call(image, decoder, site, target)

    formatted_indirect_calls = {
        f"0x{address:08X}": count for address, count in sorted(indirect_calls.items())
    }
    formatted_indirect_jumps = {
        f"0x{address:08X}": count for address, count in sorted(indirect_jumps.items())
    }
    print(
        f"Main.dll CWarehouseSlotManager: {len(MAIN_CWAREHOUSE_SLOT_MANAGER_ADDRESSES)} class functions "
        f"plus {len(MAIN_WAREHOUSE_RESET_CALLER_ADDRESSES)} auxiliary reset caller "
        f"({len(SELECTED)} functions / {byte_count:,} bytes) "
        f"across {range_count} exact Ghidra ranges; {EXPECTED_DIRECT_TRANSFERS} direct "
        f"call/tail-transfer edges ({EXPECTED_INTERNAL_TRANSFERS} internal, "
        f"{EXPECTED_VERIFIED_BOUNDARY_TRANSFERS} to verified code); RTTI, four open "
        "primary slots, auxiliary reset root, matched constructor path, and incoming "
        "CWarehouseManager caller pass; "
        f"indirect calls={formatted_indirect_calls}, "
        f"indirect jumps={formatted_indirect_jumps}; "
        "complete byte coverage and direct closures pass"
    )


if __name__ == "__main__":
    main()
