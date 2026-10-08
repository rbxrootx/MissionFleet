"""Verify the PageFight out-of-field monitor against Ghidra and mapped Main.dll."""
import csv
import json
from collections import Counter
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL,
    X86_INS_MOV,
    X86_OP_IMM,
    X86_REG_ECX,
    X86_REG_ESI,
)

if __package__:
    from .build_current_main_verifications import (
        MAIN_PAGEFIGHT_RINGOUT_MONITOR_ADDRESSES,
        MAIN_PAGEFIGHT_RINGOUT_MONITOR_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_PAGEFIGHT_RINGOUT_MONITOR_ADDRESSES,
        MAIN_PAGEFIGHT_RINGOUT_MONITOR_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x587EA6C0
SIZE = 857
INSTRUCTION_COUNT = 215
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-pagefight-ringout-monitor-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-pagefight-ringout-monitor-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-pagefight-ringout-monitor-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
EXPECTED_CALLS = {
    0x587EA6E7: 0x588D66E0,
    0x587EA7B6: 0x587315F0,
    0x587EA7CA: 0x5897CBDA,
    0x587EA850: 0x5890BD90,
    0x587EA883: 0x58907990,
    0x587EA8CF: 0x587CC700,
    0x587EA970: 0x587B9760,
    0x587EA9AE: 0x5890BD90,
    0x587EA9BD: 0x58907990,
    0x587EA9DA: 0x587315F0,
    0x587EAA0D: 0x5897CBDA,
}
EXPECTED_INCOMING = {(0x587FD890, 0x587FEE19)}


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
    expected_body = (FUNCTION, FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT)
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        bodies = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        actual_bodies = [body_tuple(row) for row in bodies
                         if int(row["function"], 16) == FUNCTION]
        if actual_bodies != [expected_body]:
            raise AssertionError(f"Fresh function body changed in {project}: {actual_bodies}")
        expected_bodies.add((export, *expected_body))

        edges = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in edges
                    if int(row["function"], 16) == FUNCTION
                    or int(row["target"], 16) == FUNCTION]
        if len(selected) != 12:
            raise AssertionError(
                f"Expected 11 outgoing and one incoming edge in {project}, got {len(selected)}"
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
        if outgoing != EXPECTED_CALLS:
            raise AssertionError(f"Fresh outgoing calls changed in {project}: {outgoing}")
        if incoming != EXPECTED_INCOMING:
            raise AssertionError(f"Fresh incoming calls changed in {project}: {incoming}")
        expected_edges.update((export, *edge_tuple(row)) for row in selected)

    actual_bodies = {(row["export"], *body_tuple(row)) for row in read_tsv(BODY_EXPORTS)}
    if actual_bodies != expected_bodies:
        raise AssertionError("Tracked body exports differ from both fresh Ghidra projects")
    actual_edges = {(row["export"], *edge_tuple(row)) for row in read_tsv(EDGE_EXPORTS)}
    if actual_edges != expected_edges:
        raise AssertionError("Tracked call edges differ from both fresh Ghidra projects")


def verify_range_manifest():
    rows = read_tsv(RANGE_MANIFEST)
    expected = ((FUNCTION, FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT),)
    actual = tuple(body_tuple(row) for row in rows)
    if actual != expected:
        raise AssertionError("Tracked range manifest differs from fresh Ghidra")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (sum(instruction.size for instruction in instructions) != size or not instructions
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

    addresses = {int(value, 16) for value in MAIN_PAGEFIGHT_RINGOUT_MONITOR_ADDRESSES}
    evidence_addresses = {int(value, 16) for value in MAIN_PAGEFIGHT_RINGOUT_MONITOR_EVIDENCE}
    if addresses != {FUNCTION} or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify this one-function slice")

    row = inventory.get(FUNCTION)
    record = records.get(FUNCTION)
    segments = tuple((int(item["address"], 16), int(item["size"]))
                     for item in (record or {}).get("segments", []))
    if (row is None or record is None or FUNCTION not in matched
            or int(row["size"]) != SIZE or int(record["size"]) != SIZE
            or segments != ((FUNCTION, SIZE),)):
        raise AssertionError("The exact 857-byte function record is not verified")
    targets = set(EXPECTED_CALLS.values())
    if (0x587FD890 not in matched or targets - matched):
        missing = sorted((targets | {0x587FD890}) - matched)
        raise AssertionError("Caller or direct callee lacks a byte match: "
                             + ", ".join(f"{item:08X}" for item in missing))

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = decode_range(image, decoder, FUNCTION, SIZE)
    if len(instructions) != INSTRUCTION_COUNT:
        raise AssertionError("Mapped instruction count changed")

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
    if direct != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call sites changed: {direct}")
    if not indirect_calls:
        raise AssertionError("Expected the Ghidra-observed message and virtual callbacks")

    caller, site = next(iter(EXPECTED_INCOMING))
    context = decode_range(image, decoder, site - 2, 7)
    if (len(context) != 2 or context[0].id != X86_INS_MOV
            or context[0].operands[0].reg != X86_REG_ECX
            or context[0].operands[1].reg != X86_REG_ESI
            or context[1].id != X86_INS_CALL
            or context[1].operands[0].type != X86_OP_IMM
            or context[1].operands[0].imm & 0xFFFFFFFF != FUNCTION):
        raise AssertionError(f"Mapped caller receiver/call sequence changed at {caller:08X}:{site:08X}")

    for target, count in Counter(EXPECTED_CALLS.values()).items():
        if count <= 0 or target not in matched:
            raise AssertionError(f"Direct target lost its verified dependency: {target:08X}")


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_mapped_function()
    print(
        "PageFight out-of-field monitor verified: 857 bytes / 215 instructions. "
        "Both fresh Ghidra projects agree on the single matched update caller "
        "and all 11 direct calls to byte-matched dependencies."
    )


if __name__ == "__main__":
    main()
