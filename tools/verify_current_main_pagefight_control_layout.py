"""Verify PageFight control-layout evidence and bytes against fresh Ghidra exports."""
import csv
import json
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_PAGEFIGHT_CONTROL_LAYOUT_ADDRESSES,
        MAIN_PAGEFIGHT_CONTROL_LAYOUT_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_PAGEFIGHT_CONTROL_LAYOUT_ADDRESSES,
        MAIN_PAGEFIGHT_CONTROL_LAYOUT_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58875830
SIZE = 639
INSTRUCTION_COUNT = 173
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-pagefight-control-layout-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-pagefight-control-layout-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-pagefight-control-layout-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
CALLER = 0x587FD890
CALL_SITE = 0x587FE0D8
EXPECTED_RANGES = (
    (FUNCTION, FUNCTION, 41, 41, 13),
    (FUNCTION, 0x58875860, 598, 598, 160),
)
EXPECTED_CALLS = {
    0x58875883: 0x58902CE0,
    0x5887588F: 0x58902CE0,
    0x5887589C: 0x58902CE0,
    0x588758D4: 0x58902D20,
    0x588758E4: 0x58902D20,
    0x5887591E: 0x58902D20,
    0x5887593F: 0x58902D20,
    0x5887594C: 0x58902D20,
    0x58875978: 0x58902D20,
    0x58875988: 0x58902D20,
    0x588759A6: 0x58902CE0,
    0x588759B3: 0x58902CE0,
    0x588759EC: 0x58902D20,
    0x588759FC: 0x58902D20,
    0x58875A24: 0x58902D20,
    0x58875A34: 0x58902D20,
    0x58875A50: 0x58902CE0,
    0x58875A60: 0x58902CE0,
    0x58875A88: 0x58902CE0,
    0x58875A95: 0x58902CE0,
}
EXPECTED_INCOMING = {
    (0x587FD890, 0x587FE0D8),
    (0x58876710, 0x5887671F),
    (0x58876710, 0x58876783),
    (0x58876790, 0x588767F3),
    (0x58876820, 0x588768B6),
    (0x58876820, 0x588768DA),
    (0x58876820, 0x58876907),
    (0x58876820, 0x5887694F),
    (0x58876AB0, 0x58876B63),
    (0x58876AB0, 0x58876C19),
    (0x58876AB0, 0x58876CC6),
}


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


