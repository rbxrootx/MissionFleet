"""Verify the CPannelHotKeysInfo transition updater against fresh Ghidra and mapped bytes."""
import csv
import hashlib
import json
import struct
from collections import Counter
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_HOTKEYS_INFO_TRANSITION_ADDRESSES,
        MAIN_HOTKEYS_INFO_TRANSITION_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_HOTKEYS_INFO_TRANSITION_ADDRESSES,
        MAIN_HOTKEYS_INFO_TRANSITION_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58876FA0
SIZE = 785
INSTRUCTION_COUNT = 207
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-hotkeys-info-transition-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-hotkeys-info-transition-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-hotkeys-info-transition-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
SOURCE_PATH = ROOT / "src/client-current/Main/FUN_58876fa0.cpp"
DECOMP_PATH = FRESH_DIR / "58876FA0-targeted-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899EFA0
VTABLE_SLOT = VTABLE + 0x0C
RTTI_CLASS = b".?AVCPannelHotKeysInfo@@"
EXPECTED_RANGES = ((FUNCTION, FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT),)
EXPECTED_CALLS = {
    0x58876FE4: 0x58902CE0,
    0x58876FFD: 0x58902CE0,
    0x5887700F: 0x58902CE0,
    0x58877021: 0x58902CE0,
    0x58877033: 0x58902CE0,
    0x58877045: 0x58902CE0,
    0x58877057: 0x58902CE0,
    0x58877069: 0x58902CE0,
    0x58877078: 0x58902CE0,
    0x58877088: 0x58902CE0,
    0x58877098: 0x58902CE0,
    0x588770A8: 0x58902CE0,
    0x588770B8: 0x58902CE0,
    0x588770C8: 0x58902CE0,
    0x588770D8: 0x58902CE0,
    0x588770E8: 0x58902CE0,
    0x58877100: 0x58770A80,
    0x58877151: 0x58902CE0,
    0x58877177: 0x58902CE0,
    0x58877189: 0x58902CE0,
    0x5887719B: 0x58902CE0,
    0x588771AD: 0x58902CE0,
    0x588771BF: 0x58902CE0,
    0x588771D1: 0x58902CE0,
    0x588771E3: 0x58902CE0,
    0x588771EF: 0x58902CE0,
    0x588771FC: 0x58902CE0,
    0x58877209: 0x58902CE0,
    0x58877216: 0x58902CE0,
    0x58877223: 0x58902CE0,
    0x58877230: 0x58902CE0,
    0x5887723D: 0x58902CE0,
}
EXPECTED_INDIRECT_CALLS = {0x588772A2}
EXPECTED_INDIRECT_TAIL_JUMPS = {0x588772AF}
EXPECTED_DIRECT_TARGETS = {0x58902CE0, 0x58770A80}


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
        row["type"], int(row["target"], 16), row["target_function"].lower(),
    )


def expected_edge_tuples():
    calls = {
        ("CALL", FUNCTION, site, "UNCONDITIONAL_CALL", target,
         f"{target:08x}")
        for site, target in EXPECTED_CALLS.items()
    }
    return calls | {
        ("DATA", FUNCTION, VTABLE_SLOT, "DATA", FUNCTION, ""),
    }


