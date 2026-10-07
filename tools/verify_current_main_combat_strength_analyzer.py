"""Validate the installed Main.dll combat-strength analyzer call closure."""
import csv
import hashlib
import json
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

from build_current_main_verifications import MAIN_COMBAT_STRENGTH_ANALYZER_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-combat-strength-analyzer-body-ranges.tsv"
CALLER_MANIFEST = ROOT / "config/NF2_2026/main-combat-strength-analyzer-callers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x58758EE0
EXPECTED_FUNCTIONS = 6
EXPECTED_BYTES = 3582
EXPECTED_RANGES = 10
EXPECTED_BOUNDARY_TRANSFERS = 24
EXPECTED_CALLERS = {
    (0x587B58F0, 0x587B5912, 0x587B4060, "open"),
    (0x587BB700, 0x587BFF8E, 0x58758EE0, "byte-verified"),
    (0x587BB700, 0x587C00FE, 0x58758EE0, "byte-verified"),
    (0x588D84D0, 0x588D8AF0, 0x587B4060, "byte-verified"),
    (0x588E05C0, 0x588E0653, 0x588E9E10, "byte-verified"),
}
EXPECTED_INTERNAL_TRANSFERS = {
    0x58758F52: 0x588E9E10,
    0x58759082: 0x58758870,
    0x58758CCB: 0x587B4060,
    0x588E9DF6: 0x588E92B0,
    0x588E9F3C: 0x588E9C70,
}
EXPECTED_MATCHED_CALLER_EVIDENCE = {
    0x587BB700: "0x80000100",
    0x588D84D0: "CShip_MapObjectScreen",
    0x588E05C0: "CShip_MapObjectScreen",
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def read_ranges():
    ranges = {}
    for row in read_tsv(RANGE_MANIFEST):
        address = int(row["function"], 16)
        start = int(row["start"], 16)
        size = int(row["length"])
        if (size <= 0 or int(row["instruction_bytes"]) != size
                or int(row["instruction_count"]) <= 0):
            raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
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
    instruction = next(decoder.disasm(image[address - BASE:address - BASE + 15], address), None)
    if instruction is None:
        raise AssertionError(f"Could not decode instruction at {address:08X}")
    return instruction


def verify_direct_transfer(image, decoder, site, target):
    instruction = instruction_at(image, decoder, site)
    if ((instruction.id != X86_INS_CALL and not instruction.group(CS_GRP_JUMP))
            or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Transfer at {site:08X} no longer targets {target:08X}")


def verify_external_callers(image, decoder, inventory, records, matched):
    rows = read_tsv(CALLER_MANIFEST)
    actual = {
        (int(row["source"], 16), int(row["site"], 16),
         int(row["target"], 16), row["source_status"])
        for row in rows
    }
    if actual != EXPECTED_CALLERS or len(rows) != len(EXPECTED_CALLERS):
        raise AssertionError("Fresh Ghidra incoming caller manifest changed")

    for source, site, target, status in EXPECTED_CALLERS:
        if source not in inventory:
            raise AssertionError(f"Incoming caller {source:08X} is not in the function inventory")
        if (source in matched) != (status == "byte-verified"):
            raise AssertionError(f"Caller verification status changed for {source:08X}")
        verify_direct_transfer(image, decoder, site, target)
        if status == "byte-verified":
            record = records.get(source)
            if record is None:
                raise AssertionError(f"Verified caller {source:08X} has no catalog record")
            if not any(start <= site < start + size for start, size in record_ranges(record)):
                raise AssertionError(f"Incoming site {site:08X} is outside its matched caller")
            evidence = json.dumps(record.get("evidence", {}))
            required = EXPECTED_MATCHED_CALLER_EVIDENCE[source]
            if required not in evidence:
                raise AssertionError(f"Matched caller {source:08X} lacks evidence {required!r}")


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    if hashlib.sha256(image).hexdigest() != catalog["mapped_sha256"]:
        raise AssertionError("Mapped Main.dll hash differs from the verification catalog")
    inventory = {
        int(row["address"], 16): row
        for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    selected = {int(address, 16) for address in MAIN_COMBAT_STRENGTH_ANALYZER_ADDRESSES}
    function_ranges = read_ranges()
    if selected != set(function_ranges):
        raise AssertionError("Builder set and fresh Ghidra body manifest disagree")
    range_count = sum(len(parts) for parts in function_ranges.values())
    byte_count = sum(sum(size for _, size in parts)
                     for parts in function_ranges.values())
    if (len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected
            or byte_count != EXPECTED_BYTES or range_count != EXPECTED_RANGES):
        raise AssertionError("Unexpected combat-strength analyzer closure shape")

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
            raise AssertionError(f"Catalog ranges disagree with fresh Ghidra at {address:08X}")

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
            f"Expected {EXPECTED_BOUNDARY_TRANSFERS} verified boundary transfers, "
            f"found {len(boundary_transfers)}"
        )

    for site, target in EXPECTED_INTERNAL_TRANSFERS.items():
        verify_direct_transfer(image, decoder, site, target)
    verify_external_callers(image, decoder, inventory, records, matched)
    matched_callers = len({source for source, _, _, status in EXPECTED_CALLERS
                           if status == "byte-verified"})
    open_callers = len({source for source, _, _, status in EXPECTED_CALLERS
                        if status == "open"})
    print(
        f"Main.dll combat-strength analyzer closure: {len(selected)} functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} fresh "
        f"Ghidra ranges; all are reachable from FUN_58758EE0, "
        f"{len(boundary_transfers)} verified boundary transfers and all "
        f"{len(EXPECTED_CALLERS)} incoming caller sites pass "
        f"({matched_callers} matched caller functions, {open_callers} open)"
    )


if __name__ == "__main__":
    main()
