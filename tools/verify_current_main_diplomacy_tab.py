"""Verify the RTTI-backed diplomacy-tab event handler byte-match closure."""
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
    from .build_current_main_verifications import MAIN_DIPLOMACY_TAB_EVENT_ADDRESSES
except ImportError:  # Support direct execution as a script.
    from build_current_main_verifications import MAIN_DIPLOMACY_TAB_EVENT_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-diplomacy-tab-body-ranges.tsv"
BODY_EXPORTS_PATH = ROOT / "config/NF2_2026/main-diplomacy-tab-body-exports.tsv"
EDGE_EXPORTS_PATH = ROOT / "config/NF2_2026/main-diplomacy-tab-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
FRESH_LOG = FRESH_DIR / "diplomacy-tab-fresh-ghidra.log"
FRESH_DECOMP = FRESH_DIR / "diplomacy-tab-fresh-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = tuple(int(address, 16) for address in MAIN_DIPLOMACY_TAB_EVENT_ADDRESSES)
SELECTED = set(FUNCTIONS)
EXPECTED_FUNCTIONS = 30
EXPECTED_BYTES = 3_876
EXPECTED_RANGES = 31
EXPECTED_BOUNDARY_TRANSFERS = 66
VTABLE_ADDRESS_POINT = 0x5899DC04
COL_POINTER_ADDRESS = 0x5899DC00
COL_ADDRESS = 0x589A82BC
TYPE_DESCRIPTOR_ADDRESS = 0x589CC570
TYPE_NAME = b".?AVCPannelCommunicatorConfigDiplomacyTab@@\0"
CLASS_HIERARCHY_ADDRESS = 0x589A82D0
BASE_CLASS_ARRAY = 0x589A82E0
EXPECTED_VTABLE = (
    0x58824680, 0x588246A0, 0x58874AF0, 0x58824850,
    0x588247B0, 0x58902FE0, 0x588246E0,
)
MATCHED_CALLER_EDGES = {
    (0x58832CF0, 0x58832FEE, 0x58759E90),
    (0x58832CF0, 0x58832FF6, 0x58759E90),
    (0x58832CF0, 0x58833136, 0x58759E90),
    (0x58832CF0, 0x5883313E, 0x58759E90),
    (0x58832CF0, 0x5883326C, 0x58759E90),
    (0x58832CF0, 0x58833274, 0x58759E90),
    (0x58832CF0, 0x588333A6, 0x58759E90),
    (0x58832CF0, 0x588333AE, 0x58759E90),
    (0x588290F0, 0x588292BD, 0x58828CB0),
    (0x58882D80, 0x58883CC0, 0x58759E90),
    (0x588B96B0, 0x588B9E42, 0x58759E90),
    (0x588B96B0, 0x588B9E52, 0x58759E90),
    (0x588B96B0, 0x588B9EB0, 0x58759E90),
    (0x588B96B0, 0x588B9EC0, 0x58759E90),
    (0x588C4210, 0x588C46A5, 0x587B9DB0),
}

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


