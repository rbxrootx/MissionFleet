"""Verify the CPannelFireControl child bit-one updater against Main.dll."""
import csv
import json
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import (
    X86_INS_AND, X86_INS_CALL, X86_INS_JMP, X86_INS_MOV, X86_INS_OR,
    X86_INS_JE, X86_INS_PUSH, X86_INS_RET, X86_INS_TEST, X86_OP_IMM, X86_OP_MEM,
    X86_OP_REG, X86_REG_EAX, X86_REG_EBX, X86_REG_ECX, X86_REG_INVALID,
)

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58854300
BODY = (FUNCTION, 131, 33)
HELPER = 0x588542A0
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-58854300-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-58854300-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
GLOBAL_PANEL = 0x58A245C4
CALLSITES = (
    (0x587F21E0, 0x587F2562, 0x587F2560, 0x587F255A, 1),
    (0x587F21E0, 0x587F27ED, 0x587F27EB, 0x587F27E5, 1),
    (0x588DEB30, 0x588DF0A5, 0x588DF0A4, 0x588DF09E, 0),
)
PANEL_CONSTRUCTOR = (0x5878AF40, 0x5878C7DD, 0x58854A00)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def contains(ranges, address):
    return any(start <= address < start + size for start, size in ranges)


def instruction_at(image, decoder, address):
    offset = address - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"Instruction is outside mapped Main.dll: {address:08X}")
    insn = next(decoder.disasm(image[offset:offset + 15], address), None)
    if insn is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return insn


