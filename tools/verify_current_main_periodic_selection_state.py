"""Verify FUN_5873BF90 against its matched caller and fresh Ghidra exports."""
import csv
import json
import re
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = "5873BF90"
CALLER = "5873FE80"
CALL_SITE = 0x58740888
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-periodic-selection-state-body-ranges.tsv"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-periodic-selection-state-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-periodic-selection-state-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
GHIDRA_LOG = FRESH_DIR / "frontier-5873bf90-fresh-ghidra.log"
GHIDRA_DECOMP = FRESH_DIR / "frontier-5873bf90-fresh-ghidra.c"
CALLER_SOURCE = ROOT / "src/client-current/Main/FUN_5873fe80.cpp"
MARKER = "objdiff-3.8.0-byte-identical"
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
EXPECTED_SIZE = 835
EXPECTED_INSTRUCTIONS = 223
EXPECTED_CALLS = {
    ("5873BF90", "5873C022", "588D66E0"),
    ("5873BF90", "5873C04E", "58775980"),
    ("5873BF90", "5873C123", "5897CC90"),
    ("5873BF90", "5873C128", "5897CCA0"),
    ("5873BF90", "5873C1DE", "5873B540"),
    ("5873BF90", "5873C24E", "5897CC90"),
    ("5873BF90", "5873C253", "5897CCA0"),
    ("5873BF90", "5873C267", "587E5E10"),
}


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


def read_fresh_ranges(path):
    current = None
    result = []
    function_line = re.compile(r"FUNCTION FUN_([0-9a-fA-F]+) entry=([0-9a-fA-F]+)")
    range_line = re.compile(r"RANGE ([0-9a-fA-F]+)\.\.([0-9a-fA-F]+) length=(\d+)")
    # Ghidra's redirected Windows output is UTF-16LE with a BOM.
    with path.open(encoding="utf-16") as stream:
        for line in stream:
            found_function = function_line.search(line)
            if found_function:
                current = found_function.group(2).upper()
                continue
            found_range = range_line.search(line)
            if found_range and current == FUNCTION:
                start, end, length = found_range.groups()
                if int(end, 16) - int(start, 16) + 1 != int(length):
                    raise AssertionError(f"Malformed fresh Ghidra range: {line.strip()}")
                result.append((current, int(start, 16), int(length), int(length)))
    return sorted(result)


