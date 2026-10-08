"""Validate the nested-range state-refresh closure against Main.dll evidence."""
import csv
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_58776F20_STATE_REFRESH_ADDRESSES,
        MAIN_58776F20_STATE_REFRESH_EVIDENCE,
    )
except ImportError:  # Support direct execution as tools/verify_*.py too.
    from build_current_main_verifications import (
        MAIN_58776F20_STATE_REFRESH_ADDRESSES,
        MAIN_58776F20_STATE_REFRESH_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x58776F20, 0x58737080)
SIZES = {0x58776F20: 690, 0x58737080: 111}
INSTRUCTION_COUNTS = {0x58776F20: 218, 0x58737080: 41}
CALLER = 0x588DF450
CALL_SITE = 0x588DF69B
HELPER_SITE = 0x5877713C
MARKER = "objdiff-3.8.0-byte-identical"
BODY_EXPORT_NAMES = ("main-function-bodies-inventory", "targeted-fresh-ghidra")
EDGE_EXPORT_NAMES = ("main-function-edges-inventory", "targeted-fresh-ghidra")
EXPECTED_CALLS = {
    0x58776F20: Counter({0x5897CC72: 31, 0x58737080: 1}),
    0x58737080: Counter({0x588D66E0: 1}),
}

IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-58776f20-body-ranges.tsv"
BODY_EXPORTS_PATH = ROOT / "config/NF2_2026/main-58776f20-body-exports.tsv"
EDGE_EXPORTS_PATH = ROOT / "config/NF2_2026/main-58776f20-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
FRESH_LOG = FRESH_DIR / "frontier-58776f20-fresh-ghidra.log"
FRESH_DECOMP = FRESH_DIR / "frontier-58776f20-fresh-ghidra.c"
CALLER_SOURCE = ROOT / "src/client-current/Main/FUN_588df450.cpp"


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


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


def parse_fresh_log(log_text):
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
    ref_re = re.compile(
        r"DumpFunctionRefs\.java> REF ([0-9a-fA-F]+) "
        r"type=([A-Z_]+) source=[A-Z_]+ caller=FUN_([0-9a-fA-F]+)"
    )
    functions = {address: [] for address in (*FUNCTIONS, CALLER)}
    coverage = {}
    calls = {address: [] for address in FUNCTIONS}
    refs = set()
    current = None
    for line in log_text.splitlines():
        found = function_re.search(line)
        if found:
            current = int(found.group(1), 16)
            if current in functions:
                entry, body_bytes = int(found.group(2), 16), int(found.group(3))
                if entry != current:
                    raise AssertionError("Fresh Ghidra function entry changed")
                if current in SIZES and body_bytes != SIZES[current]:
                    raise AssertionError(f"Fresh Ghidra body size changed at {current:08X}")
            continue
        found = range_re.search(line)
        if found and current in functions:
            start, end, size = (int(found.group(1), 16), int(found.group(2), 16),
                                int(found.group(3)))
            if end - start + 1 != size:
                raise AssertionError("Malformed fresh Ghidra function range")
            functions[current].append((start, size))
            continue
        found = coverage_re.search(line)
        if found and current in functions:
            coverage[current] = tuple(map(int, found.groups()))
            continue
        found = call_re.search(line)
        if found and current in calls:
            site, target, target_function = (int(found.group(1), 16),
                                             int(found.group(2), 16),
                                             int(found.group(3), 16))
            calls[current].append((
                "CALL", f"{current:08X}", f"{site:08X}", "UNCONDITIONAL_CALL",
                f"{target:08X}", f"{target_function:08X}",
            ))
        found = ref_re.search(line)
        if found:
            refs.add((int(found.group(1), 16), found.group(2), int(found.group(3), 16)))
    return functions, coverage, calls, refs


def emitted_bytes(path):
    source = path.read_text(encoding="utf-8")
    return bytes(int(value, 16) for value in
                 re.findall(r"__asm _emit 0x([0-9a-fA-F]{2})", source))


def decode_complete(image, decoder, start, size, count):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (
        len(instructions) != count
        or sum(instruction.size for instruction in instructions) != size
        or not instructions
        or instructions[0].address != start
        or instructions[-1].address + instructions[-1].size != start + size
    ):
        raise AssertionError(f"Mapped instruction coverage changed at {start:08X}")
    return instructions


