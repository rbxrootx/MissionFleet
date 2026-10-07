"""Audit the conditional state-9 record-application byte-match closure."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_ADD,
    X86_INS_CALL,
    X86_INS_CMP,
    X86_INS_IMUL,
    X86_INS_JE,
    X86_INS_JL,
    X86_INS_JNE,
    X86_INS_MOV,
    X86_INS_PUSH,
    X86_OP_IMM,
    X86_OP_MEM,
    X86_OP_REG,
    X86_REG_AX,
    X86_REG_DX,
    X86_REG_EAX,
    X86_REG_EBP,
    X86_REG_ECX,
    X86_REG_INVALID,
)

from build_current_main_verifications import MAIN_STATE9_RECORD_BIND_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-state9-record-bind-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587780D0
EXPECTED_FUNCTIONS = 20
EXPECTED_BYTES = 7633
EXPECTED_RANGES = 28
EXPECTED_BOUNDARY_CALLS = 111
STATE_CALLER = 0x587F8760
ACTION_CALLER = 0x587A90D0

STATE_COMPARE = 0x587F8D55
STATE_BRANCH = 0x587F8D59
STATE_BRANCH_TARGET = 0x587F9212
FIRST_STATE9_ROOT_CALL = 0x587F8D6C
ROW_KEY_LOAD = 0x587F8D7D
TABLE_BASE_LOAD = 0x587F8D86
TABLE_COMPARE = 0x587F8D90
TABLE_MATCH_BRANCH = 0x587F8D93
TABLE_STRIDE_ADD = 0x587F8D95
TABLE_END_COMPARE = 0x587F8D9B
TABLE_LOOP_BRANCH = 0x587F8DA0
ROW_OFFSET_MULTIPLY = 0x587F8DA4
ROW_BASE_ADD = 0x587F8DAA
ROW_ARGUMENT_PUSH = 0x587F8DB0
ROW_RECEIVER_LOAD = 0x587F8DB1
ROOT_CALL = 0x587F8DB7
MISSION_EVENT_SHARED_CALL = 0x587A981E
STATE9_SHARED_CHILD_CALL = 0x587F9274

FUNCTION_RANGES = {
    0x58735650: ((0x58735650, 0x067), (0x587356C0, 0x153)),
    0x58735840: ((0x58735840, 0x07C),),
    0x587358C0: ((0x587358C0, 0x063),),
    0x58735950: ((0x58735950, 0x317),),
    0x58736110: ((0x58736110, 0x599), (0x587366B0, 0x038)),
    0x587374B0: ((0x587374B0, 0x1FC), (0x587376B0, 0x17D),
                 (0x58737830, 0x2C9)),
    0x587429B0: ((0x587429B0, 0x1E4),),
    0x58777420: ((0x58777420, 0x075),),
    0x58777710: ((0x58777710, 0x0BB), (0x587777CE, 0x026)),
    0x58777810: ((0x58777810, 0x085),),
    0x58777F30: ((0x58777F30, 0x195),),
    0x587780D0: ((0x587780D0, 0x05B),),
    0x5878A0E0: ((0x5878A0E0, 0x03C),),
    0x587A85E0: ((0x587A85E0, 0x0A4),),
    0x587A8E00: ((0x587A8E00, 0x064),),
    0x587AB4D0: ((0x587AB4D0, 0x03A), (0x587AB510, 0x0E7),
                 (0x587AB600, 0x138)),
    0x587AF500: ((0x587AF500, 0x18B),),
    0x587AF8F0: ((0x587AF8F0, 0x0AD),),
    0x587B2140: ((0x587B2140, 0x017),),
    0x588DCD00: ((0x588DCD00, 0x02D), (0x588DCD30, 0x046)),
}


def read_ranges():
    ranges = {}
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            function = int(row["function"], 16)
            start = int(row["start"], 16)
            length = int(row["length"])
            instruction_bytes = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if length <= 0 or instruction_bytes != length or instruction_count <= 0:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            ranges.setdefault(function, []).append((start, length))
    return {function: tuple(parts) for function, parts in ranges.items()}


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


def require_direct_call(image, decoder, site, target, caller_record):
    if not in_ranges(site, record_ranges(caller_record)):
        raise AssertionError(f"Matched call site {site:08X} is outside its caller")
    instruction = instruction_at(image, decoder, site)
    if (instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Unexpected direct call at {site:08X}")


def require_immediate(instruction, instruction_id, register, value, label):
    if (instruction.id != instruction_id or len(instruction.operands) != 2
            or instruction.operands[0].type != X86_OP_REG
            or instruction.operands[0].reg != register
            or instruction.operands[1].type != X86_OP_IMM
            or (instruction.operands[1].imm & 0xFFFFFFFF) != value):
        raise AssertionError(f"Unexpected {label} instruction at {instruction.address:08X}")


def verify_state9_scan(image, decoder, records, matched):
    caller = records.get(STATE_CALLER)
    if caller is None or STATE_CALLER not in matched:
        raise AssertionError("State-9 table caller is not byte-verified")
    caller_ranges = record_ranges(caller)
    sites = (STATE_COMPARE, STATE_BRANCH, FIRST_STATE9_ROOT_CALL, ROW_KEY_LOAD,
             TABLE_BASE_LOAD, TABLE_COMPARE, TABLE_MATCH_BRANCH, TABLE_STRIDE_ADD,
             TABLE_END_COMPARE, TABLE_LOOP_BRANCH, ROW_OFFSET_MULTIPLY,
             ROW_BASE_ADD, ROW_ARGUMENT_PUSH, ROW_RECEIVER_LOAD, ROOT_CALL,
             STATE9_SHARED_CHILD_CALL)
    if not all(in_ranges(site, caller_ranges) for site in sites):
        raise AssertionError("A state-9 table instruction is outside the matched caller")

    compare = instruction_at(image, decoder, STATE_COMPARE)
    if (compare.id != X86_INS_CMP or len(compare.operands) != 2
            or compare.operands[0].type != X86_OP_REG
            or compare.operands[0].reg != X86_REG_AX
            or compare.operands[1].type != X86_OP_IMM
            or compare.operands[1].imm != 9):
        raise AssertionError("The state-9 compare changed")
    branch = instruction_at(image, decoder, STATE_BRANCH)
    if (branch.id != X86_INS_JNE or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != STATE_BRANCH_TARGET):
        raise AssertionError("The state-9 branch gate changed")
    require_direct_call(image, decoder, FIRST_STATE9_ROOT_CALL, 0x58788880, caller)

    key_load = instruction_at(image, decoder, ROW_KEY_LOAD)
    if (key_load.id != X86_INS_MOV or len(key_load.operands) != 2
            or key_load.operands[0].type != X86_OP_REG
            or key_load.operands[0].reg != X86_REG_DX
            or key_load.operands[1].type != X86_OP_MEM
            or key_load.operands[1].mem.base != X86_REG_INVALID
            or key_load.operands[1].mem.index != X86_REG_INVALID
            or (key_load.operands[1].mem.disp & 0xFFFFFFFF) != 0x58A0ADD0):
        raise AssertionError("The state-9 row key source changed")

    table_base = instruction_at(image, decoder, TABLE_BASE_LOAD)
    require_immediate(table_base, X86_INS_MOV, X86_REG_EAX, 0x589BAAB0,
                      "row-table base")
    table_compare = instruction_at(image, decoder, TABLE_COMPARE)
    if (table_compare.id != X86_INS_CMP or len(table_compare.operands) != 2
            or table_compare.operands[0].type != X86_OP_MEM
            or table_compare.operands[0].mem.base != X86_REG_EAX
            or table_compare.operands[0].mem.index != X86_REG_INVALID
            or table_compare.operands[0].mem.disp != 0
            or table_compare.operands[1].type != X86_OP_REG
            or table_compare.operands[1].reg != X86_REG_DX):
        raise AssertionError("The selected row is no longer compared with the active key")
    match_branch = instruction_at(image, decoder, TABLE_MATCH_BRANCH)
    if (match_branch.id != X86_INS_JE or not match_branch.operands
            or match_branch.operands[0].type != X86_OP_IMM
            or (match_branch.operands[0].imm & 0xFFFFFFFF) != ROW_OFFSET_MULTIPLY):
        raise AssertionError("The matching-row branch changed")
    require_immediate(instruction_at(image, decoder, TABLE_STRIDE_ADD),
                      X86_INS_ADD, X86_REG_EAX, 0xE84, "table stride")
    end_compare = instruction_at(image, decoder, TABLE_END_COMPARE)
    if (end_compare.id != X86_INS_CMP or len(end_compare.operands) != 2
            or end_compare.operands[0].type != X86_OP_REG
            or end_compare.operands[0].reg != X86_REG_EAX
            or end_compare.operands[1].type != X86_OP_IMM
            or (end_compare.operands[1].imm & 0xFFFFFFFF) != 0x589C2D54):
        raise AssertionError("The row-table upper bound changed")
    loop_branch = instruction_at(image, decoder, TABLE_LOOP_BRANCH)
    if (loop_branch.id != X86_INS_JL or not loop_branch.operands
            or loop_branch.operands[0].type != X86_OP_IMM
            or (loop_branch.operands[0].imm & 0xFFFFFFFF) != TABLE_COMPARE):
        raise AssertionError("The row-table loop branch changed")

    multiply = instruction_at(image, decoder, ROW_OFFSET_MULTIPLY)
    if (multiply.id != X86_INS_IMUL or len(multiply.operands) != 3
            or multiply.operands[0].type != X86_OP_REG
            or multiply.operands[0].reg != X86_REG_ECX
            or multiply.operands[1].type != X86_OP_REG
            or multiply.operands[1].reg != X86_REG_ECX
            or multiply.operands[2].type != X86_OP_IMM
            or multiply.operands[2].imm != 0xE84):
        raise AssertionError("The selected row stride multiplication changed")
    require_immediate(instruction_at(image, decoder, ROW_BASE_ADD), X86_INS_ADD,
                      X86_REG_ECX, 0x589BB838, "selected row base")
    push = instruction_at(image, decoder, ROW_ARGUMENT_PUSH)
    if (push.id != X86_INS_PUSH or not push.operands
            or push.operands[0].type != X86_OP_REG
            or push.operands[0].reg != X86_REG_ECX):
        raise AssertionError("The selected row argument setup changed")
    receiver = instruction_at(image, decoder, ROW_RECEIVER_LOAD)
    if (receiver.id != X86_INS_MOV or len(receiver.operands) != 2
            or receiver.operands[0].type != X86_OP_REG
            or receiver.operands[0].reg != X86_REG_ECX
            or receiver.operands[1].type != X86_OP_MEM
            or receiver.operands[1].mem.base != X86_REG_EBP
            or receiver.operands[1].mem.disp != 0x21C48):
        raise AssertionError("The selected-record receiver source changed")
    require_direct_call(image, decoder, ROOT_CALL, ROOT_ADDRESS, caller)
    require_direct_call(image, decoder, STATE9_SHARED_CHILD_CALL, 0x58777F30, caller)

    action_caller = records.get(ACTION_CALLER)
    if action_caller is None or ACTION_CALLER not in matched:
        raise AssertionError("The shared MissionEventManager caller is not byte-verified")
    require_direct_call(image, decoder, MISSION_EVENT_SHARED_CALL, 0x587A85E0,
                        action_caller)


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
    selected = {int(address, 16) for address in MAIN_STATE9_RECORD_BIND_ADDRESSES}
    if selected != set(FUNCTION_RANGES) or read_ranges() != FUNCTION_RANGES:
        raise AssertionError("The builder, verifier, and exact Ghidra ranges disagree")
    if (len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected
            or sum(sum(size for _, size in parts) for parts in FUNCTION_RANGES.values())
            != EXPECTED_BYTES
            or sum(len(parts) for parts in FUNCTION_RANGES.values()) != EXPECTED_RANGES):
        raise AssertionError("Unexpected state-9 selected-record closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_sites = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = FUNCTION_RANGES[address]
        if (int(record["size"]) != int(row["size"])
                or sum(size for _, size in expected_ranges) != int(row["size"])
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
        raise AssertionError(f"Unexpected verified boundary call count: {len(boundary_sites)}")

    verify_state9_scan(image, decoder, records, matched)
    print(
        f"Main.dll state-9 selected-record path: {len(selected)} functions / "
        f"{EXPECTED_BYTES:,} bytes ObjDiff-identical across {EXPECTED_RANGES} exact "
        f"Ghidra ranges; closure reaches every selected function, "
        f"{len(boundary_sites)} verified boundary calls pass, and matched state-9 "
        "row selection, receiver/argument setup, and shared callers pass"
    )


if __name__ == "__main__":
    main()
