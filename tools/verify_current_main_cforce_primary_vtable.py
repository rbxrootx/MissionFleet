"""Verify the RTTI-backed CForce primary-vftable byte-match closure."""
import csv
import json
import re
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import MAIN_CFORCE_PRIMARY_VTABLE_ADDRESSES
except ImportError:  # Support direct execution as a script.
    from build_current_main_verifications import MAIN_CFORCE_PRIMARY_VTABLE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-cforce-primary-body-ranges.tsv"
BODY_EXPORTS_PATH = ROOT / "config/NF2_2026/main-cforce-primary-body-exports.tsv"
EDGE_EXPORTS_PATH = ROOT / "config/NF2_2026/main-cforce-primary-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
FRESH_LOG = FRESH_DIR / "cforce-primary-fresh-ghidra.log"
FRESH_DECOMP = FRESH_DIR / "cforce-primary-fresh-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = tuple(int(address, 16) for address in MAIN_CFORCE_PRIMARY_VTABLE_ADDRESSES)
VIRTUAL_ROOTS = (0x5877B1D0, 0x5877C8F0, 0x5877BE60, 0x5877A650)
VTABLE_ADDRESS_POINT = 0x5899689C
COL_POINTER_ADDRESS = 0x58996898
COL_ADDRESS = 0x589A5C34
TYPE_DESCRIPTOR_ADDRESS = 0x589BA9C0
TYPE_NAME = b".?AVCForce@@\0"
CLASS_HIERARCHY_ADDRESS = 0x589A5C48
EXPECTED_VTABLE = (
    0x5877B1D0, 0x58903400, 0x58903420, 0x5877C8F0,
    0x5877BE60, 0x58902FE0, 0x5877A650,
)
EXPECTED_FUNCTIONS = 18
EXPECTED_BYTES = 7_441
EXPECTED_RANGES = 25
EXPECTED_DIRECT_CALLS = 100
EXPECTED_INDIRECT_CALLS = 49
EXPECTED_DESTRUCTOR_INDIRECT_CALLS = 31
OPEN_CALLER_EDGES = {
    (0x5875F1E0, 0x5875F270, 0x58731650),
    (0x5876D460, 0x5876D5C9, 0x58731650),
    (0x5876D460, 0x5876D64C, 0x58731650),
    (0x5876D460, 0x5876D7C3, 0x58731650),
    (0x5877C620, 0x5877C656, 0x5877AD50),
    (0x5877DEE0, 0x5877DEEA, 0x5877A5D0),
    (0x587CE9A0, 0x587CEA60, 0x58731650),
    (0x587CE9A0, 0x587CEA80, 0x58731650),
}
MATCHED_CALLER_EDGE = (0x587E3080, 0x587E3D1D, 0x5881ED70)

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


