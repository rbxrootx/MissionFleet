"""Verify the installed Main.dll state-6 sprite-child setup byte match."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL,
    X86_INS_CMP,
    X86_INS_JMP,
    X86_INS_JNE,
    X86_INS_MOV,
    X86_OP_IMM,
    X86_OP_MEM,
    X86_OP_REG,
    X86_REG_ECX,
    X86_REG_ESI,
)

try:
    from .build_current_main_verifications import (
        MAIN_STATE6_SPRITE_CHILD_SETUP_ADDRESSES,
        MAIN_STATE6_SPRITE_CHILD_SETUP_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_STATE6_SPRITE_CHILD_SETUP_ADDRESSES,
        MAIN_STATE6_SPRITE_CHILD_SETUP_EVIDENCE,
    )

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/current-main-5875cf00-state6-sprite-child-setup-body-ranges.tsv"
TRANSFER_PATH = ROOT / "config/NF2_2026/current-main-5875cf00-state6-sprite-child-setup-transfers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
ROOT_ADDRESS = 0x5875CF00
PARENT_ADDRESS = 0x587E8A40
EVENT_CALLER_ADDRESS = 0x587BB700
EXPECTED_SIZE = 1184
EXPECTED_INSTRUCTIONS = 364
EXPECTED_PARENT_EDGE = ("587E8A40", "587E8B0E", "5875CF00")
EXPECTED_EVENT_EDGE = ("587BB700", "587BC7CB", "587E8A40")
EXPECTED_OUTGOING = {
    ("5875CF55", "5897CC4E"), ("5875CF9E", "58907100"),
    ("5875CFC0", "58902F50"), ("5875CFCD", "58902EE0"),
    ("5875CFD7", "5897CC4E"), ("5875D024", "58907100"),
    ("5875D047", "58902F50"), ("5875D054", "58902EE0"),
    ("5875D05B", "5897CC4E"), ("5875D0AD", "58731C60"),
    ("5875D0BF", "5897CC4E"), ("5875D111", "58731C60"),
    ("5875D12B", "58902D20"), ("5875D138", "58902D20"),
    ("5875D157", "5897CC4E"), ("5875D1C2", "589031A0"),
    ("5875D217", "58902D20"), ("5875D21E", "5897CC4E"),
    ("5875D285", "589031A0"), ("5875D2D9", "58902D20"),
}


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


def instruction_at(image, decoder, address):
    offset = address - BASE
    instruction = next(decoder.disasm(image[offset:offset + 15], address), None)
    if instruction is None or instruction.address != address:
        raise AssertionError(f"No mapped instruction starts at {address:08X}")
    return instruction


def direct_call_target(image, decoder, address):
    instruction = instruction_at(image, decoder, address)
    if (instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM):
        raise AssertionError(f"Expected a direct CALL at {address:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def memory_operand(operand, base_register, displacement):
    return (operand.type == X86_OP_MEM
            and operand.mem.base == base_register
            and operand.mem.disp == displacement)


def main():
    if MAIN_STATE6_SPRITE_CHILD_SETUP_ADDRESSES != ("5875CF00",):
        raise AssertionError("The selected state-6 setup slice changed")
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
    required_matches = {ROOT_ADDRESS, PARENT_ADDRESS, EVENT_CALLER_ADDRESS}
    if not required_matches.issubset(matched):
        raise AssertionError(
            f"The setup, parent, or event caller is unmatched: "
            f"{sorted(required_matches - matched)}"
        )
    parent = records[PARENT_ADDRESS]
    event_caller = records[EVENT_CALLER_ADDRESS]
    if not any(start <= 0x587E8B0E < start + size
               for start, size in record_ranges(parent)):
        raise AssertionError("The matched parent body omits the setup call")
    if not any(start <= 0x587BC7CB < start + size
               for start, size in record_ranges(event_caller)):
        raise AssertionError("The matched event caller omits the parent call")

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
    expected_outgoing = {
        (f"{ROOT_ADDRESS:08X}", site, target)
        for site, target in EXPECTED_OUTGOING
    }
    if (len(edge_tuples) != 21 or incoming != {EXPECTED_PARENT_EDGE}
            or outgoing != expected_outgoing):
        raise AssertionError(
            f"Unexpected Ghidra transfer boundary: {len(incoming)} incoming, "
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
        raise AssertionError("Mapped direct calls differ from Ghidra's 20 outgoing edges")

    for source, site, target in edge_tuples:
        source_address = int(source, 16)
        site_address = int(site, 16)
        target_address = int(target, 16)
        if source_address not in inventory or target_address not in inventory:
            raise AssertionError(f"Transfer endpoint is absent from Main.dll inventory: {source} -> {target}")
        if direct_call_target(image, decoder, site_address) != target_address:
            raise AssertionError(f"Mapped CALL differs from Ghidra transfer at {site}")
        if source_address == ROOT_ADDRESS and target_address not in matched:
            raise AssertionError(f"Unresolved open callee at {site}: {target}")

    event_call = direct_call_target(image, decoder, 0x587BC7CB)
    if event_call != PARENT_ADDRESS:
        raise AssertionError("The matched event route no longer calls the parent at 0x587BC7CB")
    guard = instruction_at(image, decoder, 0x587E8AFE)
    if (guard.id != X86_INS_CMP or len(guard.operands) != 2
            or not memory_operand(guard.operands[0], X86_REG_ESI, 0x105F0)
            or guard.operands[1].type != X86_OP_IMM
            or guard.operands[1].imm != 6):
        raise AssertionError("The parent mode-6 compare differs from the audited Ghidra path")
    branch = instruction_at(image, decoder, 0x587E8B06)
    if (branch.id != X86_INS_JNE or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != 0x587E8B13):
        raise AssertionError("The parent no longer gates setup on mode 6")
    receiver = instruction_at(image, decoder, 0x587E8B08)
    if (receiver.id != X86_INS_MOV or len(receiver.operands) != 2
            or receiver.operands[0].type != X86_OP_REG
            or receiver.operands[0].reg != X86_REG_ECX
            or not memory_operand(receiver.operands[1], X86_REG_ESI, 0x21F08)):
        raise AssertionError("The mode-6 call receiver load differs from the mapped client")

    expected_evidence = MAIN_STATE6_SPRITE_CHILD_SETUP_EVIDENCE["5875CF00"]
    if records[ROOT_ADDRESS].get("evidence") != expected_evidence:
        raise AssertionError("The catalog evidence differs from the reviewed subsystem record")
    print(
        "PASS state-6 sprite child setup: 1 byte-identical function / 1,184 bytes; "
        "364 decoded instructions; matched 0x80000500 caller chain; "
        "20 direct callees verified against Ghidra transfers."
    )


if __name__ == "__main__":
    main()
