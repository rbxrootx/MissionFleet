"""Verify the bounded child-flag low-nibble helper against Ghidra and Main.dll."""
import csv
import json
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_MOV, X86_INS_PUSH, X86_INS_RET, X86_OP_IMM,
    X86_OP_MEM, X86_OP_REG, X86_REG_EAX, X86_REG_EBX, X86_REG_ECX,
    X86_REG_DX, X86_REG_EDI, X86_REG_ESI, X86_REG_INVALID,
)

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x587A6E90
BODY = (FUNCTION, 194, 71)
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-587a6e90-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-587a6e90-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
EXPECTED_CALLERS = {
    "588deb30": (0x588DF024, 0x588DF023, 0x588DF018, 0x588DF01D),
    "588dffb0": (0x588E0046, 0x588E0044, 0x588E0039, 0x588E003E),
}
GLOBAL_CONTEXT = 0x58A2459C
CONTEXT_CHILD_OFFSET = 0x20C9C


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def contains(ranges, address):
    return any(start <= address < start + size for start, size in ranges)


def instruction_at(image, decoder, address):
    offset = address - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"Instruction address is outside mapped image: {address:08X}")
    insn = next(decoder.disasm(image[offset:offset + 15], address), None)
    if insn is None:
        raise AssertionError(f"Could not decode mapped instruction at {address:08X}")
    return insn


def require_reg_mem_move(insn, destination, base, displacement):
    if (insn.id != X86_INS_MOV or len(insn.operands) != 2
            or insn.operands[0].type != X86_OP_REG
            or insn.operands[0].reg != destination
            or insn.operands[1].type != X86_OP_MEM
            or insn.operands[1].mem.base != base
            or insn.operands[1].mem.index != X86_REG_INVALID
            or insn.operands[1].mem.disp != displacement):
        raise AssertionError(f"Unexpected receiver-load instruction: {insn}")


def verify_exports():
    rows = read_tsv(BODY_EXPORTS)
    if len(rows) != 2:
        raise AssertionError("Expected two independent fresh Ghidra body exports")
    for row in rows:
        actual = (
            int(row["function"], 16), int(row["start"], 16),
            int(row["length"]), int(row["instruction_bytes"]),
            int(row["instruction_count"]),
        )
        if actual != (FUNCTION, FUNCTION, BODY[1], BODY[1], BODY[2]):
            raise AssertionError(f"Fresh Ghidra body extent changed: {row}")
    if {row["export"] for row in rows} != {"58758ee0-fresh", "587cef70-fresh"}:
        raise AssertionError("The two independent Ghidra project exports changed")

    edges = read_tsv(EDGE_EXPORTS)
    expected = {
        (export, "CALL", caller, f"{site:08x}", "587a6e90", "UNCONDITIONAL_CALL")
        for export in ("58758ee0-fresh", "587cef70-fresh")
        for caller, (site, _, _, _) in EXPECTED_CALLERS.items()
    }
    actual = {
        (row["export"], row["kind"], row["function"], row["site"].lower(),
         row["target"], row["type"])
        for row in edges
    }
    if actual != expected:
        raise AssertionError(f"Fresh Ghidra incoming-call edges changed: {actual}")