def verify_fresh_exports():
    expected_body_exports = set()
    expected_edges = set()
    expected_calls = {
        (site, target) for site, target in EXPECTED_CALLS.items()
    }
    expected_target_name = {
        0x58902CE0: "58902ce0",
        0x58902D20: "58902d20",
    }

    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        bodies = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        actual_bodies = [body_tuple(row) for row in bodies
                         if int(row["function"], 16) == FUNCTION]
        if tuple(actual_bodies) != EXPECTED_RANGES:
            raise AssertionError(f"Fresh function body changed in {project}: {actual_bodies}")
        expected_body_exports.update((export, *row) for row in actual_bodies)

        edges = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in edges if row["kind"] == "CALL"
                    and (int(row["function"], 16) == FUNCTION
                         or int(row["target"], 16) == FUNCTION)]
        outgoing = {
            (int(row["site"], 16), int(row["target"], 16))
            for row in selected if int(row["function"], 16) == FUNCTION
        }
        incoming = {
            (int(row["function"], 16), int(row["site"], 16))
            for row in selected if int(row["target"], 16) == FUNCTION
        }
        if outgoing != expected_calls:
            raise AssertionError(f"Fresh outgoing calls changed in {project}: {outgoing}")
        if incoming != EXPECTED_INCOMING:
            raise AssertionError(f"Fresh incoming calls changed in {project}: {incoming}")
        for row in selected:
            edge = edge_tuple(row)
            if edge[0] != "CALL" or edge[3] != "UNCONDITIONAL_CALL":
                raise AssertionError(f"Unexpected non-direct call edge: {edge}")
            if edge[1] == FUNCTION and edge[5] != expected_target_name[edge[4]]:
                raise AssertionError(f"Unexpected callee identity in {project}: {edge}")
            expected_edges.add((export, *edge))

    actual_body_exports = {
        (row["export"], *body_tuple(row)) for row in read_tsv(BODY_EXPORTS)
    }
    if actual_body_exports != expected_body_exports:
        raise AssertionError("Tracked body exports differ from both fresh Ghidra projects")

    actual_edges = {
        (row["export"], *edge_tuple(row)) for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edges != expected_edges:
        raise AssertionError("Tracked call edges differ from both fresh Ghidra projects")


def verify_range_manifest():
    actual = tuple(body_tuple(row) for row in read_tsv(RANGE_MANIFEST))
    if actual != EXPECTED_RANGES:
        raise AssertionError("Tracked range manifest differs from fresh Ghidra")
    if sum(row[2] for row in actual) != SIZE or sum(row[4] for row in actual) != INSTRUCTION_COUNT:
        raise AssertionError("Body ranges do not cover the complete indexed function")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (sum(instruction.size for instruction in instructions) != size or not instructions
            or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def verify_original_decompilation():
    helper = (FRESH_DIR / "58875830-ghidra.c").read_text(encoding="utf-8")
    for fragment in (
        "*(short *)(param_1 + 0xcc) = param_2;",
        "*(undefined2 *)(param_1 + 0xce) = 0;",
        "if (param_2 == 1)",
        "if (param_2 == 2)",
        "if (param_2 == 3)",
        "if (param_2 == 0)",
        "FUN_58902ce0(0xff);",
        "FUN_58902d20(0xfffffeff);",
        "FUN_58902d20(0x101);",
    ):
        if fragment not in helper:
            raise AssertionError(f"Fresh Ghidra helper decompilation lacks {fragment!r}")

    caller = (FRESH_DIR / "587fd890-ghidra.c").read_text(encoding="utf-8")
    for fragment in (
        "param_1 + 0x218e8",
        "param_1 + 0x105a2",
        "FUN_58875830(1);",
    ):
        if fragment not in caller:
            raise AssertionError(f"Matched caller decompilation lacks {fragment!r}")


def verify_mapped_function():
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}

    addresses = {int(value, 16) for value in MAIN_PAGEFIGHT_CONTROL_LAYOUT_ADDRESSES}
    evidence_addresses = {int(value, 16) for value in MAIN_PAGEFIGHT_CONTROL_LAYOUT_EVIDENCE}
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
        raise AssertionError("The exact 639-byte function record is not verified")

    dependencies = set(EXPECTED_CALLS.values())
    if (CALLER not in matched or dependencies - matched):
        missing = sorted((dependencies | {CALLER}) - matched)
        raise AssertionError("Caller or direct callee lacks a byte match: "
                             + ", ".join(f"{item:08X}" for item in missing))

    image = IMAGE_PATH.read_bytes()
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
    unresolved_control_flow = []
    body_ranges = tuple((start, start + size) for _, start, size, _, _ in EXPECTED_RANGES)
    for instruction in instructions:
        if instruction.id == X86_INS_CALL:
            operand = instruction.operands[0]
            if operand.type != X86_OP_IMM:
                unresolved_control_flow.append(instruction.address)
            else:
                direct_calls[instruction.address] = operand.imm & 0xFFFFFFFF
        elif instruction.group(CS_GRP_JUMP):
            operand = instruction.operands[0]
            if operand.type != X86_OP_IMM or not any(
                start <= (operand.imm & 0xFFFFFFFF) < end for start, end in body_ranges
            ):
                unresolved_control_flow.append(instruction.address)

    if direct_calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call sites changed: {direct_calls}")
    if unresolved_control_flow:
        raise AssertionError("Unresolved or external non-call flow at "
                             + ", ".join(f"{item:08X}" for item in unresolved_control_flow))

    context_code = image[CALL_SITE - 2 - BASE:CALL_SITE + 5 - BASE]
    context = list(decoder.disasm(context_code, CALL_SITE - 2))
    if (len(context) != 2 or context[0].mnemonic != "push"
            or context[0].operands[0].imm != 1 or context[1].id != X86_INS_CALL
            or context[1].operands[0].type != X86_OP_IMM
            or context[1].operands[0].imm & 0xFFFFFFFF != FUNCTION):
        raise AssertionError("Mapped PageFight caller no longer enters mode 1")


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_original_decompilation()
    verify_mapped_function()
    print(
        "PageFight control-layout helper verified: 639 bytes / 173 instructions "
        "in two ranges. Both fresh Ghidra exports agree on the matched screen "
        "entry, ten open caller sites, and 20 calls to byte-matched dependencies."
    )


if __name__ == "__main__":
    main()
