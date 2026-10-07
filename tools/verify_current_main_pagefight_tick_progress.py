"""Audit the PageFight 25-tick counter/progress byte-match closure."""
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_CMP, X86_INS_JE, X86_INS_JMP, X86_INS_MOV,
    X86_OP_IMM, X86_OP_MEM, X86_REG_EBX, X86_REG_ECX,
)

from build_current_main_verifications import PAGEFIGHT_TICK_PROGRESS_ADDRESSES

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587F5470
ROOT_SIZE = 745
EXPECTED_FUNCTIONS = 4
EXPECTED_BYTES = 1237
FUNCTION_RANGES = {
    0x58762A20: ((0x58762A20, 0x3C),),
    0x587C3F50: ((0x587C3F50, 0x3B),),
    0x587E64D0: ((0x587E64D0, 0x175),),
    0x587F5470: ((0x587F5470, 0x25D), (0x587F56D0, 0x8C)),
}

PAGEFIGHT_VTABLE = 0x5899D180
PAGEFIGHT_UPDATE_SLOT = PAGEFIGHT_VTABLE + 0x0C
SCREEN_UPDATE = 0x587FD890
UPDATE_TO_EVENT_LOOP = {
    0x587FEF97: 0x587FB810,
    0x587FF039: 0x587FB810,
}
EVENT_LOOP_TO_ROOT = {0x587FB931: ROOT_ADDRESS}
GATE_COMPARE = 0x587FB926
GATE_BRANCH = 0x587FB92D
GATE_RECEIVER_MOVE = 0x587FB92F


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"], 16)),)


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
    code = image[address - BASE:address - BASE + 15]
    instruction = next(decoder.disasm(code, address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def require_direct_calls(image, decoder, calls, label):
    actual = {}
    for site, expected in calls.items():
        instruction = instruction_at(image, decoder, site)
        if (instruction.id != X86_INS_CALL or not instruction.operands
                or instruction.operands[0].type != X86_OP_IMM):
            raise AssertionError(f"Expected direct call at {site:08X} ({label})")
        target = instruction.operands[0].imm & 0xFFFFFFFF
        if target != expected:
            raise AssertionError(
                f"Unexpected {label} call at {site:08X}: {target:08X} != {expected:08X}")
        actual[site] = target
    return actual


def verify_gate(image, decoder):
    compare = instruction_at(image, decoder, GATE_COMPARE)
    if (compare.id != X86_INS_CMP or len(compare.operands) != 2
            or compare.operands[0].type != X86_OP_MEM
            or compare.operands[0].mem.base != X86_REG_EBX
            or compare.operands[0].mem.disp != 0x20D64
            or compare.operands[1].type != X86_OP_IMM
            or compare.operands[1].imm != 0):
        raise AssertionError("The +0x20D64 byte gate no longer precedes the PageFight update")
    branch = instruction_at(image, decoder, GATE_BRANCH)
    if (branch.id != X86_INS_JE or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != 0x587FB936):
        raise AssertionError("The zero-valued +0x20D64 path no longer skips the update call")
    receiver_move = instruction_at(image, decoder, GATE_RECEIVER_MOVE)
    if (receiver_move.id != X86_INS_MOV or len(receiver_move.operands) != 2
            or receiver_move.operands[0].reg != X86_REG_ECX
            or receiver_move.operands[1].reg != X86_REG_EBX):
        raise AssertionError("The PageFight receiver is no longer passed to the update")


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
    selected = set(FUNCTION_RANGES)
    configured = {int(address, 16) for address in PAGEFIGHT_TICK_PROGRESS_ADDRESSES}
    if selected != configured:
        raise AssertionError("Verifier and candidate-builder closure address sets differ")
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected:
        raise AssertionError("Unexpected PageFight counter/progress closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    checked_transfers = 0
    matched_boundaries = set()

    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = record_ranges(record)
        indexed_size = int(row["size"])
        if (int(record["size"]) != indexed_size
                or sum(size for _, size in expected_ranges) != indexed_size):
            raise AssertionError(f"Ghidra body size mismatch for {address:08X}")
        if expected_ranges != FUNCTION_RANGES[address]:
            raise AssertionError(f"Unexpected Ghidra body ranges for {address:08X}: {expected_ranges}")
        if address == ROOT_ADDRESS and indexed_size != ROOT_SIZE:
            raise AssertionError(f"Unexpected PageFight root size: {indexed_size}")
        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            code = image[start - BASE:start - BASE + size]
            for site, target in decode_external_transfers(
                    code, start, own_ranges, image_end, decoder):
                checked_transfers += 1
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    matched_boundaries.add(target)
                else:
                    raise AssertionError(
                        f"Unmatched external direct transfer {target:08X} from {site:08X}")

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact direct-call closure: {sorted(selected - reachable)}")

    byte_count = sum(int(inventory[address]["size"]) for address in selected)
    if byte_count != EXPECTED_BYTES:
        raise AssertionError(f"Unexpected closure byte total: {byte_count}")
    if SCREEN_UPDATE not in matched or 0x587FB810 not in inventory:
        raise AssertionError("The PageFight update/event-loop anchor is incomplete")
    if struct.unpack_from("<I", image, PAGEFIGHT_UPDATE_SLOT - BASE)[0] != SCREEN_UPDATE:
        raise AssertionError("PageFight vtable slot +0x0C no longer points to the update method")

    require_direct_calls(image, decoder, UPDATE_TO_EVENT_LOOP, "PageFight update to event loop")
    require_direct_calls(image, decoder, EVENT_LOOP_TO_ROOT, "event loop to counter/progress root")
    verify_gate(image, decoder)

    print(
        f"PageFight 25-tick counter/progress path: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical; root has "
        f"{len(FUNCTION_RANGES[ROOT_ADDRESS])} exact Ghidra ranges; direct-call "
        f"closure reaches every selected function, {len(matched_boundaries)} verified "
        f"boundary targets and {checked_transfers} mapped direct transfers checked; "
        "vtable, update callsites, and +0x20D64 gate pass"
    )


if __name__ == "__main__":
    main()
