"""Verify the CPannelHelpScreen event handler against Ghidra and mapped bytes."""
import csv
import hashlib
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_JMP, X86_OP_IMM, X86_OP_MEM, X86_REG_EDX,
)

if __package__:
    from .build_current_main_verifications import (
        MAIN_PANEL_HELP_EVENT_DISPATCH_ADDRESSES,
        MAIN_PANEL_HELP_EVENT_DISPATCH_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_PANEL_HELP_EVENT_DISPATCH_ADDRESSES,
        MAIN_PANEL_HELP_EVENT_DISPATCH_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58876820
SIZE = 495
INSTRUCTION_COUNT = 136
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-panel-help-event-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-panel-help-event-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-panel-help-event-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
DECOMP_PATH = FRESH_DIR / "58876820-targeted-ghidra.c"
CALLERS_DECOMP_PATH = FRESH_DIR / "58875830-callers-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899EF80
VTABLE_SLOT = VTABLE + 0x10
RTTI_CLASS = b".?AVCPannelHelpScreen@@"
SWITCH_TABLE = 0x58876A10
EXPECTED_RANGES = ((FUNCTION, FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT),)
EXPECTED_CALLS = {
    0x588768B6: 0x58875830,
    0x588768DA: 0x58875830,
    0x58876907: 0x58875830,
    0x5887694F: 0x58875830,
    0x58876973: 0x587315F0,
    0x5887697D: 0x587315F0,
    0x5887698A: 0x58902D20,
    0x588769A7: 0x587315F0,
    0x588769B7: 0x587315F0,
    0x588769E4: 0x58902D20,
    0x588769F7: 0x58902D20,
}
EXPECTED_DIRECT_TARGETS = {0x58875830, 0x587315F0, 0x58902D20}
EXPECTED_INDIRECT_CALLS = {0x5887684B}
EXPECTED_INDIRECT_JUMPS = {0x5887689E}
EXPECTED_SWITCH_TARGETS = (
    0x5887690E, 0x58876918, 0x58876920, 0x5887693B, 0x588768A5,
    0x58876928, 0x588768EA, 0x58876933, 0x588768C9, 0x58876913,
    0x58876A06,
)


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
    expected_edges = expected_edge_tuples()
    expected_body_exports = set()
    expected_edge_exports = set()

    for project in EXPORTS:
        export = f"{project}-fresh"
        bodies = read_tsv(FRESH_DIR / f"{export}-function-bodies.tsv")
        actual_bodies = [body_tuple(row) for row in bodies
                         if int(row["function"], 16) == FUNCTION]
        if tuple(actual_bodies) != EXPECTED_RANGES:
            raise AssertionError(
                f"Fresh function body changed in {project}: {actual_bodies}"
            )
        expected_body_exports.update((export, *row) for row in actual_bodies)

        edges = read_tsv(FRESH_DIR / f"{export}-function-edges.tsv")
        selected = [row for row in edges if row["kind"] in {"CALL", "DATA"}
                    and (int(row["function"], 16) == FUNCTION
                         or int(row["target"], 16) == FUNCTION)]
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


def verify_original_decompilation():
    source = DECOMP_PATH.read_text(encoding="utf-8").lower()
    for fragment in (
        "undefined4 __thiscall fun_58876820(int param_1,int param_2)",
        "*(ushort *)(param_1 + 0x24) & 2",
        "*(int *)(param_2 + 4) != 0x100",
        "switch(*(undefined4 *)(param_2 + 8))",
        "case 0x1b:",
        "*(int **)(param_1 + 0xc4) = piVar2;",
        "fun_58875830(0);",
        "fun_587315f0(1);",
        "fun_58902d20(0xfffffeff);",
        "return *(undefined4 *)(param_1 + 0x34);",
    ):
        if fragment.lower() not in source:
            raise AssertionError(f"Targeted Ghidra decompilation lacks {fragment!r}")

    callers = CALLERS_DECOMP_PATH.read_text(encoding="utf-8").lower()
    for fragment in (
        "(**(code **)(*pivar2 + 0x10))(param_2);",
        "while (pivar2 != *(int **)(*(int *)(param_1 + 0x3c) + 0x34));",
    ):
        if fragment.lower() not in callers:
            raise AssertionError(f"Fresh class-method decompilation lacks {fragment!r}")


def verify_vtable_and_rtti(image):
    def u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address outside image: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    if u32(VTABLE_SLOT) != FUNCTION:
        raise AssertionError("CPannelHelpScreen vtable slot +0x10 no longer names the method")
    locator = u32(VTABLE - 4)
    type_descriptor = u32(locator + 0x0C)
    name_offset = type_descriptor - BASE + 8
    class_name = image[name_offset:name_offset + 128].split(b"\0", 1)[0]
    if class_name != RTTI_CLASS:
        raise AssertionError(f"Unexpected vtable RTTI class name: {class_name!r}")


def verify_range_manifest():
    actual = tuple(body_tuple(row) for row in read_tsv(RANGE_MANIFEST))
    if actual != EXPECTED_RANGES:
        raise AssertionError("Tracked range manifest differs from fresh Ghidra")


def verify_mapped_function():
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}

    addresses = {int(value, 16) for value in MAIN_PANEL_HELP_EVENT_DISPATCH_ADDRESSES}
    evidence_addresses = {int(value, 16)
                          for value in MAIN_PANEL_HELP_EVENT_DISPATCH_EVIDENCE}
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
        raise AssertionError("The exact 495-byte function record is not verified")

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
    code = image[FUNCTION - BASE:FUNCTION - BASE + SIZE]
    instructions = list(decoder.disasm(code, FUNCTION))
    if (len(instructions) != INSTRUCTION_COUNT
            or sum(instruction.size for instruction in instructions) != SIZE
            or instructions[0].address != FUNCTION
            or instructions[-1].address + instructions[-1].size != FUNCTION + SIZE):
        raise AssertionError("Mapped instruction coverage or count changed")

    direct_calls = {}
    indirect_calls = set()
    indirect_jumps = set()
    instruction_addresses = {instruction.address for instruction in instructions}
    for instruction in instructions:
        if instruction.id == X86_INS_CALL:
            operand = instruction.operands[0]
            if operand.type != X86_OP_IMM:
                indirect_calls.add(instruction.address)
            else:
                direct_calls[instruction.address] = operand.imm & 0xFFFFFFFF
        elif instruction.group(CS_GRP_JUMP):
            operand = instruction.operands[0]
            if instruction.id == X86_INS_JMP and operand.type == X86_OP_MEM:
                if (instruction.address != next(iter(EXPECTED_INDIRECT_JUMPS))
                        or operand.mem.disp != SWITCH_TABLE
                        or operand.mem.index != X86_REG_EDX
                        or operand.mem.scale != 4):
                    raise AssertionError("Indirect switch jump no longer uses the expected table")
                indirect_jumps.add(instruction.address)
            elif (operand.type != X86_OP_IMM
                  or not FUNCTION <= (operand.imm & 0xFFFFFFFF) < FUNCTION + SIZE):
                raise AssertionError(f"Unresolved or external branch at {instruction.address:08X}")

    if direct_calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call sites changed: {direct_calls}")
    if indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Mapped indirect-call sites changed: {indirect_calls}")
    if indirect_jumps != EXPECTED_INDIRECT_JUMPS:
        raise AssertionError(f"Mapped indirect-jump sites changed: {indirect_jumps}")

    table_offset = SWITCH_TABLE - BASE
    table = struct.unpack_from(f"<{len(EXPECTED_SWITCH_TARGETS)}I", image, table_offset)
    if tuple(table) != EXPECTED_SWITCH_TARGETS:
        raise AssertionError(f"Mapped switch destinations changed: {table}")
    if any(target not in instruction_addresses for target in table):
        raise AssertionError("A switch-table destination is not an instruction in the method")


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_original_decompilation()
    verify_mapped_function()
    print(
        "CPannelHelpScreen event handler verified: 495 bytes / 136 instructions. "
        "Both fresh Ghidra exports and targeted decomp agree; RTTI, 11 matched "
        "direct calls, the indirect child callback, and all 11 switch-table "
        "destinations pass."
    )


if __name__ == "__main__":
    main()
