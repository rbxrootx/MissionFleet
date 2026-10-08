"""Verify FUN_588BA330 against its matched caller and fresh Ghidra exports."""
import csv
import json
import re
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = "588BA330"
CALLER = "587E3080"
TARGET = "58903290"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-588ba330-body-ranges.tsv"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-588ba330-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-588ba330-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
GHIDRA_LOG = FRESH_DIR / "frontier-588ba330-targeted-fresh-ghidra.log"
GHIDRA_DECOMP = FRESH_DIR / "frontier-588ba330-targeted-fresh-ghidra.c"
CALLER_SOURCE = ROOT / "src/client-current/Main/FUN_587e3080.cpp"
MARKER = "objdiff-3.8.0-byte-identical"
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
EXPECTED_SIZE = 742
EXPECTED_INSTRUCTIONS = 216
EXPECTED_CALL_SITES = (
    "588BA3F0", "588BA418", "588BA43F", "588BA468", "588BA48B",
    "588BA4B0", "588BA4DA", "588BA500", "588BA51D", "588BA53B",
    "588BA560", "588BA58A", "588BA5B7", "588BA5CC",
)
EXPECTED_INCOMING = {
    (CALLER, "587E3981", FUNCTION),
    (CALLER, "587E3A3B", FUNCTION),
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

    matches = {
        row["address"].upper(): row
        for row in json.loads(CATALOG_PATH.read_text(encoding="utf-8"))["matches"]
    }
    for address in (FUNCTION, CALLER, TARGET):
        if matches.get(address, {}).get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff-verified function record: {address}")
    match = matches[FUNCTION]
    if match.get("source") != "src/client-current/Main/FUN_588ba330.cpp":
        raise AssertionError("Catalog source path changed for FUN_588BA330")
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
    for export in EXPORTS:
        if body_signature([row for row in body_rows if row["export"] == export]) != list(expected_body):
            raise AssertionError(f"Independent Ghidra body export changed: {export}")

    log_text = GHIDRA_LOG.read_text(encoding="utf-8", errors="replace")
    fresh_ranges, fresh_calls = fresh_ranges_and_calls(log_text)
    if fresh_ranges != [(FUNCTION, int(FUNCTION, 16), EXPECTED_SIZE, EXPECTED_SIZE)]:
        raise AssertionError("Targeted fresh Ghidra range differs from the complete body")
    coverage = next((line for line in log_text.splitlines()
                     if "COVERAGE instructionCount=" in line), "")
    for evidence in ("instructionCount=216", "instructionBytes=742", "rangeBytes=742", "bodyBytes=742"):
        if evidence not in coverage:
            raise AssertionError("Targeted fresh Ghidra log no longer proves full decoding")

    edges = read_tsv(EDGE_EXPORTS)
    filtered = {
        export: [row for row in edges if row["export"] == export
                 and (row["function"].upper() == FUNCTION
                      or row["target_function"].upper() == FUNCTION)]
        for export in EXPORTS
    }
    if edge_signature(filtered[EXPORTS[0]]) != edge_signature(filtered[EXPORTS[1]]):
        raise AssertionError("Independent Ghidra call-edge exports disagree")
    incoming = {
        (row["function"].upper(), row["site"].upper(), row["target"].upper())
        for row in filtered[EXPORTS[0]] if row["target_function"].upper() == FUNCTION
    }
    if incoming != EXPECTED_INCOMING:
        raise AssertionError(f"Matched caller edges changed: {incoming}")
    expected_calls = {(FUNCTION, site, TARGET) for site in EXPECTED_CALL_SITES}
    outgoing = {
        (row["function"].upper(), row["site"].upper(), row["target"].upper())
        for row in filtered[EXPORTS[0]] if row["function"].upper() == FUNCTION
    }
    if outgoing != expected_calls or fresh_calls != expected_calls:
        raise AssertionError("Fresh or independent direct-call set changed")

    decomp = GHIDRA_DECOMP.read_text(encoding="utf-8").lower()
    root_text, caller_text = decomp.split("/* fun_587e3080", maxsplit=1)
    root_text = " ".join(root_text.split())
    caller_text = " ".join(caller_text.split())
    required_body = (
        "*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 4);",
        "*(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 8);",
        "*puvar1 = *puvar1 & 0xfff0;",
        "switch(param_2 & 0xff)",
        "case 3:", "case 5:", "case 6:", "case 0xd:",
        "*(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xe1ff | 0x100;",
    )
    if any(snippet not in root_text for snippet in required_body):
        raise AssertionError("Fresh Ghidra body no longer supports the observed layout behavior")
    if root_text.count("fun_58903290(") != len(EXPECTED_CALL_SITES):
        raise AssertionError("Fresh Ghidra body no longer has fourteen layout-helper calls")
    if caller_text.count("fun_588ba330(") != 2:
        raise AssertionError("Matched caller no longer has exactly two component-layout paths")
    caller_evidence = (
        "param_2 == *(uint *)(param_1 + 0x584)",
        "param_2 == *(uint *)(param_1 + 0x598)",
        "*(int *)(ivar6 + 0xcc4) != 0",
        "*(ushort *)(*(int *)(ivar6 + 0xcc0) + 4) & 0x3e0",
        "*(int *)(ivar6 + 0xccc) == 0",
        "param_1 + 0x504 + (uvar15 & 0xffff) * 4",
        "(*(ushort *)(uvar7 + 0x24) & 1) != 0",
        "while ((ushort)uvar15 < 0x1c)",
    )
    if any(snippet not in caller_text for snippet in caller_evidence):
        raise AssertionError("Fresh matched caller no longer supports the recorded path predicates")

    caller_source = CALLER_SOURCE.read_text(encoding="utf-8").lower()
    if (caller_source.count("call 0x588ba330") != 2
            or "__asm _emit 0xaa" not in caller_source
            or "__asm _emit 0xf0" not in caller_source):
        raise AssertionError("Matched caller source no longer records both exact call encodings")

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
        raise AssertionError("Mapped Main.dll bytes do not fully decode to the function range")
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
        raise AssertionError("Mapped direct calls differ from Ghidra's call edges")
    for export in EXPORTS:
        exported = {
            (row["function"].upper(), row["site"].upper(), row["target"].upper())
            for row in filtered[export] if row["function"].upper() == FUNCTION
        }
        if exported != mapped_calls:
            raise AssertionError(f"Mapped direct calls disagree with export {export}")

    print(
        f"Main.dll FUN_{FUNCTION}: ObjDiff-verified exact body / {EXPECTED_SIZE:,} bytes / "
        f"{EXPECTED_INSTRUCTIONS} instructions; two matched caller paths and all "
        "fourteen calls to FUN_58903290 validated against independent and fresh Ghidra evidence"
    )


if __name__ == "__main__":
    main()
