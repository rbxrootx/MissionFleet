"""Verify the escort-cargo message builder and its accessor against Ghidra evidence."""
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
    X86_REG_INVALID,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
BODY_MANIFEST = ROOT / "config/NF2_2026/current-main-escort-cargo-body-exports.tsv"
EDGE_MANIFEST = ROOT / "config/NF2_2026/current-main-escort-cargo-call-edges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

BUILDER = 0x587BACC0
FIELD_ACCESSOR = 0x587B4470
MATCHED_CALLER = 0x587F2DD0
EXPECTED_BODIES = {
    BUILDER: (BUILDER, 636, 200),
    FIELD_ACCESSOR: (FIELD_ACCESSOR, 7, 2),
}
EXPECTED_DIRECT_CALLS = {
    0x587BACF0: 0x5897CC48,
    0x587BAD89: 0x588F4060,
    0x587BAD90: 0x588E9590,
    0x587BADA7: FIELD_ACCESSOR,
    0x587BADCF: 0x588F4060,
    0x587BADD6: 0x588E9590,
    0x587BAE72: 0x588F4060,
    0x587BAE79: 0x588E9590,
    0x587BAF1C: 0x58970C70,
    0x587BAF2E: 0x5897CBDA,
}
EXPECTED_INDIRECT_CALLS = {
    0x587BAE38: ("memory", 0x5898C3C4),
    0x587BAE46: ("memory", 0x5898C178),
    0x587BAEAB: ("register", "ebp"),
    0x587BAEB2: ("register", "ebp"),
    0x587BAED6: ("memory", 0x5898C3C4),
    0x587BAEE7: ("register", "ebp"),
    0x587BAEF4: ("register", "ebp"),
    0x587BAF04: ("register", "ebp"),
}
EXPECTED_CALL_EDGES = {
    (BUILDER, site, target)
    for site, target in EXPECTED_DIRECT_CALLS.items()
} | {
    (MATCHED_CALLER, 0x587F499B, FIELD_ACCESSOR),
    (MATCHED_CALLER, 0x587F5304, BUILDER),
}
EXPECTED_EXPORTS = {"58758EE0", "587CEF70"}
MATCHED_BOUNDARY = {
    MATCHED_CALLER,
    0x5897CC48,
    0x588F4060,
    0x588E9590,
    0x58970C70,
    0x5897CBDA,
}
MATCH_CANDIDATES = {
    BUILDER: "src/client-current/Main/FUN_587bacc0.cpp",
    FIELD_ACCESSOR: "src/client-current/Main/FUN_587b4470.cpp",
}


def read_manifests():
    ranges_by_export = defaultdict(dict)
    with BODY_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            address = int(row["function"], 16)
            if address not in EXPECTED_BODIES:
                raise AssertionError(f"Unexpected Ghidra body in manifest: {row}")
            body = (
                int(row["start"], 16),
                int(row["length"]),
                int(row["instruction_count"]),
            )
            if int(row["instruction_bytes"]) != body[1]:
                raise AssertionError(f"Incomplete Ghidra body coverage: {row}")
            if address in ranges_by_export[export]:
                raise AssertionError(f"Duplicate Ghidra body row: {row}")
            ranges_by_export[export][address] = body
    if set(ranges_by_export) != EXPECTED_EXPORTS:
        raise AssertionError("Expected two independent fresh Ghidra body exports")
    if any(rows != EXPECTED_BODIES for rows in ranges_by_export.values()):
        raise AssertionError("Ghidra body ranges or instruction counts changed")
    if ranges_by_export["58758EE0"] != ranges_by_export["587CEF70"]:
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
    if edges_by_export["58758EE0"] != EXPECTED_CALL_EDGES:
        raise AssertionError("Builder direct calls or matched caller edges changed")


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


def verify_direct_call(image, decoder, site, target):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 5], site, count=1), None)
    if instruction is None or instruction.id != X86_INS_CALL:
        raise AssertionError(f"Mapped call site is not a CALL: {site:08X}")
    if instruction.size != 5 or instruction.operands[0].type != X86_OP_IMM:
        raise AssertionError(f"Mapped transfer is not a five-byte direct call: {site:08X}")
    if instruction.operands[0].imm & 0xFFFFFFFF != target:
        raise AssertionError(f"Mapped call target changed at {site:08X}")


