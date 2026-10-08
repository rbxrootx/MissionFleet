"""Verify the byte-matched data-file aggregation call closure against Ghidra."""
import csv
import json
from collections import defaultdict
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL,
    X86_INS_MOV,
    X86_INS_PUSH,
    X86_OP_IMM,
    X86_OP_MEM,
    X86_OP_REG,
    X86_REG_EAX,
    X86_REG_ECX,
    X86_REG_ESI,
    X86_REG_INVALID,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
BODY_MANIFEST = ROOT / "config/NF2_2026/current-main-data-file-aggregate-body-exports.tsv"
EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-data-file-aggregate-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

AGGREGATOR = 0x58779500
BYTE_ACCUMULATOR = 0x587793C0
MATCHED_CALLER = 0x587F2DD0
CALLER_SITE = 0x587F50E1
CALLER_INPUT_LOAD = 0x587F50DB
CALLER_RESULT_STORE = 0x587F5104
EXPECTED_BODIES = {
    AGGREGATOR: (AGGREGATOR, 626, 188),
    BYTE_ACCUMULATOR: (BYTE_ACCUMULATOR, 319, 107),
}
EXPECTED_FILE_ARGUMENTS = {
    0x58779526: (0x5898D82C, "Armor.Data"),
    0x58779555: (0x58996584, "Hmbpd.Data"),
    0x58779584: (0x5898D838, "Aircraft.Data"),
    0x587795AD: (0x5898D89C, "Location.Data"),
    0x587795D6: (0x5898D884, "FCS.Data"),
    0x58779605: (0x589965BC, "SpecialItem.Data"),
    0x58779634: (0x5898D848, "Torpedo.Data"),
    0x58779663: (0x5898D868, "TpLauncher.Data"),
    0x5877968C: (0x5898D890, "Engine.Data"),
    0x587796BB: (0x5898D858, "Projectile.Data"),
    0x587796E4: (0x5898D878, "GunSet.Data"),
    0x5877970D: (0x5898D8AC, "Frame.Data"),
    0x5877973C: (0x58996530, "ShipReinforceItem.Data"),
    0x58779768: (0x58996574, "ForceInfo.Data"),
}
EXPECTED_CALLS = {
    (AGGREGATOR, site, BYTE_ACCUMULATOR)
    for site in EXPECTED_FILE_ARGUMENTS
} | {(MATCHED_CALLER, CALLER_SITE, AGGREGATOR)}
EXPECTED_EXPORTS = {"58758EE0", "587CEF70"}
MATCH_CANDIDATES = {
    AGGREGATOR: "src/client-current/Main/FUN_58779500.cpp",
    BYTE_ACCUMULATOR: "src/client-current/Main/FUN_587793c0.cpp",
}


def read_manifests():
    bodies_by_export = defaultdict(dict)
    with BODY_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            address = int(row["function"], 16)
            if address not in EXPECTED_BODIES:
                raise AssertionError(f"Unexpected function body in manifest: {row}")
            body = (
                int(row["start"], 16),
                int(row["length"]),
                int(row["instruction_count"]),
            )
            if int(row["instruction_bytes"]) != body[1]:
                raise AssertionError(f"Incomplete Ghidra body coverage: {row}")
            if address in bodies_by_export[export]:
                raise AssertionError(f"Duplicate Ghidra body row: {row}")
            bodies_by_export[export][address] = body
    if set(bodies_by_export) != EXPECTED_EXPORTS:
        raise AssertionError("Expected two independent fresh Ghidra body exports")
    if any(rows != EXPECTED_BODIES for rows in bodies_by_export.values()):
        raise AssertionError("Ghidra body ranges or instruction counts changed")
    if bodies_by_export["58758EE0"] != bodies_by_export["587CEF70"]:
        raise AssertionError("Independent fresh Ghidra body exports disagree")

    edges_by_export = defaultdict(set)
    with EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if row["kind"] != "CALL":
                continue
            edges_by_export[export].add(
                (
                    int(row["function"], 16),
                    int(row["site"], 16),
                    int(row["target"], 16),
                )
            )
    if set(edges_by_export) != EXPECTED_EXPORTS:
        raise AssertionError("Expected two independent fresh Ghidra call-edge exports")
    if edges_by_export["58758EE0"] != edges_by_export["587CEF70"]:
        raise AssertionError("Independent fresh Ghidra call-edge exports disagree")
    if edges_by_export["58758EE0"] != EXPECTED_CALLS:
        raise AssertionError("The 14 helper calls or matched caller edge changed")


def decode_body(image, decoder, address, size, instruction_count):
    code = image[address - BASE:address - BASE + size]
    instructions = list(decoder.disasm(code, address))
    if (
        sum(instruction.size for instruction in instructions) != size
        or len(instructions) != instruction_count
        or instructions[-1].address + instructions[-1].size != address + size
    ):
        raise AssertionError(f"Mapped instruction coverage changed at {address:08X}")
    return instructions


