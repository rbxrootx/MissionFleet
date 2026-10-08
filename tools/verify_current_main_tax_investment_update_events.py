"""Verify the paired tax/investment update-event handlers and exact callees."""
import csv
import json
import re
from collections import Counter
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_TAX_INVESTMENT_UPDATE_EVENT_ADDRESSES,
        MAIN_TAX_INVESTMENT_UPDATE_EVENT_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_TAX_INVESTMENT_UPDATE_EVENT_ADDRESSES,
        MAIN_TAX_INVESTMENT_UPDATE_EVENT_EVIDENCE,
    )

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (
    0x58785EB0, 0x58785EE0, 0x58785F10, 0x58785F40,
    0x58785F70, 0x58785FA0, 0x58786260, 0x587862C0,
    0x58830010, 0x58830280,
)
RANGES = {
    0x58785EB0: ((0x58785EB0, 17, 6),),
    0x58785EE0: ((0x58785EE0, 17, 6),),
    0x58785F10: ((0x58785F10, 17, 6),),
    0x58785F40: ((0x58785F40, 17, 6),),
    0x58785F70: ((0x58785F70, 17, 6),),
    0x58785FA0: ((0x58785FA0, 17, 6),),
    0x58786260: ((0x58786260, 81, 24),),
    0x587862C0: ((0x587862C0, 81, 24),),
    0x58830010: ((0x58830010, 617, 158),),
    0x58830280: ((0x58830280, 617, 158),),
}
DIRECT_TARGET_COUNTS = {
    0x58785EB0: Counter(),
    0x58785EE0: Counter(),
    0x58785F10: Counter(),
    0x58785F40: Counter(),
    0x58785F70: Counter(),
    0x58785FA0: Counter(),
    0x58786260: Counter(),
    0x587862C0: Counter(),
    0x58830010: Counter({
        0x58731CE0: 1, 0x58785EB0: 2, 0x58785ED0: 2,
        0x58785F10: 2, 0x58785F30: 3, 0x58785F70: 2,
        0x58785F90: 3, 0x58786260: 2, 0x587867E0: 2,
        0x58907360: 3, 0x5890BC40: 1, 0x5897CBDA: 1,
    }),
    0x58830280: Counter({
        0x58731CE0: 1, 0x58785EE0: 2, 0x58785F00: 2,
        0x58785F40: 2, 0x58785F60: 3, 0x58785FA0: 2,
        0x58785FC0: 3, 0x587862C0: 2, 0x587867E0: 2,
        0x58907360: 3, 0x5890BC40: 1, 0x5897CBDA: 1,
    }),
}
PARENT = 0x588C4210
PARENT_CALLS = {
    0x588C4E93: 0x58830010,
    0x588C4F50: 0x58830010,
    0x588C5028: 0x58830280,
    0x588C508E: 0x58830280,
}
EXTERNAL_DIRECT_TARGETS = {
    0x58731CE0, 0x58785ED0, 0x58785F30, 0x58785F90,
    0x58785F00, 0x58785F60, 0x58785FC0, 0x587867E0,
    0x58907360, 0x5890BC40, 0x5897CBDA,
}
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / (
    "config/NF2_2026/current-main-tax-investment-update-event-body-exports.tsv"
)
EDGE_EXPORTS = ROOT / (
    "config/NF2_2026/current-main-tax-investment-update-event-call-edges.tsv"
)
GHIDRA_C = FRESH_DIR / "58830010-pair-fresh-ghidra.c"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def address(value):
    return int(value, 16)


def body_rows_from_fresh():
    expected = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        rows = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        for function, ranges in RANGES.items():
            actual = tuple(
                (address(row["start"]), int(row["length"]),
                 int(row["instruction_bytes"]), int(row["instruction_count"]))
                for row in rows if address(row["function"]) == function
            )
            wanted = tuple((start, size, size, count)
                           for start, size, count in ranges)
            if actual != wanted:
                raise AssertionError(
                    f"Fresh Ghidra body ranges changed for {function:08X} in {project}"
                )
            expected.update(
                (export, function, start, size, size, count)
                for start, size, count in ranges
            )
    return expected


