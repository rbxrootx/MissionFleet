"""Verify FUN_588DDCE0 against its event caller and fresh Ghidra exports."""
import csv
import json
import re
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = "588DDCE0"
CALLER = "58806F60"
CALL_SITE = 0x5880709E
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-efsj-sprite-refresh-body-ranges.tsv"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-efsj-sprite-refresh-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-efsj-sprite-refresh-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
GHIDRA_LOG = FRESH_DIR / "frontier-588ddce0-targeted-fresh-ghidra.log"
GHIDRA_DECOMP = FRESH_DIR / "frontier-588ddce0-targeted-fresh-ghidra.c"
CALLER_SOURCE = ROOT / "src/client-current/Main/FUN_58806f60.cpp"
MARKER = "objdiff-3.8.0-byte-identical"
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
EXPECTED_SIZE = 808
EXPECTED_INSTRUCTIONS = 242
EXPECTED_CALLS = {
    (FUNCTION, "588DDD19", "5897CC4E"),
    (FUNCTION, "588DDD35", "58906DE0"),
    (FUNCTION, "588DDD52", "5897CC4E"),
    (FUNCTION, "588DDD8E", "589031A0"),
    (FUNCTION, "588DDDB7", "5897CC4E"),
    (FUNCTION, "588DDDEE", "589031A0"),
    (FUNCTION, "588DDE33", "58902D20"),
    (FUNCTION, "588DDE43", "58902D20"),
    (FUNCTION, "588DDE6D", "5897CC4E"),
    (FUNCTION, "588DDEAE", "589031A0"),
    (FUNCTION, "588DDEE7", "58902D20"),
}
EXPECTED_BOUNDARIES = {"5897CC4E", "58906DE0", "589031A0", "58902D20"}


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


def fresh_ranges_and_calls(text):
    current = None
    ranges = []
    calls = set()
    function_line = re.compile(
        r"FUNCTION FUN_([0-9a-fA-F]+) entry=([0-9a-fA-F]+) bodyBytes=(\d+)"
    )
    range_line = re.compile(
        r"RANGE ([0-9a-fA-F]+)\.\.([0-9a-fA-F]+) length=(\d+)"
    )
    call_line = re.compile(
        r"CALL ([0-9a-fA-F]+) -> ([0-9a-fA-F]+) FUN_([0-9a-fA-F]+)"
    )
    for line in text.splitlines():
        found_function = function_line.search(line)
        if found_function:
            current = found_function.group(1).upper()
            if current == FUNCTION and int(found_function.group(3)) != EXPECTED_SIZE:
                raise AssertionError("Fresh Ghidra body-size log changed")
            continue
        found_range = range_line.search(line)
        if found_range and current == FUNCTION:
            start, end, length = found_range.groups()
            if int(end, 16) - int(start, 16) + 1 != int(length):
                raise AssertionError(f"Malformed fresh Ghidra range: {line.strip()}")
            ranges.append((current, int(start, 16), int(length), int(length)))
            continue
        found_call = call_line.search(line)
        if found_call and current == FUNCTION:
            site, target, _ = found_call.groups()
            calls.add((FUNCTION, site.upper(), target.upper()))
    return sorted(ranges), calls


