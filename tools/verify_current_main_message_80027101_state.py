"""Verify the original message 0x80027101 state-update closure in Main.dll."""
import argparse
import csv
import json
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_CMP, X86_INS_JE,
    X86_OP_IMM, X86_OP_REG, X86_REG_EAX,
)

from build_current_main_verifications import CURRENT_MAIN_MESSAGE_80027101_STATE_ADDRESSES

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/warehouse-80027101-state-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_FUNCTION = 0x588FCEF0
DISPATCHER = 0x587BB700
MESSAGE_COMPARE = 0x587C07EA
MESSAGE_BRANCH = 0x587C07F5
ROOT_CALL = 0x587C123B
MESSAGE_CODE = 0x80027101
BRANCH_TARGET = 0x587C1226
EXPECTED_FUNCTIONS = 13
EXPECTED_BYTES = 3118
EXPECTED_RANGES = 17


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
    for function, segments in ranges.items():
        segments.sort()
        previous_end = None
        for start, length, _ in segments:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra ranges for {function:08X}")
            previous_end = start + length
        if not segments or segments[0][0] != function:
            raise AssertionError(f"First Ghidra range does not start at {function:08X}")
    return {function: tuple(segments) for function, segments in ranges.items()}


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def instructions_for(code, start, decoder):
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(insn.size for insn in instructions) != len(code)
            or instructions[-1].address + instructions[-1].size != start + len(code)):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def external_transfers(instructions, own_ranges, image_end):
    transfers = []
    for insn in instructions:
        if (insn.id != X86_INS_CALL and not insn.group(CS_GRP_JUMP)) or not insn.operands:
            continue
        operand = insn.operands[0]
        if operand.type != X86_OP_IMM:
            continue
        target = operand.imm & 0xFFFFFFFF
        if not BASE <= target < image_end:
            continue
        if any(lo <= target < hi for lo, hi in own_ranges):
            continue
        transfers.append((insn.address, target, insn.id))
    return transfers


def instruction_at(image, decoder, address):
    offset = address - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"Instruction address is outside mapped image: {address:08X}")
    instruction = next(decoder.disasm(image[offset:offset + 15], address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def contains(ranges, address):
    return any(start <= address < start + size for start, size in ranges)


def verify_dispatch_case(image, decoder, dispatcher_ranges, matched):
    if DISPATCHER not in matched:
        raise AssertionError("Byte-matched FUN_587BB700 dispatcher is missing")
    if not contains(dispatcher_ranges, MESSAGE_COMPARE):
        raise AssertionError("Message-code comparison is outside the matched dispatcher")
    if not contains(dispatcher_ranges, MESSAGE_BRANCH):
        raise AssertionError("Conditional branch is outside the matched dispatcher")
    if not contains(dispatcher_ranges, ROOT_CALL):
        raise AssertionError("Root call is outside the matched dispatcher")

    compare = instruction_at(image, decoder, MESSAGE_COMPARE)
    if (compare.id != X86_INS_CMP or len(compare.operands) != 2
            or compare.operands[0].type != X86_OP_REG
            or compare.operands[0].reg != X86_REG_EAX
            or compare.operands[1].type != X86_OP_IMM
            or (compare.operands[1].imm & 0xFFFFFFFF) != MESSAGE_CODE):
        raise AssertionError("Dispatcher no longer compares EAX against 0x80027101")

    branch = instruction_at(image, decoder, MESSAGE_BRANCH)
    if (branch.id != X86_INS_JE or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != BRANCH_TARGET):
        raise AssertionError("0x80027101 equality branch no longer targets the root-call block")

    call = instruction_at(image, decoder, ROOT_CALL)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != ROOT_FUNCTION):
        raise AssertionError("Dispatcher no longer calls FUN_588FCEF0 at 0x587C123B")


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
    selected = {int(address, 16) for address in CURRENT_MAIN_MESSAGE_80027101_STATE_ADDRESSES}
    ranges = read_ranges()
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_FUNCTION not in selected:
        raise AssertionError("Unexpected 0x80027101 closure address set")
    if set(ranges) != selected or sum(map(len, ranges.values())) != EXPECTED_RANGES:
        raise AssertionError("Fresh Ghidra body-range manifest differs from the closure")

    selected_body_owners = {
        address: tuple((start, start + length) for start, length, _ in ranges[address])
        for address in selected
    }
    matched_body_owners = {
        address: tuple((start, start + size) for start, size in record_ranges(records[address]))
        for address in matched if address in records
    }

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_sites = []
    boundary_targets = set()
    total_bytes = 0

    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None:
            raise AssertionError(f"Missing inventory/catalog row for {address:08X}")
        status = record.get("verified_by")
        if status != MARKER and not (args.allow_candidates and status == "candidate-not-yet-verified"):
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
            if len(code) != length:
                raise AssertionError(f"Ghidra body range is outside image at {start:08X}")
            instructions = instructions_for(code, start, decoder)
            if len(instructions) != expected_instructions:
                raise AssertionError(
                    f"Capstone/Ghidra instruction count differs at {start:08X}: "
                    f"{len(instructions)} != {expected_instructions}")
            for site, target, kind in external_transfers(instructions, own_ranges, image_end):
                selected_owner = next(
                    (owner for owner, body in selected_body_owners.items()
                     if any(start <= target < end for start, end in body)),
                    None,
                )
                matched_owner = next(
                    (owner for owner, body in matched_body_owners.items()
                     if any(start <= target < end for start, end in body)),
                    None,
                )
                if selected_owner is not None:
                    graph[address].add(selected_owner)
                elif matched_owner is not None:
                    boundary_sites.append((site, target))
                    boundary_targets.add(matched_owner)
                else:
                    raise AssertionError(
                        f"Unmatched direct transfer {target:08X} from {site:08X}")

    def reachable_from(edges):
        reachable = {ROOT_FUNCTION}
        queue = deque(reachable)
        while queue:
            for target in edges[queue.popleft()] - reachable:
                reachable.add(target)
                queue.append(target)
        return reachable

    reachable = reachable_from(graph)
    if reachable != selected:
        raise AssertionError(f"Not the exact root CALL/branch closure: {sorted(selected - reachable)}")
    if total_bytes != EXPECTED_BYTES:
        raise AssertionError(f"Unexpected closure size: {total_bytes} bytes")

    dispatcher_record = records.get(DISPATCHER)
    if dispatcher_record is None:
        raise AssertionError("Matched FUN_587BB700 dispatcher record is missing")
    verify_dispatch_case(image, decoder, record_ranges(dispatcher_record), matched)

    print(
        f"0x80027101 state path: {len(selected)} functions / {total_bytes:,} bytes "
        f"across {EXPECTED_RANGES} fresh Ghidra ranges; root reaches all members "
        f"calls, {len(boundary_sites)} transfers to {len(boundary_targets)} "
        "byte-verified boundaries, no unmatched direct transfers; dispatcher "
        "compare, branch, and root call pass"
    )


if __name__ == "__main__":
    main()
