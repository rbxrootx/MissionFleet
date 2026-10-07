"""Audit the non-null 0x8002C101 update path against Main.dll and Ghidra."""
import argparse
import csv
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_ADD, X86_INS_CALL, X86_INS_CMP, X86_INS_JA, X86_INS_JE,
    X86_INS_JMP, X86_INS_MOV, X86_INS_PUSH, X86_INS_TEST, X86_OP_IMM,
    X86_OP_MEM, X86_OP_REG, X86_REG_EAX, X86_REG_EDI, X86_REG_ESP,
)

from build_current_main_verifications import MESSAGE_8002C101_UPDATE_ADDRESSES

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/message-8002c101-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58880F00
ROOT_SIZE = 106
EXPECTED_FUNCTIONS = 16
EXPECTED_BYTES = 12289
EXPECTED_RANGES = 34

# Ghidra identifies FUN_58882D80 as the message dispatcher. This case is
# selected by code 0x8002C101 -> jump-table index zero; its payload gate and
# post-update notification are checked against the installed image below.
DISPATCHER = 0x58882D80
MESSAGE_CODE = 0x8002C101
DISPATCH_ADJUST = 0x7FFD3EFF
DISPATCH_ADD = 0x58882DED
DISPATCH_COMPARE = 0x58882DF2
DISPATCH_BOUNDS_BRANCH = 0x58882DF5
DISPATCH_FALLBACK = 0x58883DBD
DISPATCH_INPUT_LOAD = 0x58882DE6
DISPATCH_INDIRECT_JUMP = 0x58882DFC
DISPATCH_TABLE = 0x58883DD8
CASE_ENTRY = 0x58882E03
PAYLOAD_TEST = 0x58882E03
NULL_BRANCH = 0x58882E05
ROOT_CALL = 0x58882E0C
AFTER_ROOT_PUSH = 0x58882E11
AFTER_ROOT_CALL = 0x58882E18
NULL_PATH = 0x58882F3A
POST_UPDATE = 0x5887A3F0


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
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            ranges[function].append((start, length))
    for function, segments in ranges.items():
        segments.sort()
        previous_end = None
        for start, length in segments:
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


def decode_external_transfers(code, start, own_ranges, image_end, decoder):
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(insn.size for insn in instructions) != len(code)
            or instructions[-1].address + instructions[-1].size != start + len(code)):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
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
        transfers.append((insn.address, target))
    return transfers


