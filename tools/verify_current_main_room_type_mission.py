"""Validate the installed Main.dll CRoomTypeMission constructor closure."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import MAIN_ROOM_TYPE_MISSION_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-room-type-mission-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588CEF50
MATCHED_CALLERS = (0x587D51D0, 0x588C9280)
CALLER_SETUP = {
    0x587D53D8: (0x587D51D0, "mov", "ecx, dword ptr [0x58a24828]"),
    0x587D53DE: (0x587D51D0, "push", "1"),
    0x587D53E0: (0x587D51D0, "call", "0x587aeef0"),
    0x587D53E5: (0x587D51D0, "test", "eax, eax"),
    0x587D53E7: (0x587D51D0, "jne", "0x587d5454"),
    0x588CAA2E: (0x588C9280, "push", "0xa4"),
    0x588CAA3E: (0x588C9280, "call", "0x5897cc4e"),
    0x588CAA53: (0x588C9280, "lea", "edx, [esi + 0x12c]"),
    0x588CAA5D: (0x588C9280, "push", "ecx"),
    0x588CAA5E: (0x588C9280, "push", "ebx"),
    0x588CAA5F: (0x588C9280, "push", "ebp"),
    0x588CAA60: (0x588C9280, "push", "esi"),
    0x588CAA61: (0x588C9280, "mov", "ecx, eax"),
    0x588CAA63: (0x588C9280, "call", "0x588cef50"),
}
EXPECTED_CLOSURE_TRANSFERS = {
    0x588CEDB0: 0x587AEEF0,
    0x588CEF96: 0x588D02E0,
    0x588CF4A0: 0x588CEC10,
}
EXPECTED_FUNCTIONS = 4
EXPECTED_BYTES = 3634
EXPECTED_RANGES = 4
EXPECTED_BOUNDARY_TRANSFERS = 72


def read_ranges():
    ranges = {}
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            if size <= 0 or int(row["instruction_bytes"]) != size:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            if int(row["instruction_count"]) <= 0:
                raise AssertionError(f"Empty Ghidra instruction range: {row}")
            ranges.setdefault(address, []).append((start, size))
    return {address: tuple(parts) for address, parts in ranges.items()}


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(segment["address"], 16), int(segment["size"]))
                     for segment in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(instruction.size for instruction in instructions) != size
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def instruction_at(image, decoder, address):
    code = image[address - BASE:address - BASE + 15]
    instruction = next(decoder.disasm(code, address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def verify_callers(image, decoder, records, matched):
    expected_class_names = {
        0x587D51D0: "CPageChannelBattle_ControlMenuScreen",
        0x588C9280: "CRoomSettingManager",
    }
    for address in MATCHED_CALLERS:
        caller = records.get(address)
        if caller is None or address not in matched:
            raise AssertionError(f"Matched caller {address:08X} is not byte-verified")
        evidence = json.dumps(caller.get("evidence", {}))
        if expected_class_names[address] not in evidence:
            raise AssertionError(
                f"Matched caller evidence lacks {expected_class_names[address]}"
            )

    for address, (owner, mnemonic, operands) in CALLER_SETUP.items():
        if not any(start <= address < start + size
                   for start, size in record_ranges(records[owner])):
            raise AssertionError(f"Call setup {address:08X} is outside its matched caller")
        actual = instruction_at(image, decoder, address)
        if actual.mnemonic != mnemonic or actual.op_str != operands:
            raise AssertionError(
                f"Changed matched call setup at {address:08X}: "
                f"{actual.mnemonic} {actual.op_str}"
            )


def verify_transfer(image, decoder, site, target):
    actual = instruction_at(image, decoder, site)
    if (actual.id != X86_INS_CALL or not actual.operands
            or actual.operands[0].type != X86_OP_IMM
            or (actual.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Changed call at {site:08X}; expected {target:08X}")


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
    selected = {int(address, 16) for address in MAIN_ROOM_TYPE_MISSION_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges):
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(sum(size for _, size in parts)
                     for parts in function_ranges.values())
    if (len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected
            or byte_count != EXPECTED_BYTES or range_count != EXPECTED_RANGES):
        raise AssertionError("Unexpected CRoomTypeMission closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_transfers = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        expected_ranges = function_ranges[address]
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified function {address:08X}")
        if (int(record["size"]) != int(row["size"])
                or sum(size for _, size in expected_ranges) != int(row["size"])
                or record_ranges(record) != expected_ranges):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            for instruction in decode_complete(image, decoder, start, size):
                if ((instruction.id != X86_INS_CALL
                     and not instruction.group(CS_GRP_JUMP))
                        or not instruction.operands
                        or instruction.operands[0].type != X86_OP_IMM):
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if not BASE <= target < image_end:
                    continue
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    boundary_transfers.add((instruction.address, target))
                else:
                    raise AssertionError(
                        f"Unmatched external transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact closure: {sorted(selected - reachable)}")
    if len(boundary_transfers) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary-transfer count: {len(boundary_transfers)}"
        )

    for site, target in EXPECTED_CLOSURE_TRANSFERS.items():
        verify_transfer(image, decoder, site, target)
    verify_callers(image, decoder, records, matched)
    print(
        f"Main.dll CRoomTypeMission constructor closure: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; all are reachable from FUN_588CEF50, "
        f"{len(boundary_transfers)} verified boundary transfers pass, and the "
        "matched CRoomSettingManager/CPageChannelBattle caller paths pass"
    )


if __name__ == "__main__":
    main()
