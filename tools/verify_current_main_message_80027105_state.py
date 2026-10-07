"""Verify the mapped Main.dll 0x80027105 state-application closure."""
import argparse
import csv
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_ADD, X86_INS_CALL, X86_INS_CMP, X86_INS_JA, X86_INS_JE,
    X86_INS_JMP, X86_OP_IMM, X86_OP_MEM, X86_OP_REG, X86_REG_EAX,
)

from build_current_main_verifications import CURRENT_MAIN_MESSAGE_80027105_STATE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-message-80027105-state-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_FUNCTION = 0x588FCFB0
DISPATCHER = 0x587BB700
MESSAGE_CODE = 0x80027105
MESSAGE_COMPARE = 0x587C1245
UPPER_RANGE_BRANCH = 0x587C124A
EQUAL_RANGE_BRANCH = 0x587C1250
CASE_ADJUST = 0x587C1256
INDEX_COMPARE = 0x587C125B
DEFAULT_BRANCH = 0x587C125E
SWITCH_JUMP = 0x587C1264
SWITCH_TABLE = 0x587C2064
CASE_BLOCK = 0x587C126B
ROOT_CALL = 0x587C127B

EXPECTED_INTERNAL_TRANSFERS = {
    0x588FCFD7: 0x588FF080,
    0x588FCFE2: 0x588F7E90,
    0x588FCFEF: 0x588F7430,
    0x588FD01D: 0x588FF0F0,
    0x588FD078: 0x588FC110,
    0x588FD08F: 0x588FFB50,
    0x588FD0AB: 0x588F7430,
    0x588FD0BA: 0x588FF080,
    0x588FD0C5: 0x588F7E90,
}
EXPECTED_FUNCTIONS = 7
EXPECTED_BYTES = 1_288
EXPECTED_RANGES = 8
EXPECTED_BOUNDARY_TRANSFERS = 33