def parse_fresh_log(text):
    functions, ranges, coverage, calls, refs_to = {}, {}, {}, {}, {}
    current = None
    ref_target = None
    for line in text.splitlines():
        found = FUNCTION_RE.search(line)
        if found:
            current = int(found.group(1), 16)
            entry, size = int(found.group(2), 16), int(found.group(3))
            if current != entry:
                raise AssertionError("Fresh Ghidra function entry changed")
            functions[current] = size
            ranges[current] = []
            calls[current] = []
            continue
        found = RANGE_RE.search(line)
        if found and current is not None:
            start, end, size = int(found.group(1), 16), int(found.group(2), 16), int(found.group(3))
            if end - start + 1 != size:
                raise AssertionError("Malformed fresh Ghidra body range")
            ranges[current].append((start, size))
            continue
        found = COVERAGE_RE.search(line)
        if found and current is not None:
            coverage[current] = tuple(map(int, found.groups()))
            continue
        found = CALL_RE.search(line)
        if found and current is not None:
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
            refs_to[ref_target].append(
                (int(found.group(1), 16), found.group(2),
                 None if caller == "none" else int(caller, 16))
            )
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


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    inventory_rows = read_tsv(INVENTORY_PATH)
    inventory = {
        int(row["address"], 16): row for row in inventory_rows
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    selected = set(FUNCTIONS)
    expected = {int(address, 16) for address in MAIN_CFORCE_PRIMARY_VTABLE_ADDRESSES}
    if selected != expected:
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
        raise AssertionError("Unexpected CForce primary-vftable closure shape")

    fresh_text = FRESH_LOG.read_text(encoding="utf-8", errors="replace")
    fresh_functions, fresh_ranges, fresh_coverage, fresh_calls, refs_to = parse_fresh_log(fresh_text)
    if "/* failed:" in FRESH_DECOMP.read_text(encoding="utf-8", errors="replace"):
        raise AssertionError("Fresh Ghidra decompilation failed for a selected function")
    if set(fresh_functions) != selected:
        raise AssertionError("Fresh Ghidra function set differs from the CForce slice")

    for address in sorted(selected):
        parts = function_ranges[address]
        expected_parts = tuple((start, size) for start, size, _ in parts)
        if tuple(sorted(fresh_ranges.get(address, ()))) != expected_parts:
            raise AssertionError(f"Fresh Ghidra ranges disagree at {address:08X}")
        instruction_count, instruction_bytes, range_bytes, body_bytes = fresh_coverage[address]
        if (
            instruction_bytes != body_bytes or range_bytes != body_bytes
            or body_bytes != fresh_functions[address]
            or sum(size for _, size, _ in parts) != body_bytes
            or sum(count for _, _, count in parts) != instruction_count
        ):
            raise AssertionError(f"Fresh Ghidra body coverage differs at {address:08X}")

    body_exports = read_tsv(BODY_EXPORTS_PATH)
    expected_body_sources = {"main-function-bodies-inventory", "targeted-fresh-ghidra"}
    reference_bodies = [row for row in body_exports if row["export"] == "main-function-bodies-inventory"]
    for source in expected_body_sources:
        exported = [row for row in body_exports if row["export"] == source]
        if body_signature(exported) != body_signature(reference_bodies):
            raise AssertionError(f"CForce body export {source} disagrees with independent Ghidra data")
    if {row["export"] for row in body_exports} != expected_body_sources:
        raise AssertionError("Unexpected CForce body-export sources")
    if body_signature(reference_bodies) != body_signature(range_rows):
        raise AssertionError("Tracked CForce ranges disagree with the complete body export")

    edge_exports = read_tsv(EDGE_EXPORTS_PATH)
    expected_edge_sources = {"main-function-edges-inventory", "targeted-fresh-ghidra"}
    reference_edges = [row for row in edge_exports if row["export"] == "main-function-edges-inventory"]
    for source in expected_edge_sources:
        exported = [row for row in edge_exports if row["export"] == source]
        if edge_signature(exported) != edge_signature(reference_edges):
            raise AssertionError(f"CForce call export {source} disagrees with independent Ghidra data")
    if {row["export"] for row in edge_exports} != expected_edge_sources:
        raise AssertionError("Unexpected CForce call-edge sources")
    if len(reference_edges) != EXPECTED_DIRECT_CALLS:
        raise AssertionError("Unexpected CForce direct-call edge count")
    fresh_call_signature = sorted(
        (function, site, target)
        for function, edges in fresh_calls.items()
        for site, target in edges
    )
    tracked_call_signature = sorted(
        (int(row["function"], 16), int(row["site"], 16), int(row["target"], 16))
        for row in reference_edges
    )
    if fresh_call_signature != tracked_call_signature:
        raise AssertionError("Fresh targeted direct-call sites disagree with the edge inventory")

    if selected - set(records) or selected - matched:
        raise AssertionError("Not every CForce member has a byte-verified catalog record")
    if selected - set(inventory):
        raise AssertionError("A CForce member is missing from the installed Main.dll inventory")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_transfers = {}
    indirect_calls = {}
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
                if instruction.id == X86_INS_CALL and (
                    not instruction.operands or instruction.operands[0].type != X86_OP_IMM
                ):
                    indirect_calls[address] = indirect_calls.get(address, 0) + 1
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

    if sum(indirect_calls.values()) != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Unexpected unresolved indirect-call count: {indirect_calls}")
    if indirect_calls.get(0x58779D10) != EXPECTED_DESTRUCTOR_INDIRECT_CALLS:
        raise AssertionError("CForce destructor indirect-dispatch count changed")

    if read_u32(image, COL_POINTER_ADDRESS) != COL_ADDRESS:
        raise AssertionError("CForce vftable does not point to its expected complete-object locator")
    col = struct.unpack_from("<IIIII", image, COL_ADDRESS - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR_ADDRESS, CLASS_HIERARCHY_ADDRESS):
        raise AssertionError(f"Unexpected CForce complete-object locator: {col}")
    hierarchy = struct.unpack_from("<IIII", image, CLASS_HIERARCHY_ADDRESS - BASE)
    if hierarchy != (0, 0, 3, 0x589A5C58):
        raise AssertionError(f"Unexpected CForce class hierarchy descriptor: {hierarchy}")
    type_name_offset = TYPE_DESCRIPTOR_ADDRESS - BASE + 8
    if image[type_name_offset:type_name_offset + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI type descriptor no longer names CForce")
    vtable = tuple(read_u32(image, VTABLE_ADDRESS_POINT + offset) for offset in range(0, 0x1C, 4))
    if vtable != EXPECTED_VTABLE:
        raise AssertionError(f"CForce primary vftable changed: {vtable}")
    for index, target in enumerate(EXPECTED_VTABLE):
        if target in VIRTUAL_ROOTS:
            slot = VTABLE_ADDRESS_POINT + index * 4
            if (slot, "DATA", None) not in refs_to.get(target, ()):
                raise AssertionError(f"Fresh Ghidra lacks CForce slot reference at {slot:08X}")

    all_edges = read_tsv(FRESH_DIR / "main-function-edges.tsv")
    incoming = {
        (int(row["function"], 16), int(row["site"], 16), int(row["target"], 16))
        for row in all_edges
        if row["kind"] == "CALL" and int(row["target"], 16) in selected
        and int(row["function"], 16) not in selected
    }
    if incoming != OPEN_CALLER_EDGES | {MATCHED_CALLER_EDGE}:
        raise AssertionError(f"Unexpected direct incoming calls outside CForce closure: {incoming}")
    for caller, site, target in incoming:
        refs = refs_to.get(target, ())
        if not any(ref_site == site and ref_caller == caller for ref_site, _kind, ref_caller in refs):
            raise AssertionError(f"Fresh Ghidra lacks incoming edge {caller:08X}@{site:08X} -> {target:08X}")
        if caller == MATCHED_CALLER_EDGE[0]:
            record = records.get(caller)
            if record is None or caller not in matched:
                raise AssertionError("External CForce caller is not byte-verified")
            if not any(
                start <= site < start + size for start, size in record_ranges(record)
            ):
                raise AssertionError("Matched external callsite is outside the caller's verified ranges")
            require_call(image, decoder, site, target)

    print(
        f"Main.dll CForce primary vftable: {len(selected)} functions / {byte_count:,} bytes "
        f"across {range_count} exact Ghidra ranges; {len(reference_edges)} direct calls, "
        f"{len(boundary_transfers)} transfers to byte-verified code, four open RTTI slots, "
        f"nine external direct-call sites, and {sum(indirect_calls.values())} unresolved "
        "indirect calls (31 in cleanup); exact byte coverage and closure pass"
    )


if __name__ == "__main__":
    main()
