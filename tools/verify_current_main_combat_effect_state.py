"""Verify the byte-matched combat-resolver branch pair and encoded-state leaf."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = {
    0x587ED730: (1069, 313),
    0x587EDB80: (960, 266),
    0x588D6E10: (29, 6),
}
TARGETS = set(FUNCTIONS)
EXPORTS = {"58758ee0-fresh", "587cef70-fresh"}
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-587ed730-combat-effects-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-587ed730-combat-effects-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
CALLER_DECOMP = ROOT / "var/current-main-next/587efd60-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
CALLER = 0x587EFD60
CALLERS = {
    0x587F16FE: 0x587ED730,
    0x587F1811: 0x587EDB80,
}
HELPER_CALLS = {
    0x587ED730: {
        0x587EDAA4, 0x587EDAC5, 0x587EDB07, 0x587EDB2C,
    },
    0x587EDB80: {
        0x587EDEA6, 0x587EDED4, 0x587EDEF7,
    },
}
HELPER_OPS = (
    ("mov", "eax, dword ptr [ecx + 0x6504]"),
    ("xor", "eax, 0xaaaaaaaa"),
    ("add", "eax, dword ptr [esp + 4]"),
    ("xor", "eax, 0xaaaaaaaa"),
    ("mov", "dword ptr [ecx + 0x6504], eax"),
    ("ret", "4"),
)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def expected_fresh_bodies():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        for row in read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv"):
            address = int(row["function"], 16)
            if address not in FUNCTIONS:
                continue
            size, count = FUNCTIONS[address]
            rows.add((export, address, int(row["start"], 16), int(row["length"]),
                      int(row["instruction_bytes"]), int(row["instruction_count"])))
            if (int(row["start"], 16) != address or int(row["length"]) != size
                    or int(row["instruction_bytes"]) != size
                    or int(row["instruction_count"]) != count):
                raise AssertionError(f"Fresh body extent changed for {address:08X}")
    if len(rows) != len(EXPORTS) * len(FUNCTIONS):
        raise AssertionError(f"Expected body rows from both projects, found {len(rows)}")
    return rows


def expected_fresh_edges():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        for row in read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv"):
            function = int(row["function"], 16)
            target = int(row["target"], 16)
            if function in {0x587ED730, 0x587EDB80} or (function == CALLER and target in TARGETS):
                rows.add((export, row["kind"], function, int(row["site"], 16),
                          target, row["type"]))
    return rows


def verify_exports():
    expected_bodies = expected_fresh_bodies()
    actual_bodies = {
        (row["export"], int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if actual_bodies != expected_bodies:
        raise AssertionError("Checked-in body exports differ from both fresh Ghidra projects")

    expected_edges = expected_fresh_edges()
    actual_edges = {
        (row["export"], row["kind"], int(row["function"], 16),
         int(row["site"], 16), int(row["target"], 16), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edges != expected_edges:
        raise AssertionError("Checked-in call edges differ from both fresh Ghidra projects")


def decode_range(image, decoder, start, size):
    offset = start - BASE
    code = image[offset:offset + size]
    instructions = list(decoder.disasm(code, start))
    if sum(instruction.size for instruction in instructions) != size:
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def record_ranges(record):
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
    matched = {address for address, record in records.items()
               if record.get("verified_by") == MARKER}

    for address, (size, count) in FUNCTIONS.items():
        record = records.get(address)
        if (address not in inventory or int(inventory[address]["size"]) != size
                or address not in matched or record is None
                or record_ranges(record) != ((address, size),)):
            raise AssertionError(f"{address:08X} is not recorded as the expected byte match")
        instructions = decode_range(image, decoder, address, size)
        if (len(instructions) != count or not instructions
                or instructions[0].address != address
                or instructions[-1].address + instructions[-1].size != address + size):
            raise AssertionError(f"Mapped instruction count or extent changed at {address:08X}")

        calls = {}
        for instruction in instructions:
            if instruction.id != X86_INS_CALL:
                continue
            if (not instruction.operands or instruction.operands[0].type != X86_OP_IMM):
                raise AssertionError(f"Unexpected indirect call in {address:08X}")
            target = instruction.operands[0].imm & 0xFFFFFFFF
            calls[instruction.address] = target
            if target not in matched:
                raise AssertionError(f"Unmatched direct dependency {address:08X}->{target:08X}")
        exported_calls = {
            int(row["site"], 16): int(row["target"], 16)
            for row in read_tsv(EDGE_EXPORTS)
            if row["export"] == "58758ee0-fresh"
            and row["kind"] == "CALL"
            and int(row["function"], 16) == address
        }
        if calls != exported_calls:
            raise AssertionError(f"Mapped calls differ from fresh Ghidra edges at {address:08X}")
        helper_sites = {site for site, target in calls.items()
                        if target == 0x588D6E10}
        if address in HELPER_CALLS and helper_sites != HELPER_CALLS[address]:
            raise AssertionError(f"Shared accumulator call sites changed at {address:08X}")

    helper = decode_range(image, decoder, 0x588D6E10, FUNCTIONS[0x588D6E10][0])
    actual_helper = tuple((instruction.mnemonic, instruction.op_str)
                          for instruction in helper)
    if actual_helper != HELPER_OPS:
        raise AssertionError(f"Encoded +0x6504 accumulator behavior changed: {actual_helper}")

    parent_record = records.get(CALLER)
    if parent_record is None or CALLER not in matched:
        raise AssertionError("The combat resolver caller is not byte-matched")
    parent_instructions = []
    for start, size in record_ranges(parent_record):
        parent_instructions.extend(decode_range(image, decoder, start, size))
    by_address = {instruction.address: instruction for instruction in parent_instructions}
    for site, target in CALLERS.items():
        call = by_address.get(site)
        if (call is None or call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != target):
            raise AssertionError(f"Matched resolver callsite changed at {site:08X}")


def verify_caller_semantics():
    source = CALLER_DECOMP.read_text(encoding="utf-8")
    first = source.find("FUN_587ed730(")
    second = source.find("FUN_587edb80(")
    if first < 0 or second < 0:
        raise AssertionError("Fresh resolver decompilation omits a sibling branch call")
    if source.rfind("param_9 == 0xb", 0, first) < 0:
        raise AssertionError("FUN_587ED730 is no longer under resolver parameter 0x0B")
    if source.rfind("param_9 == 0xc", 0, second) < 0:
        raise AssertionError("FUN_587EDB80 is no longer under resolver parameter 0x0C")
    if "param_1 + 0x378) & 0x40" not in source[max(0, first - 1000):first]:
        raise AssertionError("The resolver update-flag gate moved or changed")


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    verify_caller_semantics()
    print(
        "Combat resolver branch family verified: 2,058 bytes / 585 instructions "
        "match; both parameter branches are tied to byte-matched FUN_587EFD60, "
        "and all direct dependencies are byte-matched."
    )


if __name__ == "__main__":
    main()