def read_ranges():
    ranges = defaultdict(list)
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            function = int(row["function"], 16)
            start = int(row["start"], 16)
            length = int(row["length"])
            instruction_bytes = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if length <= 0 or instruction_bytes != length or instruction_count <= 0:
                raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
            ranges[function].append((start, length, instruction_count))
    result = {}
    for function, segments in ranges.items():
        segments.sort()
        previous_end = None
        for start, length, _ in segments:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges for {function:08X}")
            previous_end = start + length
        if not segments or segments[0][0] != function:
            raise AssertionError(f"First Ghidra body range does not start at {function:08X}")
        result[function] = tuple(segments)
    return result


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def decode_complete(image, decoder, start, length):
    code = image[start - BASE:start - BASE + length]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(instruction.size for instruction in instructions) != length
            or instructions[-1].address + instructions[-1].size != start + length):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def instruction_at(image, decoder, address):
    offset = address - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"Address lies outside mapped Main.dll: {address:08X}")
    instruction = next(decoder.disasm(image[offset:offset + 15], address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def contains(ranges, address):
    return any(start <= address < start + size for start, size in ranges)


def require_compare(instruction, immediate, address):
    if (instruction.id != X86_INS_CMP or len(instruction.operands) != 2
            or instruction.operands[0].type != X86_OP_REG
            or instruction.operands[0].reg != X86_REG_EAX
            or instruction.operands[1].type != X86_OP_IMM
            or (instruction.operands[1].imm & 0xFFFFFFFF) != immediate):
        raise AssertionError(f"Unexpected switch-index comparison at {address:08X}")


def require_branch(instruction, kind, target, address):
    if (instruction.id != kind or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Unexpected dispatcher branch at {address:08X}")


def verify_dispatch_case(image, decoder, dispatcher_ranges, matched):
    if DISPATCHER not in matched:
        raise AssertionError("Byte-matched FUN_587BB700 dispatcher is missing")
    route_addresses = (
        MESSAGE_COMPARE, UPPER_RANGE_BRANCH, EQUAL_RANGE_BRANCH, CASE_ADJUST,
        INDEX_COMPARE, DEFAULT_BRANCH, SWITCH_JUMP, CASE_BLOCK, ROOT_CALL,
    )
    if not all(contains(dispatcher_ranges, address) for address in route_addresses):
        raise AssertionError("0x80027105 route is outside the matched dispatcher body")

    require_compare(instruction_at(image, decoder, MESSAGE_COMPARE), 0x80027FF0,
                    MESSAGE_COMPARE)
    require_branch(instruction_at(image, decoder, UPPER_RANGE_BRANCH),
                   capstone.x86_const.X86_INS_JA, 0x587C1334, UPPER_RANGE_BRANCH)
    require_branch(instruction_at(image, decoder, EQUAL_RANGE_BRANCH),
                   X86_INS_JE, 0x587C1314, EQUAL_RANGE_BRANCH)

    adjust = instruction_at(image, decoder, CASE_ADJUST)
    if (adjust.id != X86_INS_ADD or len(adjust.operands) != 2
            or adjust.operands[0].type != X86_OP_REG
            or adjust.operands[0].reg != X86_REG_EAX
            or adjust.operands[1].type != X86_OP_IMM
            or (adjust.operands[1].imm & 0xFFFFFFFF) != 0x7FFD8EFE):
        raise AssertionError("Dispatcher no longer maps message ids to switch indices")
    require_compare(instruction_at(image, decoder, INDEX_COMPARE), 6, INDEX_COMPARE)
    require_branch(instruction_at(image, decoder, DEFAULT_BRANCH),
                   capstone.x86_const.X86_INS_JA, 0x587C145D, DEFAULT_BRANCH)

    jump = instruction_at(image, decoder, SWITCH_JUMP)
    if (jump.id != X86_INS_JMP or not jump.operands
            or jump.operands[0].type != X86_OP_MEM):
        raise AssertionError("Dispatcher no longer uses the observed switch table")
    memory = jump.operands[0].mem
    if (memory.base != capstone.x86_const.X86_REG_INVALID
            or memory.index != X86_REG_EAX or memory.scale != 4
            or (memory.disp & 0xFFFFFFFF) != SWITCH_TABLE):
        raise AssertionError("Dispatcher switch-table operand changed")

    case_index = (MESSAGE_CODE + 0x7FFD8EFE) & 0xFFFFFFFF
    if MESSAGE_CODE >= 0x80027FF0 or case_index != 3 or case_index > 6:
        raise AssertionError("0x80027105 no longer selects switch-table entry 3")
    table_offset = SWITCH_TABLE - BASE + case_index * 4
    if table_offset < 0 or table_offset + 4 > len(image):
        raise AssertionError("0x80027105 switch-table entry lies outside Main.dll")
    case_target = struct.unpack_from("<I", image, table_offset)[0]
    if case_target != CASE_BLOCK:
        raise AssertionError(f"Switch entry 3 no longer targets {CASE_BLOCK:08X}")

    call = instruction_at(image, decoder, ROOT_CALL)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != ROOT_FUNCTION):
        raise AssertionError(f"Dispatcher no longer calls FUN_588FCFB0 at {ROOT_CALL:08X}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--allow-candidates", action="store_true",
                        help="audit before byte-match status is recorded")
    args = parser.parse_args()

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
    selected = {int(address, 16) for address in CURRENT_MAIN_MESSAGE_80027105_STATE_ADDRESSES}
    function_ranges = read_ranges()
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_FUNCTION not in selected:
        raise AssertionError("Unexpected 0x80027105 closure address set")
    if set(function_ranges) != selected or sum(map(len, function_ranges.values())) != EXPECTED_RANGES:
        raise AssertionError("Fresh Ghidra ranges differ from the selected closure")

    body_owners = {
        address: tuple((start, start + length) for start, length, _ in function_ranges[address])
        for address in selected
    }
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    internal_transfers = {}
    boundary_transfers = set()
    intra_function_calls = []
    total_bytes = 0

    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None:
            raise AssertionError(f"Missing inventory/catalog row for {address:08X}")
        status = record.get("verified_by")
        if status != MARKER and not (args.allow_candidates and status == "candidate-not-yet-verified"):
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = tuple((start, length) for start, length, _ in function_ranges[address])
        if record_ranges(record) != expected_ranges:
            raise AssertionError(f"Catalog ranges differ from fresh Ghidra at {address:08X}")
        indexed_size = int(row["size"])
        if (int(record["size"]) != indexed_size
                or sum(length for _, length in expected_ranges) != indexed_size):
            raise AssertionError(f"Ghidra body total differs from inventory at {address:08X}")
        total_bytes += indexed_size

        own_ranges = tuple((start, start + length) for start, length in expected_ranges)
        for start, length, instruction_count in function_ranges[address]:
            instructions = decode_complete(image, decoder, start, length)
            if len(instructions) != instruction_count:
                raise AssertionError(
                    f"Capstone/Ghidra instruction count differs at {start:08X}: "
                    f"{len(instructions)} != {instruction_count}")
            for instruction in instructions:
                if instruction.id != X86_INS_CALL or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    intra_function_calls.append((instruction.address, target))
                    continue
                owner = next((candidate for candidate, ranges in body_owners.items()
                              if any(low <= target < high for low, high in ranges)), None)
                if owner is not None:
                    graph[address].add(owner)
                    internal_transfers[instruction.address] = owner
                elif target in matched:
                    boundary_transfers.add((instruction.address, target))
                elif BASE <= target < image_end:
                    raise AssertionError(
                        f"Unmatched mapped direct call to {target:08X} "
                        f"from {instruction.address:08X}")

    reachable = {ROOT_FUNCTION}
    queue = deque(reachable)
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact root CALL closure: {sorted(selected - reachable)}")
    if total_bytes != EXPECTED_BYTES:
        raise AssertionError(f"Unexpected closure size: {total_bytes} bytes")
    if internal_transfers != EXPECTED_INTERNAL_TRANSFERS:
        raise AssertionError(
            "Fresh mapped in-closure calls differ from the audited Ghidra graph: "
            f"actual={internal_transfers}, expected={EXPECTED_INTERNAL_TRANSFERS}")
    if len(boundary_transfers) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary-call count: {len(boundary_transfers)}")
    if intra_function_calls:
        raise AssertionError(f"Unexpected direct self-calls in the selected closure: {intra_function_calls}")

    dispatcher_record = records.get(DISPATCHER)
    if dispatcher_record is None:
        raise AssertionError("Matched FUN_587BB700 dispatcher record is missing")
    verify_dispatch_case(image, decoder, record_ranges(dispatcher_record), matched)

    print(
        f"0x80027105 state path: {len(selected)} functions / {total_bytes:,} bytes "
        f"across {EXPECTED_RANGES} fresh Ghidra ranges; exact direct-call closure, "
        f"{len(internal_transfers)} internal calls and "
        f"{len(boundary_transfers)} direct calls to byte-verified functions, no "
        "unmatched mapped direct calls; dispatcher switch entry and root call pass"
    )


if __name__ == "__main__":
    main()