def main():
    inventory = {
        row["address"].upper(): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    if FUNCTION not in inventory or int(inventory[FUNCTION]["size"]) != EXPECTED_SIZE:
        raise AssertionError("Installed Main function inventory changed")

    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))["matches"]
    matches = {row["address"].upper(): row for row in catalog}
    for address in (FUNCTION, CALLER, *EXPECTED_BOUNDARIES):
        if matches.get(address, {}).get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff-verified function record: {address}")
    match = matches[FUNCTION]
    if match.get("source") != "src/client-current/Main/FUN_588ddce0.cpp":
        raise AssertionError("Catalog source path changed for FUN_588DDCE0")
    recorded_ranges = tuple(
        (row["address"].upper(), int(row["size"]))
        for row in match.get("segments", [])
    )
    if recorded_ranges != ((FUNCTION, EXPECTED_SIZE),):
        raise AssertionError("Catalog does not record the complete function body")

    expected_body = (
        (FUNCTION, int(FUNCTION, 16), EXPECTED_SIZE,
         EXPECTED_SIZE, EXPECTED_INSTRUCTIONS),
    )
    if body_signature(read_tsv(RANGE_PATH)) != list(expected_body):
        raise AssertionError("Tracked Ghidra range manifest changed")
    body_rows = read_tsv(BODY_EXPORTS)
    for export in EXPORTS:
        selected = [row for row in body_rows if row["export"] == export]
        if body_signature(selected) != list(expected_body):
            raise AssertionError(f"Independent Ghidra body export changed: {export}")

    log_text = GHIDRA_LOG.read_text(encoding="utf-8", errors="replace")
    fresh_ranges, fresh_calls = fresh_ranges_and_calls(log_text)
    if fresh_ranges != [(FUNCTION, int(FUNCTION, 16), EXPECTED_SIZE, EXPECTED_SIZE)]:
        raise AssertionError("Targeted fresh Ghidra range differs from the complete body")
    coverage_line = next(
        (line for line in log_text.splitlines() if "COVERAGE instructionCount=" in line),
        "",
    )
    if (f"instructionCount={EXPECTED_INSTRUCTIONS}" not in coverage_line
            or f"instructionBytes={EXPECTED_SIZE}" not in coverage_line
            or f"rangeBytes={EXPECTED_SIZE}" not in coverage_line
            or f"bodyBytes={EXPECTED_SIZE}" not in coverage_line):
        raise AssertionError("Targeted fresh Ghidra log no longer proves full decoding")

    edge_rows = read_tsv(EDGE_EXPORTS)
    filtered = {}
    for export in EXPORTS:
        filtered[export] = [
            row for row in edge_rows if row["export"] == export
            and (row["function"].upper() == FUNCTION
                 or row["target_function"].upper() == FUNCTION)
        ]
    if edge_signature(filtered[EXPORTS[0]]) != edge_signature(filtered[EXPORTS[1]]):
        raise AssertionError("Independent Ghidra edge exports disagree")
    incoming = {
        (row["function"].upper(), row["site"].upper(), row["target"].upper())
        for row in filtered[EXPORTS[0]]
        if row["kind"] == "CALL" and row["target_function"].upper() == FUNCTION
    }
    if incoming != {(CALLER, f"{CALL_SITE:08X}", FUNCTION)}:
        raise AssertionError(f"Matched event-handler call edge changed: {incoming}")

    decomp_text = GHIDRA_DECOMP.read_text(encoding="utf-8").lower()
    root_text, caller_text = decomp_text.split("/* fun_58806f60", maxsplit=1)
    caller_text = " ".join(caller_text.split())
    if caller_text.count("fun_588ddce0();") != 1:
        raise AssertionError("Fresh caller decomp no longer has one sprite-refresh call")
    call_at = caller_text.index("fun_588ddce0();")
    inactive_path = caller_text.rfind("if (param_4 != 0) {", 0, call_at)
    inactive_exit = caller_text.find("goto lab_58807353;", inactive_path, call_at)
    required_caller = (
        "uvar6 = *(ushort *)(*(int *)(ivar8 + 0x100c) + 2);",
        "if (uvar6 < 0x1c4) { if (((uvar6 == 0x1c3) || (uvar6 == 0x6f)) || "
        "(uvar6 == 0x13e)) { lab_5880709c: fun_588ddce0(); "
        "*(undefined1 *)(ivar8 + 0x1368) = 1; } } else if "
        "(uvar6 == 0x1c5) goto lab_5880709c;",
    )
    if (inactive_path < 0 or inactive_exit < 0 or any(
            snippet not in caller_text for snippet in required_caller)):
        raise AssertionError("Fresh caller decomp no longer establishes the event-ID gate")

    root_text = " ".join(root_text.split())
    required_body = (
        'fun_58906de0("spr\\\\efsj.spr",0);',
        "*puvar6 = cspritebundlescreen::vftable;",
        "*(undefined4 **)(param_1 + 0x1358) = puvar6;",
        "*(undefined4 **)(param_1 + 0x135c) = puvar6;",
        "*(undefined4 **)(param_1 + 0x1360) = puvar6;",
        "*(int *)(ivar2 + 0x54) = ivar4;",
        "ivar4 = ivar4 + 0x40;",
        "ivar4 = ivar4 + 0x80;",
    )
    if root_text.count("fun_58902d20(0x101);") != 3 or any(
            snippet not in root_text for snippet in required_body):
        raise AssertionError("Fresh Ghidra body no longer supports sprite-bundle behavior")
    if fresh_calls != EXPECTED_CALLS:
        raise AssertionError(f"Targeted Ghidra direct-call set changed: {fresh_calls}")
    source = CALLER_SOURCE.read_text(encoding="utf-8").lower()
    if source.count("0x5880709e: call 0x588ddce0") != 1:
        raise AssertionError("Matched caller source no longer records the call site")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    start = int(FUNCTION, 16)
    code = image[start - BASE:start - BASE + EXPECTED_SIZE]
    instructions = list(decoder.disasm(code, start))
    if (len(instructions) != EXPECTED_INSTRUCTIONS
            or sum(item.size for item in instructions) != EXPECTED_SIZE
            or not instructions
            or instructions[-1].address + instructions[-1].size != start + EXPECTED_SIZE):
        raise AssertionError("Mapped Main.dll bytes do not fully decode to the body range")

    mapped_calls = set()
    for instruction in instructions:
        if instruction.id != X86_INS_CALL or instruction.operands[0].type != X86_OP_IMM:
            continue
        target = instruction.operands[0].imm & 0xFFFFFFFF
        mapped_calls.add((FUNCTION, f"{instruction.address:08X}", f"{target:08X}"))
        if BASE <= target < BASE + len(image):
            if matches.get(f"{target:08X}", {}).get("verified_by") != MARKER:
                raise AssertionError(f"Unmatched direct call target: {target:08X}")
    if mapped_calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call set changed: {sorted(mapped_calls)}")
    for export in EXPORTS:
        exported_calls = {
            (row["function"].upper(), row["site"].upper(), row["target"].upper())
            for row in filtered[export]
            if row["kind"] == "CALL" and row["function"].upper() == FUNCTION
        }
        if exported_calls != mapped_calls:
            raise AssertionError(f"Mapped calls disagree with Ghidra edges: {export}")

    caller_bytes = image[CALL_SITE - BASE:CALL_SITE - BASE + 5]
    caller_instruction = next(decoder.disasm(caller_bytes, CALL_SITE, count=1), None)
    if (caller_instruction is None or caller_instruction.id != X86_INS_CALL
            or caller_instruction.operands[0].type != X86_OP_IMM
            or caller_instruction.operands[0].imm & 0xFFFFFFFF != start):
        raise AssertionError("Mapped matched caller no longer calls FUN_588DDCE0")

    print(
        f"Main.dll FUN_588DDCE0: 1 ObjDiff-verified function / {EXPECTED_SIZE:,} bytes / "
        f"{EXPECTED_INSTRUCTIONS} instructions; EFSJ asset, three sprite-bundle children, "
        "matched event-ID caller, and all eleven direct calls validated against two "
        "independent Ghidra exports and a targeted fresh decompilation"
    )


if __name__ == "__main__":
    main()
