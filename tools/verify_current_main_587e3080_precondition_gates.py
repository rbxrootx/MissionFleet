"""Verify the exact-byte precondition helper sequence in FUN_587E3080."""
import csv
import json
import re
from collections import Counter
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (
    0x587D96A0, 0x587D9910, 0x587DA040, 0x587DA710,
    0x587DB3F0, 0x587DB630, 0x587DB820,
)
PARENT = 0x587E3080
RANGES = {
    0x587D96A0: ((0x587D96A0, 612, 200),),
    0x587D9910: ((0x587D9910, 218, 77),),
    0x587DA040: ((0x587DA040, 217, 79),),
    0x587DA710: ((0x587DA710, 183, 62),),
    0x587DB3F0: ((0x587DB3F0, 573, 168),),
    0x587DB630: ((0x587DB630, 493, 166),),
    0x587DB820: ((0x587DB820, 474, 132),),
}
CALL_COUNTS = {
    0x587D96A0: 14, 0x587D9910: 4, 0x587DA040: 2,
    0x587DA710: 7, 0x587DB3F0: 5, 0x587DB630: 9, 0x587DB820: 1,
}
DIRECT_TARGET_COUNTS = {
    0x587D96A0: Counter({0x5876BAF0: 5, 0x58764D30: 5,
                        0x588E6680: 2, 0x588E75E0: 2}),
    0x587D9910: Counter({0x5876BAF0: 2, 0x58764D30: 2}),
    0x587DA040: Counter({0x5876BAF0: 1, 0x58764D30: 1}),
    0x587DA710: Counter({0x588E6680: 3, 0x588E75E0: 2,
                         0x5876BAF0: 1, 0x58764D30: 1}),
    0x587DB3F0: Counter({0x5876BAF0: 1, 0x58764D30: 1, 0x587DA710: 3}),
    0x587DB630: Counter({0x587DA710: 1, 0x5876BAF0: 4, 0x58764D30: 4}),
    0x587DB820: Counter({0x587DA650: 1}),
}
PARENT_CALLS = {
    0x587E3C41: 0x587D96A0,
    0x587E3C51: 0x587DB630,
    0x587E3C61: 0x587DB3F0,
    0x587E3C71: 0x587D9910,
    0x587E3C81: 0x587DA040,
    0x587E3C90: 0x587DB820,
}
NESTED_CALLS = {
    0x587DB518: 0x587DA710,
    0x587DB56D: 0x587DA710,
    0x587DB5A8: 0x587DA710,
    0x587DB776: 0x587DA710,
}
EXTERNAL_DIRECT_TARGETS = {
    0x5876BAF0, 0x58764D30, 0x588E6680, 0x588E75E0, 0x587DA650,
}
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-587e3080-precondition-gates-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-587e3080-precondition-gates-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
PARENT_DECOMP = FRESH_DIR / "587e3080-ghidra.c"
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
        if any(outgoing[function] != DIRECT_TARGET_COUNTS[function]
               for function in FUNCTIONS):
            raise AssertionError(f"Fresh direct-call closure changed in {project}")
        if any(sum(outgoing[function].values()) != CALL_COUNTS[function]
               for function in FUNCTIONS):
            raise AssertionError(f"Fresh direct-call count changed in {project}")
        incoming = {
            address(row["site"]): address(row["target"])
            for row in selected if address(row["function"]) == PARENT
        }
        if incoming != PARENT_CALLS:
            raise AssertionError(f"Fresh parent callsites changed in {project}")
        nested = {
            address(row["site"]): address(row["target"])
            for row in selected if address(row["function"]) in FUNCTIONS
            and address(row["target"]) == 0x587DA710
        }
        if nested != NESTED_CALLS:
            raise AssertionError(f"Fresh nested helper callsites changed in {project}")
        direct_targets = set().union(*(set(counter) for counter in outgoing.values()))
        if direct_targets - selected_functions != EXTERNAL_DIRECT_TARGETS:
            raise AssertionError(f"Fresh direct dependency boundary changed in {project}")
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


def verify_parent_conditions():
    text = PARENT_DECOMP.read_text(encoding="utf-8").lower()
    mode_check = text.index("if (param_3 != 2)")
    gate_start = text.index("ivar6 = fun_587d96a0();")
    gate_end = text.index("ivar11 = 0;", gate_start)
    gate = text[gate_start:gate_end]
    expected_order = [
        "ivar6 = fun_587d96a0();", "fun_587db630()", "fun_587db3f0()",
        "fun_587d9910()", "fun_587da040()", "ivar6 = fun_587db820();",
    ]
    positions = [gate.index(item) for item in expected_order]
    if mode_check > gate_start or positions != sorted(positions):
        raise AssertionError("FUN_587E3080 no longer has the observed param_3 == 2 gate order")
    if ("ivar6 != 1" not in gate or "ivar6 == 0" not in gate
            or "fun_5876baf0(0x126c,0,0,0)" not in gate
            or "fun_58764d30()" not in gate):
        raise AssertionError("FUN_587E3080 gate return checks or failure path changed")


def emitted_bytes(path):
    text = path.read_text(encoding="utf-8")
    return bytes(int(value, 16) for value in
                 re.findall(r"__asm _emit 0x([0-9A-Fa-f]{2})", text))


def verify_matches():
    inventory = {
        address(row["address"]): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {address(item["address"]): item for item in catalog["matches"]}
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
                or actual_segments != expected_segments):
            raise AssertionError(f"{function:08X} is not recorded with exact matched ranges")
        code = b"".join(image[start - BASE:start - BASE + part_size]
                         for start, part_size, _ in ranges)
        source = ROOT / record["source"]
        if emitted_bytes(source) != code:
            raise AssertionError(f"Emitted source bytes differ from Main.dll at {function:08X}")
        instructions = list(decoder.disasm(code, function))
        if sum(item.size for item in instructions) != size:
            raise AssertionError(f"Instruction decoding is incomplete at {function:08X}")
        actual_calls = Counter(
            item.operands[0].imm & 0xFFFFFFFF
            for item in instructions
            if item.id == X86_INS_CALL and item.operands[0].type == X86_OP_IMM
        )
        if actual_calls != DIRECT_TARGET_COUNTS[function]:
            raise AssertionError(f"Mapped direct calls changed at {function:08X}")

    matched = {address(item["address"]): item
               for item in catalog["matches"]
               if item.get("verified_by") == MARKER}
    if PARENT not in matched:
        raise AssertionError("The byte-matched parent handler is missing from the catalog")
    for target in EXTERNAL_DIRECT_TARGETS:
        if target not in matched:
            raise AssertionError(f"Unmatched direct dependency {target:08X}")


def main():
    verify_exports()
    verify_parent_conditions()
    verify_matches()
    print("FUN_587E3080 precondition helper sequence: 7 functions, 2,770 bytes verified")


if __name__ == "__main__":
    main()