def verify_fresh_exports():
    expected_ranges = EXPECTED_RANGES
    expected_edges = expected_edge_tuples()
    expected_body_exports = set()
    expected_edge_exports = set()

    for project in EXPORTS:
        export = f"{project}-fresh"
        bodies = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        actual_bodies = [body_tuple(row) for row in bodies
                         if int(row["function"], 16) == FUNCTION]
        if tuple(actual_bodies) != expected_ranges:
            raise AssertionError(
                f"Fresh function body changed in {project}: {actual_bodies}"
            )
        expected_body_exports.update((export, *row) for row in actual_bodies)

        edges = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in edges if row["kind"] in {"CALL", "DATA"}
                    and (int(row["function"], 16) == FUNCTION
                         or int(row["target"], 16) == FUNCTION)]
        actual_edges = {edge_tuple(row) for row in selected}
        if actual_edges != expected_edges:
            raise AssertionError(
                f"Fresh Ghidra call/data edges changed in {project}: "
                f"{actual_edges ^ expected_edges}"
            )
        expected_edge_exports.update((export, *edge_tuple(row)) for row in selected)

    actual_body_exports = {
        (row["export"], *body_tuple(row)) for row in read_tsv(BODY_EXPORTS)
    }
    if actual_body_exports != expected_body_exports:
        raise AssertionError("Tracked body exports differ from both fresh Ghidra projects")

    actual_edges = {
        (row["export"], *edge_tuple(row)) for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edges != expected_edge_exports:
        raise AssertionError("Tracked call/data edges differ from both fresh Ghidra projects")


def verify_range_manifest():
    actual = tuple(body_tuple(row) for row in read_tsv(RANGE_MANIFEST))
    if actual != EXPECTED_RANGES:
        raise AssertionError("Tracked range manifest differs from fresh Ghidra")
    if sum(row[2] for row in actual) != SIZE or sum(row[4] for row in actual) != INSTRUCTION_COUNT:
        raise AssertionError("Body ranges do not cover the complete indexed function")


def decode_function(image, decoder):
    offset = FUNCTION - BASE
    code = image[offset:offset + SIZE]
    instructions = list(decoder.disasm(code, FUNCTION))
    if (sum(item.size for item in instructions) != SIZE
            or not instructions or instructions[0].address != FUNCTION
            or instructions[-1].address + instructions[-1].size != FUNCTION + SIZE):
        raise AssertionError("Mapped instruction coverage is incomplete")
    if len(instructions) != INSTRUCTION_COUNT:
        raise AssertionError(f"Mapped instruction count changed: {len(instructions)}")
    return instructions


def verify_targeted_decompilation():
    source = DECOMP_PATH.read_text(encoding="utf-8").lower()
    for fragment in (
        "void __fastcall fun_58876fa0(int param_1)",
        "(*(ushort *)(param_1 + 0x24) & 4) != 0",
        "== 0x100",
        "== 0x400",
        "== 0x500",
        "*(ushort *)(param_1 + 0x24) & 0xe2ff | 0x200",
        "*(ushort *)(param_1 + 0x24) & 0xe5ff | 0x500",
        "fun_58770a80(*(undefined4 *)(param_1 + 0xa4));",
        "(**(code **)(*pivar2 + 0xc))();",
    ):
        if fragment not in source:
            raise AssertionError(f"Targeted Ghidra decompilation lacks {fragment!r}")


def verify_vtable_and_rtti(image):
    def u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address outside image: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    if u32(VTABLE_SLOT) != FUNCTION:
        raise AssertionError("CPannelHotKeysInfo slot +0x0C no longer names the method")
    locator = u32(VTABLE - 4)
    type_descriptor = u32(locator + 0x0C)
    name_offset = type_descriptor - BASE + 8
    class_name = image[name_offset:name_offset + 128].split(b"\0", 1)[0]
    if class_name != RTTI_CLASS:
        raise AssertionError(f"Unexpected vtable RTTI class name: {class_name!r}")


def verify_mapped_function():
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}

    addresses = {int(value, 16) for value in MAIN_HOTKEYS_INFO_TRANSITION_ADDRESSES}
    evidence_addresses = {int(value, 16) for value in MAIN_HOTKEYS_INFO_TRANSITION_EVIDENCE}
    if addresses != {FUNCTION} or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify this one-function slice")

    row = inventory.get(FUNCTION)
    record = records.get(FUNCTION)
    segments = tuple((int(item["address"], 16), int(item["size"]))
                     for item in (record or {}).get("segments", []))
    if (row is None or record is None or FUNCTION not in matched
            or int(row["size"]) != SIZE or int(record["size"]) != SIZE
            or segments != ((FUNCTION, SIZE),)):
        raise AssertionError("The exact 785-byte function record is not verified")

    missing = (EXPECTED_DIRECT_TARGETS | {FUNCTION}) - matched
    if missing:
        raise AssertionError("Function or direct callee lacks a byte match: "
                             + ", ".join(f"{item:08X}" for item in sorted(missing)))

    if hashlib.sha256(SOURCE_PATH.read_bytes()).hexdigest() != record["source_sha256"]:
        raise AssertionError("Tracked source hash differs from the verification record")

    image = IMAGE_PATH.read_bytes()
    if hashlib.sha256(image).hexdigest() != catalog["mapped_sha256"]:
        raise AssertionError("Mapped Main.dll hash differs from the verification catalog")
    verify_vtable_and_rtti(image)

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = decode_function(image, decoder)
    direct_calls = {}
    indirect_calls = set()
    indirect_tail_jumps = set()
    for instruction in instructions:
        if instruction.id == X86_INS_CALL:
            operand = instruction.operands[0]
            if operand.type != X86_OP_IMM:
                indirect_calls.add(instruction.address)
            else:
                direct_calls[instruction.address] = operand.imm & 0xFFFFFFFF
        elif instruction.group(CS_GRP_JUMP):
            operand = instruction.operands[0]
            if instruction.id == X86_INS_JMP and operand.type != X86_OP_IMM:
                indirect_tail_jumps.add(instruction.address)
            elif (operand.type != X86_OP_IMM
                  or not FUNCTION <= (operand.imm & 0xFFFFFFFF) < FUNCTION + SIZE):
                raise AssertionError(
                    f"Unexpected external branch at {instruction.address:08X}"
                )

    if direct_calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call sites changed: {direct_calls}")
    if indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Mapped indirect-call sites changed: {indirect_calls}")
    if indirect_tail_jumps != EXPECTED_INDIRECT_TAIL_JUMPS:
        raise AssertionError(f"Mapped indirect tail jumps changed: {indirect_tail_jumps}")
    if Counter(direct_calls.values()) != Counter({0x58902CE0: 31, 0x58770A80: 1}):
        raise AssertionError("Direct-call dependency closure changed")


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_targeted_decompilation()
    verify_mapped_function()
    print(
        "CPannelHotKeysInfo transition updater verified: 785 bytes / "
        "207 instructions. Two fresh Ghidra exports, the RTTI-backed vtable "
        "slot, 32 matched direct calls, and the dynamic child call/tail transfer "
        "are accounted for."
    )


if __name__ == "__main__":
    main()