def verify_body(image, decoder):
    start, size, expected_count = BODY
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (len(code) != size or len(instructions) != expected_count
            or sum(insn.size for insn in instructions) != size
            or not instructions or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError("Mapped instruction coverage differs from fresh Ghidra")
    if any(insn.id == X86_INS_CALL for insn in instructions):
        raise AssertionError("The helper unexpectedly gained an outgoing call")
    for insn in instructions:
        if insn.group(CS_GRP_JUMP):
            if (not insn.operands or insn.operands[0].type != X86_OP_IMM
                    or not start <= (insn.operands[0].imm & 0xFFFFFFFF) < start + size):
                raise AssertionError(f"Control flow leaves the helper body: {insn}")

    child_word_stores = [
        insn for insn in instructions
        if (insn.id == X86_INS_MOV and len(insn.operands) == 2
            and insn.operands[0].type == X86_OP_MEM
            and insn.operands[0].size == 2
            and insn.operands[0].mem.base == X86_REG_EAX
            and insn.operands[0].mem.disp == 0x24
            and insn.operands[1].type == X86_OP_REG
            and insn.operands[1].reg == X86_REG_DX)
    ]
    if len(child_word_stores) != 4:
        raise AssertionError("Expected four child+0x24 writes inside the 8x4 loop")
    if sum(insn.mnemonic == "sbb" and insn.op_str == "dl, dl"
           for insn in instructions) != 4:
        raise AssertionError("The per-child argument-equality transform changed")
    if sum(insn.mnemonic == "and" and insn.op_str == "bx, bp"
           for insn in instructions) != 4:
        raise AssertionError("The per-child upper-bit preservation changed")
    if sum(insn.mnemonic == "or" and insn.op_str == "dx, bx"
           for insn in instructions) != 4:
        raise AssertionError("The per-child low-nibble merge changed")
    if sum(insn.mnemonic == "add" and insn.op_str == "esi, 0x10"
           for insn in instructions) != 1:
        raise AssertionError("The four-pointer group stride changed")
    if not any(insn.mnemonic == "mov" and insn.op_str == "edi, 8"
               for insn in instructions):
        raise AssertionError("The helper no longer iterates eight groups")

    last = instructions[-1]
    if (last.id != X86_INS_RET or len(last.operands) != 1
            or last.operands[0].type != X86_OP_IMM
            or last.operands[0].imm != 4):
        raise AssertionError("The helper ABI no longer ends in ret 4")
    return instructions


def verify_callers(image, decoder, records, matched):
    for caller_name, (call_site, push_site, global_load, receiver_load) in EXPECTED_CALLERS.items():
        caller = int(caller_name, 16)
        record = records.get(caller)
        if record is None or caller not in matched:
            raise AssertionError(f"Incoming caller {caller_name} is not byte-matched")
        ranges = record_ranges(record)
        for site in (call_site, push_site, global_load, receiver_load):
            if not contains(ranges, site):
                raise AssertionError(f"Caller evidence {site:08X} is outside matched code")

        call = instruction_at(image, decoder, call_site)
        if (call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
            raise AssertionError(f"Incoming target changed at {call_site:08X}")
        push = instruction_at(image, decoder, push_site)
        if push.id != X86_INS_PUSH or push.address + push.size != call_site:
            raise AssertionError(f"Argument push changed at {push_site:08X}")
        if caller_name == "588dffb0":
            if (len(push.operands) != 1 or push.operands[0].type != X86_OP_IMM
                    or push.operands[0].imm != 1):
                raise AssertionError("Transition caller no longer passes argument 1")
        else:
            if (len(push.operands) != 1 or push.operands[0].type != X86_OP_REG
                    or push.operands[0].reg != X86_REG_EBX):
                raise AssertionError("Ship-map caller no longer passes EBX")
            zero = instruction_at(image, decoder, 0x588DEEDE)
            if zero.mnemonic != "xor" or zero.op_str != "ebx, ebx":
                raise AssertionError("Ship-map caller's EBX zero initialization changed")
            init_to_push = image[zero.address + zero.size - BASE:push_site - BASE]
            intervening = list(decoder.disasm(init_to_push, zero.address + zero.size))
            if (not intervening or intervening[-1].address + intervening[-1].size != push_site
                    or sum(insn.size for insn in intervening) != len(init_to_push)):
                raise AssertionError("Could not decode EBX initialization-to-call path")
            for insn in intervening:
                _, writes = insn.regs_access()
                if insn.id != X86_INS_CALL and X86_REG_EBX in writes:
                    raise AssertionError(f"EBX is overwritten before the call: {insn}")

        absolute_load = instruction_at(image, decoder, global_load)
        require_reg_mem_move(absolute_load, X86_REG_EAX, X86_REG_INVALID, GLOBAL_CONTEXT)
        child_load = instruction_at(image, decoder, receiver_load)
        require_reg_mem_move(child_load, X86_REG_ECX, X86_REG_EAX, CONTEXT_CHILD_OFFSET)


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    if FUNCTION not in inventory or inventory[FUNCTION]["size"] != str(BODY[1]):
        raise AssertionError("Installed-client function inventory differs from Ghidra")
    record = records.get(FUNCTION)
    if record is None or FUNCTION not in matched:
        raise AssertionError("The child-flag helper is not byte-verified")
    if record_ranges(record) != ((FUNCTION, BODY[1]),):
        raise AssertionError("Catalog body range differs from the Ghidra exports")

    verify_body(image, decoder)
    verify_callers(image, decoder, records, matched)
    print(
        "FUN_587A6E90 child-flag low-nibble helper: 194 bytes / 71 instructions "
        "match both fresh Ghidra body exports; no outgoing calls; both incoming "
        "callers are byte-matched and pass the same receiver with arguments 0 and 1"
    )


if __name__ == "__main__":
    main()
