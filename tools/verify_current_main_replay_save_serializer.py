"""Validate the installed client's replay/battle-save serializer slice."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import MAIN_REPLAY_SAVE_SERIALIZER_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-replay-save-serializer-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587EB370
MATCHED_CALLER = 0x587F8760
EXPECTED_INTERNAL_TRANSFERS = {0x587EB48F: 0x5897CE98}
EXPECTED_BOUNDARY_TRANSFERS = {
    (0x587EB554, 0x58789FB0),
    (0x587EBA7E, 0x5897CBDA),
}
CALLER_INSTRUCTIONS = {
    0x587FAE84: ("cmp", "dword ptr [ebp + 0x21c38], edi"),
    0x587FAE8A: ("je", "0x587fae98"),
    0x587FAE8C: ("push", "0x5899c908"),
    0x587FAE91: ("mov", "ecx, ebp"),
    0x587FAE93: ("call", "0x587eb370"),
}
EXPECTED_FUNCTIONS = 2
EXPECTED_BYTES = 1814
EXPECTED_RANGES = 4


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


def instruction_at(image, decoder, address):
    code = image[address - BASE:address - BASE + 15]
    instruction = next(decoder.disasm(code, address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def verify_transfer(image, decoder, site, target):
    actual = instruction_at(image, decoder, site)
    if (
        actual.id != X86_INS_CALL
        or not actual.operands
        or actual.operands[0].type != X86_OP_IMM
        or (actual.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Changed call at {site:08X}; expected {target:08X}")


def mapped_c_string(image, address):
    offset = address - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"Mapped string address is outside Main.dll: {address:08X}")
    end = image.find(b"\0", offset)
    if end < 0:
        raise AssertionError(f"Mapped string is not NUL-terminated at {address:08X}")
    return image[offset:end]


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
        address
        for address, item in records.items()
        if item.get("verified_by") == MARKER
    }
    selected = {int(address, 16) for address in MAIN_REPLAY_SAVE_SERIALIZER_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges):
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(
        sum(size for _, size in parts) for parts in function_ranges.values()
    )
    if (
        len(selected) != EXPECTED_FUNCTIONS
        or ROOT_ADDRESS not in selected
        or byte_count != EXPECTED_BYTES
        or range_count != EXPECTED_RANGES
    ):
        raise AssertionError("Unexpected replay-save serializer closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    internal_transfers = {}
    boundary_transfers = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        expected_ranges = function_ranges[address]
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified function {address:08X}")
        if (
            int(record["size"]) != int(row["size"])
            or sum(size for _, size in expected_ranges) != int(row["size"])
            or record_ranges(record) != expected_ranges
        ):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            for instruction in decode_complete(image, decoder, start, size):
                if (
                    instruction.id != X86_INS_CALL
                    and not instruction.group(CS_GRP_JUMP)
                ) or not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                    internal_transfers[instruction.address] = target
                elif target in matched:
                    boundary_transfers.add((instruction.address, target))
                else:
                    location = "mapped" if BASE <= target < image_end else "external"
                    raise AssertionError(
                        f"Unmatched {location} transfer to {target:08X} "
                        f"from {instruction.address:08X}"
                    )

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(
            f"Not the exact direct-call closure: {sorted(selected - reachable)}"
        )
    if internal_transfers != EXPECTED_INTERNAL_TRANSFERS:
        raise AssertionError("Ghidra internal transfer differs from mapped Main.dll")
    if boundary_transfers != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary transfers: {boundary_transfers}"
        )

    caller = records.get(MATCHED_CALLER)
    if caller is None or MATCHED_CALLER not in matched:
        raise AssertionError("Replay-save incoming caller is not byte-verified")
    if not any(
        start <= 0x587FAE93 < start + size
        for start, size in record_ranges(caller)
    ):
        raise AssertionError("Replay-save callsite is outside its matched caller")
    verify_transfer(image, decoder, 0x587FAE93, ROOT_ADDRESS)
    for address, expected in CALLER_INSTRUCTIONS.items():
        actual = instruction_at(image, decoder, address)
        if (actual.mnemonic, actual.op_str) != expected:
            raise AssertionError(
                f"Changed caller instruction at {address:08X}: "
                f"{actual.mnemonic} {actual.op_str}"
            )

    if mapped_c_string(image, 0x589C8EE0) != b"ReplayFile":
        raise AssertionError("The ReplayFile literal changed")
    if mapped_c_string(image, 0x5899C908) != b"SaveFile_0001":
        raise AssertionError("The caller's SaveFile_0001 literal changed")
    if b"FleetMission Battle Save file\0" not in image:
        raise AssertionError("The observed battle-save header literal is missing")
    thunk = decode_complete(image, decoder, 0x5897CE98, 6)
    if len(thunk) != 1 or thunk[0].mnemonic != "jmp" or thunk[0].op_str != "dword ptr [0x5898c26c]":
        raise AssertionError("The indirect six-byte serializer thunk changed")

    print(
        f"Main.dll replay/battle-save serializer: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; matched save gate, mapped literals, one in-closure "
        f"transfer, and {len(boundary_transfers)} verified boundary transfers pass"
    )


if __name__ == "__main__":
    main()