def verify_direct_call(image, decoder, site, target):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 5], site, count=1), None)
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or instruction.size != 5
        or instruction.operands[0].type != X86_OP_IMM
        or instruction.operands[0].imm & 0xFFFFFFFF != target
    ):
        raise AssertionError(f"Mapped direct call changed at {site:08X}")


def verify_file_pointer(image, address, expected):
    offset = address - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"Mapped data pointer is outside Main.dll: {address:08X}")
    value = image[offset:offset + 128].split(b"\0", 1)[0]
    if value.decode("ascii", errors="strict") != expected:
        raise AssertionError(f"Mapped data literal changed at {address:08X}")


def load_catalog():
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    return inventory, records


def verify_caller_store(image, decoder):
    load = next(
        decoder.disasm(image[CALLER_INPUT_LOAD - BASE:CALLER_INPUT_LOAD - BASE + 6], CALLER_INPUT_LOAD, count=1),
        None,
    )
    if (
        load is None
        or load.id != X86_INS_MOV
        or load.operands[0].type != X86_OP_REG
        or load.operands[0].reg != X86_REG_ECX
        or load.operands[1].type != X86_OP_MEM
        or load.operands[1].mem.base != X86_REG_INVALID
        or load.operands[1].mem.index != X86_REG_INVALID
        or load.operands[1].mem.disp & 0xFFFFFFFF != 0x58A2481C
    ):
        raise AssertionError("Matched caller's fastcall receiver load changed")

    store = next(
        decoder.disasm(image[CALLER_RESULT_STORE - BASE:CALLER_RESULT_STORE - BASE + 6], CALLER_RESULT_STORE, count=1),
        None,
    )
    if (
        store is None
        or store.id != X86_INS_MOV
        or store.operands[0].type != X86_OP_MEM
        or store.operands[0].size != 4
        or store.operands[0].mem.base != X86_REG_ESI
        or store.operands[0].mem.index != X86_REG_INVALID
        or store.operands[0].mem.disp != 0x108EC
        or store.operands[1].type != X86_OP_REG
        or store.operands[1].reg != X86_REG_EAX
    ):
        raise AssertionError("Matched caller no longer stores EAX at +0x108EC")


def main():
    read_manifests()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True

    aggregator = decode_body(image, decoder, AGGREGATOR, 626, 188)
    accumulator = decode_body(image, decoder, BYTE_ACCUMULATOR, 319, 107)
    mapped_calls = {}
    for instruction in aggregator + accumulator:
        if instruction.id != X86_INS_CALL:
            continue
        if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
            raise AssertionError("Unexpected indirect call in the selected closure")
        mapped_calls[instruction.address] = instruction.operands[0].imm & 0xFFFFFFFF
    expected_mapped_calls = {
        site: BYTE_ACCUMULATOR for site in EXPECTED_FILE_ARGUMENTS
    }
    if mapped_calls != expected_mapped_calls:
        raise AssertionError("Mapped helper calls disagree with the Ghidra closure")

    by_address = {instruction.address: (index, instruction) for index, instruction in enumerate(aggregator)}
    for site, (string_address, file_name) in EXPECTED_FILE_ARGUMENTS.items():
        index, call = by_address[site]
        verify_file_pointer(image, string_address, file_name)
        stack_window = aggregator[max(0, index - 8):index]
        if not any(
            instruction.id == X86_INS_PUSH
            and instruction.operands
            and instruction.operands[0].type == X86_OP_IMM
            and instruction.operands[0].imm & 0xFFFFFFFF == string_address
            for instruction in stack_window
        ):
            raise AssertionError(f"{file_name} is no longer passed at {site:08X}")
        verify_direct_call(image, decoder, site, BYTE_ACCUMULATOR)
    verify_direct_call(image, decoder, CALLER_SITE, AGGREGATOR)
    verify_caller_store(image, decoder)

    inventory, records = load_catalog()
    for address, expected_size in ((AGGREGATOR, "626"), (BYTE_ACCUMULATOR, "319")):
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-identical match at {address:08X}")
        if inventory.get(address, {}).get("size") != expected_size:
            raise AssertionError(f"Unexpected inventory size at {address:08X}")
        if record.get("source") != MATCH_CANDIDATES[address]:
            raise AssertionError(f"Catalog points to another source at {address:08X}")
    caller_record = records.get(MATCHED_CALLER)
    if caller_record is None or caller_record.get("verified_by") != MARKER:
        raise AssertionError("The matched data-aggregate caller is not byte-verified")

    print(
        "Verified data-file aggregate closure: 2 functions / 945 bytes / "
        "295 instructions; 14 named data-file inputs, two fresh Ghidra exports, "
        "matched caller store at +0x108EC, and no indirect calls."
    )


if __name__ == "__main__":
    main()