def main():
    inventory = {
        row["address"].upper(): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    if FUNCTION not in inventory or int(inventory[FUNCTION]["size"]) != EXPECTED_SIZE:
        raise AssertionError("Current installed-client function inventory changed")

    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))["matches"]
    matches = {row["address"].upper(): row for row in catalog}
    for address in (FUNCTION, CALLER, "588D66E0", "58775980", "5897CC90",
                    "5897CCA0", "5873B540", "587E5E10"):
        if matches.get(address, {}).get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff-verified function record: {address}")
    match = matches[FUNCTION]
    if match.get("source") != "src/client-current/Main/FUN_5873bf90.cpp":
        raise AssertionError("Catalog source path changed for FUN_5873BF90")
    recorded_ranges = tuple(
        (row["address"].upper(), int(row["size"]))
        for row in match.get("segments", [])
    )
    if recorded_ranges != ((FUNCTION, EXPECTED_SIZE),):
        raise AssertionError("Catalog does not record the complete function body")

    manifest = read_tsv(RANGE_PATH)
    expected_bodies = ((FUNCTION, int(FUNCTION, 16), EXPECTED_SIZE,
                        EXPECTED_SIZE, EXPECTED_INSTRUCTIONS),)
    if body_signature(manifest) != list(expected_bodies):
        raise AssertionError("Tracked Ghidra range manifest changed")
    for export in EXPORTS:
        selected = [row for row in read_tsv(BODY_EXPORTS) if row["export"] == export]
        if body_signature(selected) != list(expected_bodies):
            raise AssertionError(f"Independent Ghidra body export changed: {export}")
    if read_fresh_ranges(GHIDRA_LOG) != [
            (FUNCTION, int(FUNCTION, 16), EXPECTED_SIZE, EXPECTED_SIZE)]:
        raise AssertionError("Fresh selected Ghidra log differs from the complete body range")

    edge_rows = read_tsv(EDGE_EXPORTS)
    filtered = {}
    for export in EXPORTS:
        filtered[export] = [
            row for row in edge_rows if row["export"] == export
            and (row["function"].upper() == FUNCTION
                 or row["target"].upper() == FUNCTION)
        ]
    if edge_signature(filtered[EXPORTS[0]]) != edge_signature(filtered[EXPORTS[1]]):
        raise AssertionError("Independent Ghidra call/data edge exports disagree")
    incoming = {
        (row["function"].upper(), row["site"].upper(), row["target"].upper())
        for row in filtered[EXPORTS[0]]
        if row["kind"] == "CALL" and row["target"].upper() == FUNCTION
    }
    expected_incoming = {(CALLER, f"{CALL_SITE:08X}", FUNCTION)}
    if incoming != expected_incoming:
        raise AssertionError(f"Matched caller edge changed: {incoming}")

    decomp = " ".join(GHIDRA_DECOMP.read_text(encoding="utf-8").lower().split())
    required_caller_evidence = (
        "if (param_1[0x118] == 0) {",
        "if (*(short *)((int)param_1 + 0x2ce) == 0) {",
        "if ((int)param_1[0x8a] < 1) {",
        "if ((*(short *)(param_1 + 0xb3) == 2) || (param_1[0x117] != 0)) "
        "{ fun_5873bf90(); goto lab_587408cd; }",
        "fun_5873bf90(); goto lab_587408cd;",
    )
    if (decomp.count("fun_5873bf90();") != 1 or any(
            snippet not in decomp for snippet in required_caller_evidence)):
        raise AssertionError("Fresh caller decomp no longer establishes the gated call branch")
    required_body_evidence = (
        "if (ivar7 == (ivar7 / 0x19) * 0x19) {",
        "local_8 = 8;",
        "fun_5873b540();",
        "fun_587e5e10(uvar3,ivar7 / 3000);",
        "*(undefined4 *)(param_1 + 0x4c8) = 2;",
    )
    if any(snippet not in decomp for snippet in required_body_evidence):
        raise AssertionError("Fresh Ghidra body no longer supports the documented behavior")
    if CALLER_SOURCE.read_text(encoding="utf-8").count(
            "Exact mapped bytes E8 03 B7 FF FF: call 0x5873bf90") != 1:
        raise AssertionError("Matched caller source no longer records the mapped call")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    start = int(FUNCTION, 16)
    code = image[start - BASE:start - BASE + EXPECTED_SIZE]
    instructions = list(decoder.disasm(code, start))
    if (len(instructions) != EXPECTED_INSTRUCTIONS
            or sum(item.size for item in instructions) != EXPECTED_SIZE
            or not instructions or instructions[-1].address + instructions[-1].size
            != start + EXPECTED_SIZE):
        raise AssertionError("Mapped Main.dll bytes do not fully decode to the recorded body")

    calls = set()
    matched_boundaries = set()
    image_end = BASE + len(image)
    for instruction in instructions:
        if instruction.id != X86_INS_CALL or instruction.operands[0].type != X86_OP_IMM:
            continue
        target = instruction.operands[0].imm & 0xFFFFFFFF
        calls.add((FUNCTION, f"{instruction.address:08X}", f"{target:08X}"))
        if BASE <= target < image_end:
            if matches.get(f"{target:08X}", {}).get("verified_by") != MARKER:
                raise AssertionError(f"Unmatched in-image direct call to {target:08X}")
            matched_boundaries.add(f"{target:08X}")
    if calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct calls changed: {sorted(calls)}")
    for export in EXPORTS:
        exported_calls = {
            (row["function"].upper(), row["site"].upper(), row["target"].upper())
            for row in filtered[export]
            if row["kind"] == "CALL" and row["function"].upper() == FUNCTION
        }
        if exported_calls != calls:
            raise AssertionError(f"Mapped calls disagree with Ghidra edge export: {export}")

    caller_code = image[CALL_SITE - BASE:CALL_SITE - BASE + 5]
    caller_instruction = next(decoder.disasm(caller_code, CALL_SITE, count=1), None)
    if (caller_instruction is None or caller_instruction.id != X86_INS_CALL
            or caller_instruction.operands[0].type != X86_OP_IMM
            or caller_instruction.operands[0].imm & 0xFFFFFFFF != start):
        raise AssertionError("Mapped matched caller no longer calls FUN_5873BF90 at 0x58740888")
    if len(matched_boundaries) != 6:
        raise AssertionError(f"Unexpected matched boundary target count: {len(matched_boundaries)}")

    print(
        f"Main.dll FUN_5873BF90: 1 ObjDiff-verified function / {EXPECTED_SIZE:,} bytes / "
        f"{EXPECTED_INSTRUCTIONS} instructions; matched caller branch and all eight "
        "direct calls validated against two independent Ghidra exports and a fresh "
        "selected decompilation"
    )


if __name__ == "__main__":
    main()
