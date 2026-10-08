"""Verify the factory-help child cleanup helper against Ghidra and Main.dll."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_FACTORY_HELP_CLEANUP_ADDRESSES,
        MAIN_FACTORY_HELP_CLEANUP_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_FACTORY_HELP_CLEANUP_ADDRESSES,
        MAIN_FACTORY_HELP_CLEANUP_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58853230
SIZE = 817
INSTRUCTION_COUNT = 288
RANGES = ((FUNCTION, 573, 201), (0x58853470, 244, 87))
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-factory-help-cleanup-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-factory-help-cleanup-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-factory-help-cleanup-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
EXPECTED_DIRECT = {0x5885354B: 0x58902C10}
EXPECTED_INCOMING = {(0x588536A0, 0x588536A3)}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def body_tuple(row):
    return (
        int(row["function"], 16), int(row["start"], 16),
        int(row["length"]), int(row["instruction_bytes"]),
        int(row["instruction_count"]),
    )


def edge_tuple(row):
    return (
        row["kind"], int(row["function"], 16), int(row["site"], 16),
        row["type"], int(row["target"], 16), row["target_function"],
    )


def verify_fresh_exports():
    expected_bodies = set()
    expected_edges = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        fresh_bodies = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        actual_body_rows = [body_tuple(row) for row in fresh_bodies
                            if int(row["function"], 16) == FUNCTION]
        expected_body_rows = [
            (FUNCTION, start, size, size, count)
            for start, size, count in RANGES
        ]
        if actual_body_rows != expected_body_rows:
            raise AssertionError(
                f"Fresh body ranges differ in {project}: {actual_body_rows}"
            )
        expected_bodies.update((export, *row) for row in expected_body_rows)

        fresh_edges = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in fresh_edges
                    if int(row["function"], 16) == FUNCTION
                    or int(row["target"], 16) == FUNCTION]
        if len(selected) != 2:
            raise AssertionError(
                f"Expected one incoming and one outgoing edge in {project}, got {len(selected)}"
            )
        outgoing = {
            int(row["site"], 16): int(row["target"], 16)
            for row in selected if row["kind"] == "CALL"
            and int(row["function"], 16) == FUNCTION
        }
        incoming = {
            (int(row["function"], 16), int(row["site"], 16))
            for row in selected if row["kind"] == "CALL"
            and int(row["target"], 16) == FUNCTION
        }
        if outgoing != EXPECTED_DIRECT:
            raise AssertionError(f"Fresh direct calls changed in {project}: {outgoing}")
        if incoming != EXPECTED_INCOMING:
            raise AssertionError(f"Fresh incoming callers changed in {project}: {incoming}")
        expected_edges.update((export, *edge_tuple(row)) for row in selected)

    actual_bodies = {(row["export"], *body_tuple(row))
                     for row in read_tsv(BODY_EXPORTS)}
    if actual_bodies != expected_bodies:
        raise AssertionError("Tracked body projections differ from fresh Ghidra exports")
    actual_edges = {(row["export"], *edge_tuple(row))
                    for row in read_tsv(EDGE_EXPORTS)}
    if actual_edges != expected_edges:
        raise AssertionError("Tracked call edges differ from fresh Ghidra exports")


def verify_range_manifest():
    actual = tuple(body_tuple(row) for row in read_tsv(RANGE_MANIFEST))
    expected = tuple((FUNCTION, start, size, size, count)
                     for start, size, count in RANGES)
    if actual != expected:
        raise AssertionError("Tracked body-range manifest differs from fresh Ghidra")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (sum(item.size for item in instructions) != size or not instructions
            or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def verify_mapped_function():
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}

    addresses = {int(value, 16) for value in MAIN_FACTORY_HELP_CLEANUP_ADDRESSES}
    evidence_addresses = {int(value, 16) for value in MAIN_FACTORY_HELP_CLEANUP_EVIDENCE}
    if addresses != {FUNCTION} or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify the one-function slice")

    row = inventory.get(FUNCTION)
    record = records.get(FUNCTION)
    segments = tuple((int(item["address"], 16), int(item["size"]))
                     for item in (record or {}).get("segments", []))
    expected_segments = tuple((start, size) for start, size, _ in RANGES)
    if (row is None or record is None or FUNCTION not in matched
            or int(row["size"]) != SIZE or int(record["size"]) != SIZE
            or segments != expected_segments):
        raise AssertionError("The exact 817-byte function record is not verified")
    if 0x588536A0 not in matched or 0x58902C10 not in matched:
        raise AssertionError("The deleting wrapper or direct helper lost byte-match status")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = []
    for start, size, count in RANGES:
        body = decode_range(image, decoder, start, size)
        if len(body) != count:
            raise AssertionError(f"Mapped instruction count changed at {start:08X}")
        instructions.extend(body)
    if sum(item.size for item in instructions) != SIZE or len(instructions) != INSTRUCTION_COUNT:
        raise AssertionError("Mapped function byte or instruction totals changed")

    direct = {}
    indirect_calls = []
    for instruction in instructions:
        if instruction.id != X86_INS_CALL:
            continue
        operand = instruction.operands[0]
        if operand.type == X86_OP_IMM:
            direct[instruction.address] = operand.imm & 0xFFFFFFFF
        else:
            indirect_calls.append(instruction.address)
    if direct != EXPECTED_DIRECT:
        raise AssertionError(f"Mapped direct calls changed: {direct}")
    if not indirect_calls:
        raise AssertionError("Expected the Ghidra-observed child vtable release calls")

    for caller, site in EXPECTED_INCOMING:
        instruction = decode_range(image, decoder, site, 5)
        if (len(instruction) != 1 or instruction[0].id != X86_INS_CALL
                or instruction[0].operands[0].type != X86_OP_IMM
                or instruction[0].operands[0].imm & 0xFFFFFFFF != FUNCTION):
            raise AssertionError(f"Mapped deleting-wrapper call changed at {caller:08X}:{site:08X}")


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_mapped_function()
    print(
        "CPannelFactoryHelp cleanup helper verified: 817 bytes / 288 instructions "
        "in two Ghidra ranges. Both fresh exports agree on its matched deleting "
        "wrapper and matched direct helper; mapped code retains its indirect child releases."
    )


if __name__ == "__main__":
    main()
