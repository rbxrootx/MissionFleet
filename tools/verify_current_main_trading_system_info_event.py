"""Validate the installed client's trading-system InfoData event closure."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import MAIN_TRADING_INFO_EVENT_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-trading-info-event-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x588F70E0
MATCHED_DISPATCHER = 0x587BB700
DISPATCH_CALL = 0x587C12C5
EXPECTED_FUNCTIONS = 23
EXPECTED_BYTES = 5195
EXPECTED_RANGES = 24
EXPECTED_BOUNDARY_CALLS = 94
EXPECTED_BOUNDARY_TRANSFERS = 95


def read_ranges():
    ranges = {}
    with RANGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            length = int(row["length"])
            instruction_bytes = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if length <= 0 or instruction_bytes != length or instruction_count <= 0:
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            ranges.setdefault(address, []).append((start, length))
    return {address: tuple(parts) for address, parts in ranges.items()}


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def decode_complete(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(item.size for item in instructions) != size
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def instruction_at(image, decoder, address):
    code = image[address - BASE:address - BASE + 15]
    instruction = next(decoder.disasm(code, address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def verify_dispatch_call(image, decoder, records, matched):
    caller = records.get(MATCHED_DISPATCHER)
    if caller is None or MATCHED_DISPATCHER not in matched:
        raise AssertionError("The event dispatcher is not byte-verified")
    if not any(start <= DISPATCH_CALL < start + size
               for start, size in record_ranges(caller)):
        raise AssertionError("The InfoData call site is outside the matched dispatcher")
    call = instruction_at(image, decoder, DISPATCH_CALL)
    if (call.id != X86_INS_CALL or not call.operands
            or call.operands[0].type != X86_OP_IMM
            or (call.operands[0].imm & 0xFFFFFFFF) != ROOT_ADDRESS):
        raise AssertionError("The matched dispatcher no longer calls FUN_588F70E0")

    # This is the matched caller's original argument setup immediately before
    # the call. It loads two 16-bit packet fields and passes the owner, owner
    # subobject, and packet pointer in the same order as the Ghidra listing.
    expected = (
        (0x587C12A7, "movzx", "eax, word ptr [ebp + 0xc]"),
        (0x587C12AB, "movzx", "ecx, word ptr [ebp + 0xe]"),
        (0x587C12AF, "lea", "edx, [ebx + 0xe0]"),
        (0x587C12B5, "push", "edx"),
        (0x587C12B6, "mov", "edx, dword ptr [ebp + 8]"),
        (0x587C12B9, "push", "ebx"),
        (0x587C12BA, "push", "eax"),
        (0x587C12BB, "mov", "eax, dword ptr [0x58a245f4]"),
        (0x587C12C0, "push", "ecx"),
        (0x587C12C1, "mov", "ecx, dword ptr [eax + 0x60]"),
        (0x587C12C4, "push", "edx"),
    )
    for address, mnemonic, operands in expected:
        actual = instruction_at(image, decoder, address)
        if actual.mnemonic != mnemonic or actual.op_str != operands:
            raise AssertionError(
                f"Changed event-dispatch argument setup at {address:08X}: "
                f"{actual.mnemonic} {actual.op_str}"
            )


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
    selected = {int(address, 16) for address in MAIN_TRADING_INFO_EVENT_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges):
        raise AssertionError("The builder set and exact Ghidra body manifest disagree")
    if (len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected
            or sum(sum(size for _, size in parts) for parts in function_ranges.values())
            != EXPECTED_BYTES
            or sum(len(parts) for parts in function_ranges.values()) != EXPECTED_RANGES):
        raise AssertionError("Unexpected trading-system InfoData closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    boundary_sites = set()
    boundary_transfers = set()
    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        expected_ranges = function_ranges[address]
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        if (int(record["size"]) != int(row["size"])
                or sum(size for _, size in expected_ranges) != int(row["size"])
                or record_ranges(record) != expected_ranges):
            raise AssertionError(f"Catalog body ranges do not match Ghidra for {address:08X}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            for instruction in decode_complete(image, decoder, start, size):
                is_call = instruction.id == X86_INS_CALL
                is_direct_jump = instruction.group(CS_GRP_JUMP)
                if (not is_call and not is_direct_jump) or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                if not BASE <= target < image_end:
                    continue
                if any(lo <= target < hi for lo, hi in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    boundary_transfers.add((instruction.address, target))
                    if is_call:
                        boundary_sites.add((instruction.address, target))
                else:
                    raise AssertionError(
                        f"Unmatched external call {target:08X} from {instruction.address:08X}"
                    )

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Not the exact direct-call closure: {sorted(selected - reachable)}")
    if len(boundary_sites) != EXPECTED_BOUNDARY_CALLS:
        raise AssertionError(f"Unexpected verified boundary call count: {len(boundary_sites)}")
    if len(boundary_transfers) != EXPECTED_BOUNDARY_TRANSFERS:
        raise AssertionError(
            f"Unexpected verified boundary transfer count: {len(boundary_transfers)}"
        )

    verify_dispatch_call(image, decoder, records, matched)
    print(
        f"Main.dll trading-system InfoData event closure: {len(selected)} functions / "
        f"{EXPECTED_BYTES:,} bytes ObjDiff-identical across {EXPECTED_RANGES} exact "
        f"Ghidra ranges; all selected functions are reachable, "
        f"{len(boundary_transfers)} verified boundary transfers pass "
        f"({len(boundary_sites)} calls, {len(boundary_transfers) - len(boundary_sites)} tail jumps), "
        "and matched dispatcher "
        "call/argument setup passes"
    )


if __name__ == "__main__":
    main()
