"""Audit FUN_5874A010's linked-entry update closure against installed Main.dll."""
import argparse
import csv
import json
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import CURRENT_MAIN_5874A010_UPDATE_ADDRESSES

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/5874a010-update-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x5874A010
ROOT_SIZE = 1466
EXPECTED_FUNCTIONS = 5
EXPECTED_BYTES = 1684
EXPECTED_RANGES = 5
EXPECTED_BOUNDARY_TRANSFERS = 13
EXPECTED_BOUNDARY_FUNCTIONS = 7
MATCHED_CALLER = 0x587C4450
ROOT_CALL_SITES = {
    0x587C44C9: ROOT_ADDRESS,
    0x587C4577: ROOT_ADDRESS,
}
SHARED_HELPER_CALL_SITES = {
    0x5873F599: 0x587E6480,
    0x588D3726: 0x587E6480,
    0x588DE9CF: 0x587E6480,
    0x588E00CD: 0x58749FA0,
    0x588E00EC: 0x58749FA0,
}


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
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
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
        transfers.append((insn.address, target))
    return transfers


def require_direct_call(image, decoder, site, target):
    code = image[site - BASE:site - BASE + 15]
    instruction = next(decoder.disasm(code, site), None)
    if (instruction is None or instruction.id != X86_INS_CALL
            or not instruction.operands or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        got = "undecodable" if instruction is None else f"{instruction.mnemonic} {instruction.op_str}"
        raise AssertionError(f"Expected CALL {target:08X} at {site:08X}; found {got}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--allow-candidates", action="store_true",
                        help="audit closure structure before progress credit")
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

    selected = {int(address, 16) for address in CURRENT_MAIN_5874A010_UPDATE_ADDRESSES}
    ranges = read_ranges()
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected:
        raise AssertionError("Unexpected FUN_5874A010 closure address set")
    if set(ranges) != selected or sum(map(len, ranges.values())) != EXPECTED_RANGES:
        raise AssertionError("Ghidra body-range manifest differs from the closure")

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
        if (record.get("verified_by") != MARKER
                and not (args.allow_candidates and
                         record.get("verified_by") == "candidate-not-yet-verified")):
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = tuple((start, length) for start, length, _ in ranges[address])
        if record_ranges(record) != expected_ranges:
            raise AssertionError(f"Catalog ranges differ from fresh Ghidra for {address:08X}")
        indexed_size = int(row["size"])
        if (int(record["size"]) != indexed_size
                or sum(length for _, length in expected_ranges) != indexed_size):
            raise AssertionError(f"Ghidra body total differs from inventory for {address:08X}")
        if address == ROOT_ADDRESS and indexed_size != ROOT_SIZE:
            raise AssertionError(f"Unexpected FUN_5874A010 size: {indexed_size}")
        total_bytes += indexed_size
        own_ranges = tuple((start, start + length) for start, length in expected_ranges)
        for start, length, expected_instructions in ranges[address]:
            code = image[start - BASE:start - BASE + length]
            instructions = instructions_for(code, start, decoder)
            if len(instructions) != expected_instructions:
                raise AssertionError(
                    f"Capstone/Ghidra instruction count differs at {start:08X}: "
                    f"{len(instructions)} != {expected_instructions}")
            for site, target in external_transfers(instructions, own_ranges, image_end):
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    boundary_sites.append((site, target))
                    boundary_targets.add(target)
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
        raise AssertionError(f"Not the exact root closure: {sorted(selected - reachable)}")
    if (total_bytes != EXPECTED_BYTES
            or len(boundary_sites) != EXPECTED_BOUNDARY_TRANSFERS
            or len(boundary_targets) != EXPECTED_BOUNDARY_FUNCTIONS):
        raise AssertionError(
            f"Unexpected totals: {total_bytes} bytes, {len(boundary_sites)} boundary sites, "
            f"{len(boundary_targets)} boundary targets")

    caller = records.get(MATCHED_CALLER)
    if caller is None or caller.get("verified_by") != MARKER:
        raise AssertionError("Matched FUN_587C4450 caller is missing")
    for site, target in ROOT_CALL_SITES.items():
        require_direct_call(image, decoder, site, target)
    for site, target in SHARED_HELPER_CALL_SITES.items():
        require_direct_call(image, decoder, site, target)
    for address in (0x5873F020, 0x588DE620, 0x588DFFB0):
        if address not in matched:
            raise AssertionError(f"Expected shared-helper caller {address:08X} is not verified")

    print(
        f"FUN_5874A010 linked-entry update: {len(selected)} functions / "
        f"{total_bytes:,} bytes across {EXPECTED_RANGES} fresh Ghidra ranges; "
        f"all members reachable from the root, {len(boundary_sites)} direct "
        f"transfers to {len(boundary_targets)} verified boundaries, no unmatched "
        "direct transfers; both matched FUN_587C4450 call sites and the five "
        "shared-helper references pass"
    )


if __name__ == "__main__":
    main()
