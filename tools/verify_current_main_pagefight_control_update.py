"""Audit the RTTI-anchored PageFight controller update byte-match closure."""
import csv
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_CMP, X86_INS_JE, X86_INS_JMP, X86_INS_JNE,
    X86_INS_MOV, X86_OP_IMM, X86_OP_MEM, X86_REG_EBX, X86_REG_ECX,
)

from build_current_main_verifications import PAGEFIGHT_CONTROL_UPDATE_ADDRESSES

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/pagefight-update-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587FB810
ROOT_SIZE = 1198
EXPECTED_FUNCTIONS = 149
EXPECTED_BYTES = 48515
EXPECTED_RANGES = 189
EXPECTED_BOUNDARY_TRANSFERS = 746
EXPECTED_MATCHED_BOUNDARIES = 77

PAGEFIGHT_VTABLE = 0x5899D180
PAGEFIGHT_UPDATE_SLOT = PAGEFIGHT_VTABLE + 0x0C
SCREEN_UPDATE = 0x587FD890
UPDATE_TO_EVENT_LOOP = {
    0x587FEF97: ROOT_ADDRESS,
    0x587FF039: ROOT_ADDRESS,
}
EVENT_LOOP_TO_MATCHED_BRANCHES = {
    0x587FB931: 0x587F5470,
    0x587FBC99: 0x587CDD60,
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
            if (length <= 0 or instruction_bytes != length or instruction_count <= 0):
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            ranges[function].append((start, length))
    for function, segments in ranges.items():
        segments.sort()
        previous_end = None
        for start, length in segments:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping Ghidra body ranges for {function:08X}")
            previous_end = start + length
        if segments[0][0] != function:
            raise AssertionError(f"First Ghidra body range does not start at {function:08X}")
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


def require_direct_calls(image, decoder, calls, label):
    for site, expected in calls.items():
        instruction = instruction_at(image, decoder, site)
        if (instruction.id != X86_INS_CALL or not instruction.operands
                or instruction.operands[0].type != X86_OP_IMM):
            raise AssertionError(f"Expected direct call at {site:08X} ({label})")
        target = instruction.operands[0].imm & 0xFFFFFFFF
        if target != expected:
            raise AssertionError(
                f"Unexpected {label} call at {site:08X}: {target:08X} != {expected:08X}")


def verify_gate(image, decoder, address, displacement, width, branch_address,
                branch_target, label):
    compare = instruction_at(image, decoder, address)
    if (compare.id != X86_INS_CMP or len(compare.operands) != 2
            or compare.operands[0].type != X86_OP_MEM
            or compare.operands[0].mem.base != X86_REG_EBX
            or compare.operands[0].mem.disp != displacement
            or compare.operands[0].size != width
            or compare.operands[1].type != X86_OP_IMM
            or compare.operands[1].imm != (7 if width == 2 else 0)):
        raise AssertionError(f"The {label} comparison changed")
    branch = instruction_at(image, decoder, branch_address)
    expected_id = X86_INS_JNE if width == 2 else X86_INS_JE
    if (branch.id != expected_id or not branch.operands
            or branch.operands[0].type != X86_OP_IMM
            or (branch.operands[0].imm & 0xFFFFFFFF) != branch_target):
        raise AssertionError(f"The {label} branch no longer guards the call")


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

    selected = {int(address, 16) for address in PAGEFIGHT_CONTROL_UPDATE_ADDRESSES}
    ranges = load_ranges()
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected:
        raise AssertionError("Unexpected PageFight controller closure address set")
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
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = ranges[address]
        if record_ranges(record) != expected_ranges:
            raise AssertionError(f"Catalog body ranges differ from Ghidra for {address:08X}")
        indexed_size = int(row["size"])
        if (int(record["size"]) != indexed_size
                or sum(length for _, length in expected_ranges) != indexed_size):
            raise AssertionError(f"Ghidra body size differs from inventory for {address:08X}")
        if address == ROOT_ADDRESS and indexed_size != ROOT_SIZE:
            raise AssertionError(f"Unexpected PageFight update root size: {indexed_size}")
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
        raise AssertionError(f"Address set is not the exact root closure: {sorted(selected - reachable)}")
    if (total_bytes != EXPECTED_BYTES
            or boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS
            or len(matched_boundaries) != EXPECTED_MATCHED_BOUNDARIES):
        raise AssertionError(
            f"Unexpected totals: {total_bytes} bytes, {boundary_transfers} boundary transfers, "
            f"{len(matched_boundaries)} matched boundary functions")

    if SCREEN_UPDATE not in matched or ROOT_ADDRESS not in inventory:
        raise AssertionError("The matched PageFight update anchor is incomplete")
    if (0x587F5470 not in matched or 0x587CDD60 not in matched
            or 0x587FD890 not in matched):
        raise AssertionError("Previously matched PageFight update branches are missing")
    if struct.unpack_from("<I", image, PAGEFIGHT_UPDATE_SLOT - BASE)[0] != SCREEN_UPDATE:
        raise AssertionError("PageFight vtable slot +0x0C no longer points to FUN_587FD890")

    require_direct_calls(image, decoder, UPDATE_TO_EVENT_LOOP, "screen update to event loop")
    require_direct_calls(image, decoder, EVENT_LOOP_TO_MATCHED_BRANCHES,
                         "event loop to previously matched branches")
    verify_gate(image, decoder, 0x587FB926, 0x20D64, 1, 0x587FB92D, 0x587FB936,
                "25-tick counter")
    verify_gate(image, decoder, 0x587FBC89, 0x105A2, 2, 0x587FBC91, 0x587FBC9E,
                "mode-7 OpConvoy")

    print(
        f"CPageFightOn_ControlMenuScreen update closure: {len(selected)} functions / "
        f"{total_bytes:,} bytes ObjDiff-identical across {EXPECTED_RANGES} exact Ghidra "
        f"ranges; all members reachable from FUN_587fb810, {boundary_transfers} direct "
        f"transfers to {len(matched_boundaries)} verified boundary functions, no "
        "unmatched direct transfers; vtable, two matched callers, timer gate, and "
        "mode-7 OpConvoy gate pass"
    )


if __name__ == "__main__":
    main()
