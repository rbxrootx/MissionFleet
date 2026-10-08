"""Verify FUN_587A88A0 against its matched dispatcher and fresh Ghidra evidence."""
import csv
import json
import re
from collections import Counter
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = "587A88A0"
CALLER = "587A90D0"
CALL_SITE = 0x587A9136
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-587a88a0-body-ranges.tsv"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-587a88a0-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-587a88a0-call-edges.tsv"
FRESH_LOG = ROOT / "var/current-main-next/frontier-587a88a0-fresh-ghidra.log"
FRESH_DECOMP = ROOT / "var/current-main-next/frontier-587a88a0-fresh-ghidra.c"
CALLER_SOURCE = ROOT / "src/client-current/Main/FUN_587a90d0.cpp"
MARKER = "objdiff-3.8.0-byte-identical"
BODY_EXPORT_NAMES = ("main-function-bodies-inventory", "targeted-fresh-ghidra")
EDGE_EXPORT_NAMES = ("main-function-edges-inventory", "targeted-fresh-ghidra")
EXPECTED_SIZE = 709
EXPECTED_INSTRUCTIONS = 214
EXPECTED_TARGET_COUNTS = Counter({
    "5897CECE": 1,
    "5897CC72": 25,
    "58834B00": 1,
    "587A5080": 1,
})


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
        (row["kind"], row["function"].upper(), row["site"].upper(),
         row["type"], row["target"].upper(), row["target_function"].upper())
        for row in rows
    )


def parse_fresh_root(log_text):
    current = None
    ranges = []
    calls = set()
    function_line = re.compile(
        r"DumpExactFunctionRanges\.java> FUNCTION FUN_([0-9a-fA-F]+) entry=([0-9a-fA-F]+) bodyBytes=(\d+)"
    )
    range_line = re.compile(
        r"DumpExactFunctionRanges\.java> RANGE ([0-9a-fA-F]+)\.\.([0-9a-fA-F]+) length=(\d+)"
    )
    call_line = re.compile(
        r"DumpExactFunctionRanges\.java> CALL ([0-9a-fA-F]+) -> ([0-9a-fA-F]+) FUN_([0-9a-fA-F]+)"
    )
    for line in log_text.splitlines():
        found = function_line.search(line)
        if found:
            current = found.group(1).upper()
            if current == FUNCTION and int(found.group(3)) != EXPECTED_SIZE:
                raise AssertionError("Targeted Ghidra body size changed")
            continue
        found = range_line.search(line)
        if found and current == FUNCTION:
            start, end, length = found.groups()
            if int(end, 16) - int(start, 16) + 1 != int(length):
                raise AssertionError("Malformed targeted Ghidra body range")
            ranges.append((current, int(start, 16), int(length), int(length)))
            continue
        found = call_line.search(line)
        if found and current == FUNCTION:
            site, target, _ = found.groups()
            calls.add((FUNCTION, site.upper(), target.upper()))
    return ranges, calls


