"""Verify the byte-matched communicator ID panel pointer-range helper."""
import csv
import json
from collections import Counter
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_ADDRESSES,
        MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_ADDRESSES,
        MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x5884A820
CALLER = 0x5884AB90
SIZE = 871
INSTRUCTION_COUNT = 307
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-communicator-id-pointer-range-update-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-communicator-id-pointer-range-update-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-communicator-id-pointer-range-update-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
EXPECTED_CALL_TARGET_COUNTS = {
    0x5897CC72: 34,
    0x588205F0: 4,
    0x5897CC54: 2,
    0x588F6890: 2,
    0x58849980: 1,
    0x587A54D0: 1,
}
EXPECTED_INCOMING = {
    (0x58820EA0, 0x58820EBB),
    (0x58820F70, 0x58820FA1),
    (CALLER, 0x5884B0CD),
    (CALLER, 0x5884B0F3),
}
UNMATCHED_CALLERS = {0x58820EA0, 0x58820F70}


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


def expected_bodies():
    expected_rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        fresh = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        matches = [body_tuple(row) for row in fresh
                   if int(row["function"], 16) == FUNCTION]
        expected = [(FUNCTION, FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT)]
        if matches != expected:
            raise AssertionError(f"Fresh body export changed in {project}: {matches}")
        expected_rows.update((export, *row) for row in expected)

    actual_rows = {
        (row["export"], *body_tuple(row)) for row in read_tsv(BODY_EXPORTS)
    }
    if actual_rows != expected_rows:
        raise AssertionError("Tracked body rows differ from both fresh Ghidra exports")
    return expected_rows


def expected_edges():
    expected_rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        fresh = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [
            row for row in fresh
            if int(row["function"], 16) == FUNCTION
            or int(row["target"], 16) == FUNCTION
        ]
        if len(selected) != 48:
            raise AssertionError(
                f"Expected 48 outgoing/incoming edge rows in {project}, got {len(selected)}"
            )
        incoming = {
            (int(row["function"], 16), int(row["site"], 16))
            for row in selected if row["kind"] == "CALL"
            and int(row["target"], 16) == FUNCTION
        }
        if incoming != EXPECTED_INCOMING:
            raise AssertionError(f"Fresh incoming callers changed in {project}: {incoming}")
        outgoing = Counter(
            int(row["target"], 16) for row in selected
            if row["kind"] == "CALL" and int(row["function"], 16) == FUNCTION
        )
        if outgoing != EXPECTED_CALL_TARGET_COUNTS:
            raise AssertionError(f"Fresh direct call targets changed in {project}: {outgoing}")
        expected_rows.update((export, *edge_tuple(row)) for row in selected)

    actual_rows = {
        (row["export"], *edge_tuple(row)) for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_rows != expected_rows:
        raise AssertionError("Tracked call edges differ from both fresh Ghidra exports")
    return expected_rows


def decode_range(image, decoder, start, size):
    instructions = list(decoder.disasm(image[start - BASE:start - BASE + size], start))
    if (sum(item.size for item in instructions) != size or not instructions
            or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def verify_matches(image, decoder):
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    addresses = {int(address, 16)
                 for address in MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_ADDRESSES}
    evidence_addresses = {
        int(address, 16) for address in MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_EVIDENCE
    }
    if addresses != {FUNCTION} or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify the one-function slice")

    row = inventory.get(FUNCTION)
    record = records.get(FUNCTION)
    segments = tuple((int(item["address"], 16), int(item["size"]))
                     for item in (record or {}).get("segments", []))
    if (row is None or record is None or FUNCTION not in matched
            or int(row["size"]) != SIZE or int(record["size"]) != SIZE
            or segments != ((FUNCTION, SIZE),)):
        raise AssertionError("The exact 871-byte function record is not verified")

    direct = {}
    indirect_calls = {}
    indirect_jumps = {}
    instructions = decode_range(image, decoder, FUNCTION, SIZE)
    if len(instructions) != INSTRUCTION_COUNT:
        raise AssertionError("Mapped instruction count changed")
    for instruction in instructions:
        if instruction.id == X86_INS_CALL:
            if instruction.operands[0].type == X86_OP_IMM:
                direct[instruction.address] = instruction.operands[0].imm & 0xFFFFFFFF
            else:
                indirect_calls[instruction.address] = instruction.op_str
        elif instruction.id == X86_INS_JMP and instruction.operands[0].type != X86_OP_IMM:
            indirect_jumps[instruction.address] = instruction.op_str

    if indirect_calls or indirect_jumps:
        raise AssertionError(
            f"Unexpected indirect control transfers: calls={indirect_calls}, jumps={indirect_jumps}"
        )
    if Counter(direct.values()) != EXPECTED_CALL_TARGET_COUNTS:
        raise AssertionError(f"Mapped call targets changed: {Counter(direct.values())}")

    edge_rows = read_tsv(EDGE_EXPORTS)
    fresh_direct = {
        int(item["site"], 16): int(item["target"], 16)
        for item in edge_rows if item["export"] == EXPORTS[0]
        and item["kind"] == "CALL" and int(item["function"], 16) == FUNCTION
    }
    if direct != fresh_direct:
        raise AssertionError("Mapped call instructions differ from fresh Ghidra edges")
    targets = set(direct.values())
    if targets - matched:
        raise AssertionError(
            "Direct callees without byte-match records: "
            + ", ".join(f"{target:08X}" for target in sorted(targets - matched))
        )

    incoming_rows = {
        (int(item["function"], 16), int(item["site"], 16), int(item["target"], 16))
        for item in edge_rows if item["export"] == EXPORTS[0]
        and item["kind"] == "CALL" and int(item["target"], 16) == FUNCTION
    }
    expected_calls = {(caller, site, FUNCTION) for caller, site in EXPECTED_INCOMING}
    if incoming_rows != expected_calls:
        raise AssertionError(f"Incoming mapped call edges changed: {incoming_rows}")
    if CALLER not in matched or UNMATCHED_CALLERS & matched:
        raise AssertionError("Matched and unmatched caller boundary changed")
    for caller, site, target in expected_calls:
        call = decode_range(image, decoder, site, 5)
        if (len(call) != 1 or call[0].id != X86_INS_CALL or call[0].size != 5
                or call[0].operands[0].type != X86_OP_IMM
                or call[0].operands[0].imm & 0xFFFFFFFF != target):
            raise AssertionError(f"Mapped caller edge changed at {caller:08X}:{site:08X}")


def verify_range_manifest():
    rows = read_tsv(RANGE_MANIFEST)
    actual = tuple(
        (int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"])) for row in rows
    )
    expected = ((FUNCTION, FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT),)
    if actual != expected:
        raise AssertionError("Tracked body-range manifest differs from fresh Ghidra")


def main():
    if tuple(address.upper() for address in MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_ADDRESSES) != ("5884A820",):
        raise AssertionError("Builder address order changed; review this verifier")
    verify_range_manifest()
    expected_bodies()
    expected_edges()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(IMAGE_PATH.read_bytes(), decoder)
    print(
        "CPannelCommunicatorIDPannel pointer-range update verified: "
        f"{SIZE} bytes / {INSTRUCTION_COUNT} instructions. Both fresh Ghidra "
        "projects and mapped calls agree; all 44 direct calls reach six matched "
        "helpers. The matched input method's two calls and two unmatched "
        "additional callers are checked."
    )


if __name__ == "__main__":
    main()
