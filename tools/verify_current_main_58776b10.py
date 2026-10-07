"""Verify the mapped byte match and call-site evidence for FUN_58776B10."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM, X86_OP_MEM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58776B10
CALLER = 0x587FAEC0
SIZE = 1035
INSTRUCTION_COUNT = 315
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-58776b10-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-58776b10-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
CALL_SITES = {0x587FB088: 0, 0x587FB154: 1}
DIRECT_TARGET_COUNTS = {
    0x5897CC72: 45,
    0x588DF450: 2,
    0x588DA9E0: 1,
    0x587F21E0: 1,
}
EXPECTED_WINDOWS = {
    0x587FB068: (
        ("test", "byte ptr [edx + 0x105a8], 1"),
        ("je", "0x587fb08d"),
        ("cmp", "dword ptr [esi + 0x6070], 0"),
        ("jne", "0x587fb08d"),
        ("mov", "eax, dword ptr [0x58a2459c]"),
        ("mov", "ecx, dword ptr [eax + 0x21c48]"),
        ("push", "0"),
        ("push", "esi"),
        ("call", "0x58776b10"),
    ),
    0x587FB134: (
        ("test", "byte ptr [eax + 0x105a8], 1"),
        ("je", "0x587fb165"),
        ("cmp", "dword ptr [esi + 0x6070], 0"),
        ("jne", "0x587fb165"),
        ("mov", "eax, dword ptr [0x58a2459c]"),
        ("mov", "ecx, dword ptr [eax + 0x21c48]"),
        ("push", "1"),
        ("push", "esi"),
        ("call", "0x58776b10"),
        ("mov", "ecx, dword ptr [esp + 0x10]"),
        ("sub", "dword ptr [ecx + 0x10a18], eax"),
    ),
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def expected_bodies():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        source = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        matches = [row for row in source if int(row["function"], 16) == FUNCTION]
        if len(matches) != 1:
            raise AssertionError(f"Expected one fresh body for {FUNCTION:08X} in {project}")
        row = matches[0]
        extent = (int(row["start"], 16), int(row["length"]),
                  int(row["instruction_bytes"]), int(row["instruction_count"]))
        if extent != (FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT):
            raise AssertionError(f"Fresh body extent changed in {project}: {extent}")
        rows.add((export, FUNCTION, *extent))
    return rows


def expected_edges():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        for row in read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv"):
            function = int(row["function"], 16)
            target = int(row["target"], 16)
            if function == FUNCTION or (function == CALLER and target == FUNCTION):
                rows.add((export, row["kind"], function, int(row["site"], 16),
                          target, row["type"]))
    return rows


def verify_exports():
    expected_body_rows = expected_bodies()
    actual_body_rows = {
        (row["export"], int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if actual_body_rows != expected_body_rows:
        raise AssertionError("Checked-in body rows differ from both fresh Ghidra projects")

    expected_edge_rows = expected_edges()
    actual_edge_rows = {
        (row["export"], row["kind"], int(row["function"], 16),
         int(row["site"], 16), int(row["target"], 16), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edge_rows != expected_edge_rows:
        raise AssertionError("Checked-in call edges differ from both fresh Ghidra projects")
    if len(expected_edge_rows) != 2 * (49 + 2):
        raise AssertionError(f"Unexpected audited edge count: {len(expected_edge_rows)}")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if sum(item.size for item in instructions) != size:
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def verify_matches(image, decoder):
    inventory = {
        int(row["address"], 16): row
        for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    record = records.get(FUNCTION)
    if (record is None or FUNCTION not in inventory or FUNCTION not in matched
            or int(inventory[FUNCTION]["size"]) != SIZE
            or ranges(record) != ((FUNCTION, SIZE),)):
        raise AssertionError("FUN_58776B10 is not recorded as the expected byte match")

    instructions = decode_range(image, decoder, FUNCTION, SIZE)
    if (len(instructions) != INSTRUCTION_COUNT or not instructions
            or instructions[0].address != FUNCTION
            or instructions[-1].address + instructions[-1].size != FUNCTION + SIZE
            or instructions[-1].mnemonic != "ret"
            or instructions[-1].op_str != "8"):
        raise AssertionError("Mapped body instruction count, extent, or return changed")

    direct_calls = {}
    indirect_calls = []
    for instruction in instructions:
        if instruction.id != X86_INS_CALL:
            continue
        operand = instruction.operands[0]
        if operand.type == X86_OP_IMM:
            target = operand.imm & 0xFFFFFFFF
            direct_calls[instruction.address] = target
            if target not in matched:
                raise AssertionError(f"Unmatched direct dependency {FUNCTION:08X}->{target:08X}")
        elif operand.type == X86_OP_MEM:
            indirect_calls.append((instruction.address, operand.mem.disp & 0xFFFFFFFF))
        else:
            raise AssertionError(f"Unexpected call operand at {instruction.address:08X}")

    counts = {}
    for target in direct_calls.values():
        counts[target] = counts.get(target, 0) + 1
    if counts != DIRECT_TARGET_COUNTS:
        raise AssertionError(f"Mapped direct call targets changed: {counts}")
    if indirect_calls != [(0x58776CD5, 0x5898C1A4)]:
        raise AssertionError(f"Unresolved indirect callback changed: {indirect_calls}")

    fresh_direct_calls = {
        int(row["site"], 16): int(row["target"], 16)
        for row in read_tsv(EDGE_EXPORTS)
        if row["export"] == EXPORTS[0] and row["kind"] == "CALL"
        and int(row["function"], 16) == FUNCTION
    }
    if direct_calls != fresh_direct_calls:
        raise AssertionError("Mapped direct calls differ from the audited Ghidra edges")

    caller_record = records.get(CALLER)
    if caller_record is None or CALLER not in matched:
        raise AssertionError("The queue-reader/event-dispatch caller is not byte-matched")
    caller_instructions = []
    for start, size in ranges(caller_record):
        caller_instructions.extend(decode_range(image, decoder, start, size))
    by_address = {item.address: item for item in caller_instructions}
    for start, expected in EXPECTED_WINDOWS.items():
        actual = []
        current = start
        for _ in expected:
            instruction = by_address.get(current)
            if instruction is None:
                raise AssertionError(f"Caller evidence range is absent at {current:08X}")
            actual.append((instruction.mnemonic, instruction.op_str))
            current += instruction.size
        if tuple(actual) != expected:
            raise AssertionError(f"Caller setup changed at {start:08X}: {actual}")
    actual_sites = {
        address: by_address[address].operands[0].imm & 0xFFFFFFFF
        for address in CALL_SITES
        if address in by_address and by_address[address].id == X86_INS_CALL
    }
    if actual_sites != {site: FUNCTION for site in CALL_SITES}:
        raise AssertionError(f"Matched caller call sites changed: {actual_sites}")


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    print(
        "FUN_58776B10 verified: 1,035 bytes / 315 instructions match; both "
        "byte-matched caller modes and the unresolved indirect callback are "
        "recorded, and all direct dependencies are byte-matched."
    )


if __name__ == "__main__":
    main()
