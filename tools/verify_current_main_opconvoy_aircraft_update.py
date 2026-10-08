"""Verify the RTTI-backed convoy-aircraft update byte-match slice."""
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
    from .build_current_main_verifications import MAIN_OPCONVOY_AIRCRAFT_UPDATE_ADDRESSES
except ImportError:  # Support direct execution as a script.
    from build_current_main_verifications import MAIN_OPCONVOY_AIRCRAFT_UPDATE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-opconvoy-aircraft-update-body-ranges.tsv"
BODY_EXPORTS_PATH = ROOT / "config/NF2_2026/main-opconvoy-aircraft-update-body-exports.tsv"
EDGE_EXPORTS_PATH = ROOT / "config/NF2_2026/main-opconvoy-aircraft-update-call-edges.tsv"
CLOSURE_PATH = ROOT / "config/NF2_2026/main-opconvoy-aircraft-update-root-closures.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
FRESH_LOG = FRESH_DIR / "opconvoy-aircraft-update-fresh-ghidra.log"
FRESH_DECOMP = FRESH_DIR / "opconvoy-aircraft-update-fresh-ghidra.c"
FRESH_EDGE_INVENTORY = FRESH_DIR / "main-function-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = tuple(int(address, 16) for address in MAIN_OPCONVOY_AIRCRAFT_UPDATE_ADDRESSES)
SELECTED = set(FUNCTIONS)
EXPECTED_FUNCTIONS = 12
EXPECTED_BYTES = 4_627
EXPECTED_RANGES = 13
EXPECTED_DIRECT_CALLS = 45
EXPECTED_BOUNDARY_TRANSFERS = 35
EXPECTED_INDIRECT_CALLS = {
    0x587CA9E0: 1,
    0x587CB9B0: 2,
    0x587CBE00: 2,
}

ROOT_CLOSURES = {
    0x587CBE00: {
        0x5876C360, 0x587CB280, 0x587CB390, 0x587CB3B0, 0x587CB580,
        0x587CB5E0, 0x587CB9B0, 0x587CBE00, 0x587EABC0,
    },
    0x587CA9E0: {0x587CA9E0},
    0x587CADF0: {0x587CADF0, 0x587CB380},
}