def require_vtable_store(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None or instruction.mnemonic != "mov"
        or not instruction.operands or instruction.operands[-1].type != X86_OP_IMM
        or (instruction.operands[-1].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Missing expected vtable assignment at {site:08X}")


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
        raise AssertionError("Builder set and diplomacy-tab body manifest disagree")
    range_count = sum(map(len, function_ranges.values()))
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    if (len(SELECTED), byte_count, range_count) != (
        EXPECTED_FUNCTIONS, EXPECTED_BYTES, EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected diplomacy-tab closure size")

    fresh_decomp = FRESH_DECOMP.read_text(encoding="utf-8", errors="replace")
    if "/* failed:" in fresh_decomp:
        raise AssertionError("Fresh Ghidra decompilation failed for a selected function")
    fresh_text = FRESH_LOG.read_text(encoding="utf-8", errors="replace")
    fresh_functions, fresh_ranges, fresh_coverage, fresh_calls, refs_to = parse_fresh_log(fresh_text)
    if not SELECTED <= set(fresh_functions):
        raise AssertionError("Fresh Ghidra output omits a diplomacy-tab closure member")
    for address in SELECTED:
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
    reference_bodies = [row for row in body_exports
                        if row["export"] == "main-function-bodies-inventory"]
    for source in expected_body_sources:
        exported = [row for row in body_exports if row["export"] == source]
        if body_signature(exported) != body_signature(reference_bodies):
            raise AssertionError(f"Diplomacy-tab body export {source} differs")
    if {row["export"] for row in body_exports} != expected_body_sources:
        raise AssertionError("Unexpected diplomacy-tab body-export sources")
    if body_signature(reference_bodies) != body_signature(range_rows):
        raise AssertionError("Tracked diplomacy-tab ranges disagree with body exports")

    edge_exports = read_tsv(EDGE_EXPORTS_PATH)
    expected_edge_sources = {"main-function-edges-inventory", "targeted-fresh-ghidra"}
    reference_edges = [row for row in edge_exports
                       if row["export"] == "main-function-edges-inventory"]
    for source in expected_edge_sources:
        exported = [row for row in edge_exports if row["export"] == source]
        if edge_signature(exported) != edge_signature(reference_edges):
            raise AssertionError(f"Diplomacy-tab call export {source} differs")
    if {row["export"] for row in edge_exports} != expected_edge_sources:
        raise AssertionError("Unexpected diplomacy-tab call-edge sources")
    fresh_call_signature = sorted(
        (function, site, target)
        for function, edges in fresh_calls.items() if function in SELECTED
        for site, target in edges
    )
    tracked_call_signature = sorted(
        (int(row["function"], 16), int(row["site"], 16), int(row["target"], 16))
        for row in reference_edges
    )
    if fresh_call_signature != tracked_call_signature:
        raise AssertionError("Fresh targeted direct-call sites disagree with the edge inventory")

    if SELECTED - set(records) or SELECTED - matched:
        raise AssertionError("Not every diplomacy-tab member has a byte-verified record")
    if SELECTED - set(inventory):
        raise AssertionError("A selected function is missing from the installed Main.dll inventory")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in SELECTED}
    boundary_transfers = {}
    indirect_calls = 0
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
                if instruction.id == X86_INS_CALL and (
                    not instruction.operands or instruction.operands[0].type != X86_OP_IMM
                ):
                    indirect_calls += 1
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in SELECTED:
                    graph[address].add(target)
                elif target in matched:
                    boundary_transfers[instruction.address] = target
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} direct transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    root = 0x588246E0
    reachable = {root}
    queue = deque((root,))
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != SELECTED:
        raise AssertionError(f"Not the exact direct-call closure: {sorted(SELECTED - reachable)}")
    if len(boundary_transfers) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(f"Unexpected boundary-transfer count: {len(boundary_transfers)}")

    incoming = set()
    for target in SELECTED:
        for site, reference_type, caller in refs_to.get(target, ()):
            if reference_type.endswith("CALL") and caller is not None and caller not in SELECTED:
                incoming.add((caller, site, target))
    if len(incoming) != 28:
        raise AssertionError(f"Expected 28 direct incoming closure sites, got {len(incoming)}")
    matched_incoming = {
        edge for edge in incoming if edge[0] in matched
    }
    if matched_incoming != MATCHED_CALLER_EDGES:
        raise AssertionError(f"Matched caller edges changed: {matched_incoming}")

    if read_u32(image, COL_POINTER_ADDRESS) != COL_ADDRESS:
        raise AssertionError("Diplomacy-tab vftable has a different complete-object locator")
    col = struct.unpack_from("<IIIII", image, COL_ADDRESS - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR_ADDRESS, CLASS_HIERARCHY_ADDRESS):
        raise AssertionError(f"Unexpected diplomacy-tab complete-object locator: {col}")
    hierarchy = struct.unpack_from("<IIII", image, CLASS_HIERARCHY_ADDRESS - BASE)
    if hierarchy != (0, 0, 4, BASE_CLASS_ARRAY):
        raise AssertionError(f"Unexpected diplomacy-tab class hierarchy descriptor: {hierarchy}")
    name_start = TYPE_DESCRIPTOR_ADDRESS - BASE + 8
    if image[name_start:name_start + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI descriptor no longer names CPannelCommunicatorConfigDiplomacyTab")
    vtable = tuple(read_u32(image, VTABLE_ADDRESS_POINT + offset) for offset in range(0, 0x1C, 4))
    if vtable != EXPECTED_VTABLE:
        raise AssertionError(f"Diplomacy-tab primary vftable changed: {vtable}")
    if (read_u32(image, 0x588249E8) != VTABLE_ADDRESS_POINT
            or read_u32(image, 0x58823F6D) != VTABLE_ADDRESS_POINT):
        raise AssertionError("Constructor/destructor vtable writes disagree with RTTI table")

    require_call(image, decoder, 0x58844325, 0x58824970)
    require_call(image, decoder, 0x58824683, 0x58823F40)
    require_vtable_store(image, decoder, 0x588249E6, VTABLE_ADDRESS_POINT)
    require_vtable_store(image, decoder, 0x58823F6B, VTABLE_ADDRESS_POINT)

    print(
        f"verified CPannelCommunicatorConfigDiplomacyTab: {len(SELECTED)} functions / "
        f"{byte_count:,} bytes, {range_count} Ghidra ranges, "
        f"{len(boundary_transfers)} direct transfers to verified code, "
        f"{len(incoming)} external direct callsites ({len(matched_incoming)} from matched callers), "
        f"{indirect_calls} indirect calls remain unresolved"
    )


if __name__ == "__main__":
    main()