def exact_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def main():
    if MAIN_58776F20_STATE_REFRESH_ADDRESSES != ("58776F20", "58737080"):
        raise AssertionError("Builder closure membership changed")
    if set(MAIN_58776F20_STATE_REFRESH_EVIDENCE) != set(MAIN_58776F20_STATE_REFRESH_ADDRESSES):
        raise AssertionError("Behavior evidence does not cover the exact closure")

    inventory_rows = read_tsv(INVENTORY_PATH)
    inventory = {
        int(row["address"], 16): row for row in inventory_rows
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    for address in (*FUNCTIONS, 0x5897CC72, 0x588D66E0, CALLER):
        if address not in matched:
            raise AssertionError(f"Missing ObjDiff-verified function {address:08X}")

    expected_body_rows = []
    for address in FUNCTIONS:
        row = inventory.get(address)
        record = records.get(address)
        size = SIZES[address]
        if row is None or int(row["size"]) != size:
            raise AssertionError(f"Installed function inventory changed at {address:08X}")
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Function is not byte-matched at {address:08X}")
        if record.get("source") != f"src/client-current/Main/FUN_{address:08x}.cpp":
            raise AssertionError(f"Catalog source path changed at {address:08X}")
        if exact_ranges(record) != ((address, size),):
            raise AssertionError(f"Catalog body range changed at {address:08X}")
        expected_body_rows.append((f"{address:08X}", address, size, size,
                                   INSTRUCTION_COUNTS[address]))

    range_rows = read_tsv(RANGE_PATH)
    expected_signature = sorted(expected_body_rows)
    if body_signature(range_rows) != expected_signature:
        raise AssertionError("Tracked Ghidra body-range manifest changed")

    body_exports = read_tsv(BODY_EXPORTS_PATH)
    inventory_body_rows = [row for row in body_exports
                           if row["export"] == BODY_EXPORT_NAMES[0]]
    fresh_body_rows = [row for row in body_exports
                       if row["export"] == BODY_EXPORT_NAMES[1]]
    if (body_signature(inventory_body_rows) != expected_signature
            or body_signature(fresh_body_rows) != expected_signature):
        raise AssertionError("Independent and targeted function-body exports disagree")

    functions, coverage, fresh_calls, refs = parse_fresh_log(
        FRESH_LOG.read_text(encoding="utf-16", errors="replace")
    )
    fresh_body_signature = sorted(
        (f"{address:08X}", start, size, size, INSTRUCTION_COUNTS[address])
        for address in FUNCTIONS
        for start, size in functions[address]
    )
    if fresh_body_signature != expected_signature:
        raise AssertionError("Fresh Ghidra ranges differ from complete mapped function bodies")
    for address in FUNCTIONS:
        if coverage.get(address) != (
            INSTRUCTION_COUNTS[address], SIZES[address], SIZES[address], SIZES[address]
        ):
            raise AssertionError(f"Fresh Ghidra instruction coverage changed at {address:08X}")

    edge_exports = read_tsv(EDGE_EXPORTS_PATH)
    inventory_edges = [row for row in edge_exports
                       if row["export"] == EDGE_EXPORT_NAMES[0]]
    fresh_edges = [row for row in edge_exports
                   if row["export"] == EDGE_EXPORT_NAMES[1]]
    if edge_signature(inventory_edges) != edge_signature(fresh_edges):
        raise AssertionError("Independent and targeted call-edge exports disagree")
    expected_edge_signature = sorted(
        (kind, function.upper(), site.upper(), edge_type, target.upper(),
         target_function.upper())
        for edges in fresh_calls.values()
        for kind, function, site, edge_type, target, target_function in edges
    )
    if edge_signature(fresh_edges) != expected_edge_signature:
        raise AssertionError("Tracked call-edge manifest differs from fresh Ghidra")
    edge_counts = {
        address: Counter(int(edge[4], 16) for edge in fresh_calls[address])
        for address in FUNCTIONS
    }
    if edge_counts != EXPECTED_CALLS:
        raise AssertionError(f"Direct-call targets changed: {edge_counts}")
    if len(inventory_edges) != 33 or len(fresh_edges) != 33:
        raise AssertionError("Expected 33 direct-call edges in each independent export")

    if (CALL_SITE, "UNCONDITIONAL_CALL", CALLER) not in refs:
        raise AssertionError("Fresh Ghidra reference log lost the matched caller site")
    if (HELPER_SITE, "UNCONDITIONAL_CALL", 0x58776F20) not in refs:
        raise AssertionError("Fresh Ghidra reference log lost the internal helper call")

    decomp = FRESH_DECOMP.read_text(encoding="utf-8").lower()
    root_text, remaining = decomp.split("/* fun_58737080", maxsplit=1)
    helper_text, caller_text = remaining.split("/* fun_588df450", maxsplit=1)
    root_text, helper_text, caller_text = map(
        lambda value: " ".join(value.split()), (root_text, helper_text, caller_text)
    )
    for evidence in (
        "*(uint *)(*pivar7 + 4) == (uint)*(byte *)(param_2 + 0x354)",
        "(*dat_5898c1a4)(",
        "fun_58737080();",
    ):
        if evidence not in root_text:
            raise AssertionError(f"Fresh root decompilation changed: {evidence}")
    for evidence in (
        "*(short *)(param_1 + 0xf0) != 4",
        "*(undefined4 *)(param_1 + 0x1c) = 0;",
        "*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x11c) = 2;",
        "fun_588d66e0()",
        "+ 0x100c) + 0x60",
    ):
        if evidence not in helper_text:
            raise AssertionError(f"Fresh helper decompilation changed: {evidence}")
    if (
        "*(byte *)(dat_58a2459c + 0x105a8)" not in caller_text
        or "param_1 + 0x6070" not in caller_text
        or "fun_58776f20(param_1);" not in caller_text
    ):
        raise AssertionError("Fresh matched caller no longer shows the observed state gate")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    mapped_calls = {address: [] for address in FUNCTIONS}
    for address in FUNCTIONS:
        instructions = decode_complete(
            image, decoder, address, SIZES[address], INSTRUCTION_COUNTS[address]
        )
        original = image[address - BASE:address - BASE + SIZES[address]]
        source = ROOT / f"src/client-current/Main/FUN_{address:08x}.cpp"
        if emitted_bytes(source) != original:
            raise AssertionError(f"Instruction-emitting source differs from mapped bytes at {address:08X}")
        for instruction in instructions:
            if instruction.id != X86_INS_CALL or not instruction.operands:
                continue
            if instruction.operands[0].type != X86_OP_IMM:
                continue
            target = instruction.operands[0].imm & 0xFFFFFFFF
            mapped_calls[address].append((
                "CALL", f"{address:08X}", f"{instruction.address:08X}",
                "UNCONDITIONAL_CALL", f"{target:08X}", f"{target:08X}",
            ))
            if target not in FUNCTIONS and target not in matched:
                raise AssertionError(f"Unmatched direct call target {target:08X}")
    for address in FUNCTIONS:
        if sorted(mapped_calls[address]) != sorted(fresh_calls[address]):
            raise AssertionError(f"Mapped direct calls differ from fresh Ghidra at {address:08X}")

    caller_record = records.get(CALLER)
    caller_inventory = inventory.get(CALLER)
    if (
        caller_record is None
        or caller_record.get("verified_by") != MARKER
        or caller_record.get("source") != "src/client-current/Main/FUN_588df450.cpp"
        or int(caller_record["size"]) != 595
        or caller_inventory is None
        or int(caller_inventory["size"]) != 595
    ):
        raise AssertionError("Matched caller's indexed extent or source changed")
    caller_ranges = functions[CALLER]
    if caller_ranges != [(0x588DF450, 330), (0x588DF5A0, 259)]:
        raise AssertionError("Fresh caller Ghidra body ranges changed")
    if sum(size for _, size in caller_ranges) != 589:
        raise AssertionError("Fresh caller Ghidra body coverage changed")
    if not any(start <= CALL_SITE < start + size for start, size in caller_ranges):
        raise AssertionError("Matched caller call site is outside the fresh Ghidra body")

    caller_source = emitted_bytes(CALLER_SOURCE)
    caller_bytes = image[CALLER - BASE:CALLER - BASE + 595]
    if len(caller_source) != 595 or caller_source != caller_bytes:
        raise AssertionError("Matched caller source no longer emits its indexed byte extent")
    window_start = 0x588DF682
    expected_window = bytes.fromhex(
        "F6 80 A8 05 01 00 01 74 15 "
        "83 BE 70 60 00 00 00 75 0C "
        "8B 88 48 1C 02 00 56 E8 80 78 E9 FF"
    )
    window = image[window_start - BASE:window_start - BASE + len(expected_window)]
    if window != expected_window:
        raise AssertionError("Matched caller's exact gate and call instruction bytes changed")
    call = next(decoder.disasm(image[CALL_SITE - BASE:CALL_SITE - BASE + 5], CALL_SITE, count=1), None)
    if (
        call is None
        or call.id != X86_INS_CALL
        or call.operands[0].type != X86_OP_IMM
        or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTIONS[0]
    ):
        raise AssertionError("Mapped matched caller no longer calls FUN_58776F20")

    for address, evidence in MAIN_58776F20_STATE_REFRESH_EVIDENCE.items():
        if not evidence["uncertainty"]:
            raise AssertionError(f"Uncertainty record was lost for {address}")
    if "indirect" not in MAIN_58776F20_STATE_REFRESH_EVIDENCE["58776F20"]["uncertainty"]:
        raise AssertionError("The unresolved callback limitation is no longer recorded")

    print(
        "Main.dll FUN_58776F20 nested-range state refresh: 2 byte-matched "
        "functions / 801 bytes / 259 instructions; 33 direct-call edges, "
        "matched caller gate and exact 595-byte caller source validated"
    )


if __name__ == "__main__":
    main()
