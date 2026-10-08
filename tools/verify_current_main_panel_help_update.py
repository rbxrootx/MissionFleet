"""Verify the CPannelHelpScreen update body against fresh Ghidra and mapped bytes."""
import csv
import hashlib
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_PANEL_HELP_UPDATE_ADDRESSES,
        MAIN_PANEL_HELP_UPDATE_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_PANEL_HELP_UPDATE_ADDRESSES,
        MAIN_PANEL_HELP_UPDATE_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58876AB0
SIZE = 647
INSTRUCTION_COUNT = 197
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-panel-help-update-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-panel-help-update-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-panel-help-update-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
DECOMP_PATH = FRESH_DIR / "58876ab0-targeted-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899EF80
VTABLE_SLOT = VTABLE + 0x0C
RTTI_CLASS = b".?AVCPannelHelpScreen@@"
EXPECTED_RANGES = (
    (FUNCTION, FUNCTION, 269, 269, 79),
    (FUNCTION, 0x58876BC0, 42, 42, 13),
    (FUNCTION, 0x58876BF0, 336, 336, 105),
)
EXPECTED_CALLS = {
    0x58876B27: 0x58902CE0,
    0x58876B46: 0x58902CE0,
    0x58876B63: 0x58875830,
    0x58876BC4: 0x58902CE0,
    0x58876BCC: 0x58902CE0,
    0x58876BF4: 0x58902CE0,
    0x58876BFC: 0x58902CE0,
    0x58876C19: 0x58875830,
    0x58876C78: 0x58902CE0,
    0x58876C80: 0x58902CE0,
    0x58876CA4: 0x58902CE0,
    0x58876CAC: 0x58902CE0,
    0x58876CC6: 0x58875830,
    0x58876CDB: 0x587315F0,
    0x58876CEB: 0x587315F0,
    0x58876CFD: 0x58902D20,
    0x58876D10: 0x58902D20,
}
EXPECTED_DIRECT_TARGETS = {0x58875830, 0x58902CE0, 0x58902D20, 0x587315F0}
EXPECTED_INDIRECT_CALLS = {0x58876D2D}
EXPECTED_INDIRECT_TAIL_JUMPS = {0x58876D3E}


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
    expected_ranges = tuple(EXPECTED_RANGES)
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
        for row in selected:
            edge = edge_tuple(row)
            if edge[0] == "CALL" and edge[3] != "UNCONDITIONAL_CALL":
                raise AssertionError(f"Unexpected non-direct call edge: {edge}")
            if edge[0] == "CALL" and edge[5] != f"{edge[4]:08x}":
                raise AssertionError(f"Unexpected direct callee identity: {edge}")
            expected_edge_exports.add((export, *edge))

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
    if (sum(row[2] for row in actual) != SIZE
            or sum(row[4] for row in actual) != INSTRUCTION_COUNT):
        raise AssertionError("Body ranges do not cover the complete indexed function")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (sum(instruction.size for instruction in instructions) != size
            or not instructions or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def verify_targeted_decompilation():
    source = DECOMP_PATH.read_text(encoding="utf-8").lower()
    for fragment in (
        "void __fastcall fun_58876ab0(int param_1)",
        "*(ushort *)(param_1 + 0x24) & 4",
        "*(short *)(param_1 + 0xcc)",
        "*(short *)(param_1 + 0xce)",
        "if (svar1 == 1)",
        "if (svar1 == 2)",
        "if (svar1 == 3)",
        "fun_58875830(3);",
        "fun_587315f0(1);",
        "fun_58902d20(0xfffffeff);",
        "(**(code **)(*pivar5 + 0xc))();",
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
        raise AssertionError("CPannelHelpScreen vtable slot +0x0C no longer names the method")
    locator = u32(VTABLE - 4)
    if u32(locator + 0x0C) == 0:
        raise AssertionError("Vtable Complete Object Locator has no TypeDescriptor")
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

    addresses = {int(value, 16) for value in MAIN_PANEL_HELP_UPDATE_ADDRESSES}
    evidence_addresses = {int(value, 16) for value in MAIN_PANEL_HELP_UPDATE_EVIDENCE}
    if addresses != {FUNCTION} or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify this one-function slice")

    row = inventory.get(FUNCTION)
    record = records.get(FUNCTION)
    segments = tuple((int(item["address"], 16), int(item["size"]))
                     for item in (record or {}).get("segments", []))
    expected_segments = tuple((start, size) for _, start, size, _, _ in EXPECTED_RANGES)
    if (row is None or record is None or FUNCTION not in matched
            or int(row["size"]) != SIZE or int(record["size"]) != SIZE
            or segments != expected_segments):
        raise AssertionError("The exact 647-byte function record is not verified")

    missing = (EXPECTED_DIRECT_TARGETS | {FUNCTION}) - matched
    if missing:
        raise AssertionError("Function or direct callee lacks a byte match: "
                             + ", ".join(f"{item:08X}" for item in sorted(missing)))

    image = IMAGE_PATH.read_bytes()
    if hashlib.sha256(image).hexdigest() != catalog["mapped_sha256"]:
        raise AssertionError("Mapped Main.dll hash differs from the verification catalog")
    verify_vtable_and_rtti(image)

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = []
    for _, start, size, _, count in EXPECTED_RANGES:
        decoded = decode_range(image, decoder, start, size)
        if len(decoded) != count:
            raise AssertionError(f"Mapped instruction count changed at {start:08X}")
        instructions.extend(decoded)
    if len(instructions) != INSTRUCTION_COUNT:
        raise AssertionError("Mapped instruction count changed")

    direct_calls = {}
    indirect_calls = set()
    indirect_tail_jumps = set()
    body_ranges = tuple((start, start + size) for _, start, size, _, _ in EXPECTED_RANGES)
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
            elif (operand.type != X86_OP_IMM or not any(
                start <= (operand.imm & 0xFFFFFFFF) < end
                for start, end in body_ranges
            )):
                raise AssertionError(
                    f"Unresolved or external branch at {instruction.address:08X}"
                )

    if direct_calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call sites changed: {direct_calls}")
    if indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Mapped indirect-call sites changed: {indirect_calls}")
    if indirect_tail_jumps != EXPECTED_INDIRECT_TAIL_JUMPS:
        raise AssertionError(
            f"Mapped indirect tail-jump sites changed: {indirect_tail_jumps}"
        )


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_targeted_decompilation()
    verify_mapped_function()
    print(
        "CPannelHelpScreen update verified: 647 bytes / 197 instructions in "
        "three ranges. Two fresh Ghidra projects and one targeted export agree; "
        "the RTTI-backed vtable slot, 17 matched direct calls, and the indirect "
        "child call/tail-jump paths are accounted for."
    )


if __name__ == "__main__":
    main()
