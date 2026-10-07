"""Validate the event 0x80021101 record-metric helper closure."""
import csv
import hashlib
import json
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import MAIN_80021101_RECORD_METRIC_ADDRESSES
else:
    from build_current_main_verifications import MAIN_80021101_RECORD_METRIC_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_MANIFEST = ROOT / "config/NF2_2026/current-main-80021101-record-metric-body-ranges.tsv"
TRANSFER_MANIFEST = ROOT / "config/NF2_2026/current-main-80021101-record-metric-transfers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587590A0
EXPECTED_RANGES = {
    0x587583E0: ((0x587583E0, 889),),
    0x58758760: ((0x58758760, 87), (0x587587C0, 168)),
    0x587590A0: ((0x587590A0, 536),),
}
EXPECTED_TRANSFERS = {
    (0x587590A0, 0x587590C5, "UNCONDITIONAL_CALL", 0x5897CC48),
    (0x587590A0, 0x587590D3, "UNCONDITIONAL_CALL", 0x5897CC48),
    (0x587590A0, 0x58759195, "UNCONDITIONAL_CALL", 0x58758760),
    (0x587590A0, 0x587591C2, "UNCONDITIONAL_CALL", 0x587583E0),
    (0x587590A0, 0x5875925B, "UNCONDITIONAL_CALL", 0x58758760),
    (0x587590A0, 0x58759288, "UNCONDITIONAL_CALL", 0x587583E0),
    (0x58758760, 0x587587D0, "UNCONDITIONAL_CALL", 0x58778DC0),
    (0x58758760, 0x5875883B, "UNCONDITIONAL_JUMP", 0x58778DC0),
    (0x58758760, 0x58758853, "UNCONDITIONAL_JUMP", 0x58778DC0),
    (0x58758760, 0x58758859, "UNCONDITIONAL_CALL", 0x58778DC0),
}
EXPECTED_CALLERS = {
    (0x587592C0, 0x58759E39, "UNCONDITIONAL_CALL", 0x587590A0),
    (0x587BB700, 0x587BFFA6, "UNCONDITIONAL_CALL", 0x587592C0),
    (0x587BB700, 0x587C0116, "UNCONDITIONAL_CALL", 0x587592C0),
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def ranges_for_record(record):
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


def verify_transfer(image, decoder, source, site, target, records, matched):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (instruction is None
            or instruction.id != X86_INS_CALL
            or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Transfer at {site:08X} does not target {target:08X}")
    if source not in matched:
        raise AssertionError(f"Caller {source:08X} is not byte-verified")
    record = records.get(source)
    if record is None or not any(
            start <= site < start + size for start, size in ranges_for_record(record)):
        raise AssertionError(f"Caller site {site:08X} is outside verified {source:08X}")


def main():
    image = IMAGE_PATH.read_bytes()
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
    selected = {int(address, 16) for address in MAIN_80021101_RECORD_METRIC_ADDRESSES}
    if selected != set(EXPECTED_RANGES):
        raise AssertionError("Builder address set differs from the expected Ghidra closure")

    range_rows = read_tsv(RANGE_MANIFEST)
    function_ranges = {}
    for row in range_rows:
        address = int(row["function"], 16)
        start = int(row["start"], 16)
        size = int(row["length"])
        if size <= 0 or int(row["instruction_bytes"]) != size or int(row["instruction_count"]) <= 0:
            raise AssertionError(f"Incomplete Ghidra body range: {row}")
        function_ranges.setdefault(address, []).append((start, size))
    function_ranges = {address: tuple(parts) for address, parts in function_ranges.items()}
    if function_ranges != EXPECTED_RANGES:
        raise AssertionError("Range manifest differs from the audited Ghidra function bodies")

    byte_count = sum(size for parts in function_ranges.values() for _, size in parts)
    range_count = sum(len(parts) for parts in function_ranges.values())
    if (byte_count != 1680 or range_count != 4
            or sum(int(inventory[address]["size"]) for address in selected) != byte_count):
        raise AssertionError("Unexpected record-metric closure size")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    actual_transfers = set()
    boundary_transfers = set()
    image_end = BASE + len(image)
    for address in selected:
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified match for {address:08X}")
        if ranges_for_record(record) != function_ranges[address]:
            raise AssertionError(f"Catalog and Ghidra ranges differ at {address:08X}")
        own_ranges = tuple((start, start + size) for start, size in function_ranges[address])
        for start, size in function_ranges[address]:
            for instruction in decode_complete(image, decoder, start, size):
                if (instruction.id not in (X86_INS_CALL, X86_INS_JMP)
                        or not instruction.operands
                        or instruction.operands[0].type != X86_OP_IMM):
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if target not in selected | {0x5897CC48, 0x58778DC0}:
                    continue
                transfer_type = (
                    "UNCONDITIONAL_CALL" if instruction.id == X86_INS_CALL
                    else "UNCONDITIONAL_JUMP"
                )
                actual_transfers.add((address, instruction.address, transfer_type, target))
                if not BASE <= target < image_end:
                    continue
                if any(low <= target < high for low, high in own_ranges):
                    continue
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    boundary_transfers.add((address, instruction.address, target))
                else:
                    raise AssertionError(
                        f"Unmatched external call to {target:08X} from {instruction.address:08X}"
                    )
    if actual_transfers != EXPECTED_TRANSFERS:
        missing = sorted(EXPECTED_TRANSFERS - actual_transfers)
        unexpected = sorted(actual_transfers - EXPECTED_TRANSFERS)
        raise AssertionError(
            f"Direct-call sites differ from the transfer manifest; missing={missing}, "
            f"unexpected={unexpected}"
        )
    if len(boundary_transfers) != 6:
        raise AssertionError(f"Expected six verified helper boundaries, found {len(boundary_transfers)}")

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Closure is not reachable from the root: {sorted(selected - reachable)}")

    caller_rows = {
        (int(row["function"], 16), int(row["site"], 16), row["type"],
         int(row["target"], 16))
        for row in read_tsv(TRANSFER_MANIFEST)
        if row["kind"] == "CALLER"
    }
    manifest_transfers = {
        (int(row["function"], 16), int(row["site"], 16), row["type"],
         int(row["target"], 16))
        for row in read_tsv(TRANSFER_MANIFEST)
        if row["kind"] == "TRANSFER"
    }
    if caller_rows != EXPECTED_CALLERS or manifest_transfers != EXPECTED_TRANSFERS:
        raise AssertionError("Transfer manifest does not describe the verified closure and callers")

    for source, site, _, target in EXPECTED_CALLERS:
        verify_transfer(image, decoder, source, site, target, records, matched)
    caller_evidence = json.dumps(records[0x587592C0].get("evidence", {}))
    if "0x80021101" not in caller_evidence:
        raise AssertionError("Verified caller catalog evidence lost event 0x80021101")

    print(
        f"Main.dll event 0x80021101 metric-helper closure: 3 functions / "
        f"{byte_count:,} bytes ObjDiff-identical across {range_count} fresh "
        f"Ghidra ranges; 530 instructions decoded, 6 verified outgoing "
        f"boundaries and {len(EXPECTED_CALLERS)} matched incoming callsites pass"
    )


if __name__ == "__main__":
    main()