def calls_from_fresh():
    expected = set()
    selected_functions = set(FUNCTIONS)
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        rows = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in rows if row["kind"] == "CALL" and
                    (address(row["function"]) in selected_functions or
                     address(row["target"]) in selected_functions)]
        outgoing = {
            function: Counter(address(row["target"]) for row in selected
                              if address(row["function"]) == function)
            for function in FUNCTIONS
        }
        if outgoing != DIRECT_TARGET_COUNTS:
            raise AssertionError(f"Fresh direct-call closure changed in {project}")
        incoming = {
            address(row["site"]): address(row["target"])
            for row in selected if address(row["function"]) == PARENT
        }
        if incoming != PARENT_CALLS:
            raise AssertionError(f"Fresh dispatcher callsites changed in {project}")
        external = set().union(*(set(counter) for counter in outgoing.values())) - selected_functions
        if external != EXTERNAL_DIRECT_TARGETS:
            raise AssertionError(f"Fresh direct dependency boundary changed in {project}")
        if len(selected) != 52:
            raise AssertionError(f"Expected 52 selected CALL edges in {project}, got {len(selected)}")
        expected.update(
            (export, row["kind"], address(row["function"]), address(row["site"]),
             address(row["target"]), row["type"])
            for row in selected
        )
    return expected


