"""Verify the installed Main.dll CPannelCommunicatorMemo constructor match."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_ADDRESSES,
        MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_ADDRESSES,
        MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_EVIDENCE,
    )

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/current-main-5884b8a0-communicator-memo-body-ranges.tsv"
TRANSFER_PATH = ROOT / "config/NF2_2026/current-main-5884b8a0-communicator-memo-transfers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
ROOT_ADDRESS = 0x5884B8A0
PARENT_ADDRESS = 0x5883F4C0
EXPECTED_SIZE = 1081
EXPECTED_INSTRUCTIONS = 340


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


def transfer_target(image, decoder, site):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
    if (instruction is None or instruction.address != site
            or instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM):
        raise AssertionError(f"Expected a direct CALL at {site:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def main():
    if MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_ADDRESSES != ("5884B8A0",):
        raise AssertionError("The selected communicator-memo slice changed")
    manifest = read_tsv(RANGE_PATH)
    if len(manifest) != 1:
        raise AssertionError("Expected exactly one Ghidra body range")
    row = manifest[0]
    if (int(row["function"], 16) != ROOT_ADDRESS
            or int(row["start"], 16) != ROOT_ADDRESS
            or int(row["length"]) != EXPECTED_SIZE
            or int(row["instruction_bytes"]) != EXPECTED_SIZE
            or int(row["instruction_count"]) != EXPECTED_INSTRUCTIONS):
        raise AssertionError(f"Unexpected or incomplete Ghidra body range: {row}")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    code = image[ROOT_ADDRESS - BASE:ROOT_ADDRESS - BASE + EXPECTED_SIZE]
    instructions = list(decoder.disasm(code, ROOT_ADDRESS))
    if (len(code) != EXPECTED_SIZE or len(instructions) != EXPECTED_INSTRUCTIONS
            or sum(item.size for item in instructions) != EXPECTED_SIZE
            or not instructions or instructions[0].address != ROOT_ADDRESS
            or instructions[-1].address + instructions[-1].size
            != ROOT_ADDRESS + EXPECTED_SIZE):
        raise AssertionError("Capstone does not cover the exact mapped body")

    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(item["address"], 16): item
            for item in csv.DictReader(stream, delimiter="\t")
            if item["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    if ROOT_ADDRESS not in matched or PARENT_ADDRESS not in matched:
        raise AssertionError("The constructor or its matched caller is not verified")
    parent = records[PARENT_ADDRESS]
    if not any(start <= 0x588403F3 < start + size
               for start, size in record_ranges(parent)):
        raise AssertionError("The parent match does not contain the constructor call")

    edges = read_tsv(TRANSFER_PATH)
    if any(edge["kind"] != "CALL" or edge["type"] != "UNCONDITIONAL_CALL"
           for edge in edges):
        raise AssertionError("The Ghidra transfer manifest contains a non-call edge")
    edge_tuples = {
        (edge["function"].upper(), edge["site"].upper(),
         edge["target_function"].upper())
        for edge in edges
    }
    incoming = {edge for edge in edge_tuples if edge[2] == f"{ROOT_ADDRESS:08X}"
                and edge[0] != f"{ROOT_ADDRESS:08X}"}
    outgoing = {edge for edge in edge_tuples if edge[0] == f"{ROOT_ADDRESS:08X}"}
    expected_incoming = {("5883F4C0", "588403F3", "5884B8A0")}
    if len(edge_tuples) != 27 or incoming != expected_incoming or len(outgoing) != 26:
        raise AssertionError(
            f"Unexpected Ghidra call boundary: {len(incoming)} incoming, "
            f"{len(outgoing)} outgoing"
        )

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
    if actual_outgoing != outgoing:
        raise AssertionError("Mapped direct calls differ from Ghidra's 26 outgoing edges")

    for source, site, target in edge_tuples:
        source_address = int(source, 16)
        site_address = int(site, 16)
        target_address = int(target, 16)
        if source_address not in inventory or target_address not in inventory:
            raise AssertionError(f"Transfer endpoint is absent from Main.dll inventory: {source} -> {target}")
        if transfer_target(image, decoder, site_address) != target_address:
            raise AssertionError(f"Mapped CALL differs from Ghidra transfer at {site}")
        if source_address == ROOT_ADDRESS and target_address not in matched:
            raise AssertionError(f"Unresolved open callee at {site}: {target}")

    expected_evidence = MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_EVIDENCE["5884B8A0"]
    record = records[ROOT_ADDRESS]
    if record.get("evidence") != expected_evidence:
        raise AssertionError("The match catalog evidence differs from the audited record")

    print(
        "PASS CPannelCommunicatorMemo: 1 byte-identical function / 1,081 bytes; "
        "340 decoded instructions; 1 matched constructor caller; "
        "26 direct callees verified against Ghidra transfers."
    )


if __name__ == "__main__":
    main()