CLASS_TABLES = (
    {
        "name": b".?AVCOpConvoy_DA_Cargo@@\0",
        "address_point": 0x5899B208,
        "col": 0x589A778C,
        "type_descriptor": 0x589CBD98,
        "hierarchy": 0x589A77A0,
        "slots": (
            0x587CA330, 0x58731770, 0x588A9ED0, 0x587CBE00, 0x5873B360,
            0x587CA5C0, 0x587CA9E0, 0x587CA3F0, 0x587CAC30,
        ),
    },
    {
        "name": b".?AVCOpConvoy_DA_Fighter@@\0",
        "address_point": 0x5899B230,
        "col": 0x589A7824,
        "type_descriptor": 0x589CBDE4,
        "hierarchy": 0x589A7838,
        "slots": (
            0x587CADD0, 0x58731770, 0x588A9ED0, 0x587CBE00, 0x5873B360,
            0x58902FE0, 0x587CADF0, 0x5874DDD0, 0x587CAD30,
        ),
    },
    {
        "name": b".?AVCOpConvoy_DummyAircraft@@\0",
        "address_point": 0x5899B258,
        "col": 0x589A787C,
        "type_descriptor": 0x589CBDBC,
        "hierarchy": 0x589A7800,
        "slots": (
            0x587CB560, 0x58731770, 0x588A9ED0, 0x587CBE00, 0x5873B360,
            0x58902FE0, 0x5874DDD0, 0x5874DDD0, 0x5874DDD0,
        ),
    },
)

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
            if current != int(found.group(2), 16):
                raise AssertionError("Fresh Ghidra function entry changed")
            functions[current] = int(found.group(3))
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
    instructions = list(decoder.disasm(image[start - BASE:start - BASE + size], start))
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
    if SELECTED != {int(address, 16) for address in MAIN_OPCONVOY_AIRCRAFT_UPDATE_ADDRESSES}:
        raise AssertionError("Builder set and verifier function set disagree")

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
        raise AssertionError("Builder set and convoy-aircraft body manifest disagree")

    range_count = sum(map(len, function_ranges.values()))
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    if (len(SELECTED), byte_count, range_count) != (
        EXPECTED_FUNCTIONS, EXPECTED_BYTES, EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected convoy-aircraft update slice size")

    fresh_decomp = FRESH_DECOMP.read_text(encoding="utf-8", errors="replace")
    if "/* failed:" in fresh_decomp:
        raise AssertionError("Fresh Ghidra decompilation failed for a selected function")
    fresh_functions, fresh_ranges, fresh_coverage, fresh_calls, refs_to = parse_fresh_log(
        FRESH_LOG.read_text(encoding="utf-8", errors="replace")
    )
    if not SELECTED <= set(fresh_functions):
        raise AssertionError("Fresh Ghidra output omits a selected convoy-aircraft function")
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
            raise AssertionError(f"Convoy-aircraft body export {source} differs")
    if {row["export"] for row in body_exports} != expected_body_sources:
        raise AssertionError("Unexpected convoy-aircraft body-export sources")
    if body_signature(reference_bodies) != body_signature(range_rows):
        raise AssertionError("Tracked convoy-aircraft ranges disagree with the body exports")

    edge_exports = read_tsv(EDGE_EXPORTS_PATH)
    expected_edge_sources = {"main-function-edges-inventory", "targeted-fresh-ghidra"}
    reference_edges = [row for row in edge_exports
                       if row["export"] == "main-function-edges-inventory"]
    for source in expected_edge_sources:
        exported = [row for row in edge_exports if row["export"] == source]
        if edge_signature(exported) != edge_signature(reference_edges):
            raise AssertionError(f"Convoy-aircraft call export {source} differs")
    if {row["export"] for row in edge_exports} != expected_edge_sources:
        raise AssertionError("Unexpected convoy-aircraft call-edge sources")
    if len(reference_edges) != EXPECTED_DIRECT_CALLS:
        raise AssertionError("Unexpected convoy-aircraft direct-call edge count")
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
        raise AssertionError("Fresh targeted call sites disagree with the call-edge inventory")

    closure_rows = read_tsv(CLOSURE_PATH)
    for root, expected_members in ROOT_CLOSURES.items():
        actual_members = {
            int(row["function"], 16) for row in closure_rows
            if int(row["root"], 16) == root
        }
        if actual_members != expected_members:
            raise AssertionError(f"Tracked direct closure changed for root {root:08X}")

    if SELECTED - set(records) or SELECTED - matched:
        raise AssertionError("Not every convoy-aircraft member has a byte-verified record")
    if SELECTED - set(inventory):
        raise AssertionError("A selected function is missing from installed Main.dll inventory")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in SELECTED}
    boundary_transfers = {}
    indirect_calls = {}
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
                    indirect_calls[address] = indirect_calls.get(address, 0) + 1
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

    if indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Unexpected unresolved virtual-call sites: {indirect_calls}")
    if len(boundary_transfers) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError("Unexpected number of transfers to already byte-matched code")
    for root, expected_members in ROOT_CLOSURES.items():
        if reachable_from(root, graph) != expected_members:
            raise AssertionError(f"Direct-call closure changed for root {root:08X}")
    if set().union(*ROOT_CLOSURES.values()) != SELECTED:
        raise AssertionError("The selected set is not the union of its three open closures")

    for table in CLASS_TABLES:
        address_point = table["address_point"]
        if read_u32(image, address_point - 4) != table["col"]:
            raise AssertionError(f"Changed RTTI locator pointer for {table['name']!r}")
        col = struct.unpack_from("<IIIII", image, table["col"] - BASE)
        expected_col = (0, 0, 0, table["type_descriptor"], table["hierarchy"])
        if col != expected_col:
            raise AssertionError(f"Changed complete-object locator for {table['name']!r}")
        name_start = table["type_descriptor"] - BASE + 8
        if image[name_start:name_start + len(table["name"])] != table["name"]:
            raise AssertionError(f"RTTI type descriptor changed for {table['name']!r}")
        actual_slots = tuple(read_u32(image, address_point + 4 * slot)
                             for slot in range(len(table["slots"])))
        if actual_slots != table["slots"]:
            raise AssertionError(f"Convoy-aircraft vftable changed for {table['name']!r}")

    expected_data_refs = {
        (0x587CBE00, 0x5899B214), (0x587CBE00, 0x5899B23C),
        (0x587CBE00, 0x5899B264), (0x587CA9E0, 0x5899B220),
        (0x587CADF0, 0x5899B248),
    }
    for target, site in expected_data_refs:
        if (site, "DATA", None) not in refs_to.get(target, ()):
            raise AssertionError(f"Fresh Ghidra lacks vftable reference {site:08X}->{target:08X}")

    expected_constructor_calls = {
        (0x587CE482, 0x587CA820),
        (0x587CE4D5, 0x587CAF30),
        (0x587CE528, 0x587CAF30),
    }
    for site, target in expected_constructor_calls:
        require_call(image, decoder, site, target)
        if not any(ref_site == site and ref_caller == 0x587CE3D0
                   for ref_site, _kind, ref_caller in refs_to.get(target, ())):
            raise AssertionError(f"Fresh Ghidra lacks constructor edge at {site:08X}")
    if any(address not in matched for address in (0x587CE3D0, 0x587CB6B0,
                                                   0x587CA820, 0x587CAF30)):
        raise AssertionError("The observed convoy-aircraft constructor path is not byte-verified")
    constructor_record = records[0x587CE3D0]
    if not all(any(start <= site < start + size
                   for start, size in record_ranges(constructor_record))
               for site, _target in expected_constructor_calls):
        raise AssertionError("A convoy-aircraft constructor callsite is outside its matched body")

    expected_vtable_stores = {
        (0x587CB727, 0x5899B258),
        (0x587CA875, 0x5899B208),
        (0x587CAF84, 0x5899B230),
    }
    for site, target in expected_vtable_stores:
        require_vtable_store(image, decoder, site, target)
    if any(address not in matched for address in (0x587CA820, 0x587CAF30, 0x587CB6B0)):
        raise AssertionError("A constructor vftable assignment is not byte-verified")

    external_edges = {
        (0x5873A390, 0x5873A3C0, 0x5876C360),
        (0x5873FE80, 0x58740130, 0x587EABC0),
    }
    for caller, site, target in external_edges:
        require_call(image, decoder, site, target)
        if not any(ref_site == site and ref_caller == caller
                   for ref_site, _kind, ref_caller in refs_to.get(target, ())):
            raise AssertionError(f"Fresh Ghidra lacks external call edge at {site:08X}")
    if 0x5873FE80 not in matched:
        raise AssertionError("Known byte-verified external caller is no longer matched")
    matched_caller = records[0x5873FE80]
    if not any(start <= 0x58740130 < start + size
               for start, size in record_ranges(matched_caller)):
        raise AssertionError("Matched external callsite is outside its verified body")

    print(
        f"Main.dll convoy-aircraft update: {len(SELECTED)} functions / {byte_count:,} bytes "
        f"across {range_count} exact Ghidra ranges; {len(reference_edges)} direct calls, "
        f"{len(boundary_transfers)} transfers to byte-matched code, three RTTI-backed "
        f"vftables, matched constructor path, and {sum(indirect_calls.values())} "
        "unresolved indirect calls; exact byte coverage and closure pass"
    )


if __name__ == "__main__":
    main()
