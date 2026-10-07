"""Verify the two-root 0x80020A00 message/display closure in Main.dll."""
import argparse
import csv
import json
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_CMP, X86_INS_JMP, X86_OP_IMM, X86_OP_REG,
    X86_REG_EAX,
)

from build_current_main_verifications import MESSAGE_80020A00_CHAT_DISPLAY_ADDRESSES

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/message-80020a00-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOTS = {0x5881E120, 0x587531B0}
DISPATCHER = 0x587B83E0
MESSAGE_CODE_COMPARE = 0x587B852E
MESSAGE_CODE = 0x80020A00
ROOT_CALL_SITES = {
    0x587B861F: 0x5881E120,
    0x587B8646: 0x587531B0,
    0x587B870A: 0x5881E120,
    0x587B874D: 0x5881E120,
    0x587B8772: 0x587531B0,
}
EXPECTED_FUNCTIONS = 19
EXPECTED_BYTES = 8961
EXPECTED_RANGES = 19


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
        if insn.id not in (X86_INS_CALL, X86_INS_JMP) or not insn.operands:
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


def require_call(image, decoder, site, target):
    instruction = instruction_at(image, decoder, site)
    if (instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        got = f"{instruction.mnemonic} {instruction.op_str}"
        raise AssertionError(f"Expected CALL {target:08X} at {site:08X}; found {got}")


def verify_dispatch_case(image, decoder, caller_ranges, matched):
    if DISPATCHER not in matched:
        raise AssertionError("FUN_587B83E0 message dispatcher is not byte-verified")
    compare = instruction_at(image, decoder, MESSAGE_CODE_COMPARE)
    if (compare.id != X86_INS_CMP or len(compare.operands) != 2
            or compare.operands[0].type != X86_OP_REG
            or compare.operands[0].reg != X86_REG_EAX
            or compare.operands[1].type != X86_OP_IMM
            or (compare.operands[1].imm & 0xFFFFFFFF) != MESSAGE_CODE):
        raise AssertionError("Dispatcher no longer compares EAX against 0x80020A00")
    caller_body = tuple((start, start + size) for start, size in caller_ranges)
    if not any(lo <= MESSAGE_CODE_COMPARE < hi for lo, hi in caller_body):
        raise AssertionError("Message-code comparison is outside FUN_587B83E0's matched body")

    observed_root_calls = {}
    caller_instructions = []
    for start, size in caller_ranges:
        code = image[start - BASE:start - BASE + size]
        if len(code) != size:
            raise AssertionError(f"Matched caller range is outside image at {start:08X}")
        caller_instructions.extend(instructions_for(code, start, decoder))
    for insn in caller_instructions:
        if (insn.id == X86_INS_CALL and insn.operands
                and insn.operands[0].type == X86_OP_IMM):
            target = insn.operands[0].imm & 0xFFFFFFFF
            if target in ROOTS:
                observed_root_calls[insn.address] = target
    if observed_root_calls != ROOT_CALL_SITES:
        raise AssertionError(
            f"FUN_587B83E0 root call sites changed: {observed_root_calls}")
    for site, target in ROOT_CALL_SITES.items():
        if site <= MESSAGE_CODE_COMPARE:
            raise AssertionError("A selected message-handler call precedes its case comparison")
        require_call(image, decoder, site, target)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--allow-candidates", action="store_true",
                        help="audit before progress credit is recorded")
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
    selected = {int(address, 16) for address in MESSAGE_80020A00_CHAT_DISPLAY_ADDRESSES}
    ranges = read_ranges()
    if len(selected) != EXPECTED_FUNCTIONS or not ROOTS <= selected:
        raise AssertionError("Unexpected two-root 0x80020A00 closure address set")
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

    def reachable_from(roots, edges):
        reachable = set(roots)
        queue = deque(roots)
        while queue:
            for target in edges[queue.popleft()] - reachable:
                reachable.add(target)
                queue.append(target)
        return reachable

    reachable = reachable_from(ROOTS, graph)
    if reachable != selected:
        raise AssertionError(f"Not the exact two-root CALL/JMP closure: {sorted(selected - reachable)}")
    call_reachable = reachable_from(ROOTS, call_graph)
    if call_reachable != selected:
        raise AssertionError(f"Not the selected two-root CALL closure: {sorted(selected - call_reachable)}")
    if total_bytes != EXPECTED_BYTES:
        raise AssertionError(f"Unexpected closure size: {total_bytes} bytes")

    dispatcher_record = records.get(DISPATCHER)
    if dispatcher_record is None:
        raise AssertionError("Matched FUN_587B83E0 dispatcher record is missing")
    verify_dispatch_case(image, decoder, record_ranges(dispatcher_record), matched)

    print(
        f"0x80020A00 chat/display path: {len(selected)} functions / "
        f"{total_bytes:,} bytes across {EXPECTED_RANGES} fresh Ghidra ranges; "
        f"both roots reachable by direct calls, {len(boundary_sites)} transfers "
        f"to {len(boundary_targets)} byte-verified boundaries, no unmatched "
        "direct transfers; dispatcher case and all five root call sites pass"
    )


if __name__ == "__main__":
    main()
