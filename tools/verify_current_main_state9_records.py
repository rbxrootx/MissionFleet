"""Audit the Main.dll state-9 indexed-record byte-match closure."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL,
    X86_INS_CMP,
    X86_INS_JNE,
    X86_INS_MOV,
    X86_INS_PUSH,
    X86_OP_IMM,
    X86_OP_MEM,
    X86_OP_REG,
    X86_REG_AX,
    X86_REG_EAX,
    X86_REG_EBP,
    X86_REG_ECX,
)

from build_current_main_verifications import MAIN_STATE9_RECORD_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-state9-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58788880
EXPECTED_FUNCTIONS = 9
EXPECTED_BYTES = 5454
EXPECTED_RANGES = 12
EXPECTED_BOUNDARY_CALLS = 59
CALLER_ADDRESS = 0x587F8760
STATE_COMPARE = 0x587F8D55
STATE_BRANCH = 0x587F8D59
STATE_BRANCH_TARGET = 0x587F9212
ARGUMENT_LOAD = 0x587F8D5F
RECEIVER_LOAD = 0x587F8D65
ARGUMENT_PUSH = 0x587F8D6B
ROOT_CALL = 0x587F8D6C

FUNCTION_RANGES = {
    0x58783D20: ((0x58783D20, 0x238),),
    0x587847D0: ((0x587847D0, 0x8D), (0x58784860, 0x282)),
    0x58785200: ((0x58785200, 0xAC),),
    0x58785300: ((0x58785300, 0x2FD), (0x58785600, 0x291)),
    0x58788880: ((0x58788880, 0x4F9), (0x58788D80, 0x1C0)),
    0x587B0BB0: ((0x587B0BB0, 0x0D),),
    0x587B1640: ((0x587B1640, 0x1A0),),
    0x587B3090: ((0x587B3090, 0x163),),
    0x5882F0B0: ((0x5882F0B0, 0x04),),
}


def read_ranges():
    ranges = {}
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            length = int(row["length"])
            instruction_bytes = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if length <= 0 or instruction_bytes != length or instruction_count <= 0:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            ranges.setdefault(address, []).append((start, length))
    return {address: tuple(parts) for address, parts in ranges.items()}


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"], 16)),)


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(item.size for item in instructions) != size
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def instruction_at(image, decoder, address):
    code = image[address - BASE:address - BASE + 15]
    instruction = next(decoder.disasm(code, address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def in_ranges(address, ranges):
    return any(start <= address < start + size for start, size in ranges)


def verify_state9_call(image, decoder, records, matched):
    caller = records.get(CALLER_ADDRESS)
    if caller is None or CALLER_ADDRESS not in matched:
        raise AssertionError("The state-9 caller is not byte-verified")
    caller_ranges = record_ranges(caller)
    for site in (STATE_COMPARE, STATE_BRANCH, ARGUMENT_LOAD, RECEIVER_LOAD,
                 ARGUMENT_PUSH, ROOT_CALL):
        if not in_ranges(site, caller_ranges):
            raise AssertionError(f"State-9 instruction {site:08X} is outside the matched caller")

    compare = instruction_at(image, decoder, STATE_COMPARE)
    if (compare.id != X86_INS_CMP or len(compare.operands) != 2
            or compare.operands[0].type != X86_OP_REG
            or compare.operands[0].reg != X86_REG_AX
            or compare.operands[1].type != X86_OP_IMM
            or compare.operands[1].imm != 9):
        raise AssertionError("FUN_587F8760 no longer compares its state word with 9")

    branch = instruction_at(image, decoder, STATE_BRANCH)
    if (branch.id != X86_INS_JNE or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != STATE_BRANCH_TARGET):
        raise AssertionError("The state-9 branch no longer gates the indexed-record call")

    arg_load = instruction_at(image, decoder, ARGUMENT_LOAD)
    if (arg_load.id != X86_INS_MOV or len(arg_load.operands) != 2
            or arg_load.operands[0].type != X86_OP_REG
            or arg_load.operands[0].reg != X86_REG_EAX
            or arg_load.operands[1].type != X86_OP_MEM
            or arg_load.operands[1].mem.base != X86_REG_EBP
            or arg_load.operands[1].mem.disp != 0x10524):
        raise AssertionError("The state-9 argument source changed")

    receiver_load = instruction_at(image, decoder, RECEIVER_LOAD)
    if (receiver_load.id != X86_INS_MOV or len(receiver_load.operands) != 2
            or receiver_load.operands[0].type != X86_OP_REG
            or receiver_load.operands[0].reg != X86_REG_ECX
            or receiver_load.operands[1].type != X86_OP_MEM
            or receiver_load.operands[1].mem.base != X86_REG_EBP
            or receiver_load.operands[1].mem.disp != 0x21C4C):
        raise AssertionError("The state-9 receiver source changed")

    push = instruction_at(image, decoder, ARGUMENT_PUSH)
    if (push.id != X86_INS_PUSH or not push.operands
            or push.operands[0].type != X86_OP_REG
            or push.operands[0].reg != X86_REG_EAX):
        raise AssertionError("The state-9 stack argument changed")

    call = instruction_at(image, decoder, ROOT_CALL)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != ROOT_ADDRESS):
        raise AssertionError("FUN_587F8760 no longer calls the state-9 root")


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
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
    selected = {int(address, 16) for address in MAIN_STATE9_RECORD_ADDRESSES}
    manifest_ranges = read_ranges()
    if selected != set(FUNCTION_RANGES) or manifest_ranges != FUNCTION_RANGES:
        raise AssertionError("The builder, verifier, and exact Ghidra ranges disagree")
    if (len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected
            or sum(sum(size for _, size in parts) for parts in FUNCTION_RANGES.values())
            != EXPECTED_BYTES
            or sum(len(parts) for parts in FUNCTION_RANGES.values()) != EXPECTED_RANGES):
        raise AssertionError("Unexpected state-9 indexed-record closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_sites = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        indexed_size = int(row["size"])
        expected_ranges = FUNCTION_RANGES[address]
        if (int(record["size"]) != indexed_size
                or sum(size for _, size in expected_ranges) != indexed_size
                or record_ranges(record) != expected_ranges):
            raise AssertionError(f"Catalog body ranges do not match Ghidra for {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            for instruction in decode_complete(image, decoder, start, size):
                if instruction.id != X86_INS_CALL or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                if not BASE <= target < image_end:
                    continue
                if any(lo <= target < hi for lo, hi in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    boundary_sites.add((instruction.address, target))
                else:
                    raise AssertionError(
                        f"Unmatched external call {target:08X} from {instruction.address:08X}")

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact direct-call closure: {sorted(selected - reachable)}")
    if len(boundary_sites) != EXPECTED_BOUNDARY_CALLS:
        raise AssertionError(
            f"Unexpected matched boundary call count: {len(boundary_sites)}")

    verify_state9_call(image, decoder, records, matched)
    print(
        f"Main.dll state-9 indexed-record path: {len(selected)} functions / "
        f"{EXPECTED_BYTES:,} bytes ObjDiff-identical across {EXPECTED_RANGES} exact "
        f"Ghidra ranges; direct-call closure reaches every selected function, "
        f"{len(boundary_sites)} verified boundary calls pass, and matched caller "
        "state gate, argument setup, and root call pass"
    )


if __name__ == "__main__":
    main()
