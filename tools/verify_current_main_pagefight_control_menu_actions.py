"""Validate the installed PageFight control-menu action closure."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import (
    MAIN_PAGEFIGHT_CONTROL_MENU_ACTIONS_ADDRESSES,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-pagefight-control-menu-actions-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587F7530
MATCHED_CALLER = 0x587FF150
CALLER_SETUP = {
    0x587FF156: ("mov", "eax, dword ptr [edi + 4]"),
    0x587FF159: ("sub", "eax, 0x100"),
    0x587FF160: ("je", "0x587ff295"),
    0x587FF29B: ("push", "edi"),
    0x587FF29C: ("mov", "ecx, esi"),
    0x587FF29E: ("call", "0x587f7530"),
}
EXPECTED_ROOT_CALLS = {
    0x587F7590: 0x588B3180,
    0x587F75B5: 0x588B3180,
    0x587F75F4: 0x588B3180,
    0x587F7619: 0x588B3180,
    0x587F77CC: 0x588B3180,
    0x587F795A: 0x588545C0,
    0x587F79E5: 0x587E63F0,
    0x587F79F1: 0x587E6450,
    0x587F7BE9: 0x587E9310,
}
EXPECTED_SECONDARY_CALLS = {
    0x58854665: 0x587ECF10,
    0x588548CE: 0x587ECF10,
}
EXPECTED_FUNCTIONS = 7
EXPECTED_BYTES = 4357
EXPECTED_RANGES = 10
EXPECTED_BOUNDARY_TRANSFERS = 32


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


def verify_matched_caller(image, decoder, records, matched):
    caller = records.get(MATCHED_CALLER)
    if caller is None or MATCHED_CALLER not in matched:
        raise AssertionError("FUN_587FF150 is not byte-verified")
    if not all(any(start <= address < start + size
                   for start, size in record_ranges(caller))
               for address in CALLER_SETUP):
        raise AssertionError("Event dispatch setup is outside matched FUN_587FF150")
    evidence = caller.get("evidence", {})
    if "CPageFightOn_ControlMenuScreen" not in evidence.get("name_in_analysis", ""):
        raise AssertionError("Matched caller lacks CPageFightOn_ControlMenuScreen evidence")
    for address, (mnemonic, operands) in CALLER_SETUP.items():
        actual = instruction_at(image, decoder, address)
        if actual.mnemonic != mnemonic or actual.op_str != operands:
            raise AssertionError(
                f"Changed matched caller setup at {address:08X}: "
                f"{actual.mnemonic} {actual.op_str}"
            )


def verify_call(image, decoder, site, target):
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
    selected = {int(address, 16)
                for address in MAIN_PAGEFIGHT_CONTROL_MENU_ACTIONS_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges):
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(sum(size for _, size in parts)
                     for parts in function_ranges.values())
    if (len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected
            or byte_count != EXPECTED_BYTES or range_count != EXPECTED_RANGES):
        raise AssertionError("Unexpected PageFight control-menu closure shape")

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
        raise AssertionError(
            f"Not the exact direct-call closure: {sorted(selected - reachable)}"
        )
    if len(boundary_transfers) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary-transfer count: {len(boundary_transfers)}"
        )

    for site, target in {**EXPECTED_ROOT_CALLS, **EXPECTED_SECONDARY_CALLS}.items():
        verify_call(image, decoder, site, target)
    verify_matched_caller(image, decoder, records, matched)
    print(
        f"Main.dll PageFight control-menu actions: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; all are reachable from FUN_587F7530, "
        f"{len(boundary_transfers)} verified boundary transfers pass, and the "
        "matched event-code 0x100 callsite at 0x587FF29E passes"
    )


if __name__ == "__main__":
    main()
