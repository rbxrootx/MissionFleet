"""Verify the installed Main.dll 0x8002C104 record-action byte closure."""

import argparse
import csv
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_ADD,
    X86_INS_CALL,
    X86_INS_CMP,
    X86_INS_JA,
    X86_INS_JMP,
    X86_INS_MOV,
    X86_OP_IMM,
    X86_OP_MEM,
    X86_OP_REG,
    X86_REG_EAX,
    X86_REG_ESP,
)

from build_current_main_verifications import MESSAGE_8002C104_RECORD_ACTION_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/message-8002c104-record-action-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58881C90
EXPECTED_FUNCTIONS = 13
EXPECTED_BYTES = 3533
EXPECTED_RANGES = 17
EXPECTED_BOUNDARY_TRANSFERS = 58

DISPATCHER = 0x58882D80
MESSAGE_CODE = 0x8002C104
DISPATCH_ADJUST = 0x7FFD3EFF
DISPATCH_INPUT_LOAD = 0x58882DE6
DISPATCH_ADD = 0x58882DED
DISPATCH_COMPARE = 0x58882DF2
DISPATCH_BOUNDS_BRANCH = 0x58882DF5
DISPATCH_FALLBACK = 0x58883DBD
DISPATCH_INDIRECT_JUMP = 0x58882DFC
DISPATCH_TABLE = 0x58883DD8
DISPATCH_INDEX = 3
CASE_ENTRY = 0x58882F49

ROOT_CALL_SITES = {
    0x58882F7B,
    0x58882F94,
    0x5888359B,
    0x588835B5,
    0x588835D1,
    0x588835EB,
    0x58883605,
    0x5888393E,
    0x5888395A,
}


def load_ranges():
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
    for function, segments in ranges.items():
        segments.sort()
        previous_end = None
        for start, length, _ in segments:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra body ranges for {function:08X}")
            previous_end = start + length
        if not segments or segments[0][0] != function:
            raise AssertionError(f"First Ghidra range does not start at {function:08X}")
    return {function: tuple(segments) for function, segments in ranges.items()}


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def decode_complete(code, start, decoder):
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(item.size for item in instructions) != len(code)
            or instructions[-1].address + instructions[-1].size != start + len(code)):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def external_transfers(instructions, own_ranges, image_end):
    for instruction in instructions:
        if (instruction.id not in (X86_INS_CALL, X86_INS_JMP)
                or not instruction.operands
                or instruction.operands[0].type != X86_OP_IMM):
            continue
        target = instruction.operands[0].imm & 0xFFFFFFFF
        if not BASE <= target < image_end:
            continue
        if any(start <= target < end for start, end in own_ranges):
            continue
        yield instruction.address, target, instruction.id