def instruction_at(image, decoder, address):
    instruction = next(decoder.disasm(image[address - BASE:address - BASE + 15], address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def require_direct(image, decoder, address, instruction_id, target, label):
    instruction = instruction_at(image, decoder, address)
    if (instruction.id != instruction_id or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Unexpected {label} at {address:08X}: {instruction.mnemonic} {instruction.op_str}")


def require_eax_immediate(image, decoder, address, instruction_id, value, label):
    instruction = instruction_at(image, decoder, address)
    if (instruction.id != instruction_id or len(instruction.operands) != 2
            or instruction.operands[0].type != X86_OP_REG
            or instruction.operands[0].reg != X86_REG_EAX
            or instruction.operands[1].type != X86_OP_IMM
            or (instruction.operands[1].imm & 0xFFFFFFFF) != value):
        raise AssertionError(f"The {label} instruction changed at {address:08X}")


def require_push_immediate(image, decoder, address, value, label):
    instruction = instruction_at(image, decoder, address)
    if (instruction.id != X86_INS_PUSH or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != value):
        raise AssertionError(f"The {label} instruction changed at {address:08X}")


def verify_dispatch(image, decoder):
    if (MESSAGE_CODE + DISPATCH_ADJUST) & 0xFFFFFFFF:
        raise AssertionError("The 0x8002C101 message no longer selects dispatch index zero")
    adjust = instruction_at(image, decoder, DISPATCH_ADD)
    load = instruction_at(image, decoder, DISPATCH_INPUT_LOAD)
    if (load.id != X86_INS_MOV or len(load.operands) != 2
            or load.operands[0].type != X86_OP_REG
            or load.operands[0].reg != X86_REG_EAX
            or load.operands[1].type != X86_OP_MEM
            or load.operands[1].mem.base != X86_REG_ESP
            or load.operands[1].mem.disp != 0x444):
        raise AssertionError("The message-code dispatch input changed")
    if (adjust.id != X86_INS_ADD or len(adjust.operands) != 2
            or adjust.operands[0].type != X86_OP_REG
            or adjust.operands[0].reg != X86_REG_EAX
            or adjust.operands[1].type != X86_OP_IMM
            or (adjust.operands[1].imm & 0xFFFFFFFF) != DISPATCH_ADJUST):
        raise AssertionError("The message dispatch index calculation changed")
    require_eax_immediate(image, decoder, DISPATCH_COMPARE, X86_INS_CMP, 5,
                          "message dispatch bounds check")
    require_direct(image, decoder, DISPATCH_BOUNDS_BRANCH, X86_INS_JA,
                   DISPATCH_FALLBACK, "message dispatch bounds branch")
    indirect = instruction_at(image, decoder, DISPATCH_INDIRECT_JUMP)
    if (indirect.id != X86_INS_JMP or not indirect.operands
            or indirect.operands[0].type != X86_OP_MEM
            or indirect.operands[0].mem.index != X86_REG_EAX
            or indirect.operands[0].mem.scale != 4
            or (indirect.operands[0].mem.disp & 0xFFFFFFFF) != DISPATCH_TABLE):
        raise AssertionError("The message jump-table dispatch changed")
    entry = struct.unpack_from("<I", image, DISPATCH_TABLE - BASE)[0]
    if entry != CASE_ENTRY:
        raise AssertionError(f"Dispatch table entry zero changed: {entry:08X}")

    payload_test = instruction_at(image, decoder, PAYLOAD_TEST)
    if (payload_test.id != X86_INS_TEST or len(payload_test.operands) != 2
            or any(op.type != X86_OP_REG or op.reg != X86_REG_EDI
                   for op in payload_test.operands)):
        raise AssertionError("The 0x8002C101 payload-null test changed")
    require_direct(image, decoder, NULL_BRANCH, X86_INS_JE, NULL_PATH,
                   "null payload branch")
    push_payload = instruction_at(image, decoder, ROOT_CALL - 1)
    if (push_payload.id != X86_INS_PUSH or not push_payload.operands
            or push_payload.operands[0].type != X86_OP_REG
            or push_payload.operands[0].reg != X86_REG_EDI):
        raise AssertionError("The non-null payload is no longer passed to the update root")
    require_direct(image, decoder, ROOT_CALL, X86_INS_CALL, ROOT_ADDRESS,
                   "message handler to update root")
    require_push_immediate(image, decoder, AFTER_ROOT_PUSH, 0x1004,
                           "post-update event identifier")
    require_direct(image, decoder, AFTER_ROOT_CALL, X86_INS_CALL, POST_UPDATE,
                   "post-update notification")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--allow-candidates", action="store_true",
                        help="audit the closure before its catalog entries are credited")
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

    selected = {int(address, 16) for address in MESSAGE_8002C101_UPDATE_ADDRESSES}
    ranges = load_ranges()
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected:
        raise AssertionError("Unexpected 0x8002C101 update closure address set")
    if set(ranges) != selected or sum(map(len, ranges.values())) != EXPECTED_RANGES:
        raise AssertionError("Committed Ghidra body-range manifest differs from the closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_transfers = 0
    matched_boundaries = set()
    total_bytes = 0

    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None:
            raise AssertionError(f"Missing inventory/catalog record for {address:08X}")
        if (record.get("verified_by") != MARKER
                and not (args.allow_candidates
                         and record.get("verified_by") == "candidate-not-yet-verified")):
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = ranges[address]
        if record_ranges(record) != expected_ranges:
            raise AssertionError(f"Catalog body ranges differ from Ghidra for {address:08X}")
        indexed_size = int(row["size"])
        if (int(record["size"]) != indexed_size
                or sum(length for _, length in expected_ranges) != indexed_size):
            raise AssertionError(f"Ghidra body size differs from inventory for {address:08X}")
        if address == ROOT_ADDRESS and indexed_size != ROOT_SIZE:
            raise AssertionError(f"Unexpected update root size: {indexed_size}")
        total_bytes += indexed_size
        own_ranges = tuple((start, start + length) for start, length in expected_ranges)
        for start, length in expected_ranges:
            code = image[start - BASE:start - BASE + length]
            for site, target in decode_external_transfers(
                    code, start, own_ranges, image_end, decoder):
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    boundary_transfers += 1
                    matched_boundaries.add(target)
                else:
                    raise AssertionError(
                        f"Unmatched direct transfer {target:08X} from {site:08X}")

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(
            f"Address set is not the exact root closure: {sorted(selected - reachable)}")
    if total_bytes != EXPECTED_BYTES:
        raise AssertionError(f"Unexpected body total: {total_bytes} bytes")
    if DISPATCHER not in matched:
        raise AssertionError("The byte-matched message dispatcher is missing")
    verify_dispatch(image, decoder)

    print(
        f"0x8002C101 non-null update path: {len(selected)} functions / "
        f"{total_bytes:,} bytes across {EXPECTED_RANGES} exact Ghidra ranges; "
        f"all members reachable from FUN_{ROOT_ADDRESS:08x}, "
        f"{boundary_transfers} direct transfers to {len(matched_boundaries)} "
        "previously verified boundary functions, no unmatched direct transfers; "
        "matched dispatcher case index, null-payload branch, root call, and "
        "post-update notification pass"
    )


if __name__ == "__main__":
    main()