def immediate(instruction):
    if instruction.id != X86_INS_PUSH or instruction.operands[0].type != X86_OP_IMM:
        raise AssertionError(f"Expected immediate push at {instruction.address:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def main():
    read_manifests()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True

    body_instructions = {}
    for address, (_, size, instruction_count) in EXPECTED_BODIES.items():
        code = image[address - BASE:address - BASE + size]
        instructions = list(decoder.disasm(code, address))
        if (
            sum(instruction.size for instruction in instructions) != size
            or len(instructions) != instruction_count
            or instructions[-1].address + instructions[-1].size != address + size
        ):
            raise AssertionError(f"Mapped instruction coverage disagrees at {address:08X}")
        body_instructions[address] = instructions

    builder_instructions = body_instructions[BUILDER]
    mapped_direct_calls = {
        instruction.address: instruction.operands[0].imm & 0xFFFFFFFF
        for instruction in builder_instructions
        if instruction.id == X86_INS_CALL
        and instruction.operands
        and instruction.operands[0].type == X86_OP_IMM
    }
    if mapped_direct_calls != EXPECTED_DIRECT_CALLS:
        raise AssertionError("Mapped builder calls disagree with fresh Ghidra edges")

    mapped_indirect_calls = {}
    for instruction in builder_instructions:
        if instruction.id != X86_INS_CALL or not instruction.operands:
            continue
        operand = instruction.operands[0]
        if operand.type == X86_OP_MEM:
            mem = operand.mem
            if mem.base != X86_REG_INVALID or mem.index != X86_REG_INVALID:
                raise AssertionError("Unexpected based-memory indirect call")
            mapped_indirect_calls[instruction.address] = (
                "memory",
                mem.disp & 0xFFFFFFFF,
            )
        elif operand.type == X86_OP_REG:
            mapped_indirect_calls[instruction.address] = (
                "register",
                decoder.reg_name(operand.reg),
            )
    if mapped_indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError("Mapped indirect-call sites or targets changed")
    if sum(instruction.id == X86_INS_CALL for instruction in builder_instructions) != (
        len(EXPECTED_DIRECT_CALLS) + len(EXPECTED_INDIRECT_CALLS)
    ):
        raise AssertionError("Unexpected call instruction in the builder body")

    by_address = {instruction.address: instruction for instruction in builder_instructions}
    load_ebp = by_address.get(0x587BAEA0)
    if (
        load_ebp is None
        or load_ebp.id != X86_INS_MOV
        or load_ebp.operands[0].type != X86_OP_REG
        or decoder.reg_name(load_ebp.operands[0].reg) != "ebp"
        or load_ebp.operands[1].type != X86_OP_MEM
        or load_ebp.operands[1].mem.disp & 0xFFFFFFFF != 0x5898C178
    ):
        raise AssertionError("EBP indirect callbacks no longer load from 0x5898C178")

    if immediate(by_address[0x587BAEAD]) != 0x5899A330:
        raise AssertionError("The cargo message text argument changed")
    if immediate(by_address[0x587BAF0C]) != 0x40:
        raise AssertionError("The submitted payload length changed")
    if immediate(by_address[0x587BAF17]) != 0x8002F007:
        raise AssertionError("The submitted message identifier changed")
    message_text = b"Send Escort Ship Cargo\n\n\0"
    message_region = image[0x5899A330 - BASE:0x5899A330 - BASE + 0x80]
    if message_text not in message_region:
        raise AssertionError("The mapped cargo message string changed")

    inventory, records = load_catalog()
    for address in set(MATCHED_BOUNDARY) | set(EXPECTED_BODIES):
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Required byte-matched boundary is missing: {address:08X}")
    for address, expected in ((BUILDER, "636"), (FIELD_ACCESSOR, "7")):
        if inventory.get(address, {}).get("size") != expected:
            raise AssertionError(f"Unexpected inventory size at {address:08X}")
        if records[address].get("source") != MATCH_CANDIDATES[address]:
            raise AssertionError(f"Catalog points to a different source at {address:08X}")

    for site, target in EXPECTED_CALLS_FROM_MATCHED_CALLER:
        verify_direct_call(image, decoder, site, target)

    print(
        "Verified escort-cargo closure: 2 functions / 643 bytes / 202 instructions; "
        "10 direct and 8 indirect builder calls, two fresh Ghidra exports, matched "
        "caller paths, message ID 0x8002F007, and payload length 0x40."
    )


EXPECTED_CALLS_FROM_MATCHED_CALLER = (
    (0x587F499B, FIELD_ACCESSOR),
    (0x587F5304, BUILDER),
)


if __name__ == "__main__":
    main()