def verify_exports():
    expected_bodies = body_rows_from_fresh()
    checked_bodies = {
        (row["export"], address(row["function"]), address(row["start"]),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if checked_bodies != expected_bodies:
        raise AssertionError("Checked-in Ghidra body rows differ from both fresh projects")

    expected_edges = calls_from_fresh()
    checked_edges = {
        (row["export"], row["kind"], address(row["function"]),
         address(row["site"]), address(row["target"]), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if checked_edges != expected_edges:
        raise AssertionError("Checked-in Ghidra call edges differ from both fresh projects")


def function_text(text, function):
    marker = f"/* FUN_{function:08x} at {function:08x} */"
    lowered = text.lower()
    start = lowered.find(marker.lower())
    if start < 0:
        raise AssertionError(f"Fresh Ghidra pseudocode lacks FUN_{function:08X}")
    end = text.find("/* FUN_", start + len(marker))
    return (text[start:] if end < 0 else text[start:end]).lower()


def verify_original_code_behavior():
    text = GHIDRA_C.read_text(encoding="utf-8")
    first = function_text(text, 0x58830010)
    second = function_text(text, 0x58830280)
    if ("messageString__daily_investment_limit".lower() not in first
            or "fun_58785f90(1000000)" not in first
            or "+ 0x120" not in first or "+ 0x21c" not in first
            or "+ 0xcc" not in first or "+ 0xc4" not in first
            or "fun_58785f10(ivar3 + ivar2)" not in first):
        raise AssertionError("Fresh pseudocode no longer supports the 0x8002311B observations")
    if ("messageString__daily_investment_limit".lower() not in second
            or "fun_58785fc0(1000000)" not in second
            or "+ 0x120" not in second or "+ 0x21c" not in second
            or "+ 0xd0" not in second or "+ 200" not in second
            or "fun_58785f40(ivar3 + ivar2)" not in second):
        raise AssertionError("Fresh pseudocode no longer supports the 0x8002311C observations")

    for function, offset in (
            (0x58785EB0, "0x48"), (0x58785EE0, "0x4c"),
            (0x58785F10, "0x58"), (0x58785F40, "0x5c"),
            (0x58785F70, "0x50"), (0x58785FA0, "0x54")):
        body = function_text(text, function)
        if ("param_1 + 8" not in body or f"+ {offset}" not in body
                or "param_2" not in body):
            raise AssertionError(f"Fresh pseudocode changed guarded setter {function:08X}")
    for function, offset in ((0x58786260, "0x48"), (0x587862C0, "0x4c")):
        body = function_text(text, function)
        if (f"+ {offset}" not in body or "5898cb38" not in body
                or "round" not in body):
            raise AssertionError(f"Fresh pseudocode changed scaled getter {function:08X}")

    parent = function_text(text, PARENT)
    first_case = parent.split("case 0x8002311b:", 1)[1].split(
        "case 0x8002311c:", 1
    )[0]
    second_case = parent.split("case 0x8002311c:", 1)[1].split(
        "case 0x8002311d:", 1
    )[0]
    if (first_case.count("fun_58830010(") != 2
            or "fun_5882fc60()" not in first_case
            or "fun_5876baf0(0x45f,0,0,0)" not in first_case
            or second_case.count("fun_58830280(") != 2
            or "fun_5876baf0(0x45f,0,0,0)" not in second_case):
        raise AssertionError("Matched dispatcher pseudocode no longer ties both handlers to 0x8002311B/C")


def emitted_bytes(path):
    text = path.read_text(encoding="utf-8")
    return bytes(int(value, 16) for value in
                 re.findall(r"__asm _emit 0x([0-9A-Fa-f]{2})", text))


def record_ranges(record):
    if record.get("segments"):
        return tuple((address(segment["address"]), int(segment["size"]))
                     for segment in record["segments"])
    return ((address(record["address"]), int(record["size"])),)


def instruction_at(image, decoder, site):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
    if instruction is None or instruction.address != site:
        raise AssertionError(f"No instruction at mapped call site {site:08X}")
    return instruction


def verify_matches():
    expected_addresses = tuple(f"{function:08X}" for function in FUNCTIONS)
    if MAIN_TAX_INVESTMENT_UPDATE_EVENT_ADDRESSES != expected_addresses:
        raise AssertionError("The selected tax/investment update-event slice changed")
    if set(MAIN_TAX_INVESTMENT_UPDATE_EVENT_EVIDENCE) != set(expected_addresses):
        raise AssertionError("Per-function original-code evidence is incomplete")

    inventory = {
        address(row["address"]): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {address(item["address"]): item for item in catalog["matches"]}
    matched = {function for function, item in records.items()
               if item.get("verified_by") == MARKER}
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True

    for function, ranges in RANGES.items():
        record = records.get(function)
        inventory_row = inventory.get(function)
        size = sum(item[1] for item in ranges)
        expected_segments = [{"address": f"{start:08X}", "size": part_size}
                             for start, part_size, _ in ranges]
        actual_segments = [
            {"address": item["address"].upper(), "size": int(item["size"])}
            for item in (record or {}).get("segments", [])
        ]
        if (record is None or inventory_row is None
                or record.get("verified_by") != MARKER
                or int(inventory_row["size"]) != size
                or int(record["size"]) != size
                or actual_segments != expected_segments
                or record.get("evidence") != MAIN_TAX_INVESTMENT_UPDATE_EVENT_EVIDENCE[
                    f"{function:08X}"]):
            raise AssertionError(f"{function:08X} lacks exact matched ranges or evidence")
        code = b"".join(image[start - BASE:start - BASE + part_size]
                         for start, part_size, _ in ranges)
        if emitted_bytes(ROOT / record["source"]) != code:
            raise AssertionError(f"Emitted source bytes differ from Main.dll at {function:08X}")
        instructions = []
        for start, part_size, expected_count in ranges:
            segment = image[start - BASE:start - BASE + part_size]
            decoded = list(decoder.disasm(segment, start))
            if (len(segment) != part_size or len(decoded) != expected_count
                    or sum(item.size for item in decoded) != part_size):
                raise AssertionError(f"Instruction coverage changed at {function:08X}")
            instructions.extend(decoded)
        actual_calls = Counter(
            item.operands[0].imm & 0xFFFFFFFF
            for item in instructions
            if item.id == X86_INS_CALL and item.operands
            and item.operands[0].type == X86_OP_IMM
        )
        if actual_calls != DIRECT_TARGET_COUNTS[function]:
            raise AssertionError(f"Mapped direct calls changed at {function:08X}")
        if any(target not in matched for target in actual_calls):
            raise AssertionError(f"Unmatched direct dependency from {function:08X}")

    if PARENT not in matched:
        raise AssertionError("Byte-matched FUN_588C4210 is missing")
    parent_ranges = tuple((start, start + size)
                          for start, size in record_ranges(records[PARENT]))
    for site, target in PARENT_CALLS.items():
        if not any(start <= site < end for start, end in parent_ranges):
            raise AssertionError(f"Matched dispatcher body omits callsite {site:08X}")
        call = instruction_at(image, decoder, site)
        if (call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != target):
            raise AssertionError(f"Mapped dispatcher call differs at {site:08X}")

    if not EXTERNAL_DIRECT_TARGETS.issubset(matched):
        raise AssertionError("At least one direct external dependency is not byte-matched")


def main():
    verify_exports()
    verify_original_code_behavior()
    verify_matches()
    print(
        "PASS tax/investment update-event slice: 10 functions / 1,498 "
        "byte-identical bytes / 400 instructions; both fresh Ghidra body/edge "
        "exports, dispatcher cases, four parent callsites, and complete direct "
        "dependency closure verified."
    )


if __name__ == "__main__":
    main()