def main():
    inventory = {
        row["address"].upper(): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    if FUNCTION not in inventory or int(inventory[FUNCTION]["size"]) != EXPECTED_SIZE:
        raise AssertionError("Installed Main function inventory changed")

    matches = {
        row["address"].upper(): row
        for row in json.loads(CATALOG_PATH.read_text(encoding="utf-8"))["matches"]
    }
    for address in (FUNCTION, CALLER, *EXPECTED_TARGET_COUNTS):
        if matches.get(address, {}).get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff-verified function record: {address}")
    match = matches[FUNCTION]
    if match.get("source") != "src/client-current/Main/FUN_587a88a0.cpp":
        raise AssertionError("Catalog source path changed for FUN_587A88A0")
    if [(row["address"].upper(), int(row["size"]))
            for row in match.get("segments", [])] != [(FUNCTION, EXPECTED_SIZE)]:
        raise AssertionError("Catalog does not record the complete function body")

    expected_body = (
        (FUNCTION, int(FUNCTION, 16), EXPECTED_SIZE,
         EXPECTED_SIZE, EXPECTED_INSTRUCTIONS),
    )
    if body_signature(read_tsv(RANGE_PATH)) != list(expected_body):
        raise AssertionError("Tracked Ghidra range manifest changed")
    body_rows = read_tsv(BODY_EXPORTS)
    for export in BODY_EXPORT_NAMES:
        selected = [row for row in body_rows if row["export"] == export]
        if body_signature(selected) != list(expected_body):
            raise AssertionError(f"Independent body evidence changed: {export}")

    log_text = FRESH_LOG.read_text(encoding="utf-16", errors="replace")
    ranges, fresh_calls = parse_fresh_root(log_text)
    if ranges != [(FUNCTION, int(FUNCTION, 16), EXPECTED_SIZE, EXPECTED_SIZE)]:
        raise AssertionError("Targeted Ghidra range differs from the complete body")
    coverage_lines = [line for line in log_text.splitlines() if "COVERAGE instructionCount=" in line]
    if not coverage_lines or not all(
        field in coverage_lines[0]
        for field in ("instructionCount=214", "instructionBytes=709", "rangeBytes=709", "bodyBytes=709")
    ):
        raise AssertionError("Targeted Ghidra log no longer proves complete instruction coverage")

    edge_rows = read_tsv(EDGE_EXPORTS)
    exports = {
        name: [row for row in edge_rows if row["export"] == name]
        for name in EDGE_EXPORT_NAMES
    }
    if edge_signature(exports[EDGE_EXPORT_NAMES[0]]) != edge_signature(exports[EDGE_EXPORT_NAMES[1]]):
        raise AssertionError("Independent and targeted call-edge exports disagree")
    expected_calls = {
        (FUNCTION, row["site"].upper(), row["target"].upper())
        for row in exports[EDGE_EXPORT_NAMES[0]]
    }
    if len(expected_calls) != 28 or fresh_calls != expected_calls:
        raise AssertionError("The exact 28-call set changed between exports and fresh Ghidra")
    if Counter(target for _, _, target in expected_calls) != EXPECTED_TARGET_COUNTS:
        raise AssertionError("Outgoing verified-boundary distribution changed")

    decomp = FRESH_DECOMP.read_text(encoding="utf-8").lower()
    root_text, caller_text = decomp.split("/* fun_587a90d0", maxsplit=1)
    root_text = " ".join(root_text.split())
    caller_text = " ".join(caller_text.split())
    required_body = (
        "enablechildevent",
        "missioneventmanager.cpp",
        "if (param_2 == (int *)0x0)",
        "if (*(char *)((int)param_2 + 10) == '\\0')",
        "*(undefined1 *)(param_2 + 0x27) = 3;",
        "*(undefined1 *)(param_2 + 0x27) = 2;",
        "*(undefined1 *)(*pivar6 + 0x9c) = 1;",
        "*(undefined1 *)(*pivar6 + 0x9c) = 3;",
        "return 1;",
    )
    missing_body = [snippet for snippet in required_body if snippet not in root_text]
    if missing_body:
        raise AssertionError(f"Fresh Ghidra body no longer supports EnableChildEvent observations: {missing_body}")
    if any(root_text.count(f"fun_{target.lower()}(") != count
           for target, count in EXPECTED_TARGET_COUNTS.items()):
        raise AssertionError("Fresh body decompilation changed its direct-call distribution")
    call_expr = "fun_587a88a0(param_2);"
    if caller_text.count(call_expr) != 1:
        raise AssertionError("Matched dispatcher no longer makes exactly one EnableChildEvent call")
    diagnostic = caller_text.find("if (param_2 == 0) {")
    diagnostic_call = caller_text.find("fun_5897cece(", diagnostic)
    event_call = caller_text.find(call_expr)
    event_switch = caller_text.find("switch(*(undefined4 *)(param_2 + 0x74))", event_call)
    if (diagnostic < 0 or diagnostic_call < diagnostic or event_call <= diagnostic_call
            or event_switch <= event_call
            or "p_event &&" not in caller_text[diagnostic_call:event_call]
            or "doaction" not in caller_text[diagnostic_call:event_call]):
        raise AssertionError("Fresh matched caller no longer establishes the assertion/call/dispatch sequence")
    if ("ref 587a9136 type=unconditional_call" not in log_text.lower()
            or "caller=fun_587a90d0@587a90d0" not in log_text.lower()):
        raise AssertionError("Fresh Ghidra reference log no longer records the matched call site")

    source = CALLER_SOURCE.read_text(encoding="utf-8").lower()
    if (source.count("call 0x587a88a0") != 1
            or "__asm _emit 0x65" not in source
            or "__asm _emit 0xf7" not in source):
        raise AssertionError("Matched caller source no longer records its exact call encoding")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    start = int(FUNCTION, 16)
    code = image[start - BASE:start - BASE + EXPECTED_SIZE]
    instructions = list(decoder.disasm(code, start))
    if (len(instructions) != EXPECTED_INSTRUCTIONS
            or sum(insn.size for insn in instructions) != EXPECTED_SIZE
            or not instructions
            or instructions[-1].address + instructions[-1].size != start + EXPECTED_SIZE):
        raise AssertionError("Mapped Main.dll bytes do not fully decode to the function body")
    mapped_calls = set()
    for insn in instructions:
        if insn.id != X86_INS_CALL or insn.operands[0].type != X86_OP_IMM:
            continue
        target = insn.operands[0].imm & 0xFFFFFFFF
        mapped_calls.add((FUNCTION, f"{insn.address:08X}", f"{target:08X}"))
        if BASE <= target < BASE + len(image):
            if matches.get(f"{target:08X}", {}).get("verified_by") != MARKER:
                raise AssertionError(f"Unmatched direct call target: {target:08X}")
    if mapped_calls != expected_calls:
        raise AssertionError("Mapped direct calls differ from Ghidra's complete call set")

    caller_bytes = image[CALL_SITE - BASE:CALL_SITE - BASE + 5]
    caller_insn = next(decoder.disasm(caller_bytes, CALL_SITE, count=1), None)
    if (caller_insn is None or caller_insn.id != X86_INS_CALL
            or caller_insn.operands[0].type != X86_OP_IMM
            or caller_insn.operands[0].imm & 0xFFFFFFFF != start):
        raise AssertionError("Mapped matched caller no longer calls FUN_587A88A0")

    print(
        f"Main.dll FUN_{FUNCTION}: ObjDiff-verified exact body / {EXPECTED_SIZE:,} bytes / "
        f"{EXPECTED_INSTRUCTIONS} instructions; matched EnableChildEvent dispatcher and "
        "all 28 calls to verified boundaries validated against inventory, fresh Ghidra, and mapped bytes"
    )


if __name__ == "__main__":
    main()