def verify_fresh_exports():
    body_rows = read_tsv(BODY_EXPORTS)
    if len(body_rows) != 2:
        raise AssertionError("Expected two independent fresh Ghidra body exports")
    for row in body_rows:
        actual = (
            int(row["function"], 16), int(row["start"], 16),
            int(row["length"]), int(row["instruction_bytes"]),
            int(row["instruction_count"]),
        )
        if actual != (FUNCTION, FUNCTION, BODY[1], BODY[1], BODY[2]):
            raise AssertionError(f"Fresh Ghidra body extent changed: {row}")
    if {row["export"] for row in body_rows} != {"58758ee0-fresh", "587cef70-fresh"}:
        raise AssertionError("Fresh Ghidra project exports changed")

    expected = {
        (export, "CALL", f"{caller:08x}", f"{site:08x}", f"{target:08x}",
         "UNCONDITIONAL_CALL")
        for export in ("58758ee0-fresh", "587cef70-fresh")
        for caller, site, target in (
            (0x587F21E0, 0x587F2562, FUNCTION),
            (0x587F21E0, 0x587F27ED, FUNCTION),
            (0x588DEB30, 0x588DF0A5, FUNCTION),
            (FUNCTION, 0x58854313, HELPER),
            (FUNCTION, 0x5885434D, HELPER),
        )
    }
    actual = {
        (row["export"], row["kind"], row["function"].lower(),
         row["site"].lower(), row["target"].lower(), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual != expected:
        raise AssertionError(f"Fresh Ghidra call edges changed: {actual}")


def verify_body(image, decoder, matched):
    start, size, count = BODY
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (len(code) != size or len(instructions) != count
            or sum(insn.size for insn in instructions) != size
            or not instructions or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError("Mapped body coverage differs from fresh Ghidra")
    for insn in instructions:
        if insn.group(CS_GRP_JUMP):
            if (not insn.operands or insn.operands[0].type != X86_OP_IMM
                    or not start <= (insn.operands[0].imm & 0xFFFFFFFF) < start + size):
                raise AssertionError(f"Control flow leaves the verified body: {insn}")

    calls = [
        (insn.address, insn.operands[0].imm & 0xFFFFFFFF)
        for insn in instructions
        if insn.id == X86_INS_CALL and insn.operands
        and insn.operands[0].type == X86_OP_IMM
    ]
    if calls != [(0x58854313, HELPER), (0x5885434D, HELPER)]:
        raise AssertionError(f"Helper call sites or targets changed: {calls}")
    if HELPER not in matched:
        raise AssertionError("FUN_588542A0 is not independently byte-matched")

    for push_site, call_site, value in (
        (0x58854311, 0x58854313, 0), (0x5885434B, 0x5885434D, 1)
    ):
        push = instruction_at(image, decoder, push_site)
        call = instruction_at(image, decoder, call_site)
        if (push.id != X86_INS_PUSH or push.address + push.size != call_site
                or len(push.operands) != 1 or push.operands[0].type != X86_OP_IMM
                or push.operands[0].imm != value or call.id != X86_INS_CALL):
            raise AssertionError(f"FUN_588542A0 argument changed at {call_site:08X}")

    if (instructions[0].mnemonic != "mov"
            or instructions[0].op_str != "eax, dword ptr [esp + 4]"
            or instructions[3].mnemonic != "mov"
            or instructions[3].op_str != "dword ptr [esi + 0x2d8], eax"):
        raise AssertionError("The stored argument or receiver field changed")
    if sum(insn.id == X86_INS_TEST for insn in instructions) != 1:
        raise AssertionError("The nonzero/zero state branch changed")
    test = instruction_at(image, decoder, 0x5885430D)
    branch = instruction_at(image, decoder, 0x5885430F)
    if (test.id != X86_INS_TEST or test.op_str != "eax, eax"
            or branch.id != X86_INS_JE or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != 0x5885434B):
        raise AssertionError("The nonzero/zero branch direction changed")
    for address, value in ((0x5885431E, 0xFFFD), (0x58854358, 2)):
        load = instruction_at(image, decoder, address)
        if (load.mnemonic != "mov" or len(load.operands) != 2
                or load.operands[0].type != X86_OP_REG
                or load.operands[0].reg != X86_REG_ECX
                or load.operands[1].type != X86_OP_IMM
                or load.operands[1].imm != value):
            raise AssertionError(f"Child bit mask changed at {address:08X}")
    bit_writes = {
        insn.id for insn in instructions
        if (insn.id in (X86_INS_AND, X86_INS_OR)
            and "[" in insn.op_str and "+ 0x24]" in insn.op_str)
    }
    if (sum(insn.id == X86_INS_AND and "[" in insn.op_str
            and "+ 0x24]" in insn.op_str for insn in instructions) != 4
            or sum(insn.id == X86_INS_OR and "[" in insn.op_str
                   and "+ 0x24]" in insn.op_str for insn in instructions) != 4
            or bit_writes != {X86_INS_AND, X86_INS_OR}):
        raise AssertionError("The four direct child bit updates changed")
    if sum(insn.id == X86_INS_RET and len(insn.operands) == 1
           and insn.operands[0].type == X86_OP_IMM
           and insn.operands[0].imm == 4 for insn in instructions) != 2:
        raise AssertionError("Expected two ret 4 exits")


def verify_callers(image, decoder, records, matched):
    for caller, call_site, push_site, receiver_load, argument in CALLSITES:
        if caller not in matched or caller not in records:
            raise AssertionError(f"Caller {caller:08X} is not byte-matched")
        ranges = record_ranges(records[caller])
        for address in (call_site, push_site, receiver_load):
            if not contains(ranges, address):
                raise AssertionError(f"Caller evidence {address:08X} is outside matched code")

        call = instruction_at(image, decoder, call_site)
        push = instruction_at(image, decoder, push_site)
        load = instruction_at(image, decoder, receiver_load)
        if (call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION
                or push.id != X86_INS_PUSH or push.address + push.size != call_site):
            raise AssertionError(f"Call or stack argument changed at {call_site:08X}")
        if argument == 1:
            if (len(push.operands) != 1 or push.operands[0].type != X86_OP_IMM
                    or push.operands[0].imm != 1):
                raise AssertionError(f"Expected argument 1 at {call_site:08X}")
        elif (len(push.operands) != 1 or push.operands[0].type != X86_OP_REG
              or push.operands[0].reg != X86_REG_EBX):
            raise AssertionError("Ship-map caller no longer passes EBX")

        if (load.mnemonic != "mov" or len(load.operands) != 2
                or load.operands[0].type != X86_OP_REG
                or load.operands[0].reg != X86_REG_ECX
                or load.operands[1].type != X86_OP_MEM
                or load.operands[1].mem.base != X86_REG_INVALID
                or load.operands[1].mem.index != X86_REG_INVALID
                or load.operands[1].mem.disp != GLOBAL_PANEL):
            raise AssertionError(f"Panel receiver load changed at {receiver_load:08X}")

    ship_map = CALLSITES[-1]
    ship_ranges = record_ranges(records[ship_map[0]])
    zero = instruction_at(image, decoder, 0x588DEEDE)
    if (not contains(ship_ranges, zero.address) or zero.mnemonic != "xor"
            or zero.op_str != "ebx, ebx"):
        raise AssertionError("Ship-map caller's EBX zero initialization changed")
    push_site = ship_map[2]
    span = image[zero.address + zero.size - BASE:push_site - BASE]
    between = list(decoder.disasm(span, zero.address + zero.size))
    if (not between or between[-1].address + between[-1].size != push_site
            or sum(insn.size for insn in between) != len(span)):
        raise AssertionError("Could not decode EBX initialization-to-call path")
    for insn in between:
        _, writes = insn.regs_access()
        if insn.id != X86_INS_CALL and X86_REG_EBX in writes:
            raise AssertionError(f"EBX is overwritten before the ship-map call: {insn}")

    # The global receiver is the object installed by the matched fire-control
    # panel constructor. Its caller branches around the zero-result fallback.
    constructor_caller, constructor_call, target = PANEL_CONSTRUCTOR
    if (constructor_caller not in matched or target not in matched
            or not contains(record_ranges(records[constructor_caller]), constructor_call)):
        raise AssertionError("Panel constructor evidence is not byte-matched")
    constructor = instruction_at(image, decoder, constructor_call)
    jump = instruction_at(image, decoder, constructor_call + constructor.size)
    store_address = 0x5878C7EB
    store = instruction_at(image, decoder, store_address)
    if any(not contains(record_ranges(records[constructor_caller]), site)
           for site in (jump.address, store_address)):
        raise AssertionError("Panel global store is outside matched initializer code")
    if (constructor.id != X86_INS_CALL or not constructor.operands
            or constructor.operands[0].type != X86_OP_IMM
            or (constructor.operands[0].imm & 0xFFFFFFFF) != target
            or jump.id != X86_INS_JMP or not jump.operands
            or jump.operands[0].type != X86_OP_IMM
            or (jump.operands[0].imm & 0xFFFFFFFF) != 0x5878C7E6
            or store.id != X86_INS_MOV or len(store.operands) != 2
            or store.operands[0].type != X86_OP_MEM
            or store.operands[0].mem.base != X86_REG_INVALID
            or store.operands[0].mem.index != X86_REG_INVALID
            or store.operands[0].mem.disp != GLOBAL_PANEL
            or store.operands[1].type != X86_OP_REG
            or store.operands[1].reg != X86_REG_EAX):
        raise AssertionError("Matched initializer no longer installs the global panel receiver")


def main():
    verify_fresh_exports()
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
    record = records.get(FUNCTION)
    if FUNCTION not in inventory or inventory[FUNCTION]["size"] != str(BODY[1]):
        raise AssertionError("Installed-client inventory differs from the Ghidra body")
    if record is None or FUNCTION not in matched:
        raise AssertionError("The fire-control panel child bit updater is not byte-matched")
    if record_ranges(record) != ((FUNCTION, BODY[1]),):
        raise AssertionError("Catalog body range differs from the fresh Ghidra exports")
    helper_record = records.get(HELPER)
    if (HELPER not in matched or helper_record is None
            or record_ranges(helper_record) != ((HELPER, 84),)):
        raise AssertionError("The eight-child dependency is not byte-matched as expected")

    verify_body(image, decoder, matched)
    verify_callers(image, decoder, records, matched)
    print(
        "FUN_58854300 CPannelFireControl child bit-one updater: 131 bytes / "
        "33 instructions match both fresh Ghidra body exports; two outgoing "
        "calls use verified FUN_588542A0; three incoming calls use the matched "
        "global panel receiver"
    )


if __name__ == "__main__":
    main()
