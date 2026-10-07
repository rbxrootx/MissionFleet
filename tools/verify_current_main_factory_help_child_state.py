"""Validate the CPannelFactoryHelp child-state selection closure in Main.dll."""
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_FACTORY_HELP_CHILD_STATE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-factory-help-child-state-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58852D60
VTABLE_ADDRESS_POINT = 0x5899E8E0
VTABLE_COL = 0x589A8898
TYPE_DESCRIPTOR = 0x589CCCC0
TYPE_NAME = b".?AVCPannelFactoryHelp@@\0"
EXPECTED_FUNCTIONS = 4
EXPECTED_BYTES = 2_210
EXPECTED_RANGES = 7
EXPECTED_INSTRUCTIONS = 627
EXPECTED_BOUNDARY_CALLS = {
    (0x58852E12, 0x588E64F0),
    (0x58852FF1, 0x58850A70),
    (0x588506C9, 0x58902D20),
    (0x58850785, 0x58902D20),
    (0x58850923, 0x58907990),
    (0x58850963, 0x587B63B0),
    (0x588509BE, 0x588B2700),
    (0x58850A04, 0x588B2700),
    (0x5879DD34, 0x5879D450),
    (0x5879DD41, 0x58908830),
    (0x5879DD55, 0x58908830),
    (0x5879DD68, 0x5890BC40),
    (0x5879D50A, 0x5879D480),
}
EXPECTED_CALLERS = (
    (0x58853010, 0x58853038, ROOT_ADDRESS),
    (0x58852D10, 0x58852D3A, 0x588504C0),
)


def read_u32(image, address):
    return struct.unpack_from("<I", image, address - BASE)[0]


def read_ranges():
    ranges = {}
    with RANGE_PATH.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            function = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_bytes = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if size <= 0 or instruction_bytes != size or instruction_count <= 0:
                raise AssertionError(f"Invalid Ghidra body range: {row}")
            ranges.setdefault(function, []).append((start, size, instruction_count))
    for function, parts in ranges.items():
        parts.sort()
        previous_end = None
        for start, size, _ in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping ranges at {start:08X}")
            previous_end = start + size
        if not parts or parts[0][0] != function:
            raise AssertionError(f"First body range does not begin at {function:08X}")
    return ranges


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (
        not instructions
        or instructions[0].address != start
        or sum(instruction.size for instruction in instructions) != size
        or instructions[-1].address + instructions[-1].size != start + size
    ):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def require_direct_call(image, decoder, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or not instruction.operands
        or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed direct call at {site:08X} to {target:08X}")


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
    matched = {
        address for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    selected = {int(address, 16) for address in MAIN_FACTORY_HELP_CHILD_STATE_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges) or ROOT_ADDRESS not in selected:
        raise AssertionError("Builder set and Ghidra body manifest disagree")

    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(size for parts in function_ranges.values() for _, size, _ in parts)
    instruction_count = sum(count for parts in function_ranges.values() for _, _, count in parts)
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
        or instruction_count != EXPECTED_INSTRUCTIONS
    ):
        raise AssertionError("Unexpected factory-help child-state closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_calls = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or address not in matched:
            raise AssertionError(f"Missing byte-verified inventory row for {address:08X}")
        expected_ranges = tuple((start, size) for start, size, _ in function_ranges[address])
        if (
            int(record["size"]) != int(row["size"])
            or sum(size for _, size in expected_ranges) != int(row["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size, expected_count in function_ranges[address]:
            instructions = decode_complete(image, decoder, start, size)
            if len(instructions) != expected_count:
                raise AssertionError(
                    f"Capstone/Ghidra instruction count differs at {start:08X}: "
                    f"{len(instructions)} != {expected_count}"
                )
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                elif instruction.id == X86_INS_CALL and target in matched:
                    boundary_calls.add((instruction.address, target))
                elif BASE <= target < image_end:
                    raise AssertionError(
                        f"Unmatched mapped transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact direct-call closure: {sorted(selected - reachable)}")
    if boundary_calls != EXPECTED_BOUNDARY_CALLS:
        raise AssertionError(
            f"Outbound calls differ from fresh Ghidra audit: {sorted(boundary_calls)}"
        )

    for caller, site, target in EXPECTED_CALLERS:
        record = records.get(caller)
        if record is None or caller not in matched:
            raise AssertionError(f"Caller {caller:08X} is not byte-verified")
        if not any(start <= site < start + size for start, size in record_ranges(record)):
            raise AssertionError(f"Call site {site:08X} is outside its matched caller")
        require_direct_call(image, decoder, site, target)

    vtable_col = read_u32(image, VTABLE_ADDRESS_POINT - 4)
    if vtable_col != VTABLE_COL:
        raise AssertionError(f"Unexpected CPannelFactoryHelp COL pointer: {vtable_col:08X}")
    col = struct.unpack_from("<IIIII", image, VTABLE_COL - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR, 0x589A88AC):
        raise AssertionError(f"Unexpected CPannelFactoryHelp complete-object locator: {col}")
    if image[TYPE_DESCRIPTOR - BASE + 8:TYPE_DESCRIPTOR - BASE + 8 + len(TYPE_NAME)] != TYPE_NAME:
        raise AssertionError("RTTI type descriptor no longer names CPannelFactoryHelp")
    if read_u32(image, VTABLE_ADDRESS_POINT + 0x0C) != 0x58853010:
        raise AssertionError("CPannelFactoryHelp slot +0x0C no longer points to state update")
    if read_u32(image, VTABLE_ADDRESS_POINT + 0x18) != 0x58852D10:
        raise AssertionError("CPannelFactoryHelp slot +0x18 no longer points to event callback")

    print(
        f"Main.dll CPannelFactoryHelp child-state path: {len(selected)} functions / "
        f"{byte_count:,} bytes in {range_count} exact Ghidra ranges and "
        f"{instruction_count} instructions; {len(boundary_calls)} matched boundary calls, "
        "two matched caller sites, RTTI, and direct-call closure pass"
    )


if __name__ == "__main__":
    main()
