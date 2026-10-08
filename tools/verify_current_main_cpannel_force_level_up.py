"""Validate the RTTI-backed CPannelForceLevelUp virtual-method closure."""
import csv
import json
import re
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_CPANNEL_FORCE_LEVEL_UP_ADDRESSES,
    )
except ImportError:  # Support direct execution as tools/verify_*.py too.
    from build_current_main_verifications import (
        MAIN_CPANNEL_FORCE_LEVEL_UP_ADDRESSES,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-cpannel-force-level-up-body-ranges.tsv"
BODY_EXPORTS_PATH = ROOT / "config/NF2_2026/main-cpannel-force-level-up-body-exports.tsv"
EDGE_EXPORTS_PATH = ROOT / "config/NF2_2026/main-cpannel-force-level-up-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
FRESH_LOG = FRESH_DIR / "cpannel-force-level-up-fresh-ghidra.log"
FRESH_DECOMP = FRESH_DIR / "cpannel-force-level-up-fresh-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = tuple(int(address, 16) for address in MAIN_CPANNEL_FORCE_LEVEL_UP_ADDRESSES)
VIRTUAL_ROOTS = (0x58870170, 0x58871870, 0x58871990)
VTABLE_ADDRESS_POINT = 0x5899EDF8
COL_POINTER_ADDRESS = 0x5899EDF4
COL_ADDRESS = 0x589A8CF0
TYPE_DESCRIPTOR_ADDRESS = 0x589CCECC
TYPE_NAME = b".?AVCPannelForceLevelUp@@\0"
NEXT_COL_POINTER_ADDRESS = 0x5899EE14
NEXT_COL_ADDRESS = 0x589A8D44
NEXT_TYPE_DESCRIPTOR_ADDRESS = 0x589CCEF0
NEXT_TYPE_NAME = b".?AVCPannelForceManager@@\0"
EXPECTED_VTABLE = (
    0x58870170, 0x58903400, 0x58903420, 0x58871870,
    0x5873B360, 0x58902FE0, 0x58871990,
)
EXPECTED_FUNCTIONS = 11
EXPECTED_BYTES = 5_098
EXPECTED_RANGES = 19
EXPECTED_CALL_EDGES = 48


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def read_u32(image, address):
    return struct.unpack_from("<I", image, address - BASE)[0]


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def parse_ranges(rows):
    result = {}
    for row in rows:
        function = int(row["function"], 16)
        start = int(row["start"], 16)
        size = int(row["length"])
        instruction_bytes = int(row["instruction_bytes"])
        instruction_count = int(row["instruction_count"])
        if size <= 0 or instruction_bytes != size or instruction_count <= 0:
            raise AssertionError(f"Incomplete Ghidra body range: {row}")
        result.setdefault(function, []).append((start, size, instruction_count))
    for function, parts in result.items():
        parts.sort()
        previous_end = None
        for start, size, _ in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges at {start:08X}")
            previous_end = start + size
        if not parts or parts[0][0] != function:
            raise AssertionError(f"First range does not start at {function:08X}")
    return {function: tuple(parts) for function, parts in result.items()}


def body_signature(rows):
    return sorted(
        (
            row["function"].upper(),
            int(row["start"], 16),
            int(row["length"]),
            int(row["instruction_bytes"]),
            int(row["instruction_count"]),
        )
        for row in rows
    )


def edge_signature(rows):
    return sorted(
        (
            row["kind"], row["function"].upper(), row["site"].upper(),
            row["type"], row["target"].upper(), row["target_function"].upper(),
        )
        for row in rows
    )


def parse_fresh_log(text):
    function_re = re.compile(
        r"DumpExactFunctionRanges\.java> FUNCTION FUN_([0-9a-fA-F]+) "
        r"entry=([0-9a-fA-F]+) bodyBytes=(\d+)"
    )
    range_re = re.compile(
        r"DumpExactFunctionRanges\.java> RANGE ([0-9a-fA-F]+)\.\."
        r"([0-9a-fA-F]+) length=(\d+)"
    )
    coverage_re = re.compile(
        r"DumpExactFunctionRanges\.java> COVERAGE instructionCount=(\d+) "
        r"instructionBytes=(\d+) rangeBytes=(\d+) bodyBytes=(\d+)"
    )
    call_re = re.compile(
        r"DumpExactFunctionRanges\.java> CALL ([0-9a-fA-F]+) -> "
        r"([0-9a-fA-F]+) FUN_([0-9a-fA-F]+)"
    )
    ref_function_re = re.compile(
        r"DumpFunctionRefs\.java> FUNCTION FUN_([0-9a-fA-F]+) "
        r"([0-9a-fA-F]+) body=(\d+)"
    )
    ref_re = re.compile(
        r"DumpFunctionRefs\.java> REF ([0-9a-fA-F]+) "
        r"type=([A-Z_]+) source=[A-Z_]+ caller=(?:FUN_[0-9a-fA-F]+@)?"
        r"([0-9a-fA-F]+|none)"
    )

    functions, ranges, coverage, calls, refs_to = {}, {}, {}, {}, {}
    current = None
    ref_target = None
    for line in text.splitlines():
        found = function_re.search(line)
        if found:
            current = int(found.group(1), 16)
            entry, body_bytes = int(found.group(2), 16), int(found.group(3))
            if current != entry:
                raise AssertionError("Fresh Ghidra function entry changed")
            functions[current] = body_bytes
            ranges.setdefault(current, [])
            calls.setdefault(current, [])
            continue
        found = range_re.search(line)
        if found and current is not None:
            start, end, size = int(found.group(1), 16), int(found.group(2), 16), int(found.group(3))
            if end - start + 1 != size:
                raise AssertionError("Malformed fresh Ghidra body range")
            ranges[current].append((start, size))
            continue
        found = coverage_re.search(line)
        if found and current is not None:
            coverage[current] = tuple(map(int, found.groups()))
            continue
        found = call_re.search(line)
        if found and current is not None:
            calls[current].append(
                (int(found.group(1), 16), int(found.group(2), 16), int(found.group(3), 16))
            )
            continue
        found = ref_function_re.search(line)
        if found:
            ref_target = int(found.group(1), 16)
            refs_to.setdefault(ref_target, [])
            continue
        if "DumpFunctionRefs.java> FUNCTION none" in line:
            ref_target = None
            continue
        found = ref_re.search(line)
        if found and ref_target is not None:
            caller = found.group(3).lower()
            refs_to[ref_target].append(
                (int(found.group(1), 16), found.group(2), None if caller == "none" else int(caller, 16))
            )
    return functions, ranges, coverage, calls, refs_to


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


def require_call(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or not instruction.operands
        or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed direct call at {site:08X} to {target:08X}")


def verify_matched_caller(image, decoder, records, matched, caller, site, target):
    record = records.get(caller)
    if record is None or caller not in matched:
        raise AssertionError(f"Caller {caller:08X} is not byte-verified")
    if not any(start <= site < start + size for start, size in record_ranges(record)):
        raise AssertionError(f"Call site {site:08X} is outside its matched caller")
    require_call(image, decoder, site, target)


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    selected = set(FUNCTIONS)
    if selected != {int(address, 16) for address in MAIN_CPANNEL_FORCE_LEVEL_UP_ADDRESSES}:
        raise AssertionError("Builder set and verifier function set disagree")

    range_rows = read_tsv(RANGE_PATH)
    function_ranges = parse_ranges(range_rows)
    if set(function_ranges) != selected:
        raise AssertionError("Builder set and Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    if (len(selected), byte_count, range_count) != (
        EXPECTED_FUNCTIONS, EXPECTED_BYTES, EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected CPannelForceLevelUp closure shape")

    fresh_text = FRESH_LOG.read_text(encoding="utf-8", errors="replace")
    fresh_functions, fresh_ranges, fresh_coverage, fresh_calls, refs_to = parse_fresh_log(fresh_text)
    if "/* failed:" in FRESH_DECOMP.read_text(encoding="utf-8", errors="replace"):
        raise AssertionError("Fresh Ghidra decompilation failed for a selected function")
    if set(fresh_functions) != selected:
        raise AssertionError("Fresh Ghidra function set differs from the selected class slice")

    for address in sorted(selected):
        parts = function_ranges[address]
        expected_parts = tuple((start, size) for start, size, _ in parts)
        if tuple(sorted(fresh_ranges.get(address, ()))) != expected_parts:
            raise AssertionError(f"Fresh Ghidra ranges disagree at {address:08X}")
        instruction_count, instruction_bytes, range_bytes, body_bytes = fresh_coverage[address]
        if (
            instruction_bytes != body_bytes
            or range_bytes != body_bytes
            or body_bytes != fresh_functions[address]
            or sum(size for _, size, _ in parts) != body_bytes
            or sum(count for _, _, count in parts) != instruction_count
        ):
            raise AssertionError(f"Fresh Ghidra body coverage differs at {address:08X}")

    body_exports = read_tsv(BODY_EXPORTS_PATH)
    for export_name in ("main-function-bodies-inventory", "targeted-fresh-ghidra"):
        exported = [row for row in body_exports if row["export"] == export_name]
        if body_signature(exported) != body_signature(range_rows):
            raise AssertionError(f"Body export {export_name} differs from the Ghidra manifest")
    if {row["export"] for row in body_exports} != {
        "main-function-bodies-inventory", "targeted-fresh-ghidra"
    }:
        raise AssertionError("Unexpected body-export sources")

    edge_exports = read_tsv(EDGE_EXPORTS_PATH)
    expected_edge_sources = {"main-function-edges-inventory", "targeted-fresh-ghidra"}
    for export_name in expected_edge_sources:
        exported = [row for row in edge_exports if row["export"] == export_name]
        if edge_signature(exported) != edge_signature(
            [row for row in edge_exports if row["export"] == "main-function-edges-inventory"]
        ):
            raise AssertionError(f"Call-edge export {export_name} disagrees with the independent inventory")
    if {row["export"] for row in edge_exports} != expected_edge_sources:
        raise AssertionError("Unexpected call-edge export sources")
    inventory_edges = [row for row in edge_exports if row["export"] == "main-function-edges-inventory"]
    if len(inventory_edges) != EXPECTED_CALL_EDGES:
        raise AssertionError("Unexpected direct-call edge count")
    fresh_edge_signature = sorted(
        (function, site, target, target_function)
        for function, edges in fresh_calls.items()
        for site, target, target_function in edges
    )
    inventory_edge_signature = sorted(
        (
            int(row["function"], 16), int(row["site"], 16),
            int(row["target"], 16), int(row["target_function"], 16),
        )
        for row in inventory_edges
    )
    if fresh_edge_signature != inventory_edge_signature:
        raise AssertionError("Fresh Ghidra call sites disagree with the edge inventory")

    if set(records) & selected != selected or selected - matched:
        raise AssertionError("Not every selected member has a byte-verified catalog record")
    if selected - set(inventory):
        raise AssertionError("Selected member is missing from the installed Main.dll inventory")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_transfers = {}
    for address in sorted(selected):
        record = records[address]
        expected_ranges = tuple((start, size) for start, size, _ in function_ranges[address])
        if (
            int(record["size"]) != int(inventory[address]["size"])
            or sum(size for _, size in expected_ranges) != int(inventory[address]["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Verified catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size, expected_count in function_ranges[address]:
            instructions = decode_complete(image, decoder, start, size)
            if len(instructions) != expected_count:
                raise AssertionError(
                    f"Capstone/Ghidra instruction count differs at {start:08X}: "
                    f"{len(instructions)} != {expected_count}"
                )
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    boundary_transfers[instruction.address] = target
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} direct transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    reachable = set(VIRTUAL_ROOTS)
    queue = deque(VIRTUAL_ROOTS)
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact open virtual-slot closure: {sorted(selected - reachable)}")

    for caller, site, target in (
        (0x5886BA60, 0x5886BFAB, 0x5876CCC0),
        (0x5886BA60, 0x5886C09D, 0x5876CCC0),
        (0x5877B1F0, 0x5877BCCA, 0x58779A40),
        (0x5877B1F0, 0x5877BD5D, 0x58779B80),
    ):
        verify_matched_caller(image, decoder, records, matched, caller, site, target)
    for site, target in ((0x5877B0FA, 0x58779A40), (0x5877B119, 0x58779B80)):
        require_call(image, decoder, site, target)

    if read_u32(image, COL_POINTER_ADDRESS) != COL_ADDRESS:
        raise AssertionError("CPannelForceLevelUp vftable does not point to its expected COL")
    col = struct.unpack_from("<IIIII", image, COL_ADDRESS - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR_ADDRESS, 0x589A8D04):
        raise AssertionError(f"Unexpected CPannelForceLevelUp complete-object locator: {col}")
    vtable = tuple(read_u32(image, VTABLE_ADDRESS_POINT + offset) for offset in range(0, 0x1C, 4))
    if vtable != EXPECTED_VTABLE:
        raise AssertionError(f"CPannelForceLevelUp primary vftable changed: {vtable}")
    if read_u32(image, NEXT_COL_POINTER_ADDRESS) != NEXT_COL_ADDRESS:
        raise AssertionError("Adjacent vftable boundary no longer points to the next COL")
    next_col = struct.unpack_from("<IIIII", image, NEXT_COL_ADDRESS - BASE)
    if next_col != (0, 0, 0, NEXT_TYPE_DESCRIPTOR_ADDRESS, 0x589A8D58):
        raise AssertionError(f"Unexpected adjacent CPannelForceManager COL: {next_col}")
    for descriptor, expected_name, label in (
        (TYPE_DESCRIPTOR_ADDRESS, TYPE_NAME, "CPannelForceLevelUp"),
        (NEXT_TYPE_DESCRIPTOR_ADDRESS, NEXT_TYPE_NAME, "CPannelForceManager"),
    ):
        name_offset = descriptor - BASE + 8
        if image[name_offset:name_offset + len(expected_name)] != expected_name:
            raise AssertionError(f"RTTI type descriptor no longer names {label}")
    expected_data_refs = {
        0x58870170: 0x5899EDF8,
        0x58871870: 0x5899EE04,
        0x58871990: 0x5899EE10,
    }
    for target, site in expected_data_refs.items():
        if (site, "DATA", None) not in refs_to.get(target, ()):
            raise AssertionError(f"Fresh Ghidra lacks the vtable reference to {target:08X}")

    print(
        f"Main.dll CPannelForceLevelUp: {len(selected)} functions / {byte_count:,} bytes "
        f"across {range_count} exact Ghidra ranges; {len(inventory_edges)} fresh call edges, "
        f"{len(boundary_transfers)} direct transfers to verified code, three previously "
        "unmatched RTTI-backed slots, two byte-matched caller groups, and the direct-call closure pass"
    )


if __name__ == "__main__":
    main()