def instruction_at(image, decoder, address):
    offset = address - BASE
    instruction = next(decoder.disasm(image[offset:offset + 15], address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def require_direct(image, decoder, address, instruction_id, target, label):
    instruction = instruction_at(image, decoder, address)
    if (instruction.id != instruction_id or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(
            f"Unexpected {label} at {address:08X}: {instruction.mnemonic} {instruction.op_str}")


def require_eax_immediate(image, decoder, address, instruction_id, value, label):
    instruction = instruction_at(image, decoder, address)
    if (instruction.id != instruction_id or len(instruction.operands) != 2
            or instruction.operands[0].type != X86_OP_REG
            or instruction.operands[0].reg != X86_REG_EAX
            or instruction.operands[1].type != X86_OP_IMM
            or (instruction.operands[1].imm & 0xFFFFFFFF) != value):
        raise AssertionError(f"The {label} instruction changed at {address:08X}")


def verify_dispatch(image, decoder, dispatcher_ranges, matched):
    if DISPATCHER not in matched:
        raise AssertionError("The message dispatcher is not byte-verified")
    if (MESSAGE_CODE + DISPATCH_ADJUST) & 0xFFFFFFFF != DISPATCH_INDEX:
        raise AssertionError("0x8002C104 no longer selects dispatch index three")

    load = instruction_at(image, decoder, DISPATCH_INPUT_LOAD)
    if (load.id != X86_INS_MOV or len(load.operands) != 2
            or load.operands[0].type != X86_OP_REG
            or load.operands[0].reg != X86_REG_EAX
            or load.operands[1].type != X86_OP_MEM
            or load.operands[1].mem.base != X86_REG_ESP
            or load.operands[1].mem.disp != 0x444):
        raise AssertionError("The message-code dispatch input changed")
    require_eax_immediate(image, decoder, DISPATCH_ADD, X86_INS_ADD,
                          DISPATCH_ADJUST, "message dispatch index calculation")
    require_eax_immediate(image, decoder, DISPATCH_COMPARE, X86_INS_CMP,
                          5, "message dispatch bounds check")
    require_direct(image, decoder, DISPATCH_BOUNDS_BRANCH, X86_INS_JA,
                   DISPATCH_FALLBACK, "message dispatch bounds branch")

    indirect = instruction_at(image, decoder, DISPATCH_INDIRECT_JUMP)
    if (indirect.id != X86_INS_JMP or not indirect.operands
            or indirect.operands[0].type != X86_OP_MEM
            or indirect.operands[0].mem.index != X86_REG_EAX
            or indirect.operands[0].mem.scale != 4
            or (indirect.operands[0].mem.disp & 0xFFFFFFFF) != DISPATCH_TABLE):
        raise AssertionError("The message jump-table dispatch changed")
    entry = struct.unpack_from("<I", image, DISPATCH_TABLE - BASE + DISPATCH_INDEX * 4)[0]
    if entry != CASE_ENTRY:
        raise AssertionError(f"Dispatch table entry three changed: {entry:08X}")

    caller_instructions = []
    caller_ranges = tuple((start, start + size) for start, size in dispatcher_ranges)
    for start, size in dispatcher_ranges:
        caller_instructions.extend(decode_complete(
            image[start - BASE:start - BASE + size], start, decoder))
    observed_calls = {
        instruction.address
        for instruction in caller_instructions
        if (instruction.id == X86_INS_CALL and instruction.operands
            and instruction.operands[0].type == X86_OP_IMM
            and (instruction.operands[0].imm & 0xFFFFFFFF) == ROOT_ADDRESS)
    }
    if observed_calls != ROOT_CALL_SITES:
        raise AssertionError(f"FUN_58882D80 root call sites changed: {sorted(observed_calls)}")
    for site in ROOT_CALL_SITES:
        if not any(start <= site < end for start, end in caller_ranges):
            raise AssertionError(f"Root call at {site:08X} is outside matched dispatcher bodies")
        if not CASE_ENTRY <= site < DISPATCH_FALLBACK:
            raise AssertionError(f"Root call at {site:08X} is outside dispatch index three")
        require_direct(image, decoder, site, X86_INS_CALL, ROOT_ADDRESS,
                       "0x8002C104 dispatcher-to-root call")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--allow-candidates", action="store_true",
                        help="audit before byte-match credit is recorded")
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
    selected = {int(address, 16) for address in MESSAGE_8002C104_RECORD_ACTION_ADDRESSES}
    ranges = load_ranges()
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected:
        raise AssertionError("Unexpected 0x8002C104 action closure address set")
    if set(ranges) != selected or sum(map(len, ranges.values())) != EXPECTED_RANGES:
        raise AssertionError("Fresh Ghidra body-range manifest differs from the closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    call_graph = {address: set() for address in selected}
    boundary_sites = []
    boundary_targets = set()
    total_bytes = 0

    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None:
            raise AssertionError(f"Missing inventory/catalog row for {address:08X}")
        status = record.get("verified_by")
        if status != MARKER and not (args.allow_candidates
                                     and status == "candidate-not-yet-verified"):
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = tuple((start, length) for start, length, _ in ranges[address])
        if record_ranges(record) != expected_ranges:
            raise AssertionError(f"Catalog ranges differ from fresh Ghidra for {address:08X}")
        indexed_size = int(row["size"])
        if (int(record["size"]) != indexed_size
                or sum(length for _, length in expected_ranges) != indexed_size):
            raise AssertionError(f"Ghidra body total differs from inventory for {address:08X}")
        total_bytes += indexed_size
        own_ranges = tuple((start, start + length) for start, length in expected_ranges)
        for start, length, expected_instructions in ranges[address]:
            code = image[start - BASE:start - BASE + length]
            instructions = decode_complete(code, start, decoder)
            if len(instructions) != expected_instructions:
                raise AssertionError(
                    f"Capstone/Ghidra instruction counts differ at {start:08X}: "
                    f"{len(instructions)} != {expected_instructions}")
            for site, target, kind in external_transfers(instructions, own_ranges, image_end):
                if target in selected:
                    graph[address].add(target)
                    if kind == X86_INS_CALL:
                        call_graph[address].add(target)
                elif target in matched:
                    boundary_sites.append((site, target))
                    boundary_targets.add(target)
                else:
                    raise AssertionError(
                        f"Unmatched direct transfer {target:08X} from {site:08X}")

    def reachable_from(root, edges):
        reachable = {root}
        queue = deque([root])
        while queue:
            for target in edges[queue.popleft()] - reachable:
                reachable.add(target)
                queue.append(target)
        return reachable

    if reachable_from(ROOT_ADDRESS, graph) != selected:
        missing = selected - reachable_from(ROOT_ADDRESS, graph)
        raise AssertionError(f"Address set is not the exact root CALL/JMP closure: {sorted(missing)}")
    if reachable_from(ROOT_ADDRESS, call_graph) != selected:
        missing = selected - reachable_from(ROOT_ADDRESS, call_graph)
        raise AssertionError(f"Address set is not the exact root CALL closure: {sorted(missing)}")
    if total_bytes != EXPECTED_BYTES:
        raise AssertionError(f"Unexpected closure size: {total_bytes} bytes")
    if len(boundary_sites) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(f"Unexpected verified-boundary transfer count: {len(boundary_sites)}")

    dispatcher_record = records.get(DISPATCHER)
    if dispatcher_record is None:
        raise AssertionError("Matched message dispatcher record is missing")
    verify_dispatch(image, decoder, record_ranges(dispatcher_record), matched)

    print(
        f"0x8002C104 record-action path: {len(selected)} functions / "
        f"{total_bytes:,} bytes across {EXPECTED_RANGES} fresh Ghidra ranges; "
        f"all members reachable from FUN_{ROOT_ADDRESS:08x}, "
        f"{len(boundary_sites)} transfers to {len(boundary_targets)} "
        "byte-verified boundaries, no unmatched direct transfers; dispatch "
        "index three and all nine matched root call sites pass"
    )


if __name__ == "__main__":
    main()
