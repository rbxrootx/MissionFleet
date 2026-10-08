"""Verify adjacent CPannelHelpScreen state methods against Ghidra and mapped bytes."""
import csv
import hashlib
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_PANEL_HELP_STATE_TRANSITION_ADDRESSES,
        MAIN_PANEL_HELP_STATE_TRANSITION_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_PANEL_HELP_STATE_TRANSITION_ADDRESSES,
        MAIN_PANEL_HELP_STATE_TRANSITION_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-panel-help-state-transition-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-panel-help-state-transition-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-panel-help-state-transition-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
DECOMP_PATH = FRESH_DIR / "58876710-58876790-targeted-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899EF80
RTTI_CLASS = b".?AVCPannelHelpScreen@@"
FUNCTIONS = (0x58876710, 0x58876790)
EXPECTED_RANGES = (
    (0x58876710, 0x58876710, 122, 122, 31),
    (0x58876790, 0x58876790, 130, 130, 37),
)
EXPECTED_CALLS = {
    0x5887671F: 0x58875830,
    0x5887673C: 0x58902D20,
    0x58876749: 0x58902D20,
    0x58876783: 0x58875830,
    0x588767F3: 0x58875830,
}
EXPECTED_DIRECT_TARGETS = {0x58875830, 0x58902D20}
VTABLE_SLOTS = {0x58876710: 0x5899EF84, 0x58876790: 0x5899EF88}


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
        ("CALL", function, site, "UNCONDITIONAL_CALL", target,
         f"{target:08x}")
        for site, target in EXPECTED_CALLS.items()
        for function in FUNCTIONS
        if (0x58876710 <= site < 0x58876790 if function == 0x58876710
            else 0x58876790 <= site < 0x58876812)
    }
    return calls | {
        ("DATA", function, slot, "DATA", function, "")
        for function, slot in VTABLE_SLOTS.items()
    }


def verify_fresh_exports():
    expected_edges = expected_edge_tuples()
    expected_body_exports = set()
    expected_edge_exports = set()

    for project in EXPORTS:
        export = f"{project}-fresh"
        bodies = read_tsv(FRESH_DIR / f"{export}-function-bodies.tsv")
        actual_bodies = [body_tuple(row) for row in bodies
                         if int(row["function"], 16) in FUNCTIONS]
        if tuple(actual_bodies) != EXPECTED_RANGES:
            raise AssertionError(f"Fresh body ranges changed in {project}: {actual_bodies}")
        expected_body_exports.update((export, *row) for row in actual_bodies)

        edges = read_tsv(FRESH_DIR / f"{export}-function-edges.tsv")
        selected = [row for row in edges if row["kind"] in {"CALL", "DATA"}
                    and (int(row["function"], 16) in FUNCTIONS
                         or int(row["target"], 16) in FUNCTIONS)]
        actual_edges = {edge_tuple(row) for row in selected}
        if actual_edges != expected_edges:
            raise AssertionError(
                f"Fresh Ghidra call/data edges changed in {project}: "
                f"{actual_edges ^ expected_edges}"
            )
        for edge in actual_edges:
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
        raise AssertionError("Tracked ranges differ from fresh Ghidra")


def verify_original_decompilation():
    source = DECOMP_PATH.read_text(encoding="utf-8").lower()
    fragments = (
        "void __fastcall fun_58876710(int param_1)",
        "fun_58875830(0);",
        "fun_58902d20(0xfffffeff);",
        "fun_58902d20(0x101);",
        "*(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xe2ff | 0x200;",
        "*(undefined4 *)(param_1 + 200) = 0;",
        "fun_58875830(2);",
        "void __fastcall fun_58876790(int param_1)",
        "iVar3 = 3;",
        "*(undefined4 *)(param_1 + 0xc4) = 0;",
        "*(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xe5ff | 0x500;",
    )
    for fragment in fragments:
        if fragment.lower() not in source:
            raise AssertionError(f"Targeted Ghidra decompilation lacks {fragment!r}")


def verify_vtable_and_rtti(image):
    def u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address outside image: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    locator = u32(VTABLE - 4)
    type_descriptor = u32(locator + 0x0C)
    name_offset = type_descriptor - BASE + 8
    class_name = image[name_offset:name_offset + 128].split(b"\0", 1)[0]
    if class_name != RTTI_CLASS:
        raise AssertionError(f"Unexpected vtable RTTI class name: {class_name!r}")
    for function, slot in VTABLE_SLOTS.items():
        if u32(slot) != function:
            raise AssertionError(f"Vtable slot {slot:08X} no longer names {function:08X}")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or sum(item.size for item in instructions) != size
            or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def verify_mapped_functions():
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}

    addresses = {int(value, 16) for value in MAIN_PANEL_HELP_STATE_TRANSITION_ADDRESSES}
    evidence_addresses = {int(value, 16)
                          for value in MAIN_PANEL_HELP_STATE_TRANSITION_EVIDENCE}
    if addresses != set(FUNCTIONS) or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify this two-method slice")

    image = IMAGE_PATH.read_bytes()
    if hashlib.sha256(image).hexdigest() != catalog["mapped_sha256"]:
        raise AssertionError("Mapped Main.dll hash differs from verification catalog")
    verify_vtable_and_rtti(image)

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    actual_calls = {}
    indirect_calls = set()
    indirect_jumps = set()

    for function, start, size, _, expected_count in EXPECTED_RANGES:
        row = inventory.get(function)
        record = records.get(function)
        segments = tuple((int(item["address"], 16), int(item["size"]))
                         for item in (record or {}).get("segments", []))
        if (row is None or record is None or function not in matched
                or int(row["size"]) != size or int(record["size"]) != size
                or segments != ((start, size),)):
            raise AssertionError(f"The exact {size}-byte function {function:08X} is not verified")

        instructions = decode_range(image, decoder, start, size)
        if len(instructions) != expected_count:
            raise AssertionError(f"Mapped instruction count changed at {function:08X}")
        own_start, own_end = start, start + size
        for instruction in instructions:
            if instruction.id == X86_INS_CALL:
                operand = instruction.operands[0]
                if operand.type == X86_OP_IMM:
                    actual_calls[instruction.address] = operand.imm & 0xFFFFFFFF
                else:
                    indirect_calls.add(instruction.address)
            elif instruction.group(CS_GRP_JUMP):
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    indirect_jumps.add(instruction.address)
                elif not own_start <= (operand.imm & 0xFFFFFFFF) < own_end:
                    raise AssertionError(f"External branch from {instruction.address:08X}")

    missing = (EXPECTED_DIRECT_TARGETS | set(FUNCTIONS)) - matched
    if missing:
        raise AssertionError("Method or direct callee lacks a byte match: "
                             + ", ".join(f"{item:08X}" for item in sorted(missing)))
    if actual_calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call sites changed: {actual_calls}")
    if indirect_calls or indirect_jumps:
        raise AssertionError(
            f"Unexpected indirect control flow: calls={indirect_calls}, jumps={indirect_jumps}"
        )


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_original_decompilation()
    verify_mapped_functions()
    print(
        "CPannelHelpScreen adjacent state methods verified: 252 bytes / "
        "68 instructions in two ranges. Both fresh Ghidra projects, targeted "
        "decompilation, RTTI vtable slots, and all five matched direct calls pass; "
        "no indirect control flow is present."
    )


if __name__ == "__main__":
    main()
