"""Validate the installed Main.dll 0x80023102 request-display closure."""
import csv
import json
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import MAIN_DISPSCREEN_80023102_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-dispscreen-80023102-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58842980
MATCHED_CALLERS = (0x5881DC30, 0x588C4210)
CALLER_SETUP = {
    0x588C429A: ("movzx", "eax, word ptr [edi + 0xc]"),
    0x588C429E: ("mov", "ecx, dword ptr [0x58a245b4]"),
    0x588C42A4: ("push", "esi"),
    0x588C42A5: ("push", "eax"),
    0x588C42A6: ("call", "0x5881dc30"),
    0x5881DCC1: ("mov", "ecx, dword ptr [ebp + 0xdc]"),
    0x5881DCC7: ("add", "esp, 0xc"),
    0x5881DCCA: ("call", "0x58842980"),
}
EXPECTED_CLOSURE_TRANSFERS = {
    0x588429DE: (X86_INS_JMP, 0x58824610),
    0x58824613: (X86_INS_CALL, 0x58827610),
    0x5882461A: (X86_INS_CALL, 0x588285B0),
    0x58824622: (X86_INS_JMP, 0x588272D0),
    0x588275E7: (X86_INS_CALL, 0x58826F60),
    0x588286D8: (X86_INS_CALL, 0x587537E0),
    0x588287D3: (X86_INS_CALL, 0x587537E0),
    0x58828904: (X86_INS_CALL, 0x587537E0),
    0x58828A02: (X86_INS_CALL, 0x587537E0),
}
EXPECTED_FUNCTIONS = 7
EXPECTED_BYTES = 4093
EXPECTED_RANGES = 12
EXPECTED_BOUNDARY_TRANSFERS = 28


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


def verify_transfer(image, decoder, site, expected_id, target):
    actual = instruction_at(image, decoder, site)
    if (actual.id != expected_id or not actual.operands
            or actual.operands[0].type != X86_OP_IMM
            or (actual.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(
            f"Changed closure transfer at {site:08X}; expected {target:08X}"
        )


def verify_caller_chain(image, decoder, records, matched):
    for address in MATCHED_CALLERS:
        caller = records.get(address)
        if caller is None or address not in matched:
            raise AssertionError(f"Matched caller {address:08X} is not byte-verified")
    dispatcher_evidence = records[0x588C4210].get("evidence", {})
    dispatcher_behavior = dispatcher_evidence.get("behavior", "")
    if ("0x80023102" not in dispatcher_behavior
            and "0x80023101/02/05" not in dispatcher_behavior):
        raise AssertionError("Matched dispatcher evidence lacks the 0x80023102 branch")

    for address, (mnemonic, operands) in CALLER_SETUP.items():
        owner = 0x588C4210 if address >= 0x588C0000 else 0x5881DC30
        caller_ranges = record_ranges(records[owner])
        if not any(start <= address < start + size for start, size in caller_ranges):
            raise AssertionError(f"Call setup {address:08X} is outside matched caller")
        actual = instruction_at(image, decoder, address)
        if actual.mnemonic != mnemonic or actual.op_str != operands:
            raise AssertionError(
                f"Changed matched call setup at {address:08X}: "
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
    selected = {int(address, 16) for address in MAIN_DISPSCREEN_80023102_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges):
        raise AssertionError("Builder set and exact Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(sum(size for _, size in parts)
                     for parts in function_ranges.values())
    if (len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected
            or byte_count != EXPECTED_BYTES or range_count != EXPECTED_RANGES):
        raise AssertionError("Unexpected request-display closure shape")

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

    for site, (instruction_id, target) in EXPECTED_CLOSURE_TRANSFERS.items():
        verify_transfer(image, decoder, site, instruction_id, target)
    verify_caller_chain(image, decoder, records, matched)
    print(
        f"Main.dll 0x80023102 request-display closure: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} exact "
        f"Ghidra ranges; all are reachable from FUN_58842980, "
        f"{len(boundary_transfers)} verified boundary transfers pass, and the "
        "matched 0x80023102 dispatch-to-refresh call chain passes"
    )


if __name__ == "__main__":
    main()
