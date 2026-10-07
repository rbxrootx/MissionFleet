"""Verify the type-0x06 packed-state transform against installed Main.dll."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL,
    X86_INS_JMP,
    X86_OP_IMM,
    X86_OP_MEM,
    X86_REG_INVALID,
)

try:
    from .build_current_main_verifications import (
        MAIN_TYPE06_PACKED_STATE_TRANSFORM_ADDRESSES,
        MAIN_TYPE06_PACKED_STATE_TRANSFORM_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_TYPE06_PACKED_STATE_TRANSFORM_ADDRESSES,
        MAIN_TYPE06_PACKED_STATE_TRANSFORM_EVIDENCE,
    )

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/current-main-587b4100-type06-table-transform-body-ranges.tsv"
TRANSFER_PATH = ROOT / "config/NF2_2026/current-main-587b4100-type06-table-transform-transfers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
ROOT_ADDRESS = 0x587B4100
EXPECTED_RANGES = (
    (0x587B4100, 344, 104),
    (0x587B4260, 501, 164),
)
EXPECTED_EDGES = {
    ("58758870", "58758D23", "587B4A30"),
    ("587A6220", "587A6A01", "587B4A30"),
    ("588D84D0", "588D8B48", "587B4A30"),
    ("587B4A30", "587B4AE2", "587B4100"),
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def instruction_at(image, decoder, address):
    offset = address - BASE
    instruction = next(decoder.disasm(image[offset:offset + 15], address), None)
    if instruction is None or instruction.address != address:
        raise AssertionError(f"No mapped instruction starts at {address:08X}")
    return instruction


def direct_call_target(image, decoder, address):
    instruction = instruction_at(image, decoder, address)
    if (instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM):
        raise AssertionError(f"Expected a direct CALL at {address:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def main():
    if MAIN_TYPE06_PACKED_STATE_TRANSFORM_ADDRESSES != ("587B4100",):
        raise AssertionError("The selected type-0x06 transform slice changed")

    manifest = read_tsv(RANGE_PATH)
    actual_ranges = tuple(
        (int(row["start"], 16), int(row["length"]), int(row["instruction_count"]))
        for row in manifest
    )
    if (len(manifest) != len(EXPECTED_RANGES)
            or actual_ranges != EXPECTED_RANGES
            or any(int(row["function"], 16) != ROOT_ADDRESS
                   or int(row["instruction_bytes"]) != int(row["length"])
                   for row in manifest)):
        raise AssertionError(f"Unexpected or incomplete Ghidra body ranges: {manifest}")
    if EXPECTED_RANGES[0][0] + EXPECTED_RANGES[0][1] != 0x587B4258:
        raise AssertionError("The first Ghidra body range changed")
    if EXPECTED_RANGES[1][0] - 0x587B4258 != 8:
        raise AssertionError("The recorded Ghidra body gap changed")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = []
    for address, size, instruction_count in EXPECTED_RANGES:
        code = image[address - BASE:address - BASE + size]
        decoded = list(decoder.disasm(code, address))
        if (len(code) != size or len(decoded) != instruction_count
                or sum(item.size for item in decoded) != size
                or not decoded or decoded[0].address != address
                or decoded[-1].address + decoded[-1].size != address + size):
            raise AssertionError(f"Capstone does not cover Ghidra range {address:08X}")
        instructions.extend(decoded)
    if sum(size for _, size, _ in EXPECTED_RANGES) != 845 or len(instructions) != 268:
        raise AssertionError("The exact transform body byte/instruction total changed")

    inventory = {
        int(row["address"], 16): row
        for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    required_matches = {
        ROOT_ADDRESS, 0x587B4A30, 0x58758870, 0x587A6220, 0x588D84D0,
    }
    if not required_matches.issubset(matched):
        raise AssertionError(
            f"The transform, matched initializer, or callers are unmatched: "
            f"{sorted(required_matches - matched)}"
        )
    for address, site in ((0x587B4A30, 0x587B4AE2),
                          (0x58758870, 0x58758D23),
                          (0x587A6220, 0x587A6A01),
                          (0x588D84D0, 0x588D8B48)):
        if not any(start <= site < start + size
                   for start, size in record_ranges(records[address])):
            raise AssertionError(f"Matched caller {address:08X} omits {site:08X}")

    edge_rows = read_tsv(TRANSFER_PATH)
    if any(row["kind"] != "CALL" or row["type"] != "UNCONDITIONAL_CALL"
           for row in edge_rows):
        raise AssertionError("The transfer manifest contains a non-call edge")
    edges = {
        (row["function"].upper(), row["site"].upper(),
         row["target_function"].upper())
        for row in edge_rows
    }
    if edges != EXPECTED_EDGES:
        raise AssertionError(f"Unexpected Ghidra caller transfers: {edges}")
    for source, site, target in edges:
        source_address = int(source, 16)
        target_address = int(target, 16)
        if source_address not in inventory or target_address not in inventory:
            raise AssertionError(f"Transfer endpoint is absent from Main.dll: {source} -> {target}")
        if direct_call_target(image, decoder, int(site, 16)) != target_address:
            raise AssertionError(f"Mapped CALL differs from Ghidra transfer at {site}")

    actual_outgoing = set()
    for instruction in instructions:
        if (instruction.id not in (X86_INS_CALL, X86_INS_JMP)
                or not instruction.operands
                or instruction.operands[0].type != X86_OP_IMM):
            continue
        target = instruction.operands[0].imm & 0xFFFFFFFF
        if target in inventory:
            actual_outgoing.add((f"{ROOT_ADDRESS:08X}",
                                 f"{instruction.address:08X}", f"{target:08X}"))
    if actual_outgoing:
        raise AssertionError(f"Unexpected direct outgoing transform transfers: {actual_outgoing}")

    expected_evidence = MAIN_TYPE06_PACKED_STATE_TRANSFORM_EVIDENCE["587B4100"]
    root_record = records[ROOT_ADDRESS]
    if root_record.get("evidence") != expected_evidence:
        raise AssertionError("The catalog evidence differs from the reviewed subsystem record")
    absolute_references = {
        operand.mem.disp & 0xFFFFFFFF
        for instruction in instructions
        for operand in instruction.operands
        if operand.type == X86_OP_MEM and operand.mem.base == X86_REG_INVALID
    }
    if not {0x58A0B4D8, 0x58A0ED18}.issubset(absolute_references):
        raise AssertionError("The mapped transform omits a coefficient-array reference")
    print(
        "PASS type-0x06 packed-state transform: 1 byte-identical function / "
        "845 bytes; 268 instructions across 2 exact Ghidra ranges; "
        "matched initializer and three caller paths; no direct callees."
    )


if __name__ == "__main__":
    main()
