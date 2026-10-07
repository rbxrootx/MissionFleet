"""Verify the original message 0x80022001 auxiliary child-refresh closure."""
import csv
import json
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import CURRENT_MAIN_MESSAGE_80022001_CHILD_REFRESH_ADDRESSES
from verify_current_main_message_80022001_state import (
    BASE, CATALOG_PATH, DISPATCHER, IMAGE_PATH, INVENTORY_PATH, MARKER,
    instruction_at, record_ranges, verify_dispatch_case,
)

ROOT = Path(__file__).resolve().parents[1]
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-message-80022001-auxiliary-child-refresh-body-ranges.tsv"
ROOT_FUNCTION = 0x58809780
CHILD_REFRESH_CALL = 0x587C075B
STATE_ROOT_CALL = 0x587C076D
STATE_ROOT = 0x5880C710
EXPECTED_FUNCTIONS = 4
EXPECTED_BYTES = 2212
EXPECTED_RANGES = 5
EXPECTED_INSTRUCTIONS = 693

EXPECTED_BOUNDARY_SITES = {
    (0x5884F5CA, 0x5897CD4C),
    (0x5884F649, 0x58903290),
    (0x5884F653, 0x58903290),
    (0x5884F71C, 0x58903290),
    (0x5884F726, 0x58903290),
    (0x5884F801, 0x58903290),
    (0x5884F80B, 0x58903290),
    (0x5884F83E, 0x58903290),
    (0x5884F8DD, 0x5874BA60),
    (0x5884FAC3, 0x58903290),
    (0x5884FAD0, 0x58903290),
    (0x5884FAE8, 0x58903290),
    (0x5884FB8E, 0x58903290),
    (0x5884FBAE, 0x58903290),
    (0x5884FBC3, 0x58903290),
    (0x5884FCE9, 0x5897CBDA),
}


def instructions_for(code, start, decoder):
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(item.size for item in instructions) != len(code)
            or instructions[-1].address + instructions[-1].size != start + len(code)):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def body_owner(address, body_ranges):
    return next((owner for owner, ranges in body_ranges.items()
                 if any(start <= address < end for start, end in ranges)), None)


def require_direct_call(image, decoder, site, target):
    insn = instruction_at(image, decoder, site)
    if (insn.id != X86_INS_CALL or not insn.operands
            or insn.operands[0].type != X86_OP_IMM
            or (insn.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Expected CALL {target:08X} at {site:08X}")


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
    selected = {int(address, 16)
                for address in CURRENT_MAIN_MESSAGE_80022001_CHILD_REFRESH_ADDRESSES}
    # The state verifier reads its own manifest; load this subsystem's independently
    # exported Ghidra ranges using the same validated schema.
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        manifest = defaultdict(list)
        for row in csv.DictReader(stream, delimiter="\t"):
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            length = int(row["length"])
            byte_count = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if length <= 0 or byte_count != length or instruction_count <= 0:
                raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
            manifest[address].append((start, length, instruction_count))
    ranges = {address: tuple(sorted(parts)) for address, parts in manifest.items()}

    if len(selected) != EXPECTED_FUNCTIONS or ROOT_FUNCTION not in selected:
        raise AssertionError("Unexpected child-refresh closure address set")
    if set(ranges) != selected or sum(map(len, ranges.values())) != EXPECTED_RANGES:
        raise AssertionError("Fresh Ghidra body-range manifest differs from the closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    body_ranges = {
        address: tuple((start, start + length) for start, length, _ in ranges[address])
        for address in selected
    }
    matched_ranges = {
        address: tuple((start, start + size) for start, size in record_ranges(records[address]))
        for address in matched
    }
    graph = {address: set() for address in selected}
    boundary_sites = set()
    boundary_targets = set()
    total_bytes = total_instructions = 0

    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified client record for {address:08X}")
        expected_ranges = tuple((start, length) for start, length, _ in ranges[address])
        if record_ranges(record) != expected_ranges:
            raise AssertionError(f"Catalog ranges differ from fresh Ghidra for {address:08X}")
        indexed_size = int(row["size"])
        if int(record["size"]) != indexed_size or sum(size for _, size in expected_ranges) != indexed_size:
            raise AssertionError(f"Ghidra body total differs from inventory for {address:08X}")
        total_bytes += indexed_size
        own_ranges = body_ranges[address]
        for start, length, expected_count in ranges[address]:
            code = image[start - BASE:start - BASE + length]
            if len(code) != length:
                raise AssertionError(f"Ghidra body range is outside image at {start:08X}")
            instructions = instructions_for(code, start, decoder)
            if len(instructions) != expected_count:
                raise AssertionError(
                    f"Capstone/Ghidra instruction count differs at {start:08X}: "
                    f"{len(instructions)} != {expected_count}")
            total_instructions += len(instructions)
            for insn in instructions:
                if ((insn.id != X86_INS_CALL and not insn.group(CS_GRP_JUMP))
                        or not insn.operands or insn.operands[0].type != X86_OP_IMM):
                    continue
                target = insn.operands[0].imm & 0xFFFFFFFF
                if not BASE <= target < image_end or any(lo <= target < hi for lo, hi in own_ranges):
                    continue
                owner = body_owner(target, body_ranges)
                if owner in selected:
                    graph[address].add(owner)
                else:
                    verified_owner = body_owner(target, matched_ranges)
                    if verified_owner not in matched:
                        raise AssertionError(
                            f"Unmatched direct transfer {target:08X} from {insn.address:08X}")
                    if insn.id == X86_INS_CALL:
                        boundary_sites.add((insn.address, target))
                        boundary_targets.add(verified_owner)
                    else:
                        raise AssertionError(
                            f"Unexpected direct external jump to verified code at {insn.address:08X}")

    reachable = {ROOT_FUNCTION}
    queue = deque(reachable)
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact root CALL closure: {sorted(selected - reachable)}")
    if total_bytes != EXPECTED_BYTES or total_instructions != EXPECTED_INSTRUCTIONS:
        raise AssertionError(
            f"Unexpected closure totals: {total_bytes} bytes / {total_instructions} instructions")
    if boundary_sites != EXPECTED_BOUNDARY_SITES:
        raise AssertionError(
            f"Unexpected boundary calls: missing={EXPECTED_BOUNDARY_SITES - boundary_sites}, "
            f"extra={boundary_sites - EXPECTED_BOUNDARY_SITES}")
    if len(boundary_targets) != 4 or not boundary_targets <= matched:
        raise AssertionError("Not all four boundary call targets are byte-verified")

    dispatcher = records.get(DISPATCHER)
    if dispatcher is None or DISPATCHER not in matched:
        raise AssertionError("Byte-matched FUN_587BB700 dispatcher is missing")
    dispatcher_ranges = record_ranges(dispatcher)
    verify_dispatch_case(image, decoder, dispatcher_ranges)
    require_direct_call(image, decoder, CHILD_REFRESH_CALL, ROOT_FUNCTION)
    require_direct_call(image, decoder, STATE_ROOT_CALL, STATE_ROOT)
    if not any(start <= CHILD_REFRESH_CALL < start + size for start, size in dispatcher_ranges):
        raise AssertionError("Child-refresh caller is outside byte-matched dispatcher")

    print(
        f"0x80022001 auxiliary child refresh: {len(selected)} functions / {total_bytes:,} bytes "
        f"across {EXPECTED_RANGES} fresh Ghidra ranges and {total_instructions} instructions; "
        f"root reaches every member; {len(boundary_sites)} verified boundary calls; "
        "dispatcher message case, child-refresh call, and adjacent state call pass"
    )


if __name__ == "__main__":
    main()
