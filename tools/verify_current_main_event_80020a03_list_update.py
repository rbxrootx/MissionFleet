"""Verify the event 0x80020A03 list-update closure and matched dispatcher path."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_EVENT_80020A03_LIST_UPDATE_ADDRESSES,
        MAIN_EVENT_80020A03_LIST_UPDATE_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_EVENT_80020A03_LIST_UPDATE_ADDRESSES,
        MAIN_EVENT_80020A03_LIST_UPDATE_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / (
    "config/NF2_2026/current-main-event-80020a03-list-update-closure-body-ranges.tsv"
)
TRANSFER_PATH = ROOT / "config/NF2_2026/current-main-event-80020a03-list-update-transfers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTION_RANGES = {
    0x58789C50: ((0x58789C50, 93, 28),),
    0x58789CD0: ((0x58789CD0, 213, 69),),
    0x58789DB0: ((0x58789DB0, 26, 13), (0x58789DD1, 16, 8)),
    0x5883EB90: ((0x5883EB90, 321, 116),),
    0x58841AF0: ((0x58841AF0, 1025, 263),),
    0x588421C0: ((0x588421C0, 26, 7),),
    0x5897D124: ((0x5897D124, 6, 1),),
}
EXPECTED_INTERNAL_TRANSFERS = (
    (0x588421C0, 0x588421D2, 0x58841AF0),
    (0x58841AF0, 0x58841B24, 0x58789DB0),
    (0x58841AF0, 0x58841B94, 0x5883EB90),
    (0x58841AF0, 0x58841BB5, 0x58789CD0),
    (0x58841AF0, 0x58841BC7, 0x5897D124),
    (0x58789CD0, 0x58789D2C, 0x58789C50),
    (0x58789CD0, 0x58789D6D, 0x58789C50),
)
MATCHED_DISPATCH_CALLS = (
    (0x587BB700, 0x587BD7FC, 0x588421C0),
    (0x587BB700, 0x587BD816, 0x588421C0),
)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def direct_call_target(image, decoder, site):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
    if (instruction is None or instruction.address != site
            or instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM):
        raise AssertionError(f"Expected a direct CALL at {site:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def main():
    manifest = read_tsv(RANGE_PATH)
    if len(MAIN_EVENT_80020A03_LIST_UPDATE_ADDRESSES) != 7:
        raise AssertionError("The event 0x80020A03 closure address set changed")
    actual_ranges = {}
    range_rows = []
    for row in manifest:
        function = int(row["function"], 16)
        start = int(row["start"], 16)
        length = int(row["length"])
        instruction_count = int(row["instruction_count"])
        if (length <= 0 or int(row["instruction_bytes"]) != length
                or instruction_count <= 0):
            raise AssertionError(f"Incomplete fresh Ghidra range: {row}")
        actual_ranges.setdefault(function, []).append((start, length))
        range_rows.append((function, start, length, instruction_count))

    selected = {int(address, 16)
                for address in MAIN_EVENT_80020A03_LIST_UPDATE_ADDRESSES}
    if set(actual_ranges) != selected:
        raise AssertionError("The selected functions differ from the Ghidra range manifest")
    expected_ranges = {
        function: tuple((start, length) for start, length, _ in ranges)
        for function, ranges in FUNCTION_RANGES.items()
    }
    if {function: tuple(ranges) for function, ranges in actual_ranges.items()} != expected_ranges:
        raise AssertionError("Recorded ranges differ from the fresh Ghidra closure")
    total_bytes = sum(length for ranges in actual_ranges.values()
                      for _, length in ranges)
    total_instructions = sum(row[3] for row in range_rows)
    if len(manifest) != 8 or total_bytes != 1_726 or total_instructions != 505:
        raise AssertionError(
            f"Unexpected closure extent: {len(manifest)} ranges, {total_bytes} bytes, "
            f"{total_instructions} instructions"
        )

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    all_ranges = [
        (start, start + length)
        for ranges in actual_ranges.values()
        for start, length in ranges
    ]
    internal_transfers = {}
    checked_transfers = 0
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, record in records.items()
        if record.get("verified_by") == MARKER
    }
    if not selected.issubset(matched):
        raise AssertionError(f"Unverified closure members: {sorted(selected - matched)}")

    for function, start, length, expected_count in range_rows:
        code = image[start - BASE:start - BASE + length]
        instructions = list(decoder.disasm(code, start))
        if (len(code) != length or len(instructions) != expected_count
                or sum(item.size for item in instructions) != length
                or not instructions or instructions[0].address != start
                or instructions[-1].address + instructions[-1].size != start + length):
            raise AssertionError(f"Capstone coverage/count differs at {start:08X}")
        for instruction in instructions:
            if (instruction.id not in (X86_INS_CALL, X86_INS_JMP)
                    or not instruction.operands
                    or instruction.operands[0].type != X86_OP_IMM):
                continue
            target = instruction.operands[0].imm & 0xFFFFFFFF
            checked_transfers += 1
            if target in selected:
                internal_transfers[(function, instruction.address, target)] = (
                    instruction.mnemonic.upper()
                )
                continue
            if not BASE <= target < BASE + len(image):
                continue
            if any(lo <= target < hi for lo, hi in all_ranges):
                continue
            if target not in matched:
                raise AssertionError(
                    f"Open direct transfer {instruction.address:08X}->{target:08X}"
                )

    expected_transfers = {
        (int(row["source"], 16), int(row["site"], 16), int(row["target"], 16)):
            row["transfer"].upper()
        for row in read_tsv(TRANSFER_PATH)
    }
    if internal_transfers != expected_transfers:
        raise AssertionError(
            f"Internal transfers differ from fresh Ghidra manifest: "
            f"actual={internal_transfers}, expected={expected_transfers}"
        )
    if set(internal_transfers) != set(EXPECTED_INTERNAL_TRANSFERS):
        raise AssertionError("The expected seven-function transfer chain changed")

    for address in selected:
        if address not in inventory or address not in records:
            raise AssertionError(f"Missing inventory/catalog record: {address:08X}")
        if records[address].get("evidence") != MAIN_EVENT_80020A03_LIST_UPDATE_EVIDENCE[
                f"{address:08X}"]:
            raise AssertionError(f"Catalog evidence is stale for {address:08X}")
        ranges = tuple(actual_ranges[address])
        size = sum(length for _, length in ranges)
        if (record_ranges(records[address]) != ranges
                or int(inventory[address]["size"]) != size
                or int(records[address]["size"]) != size):
            raise AssertionError(f"Catalog/inventory extent differs at {address:08X}")

    dispatcher = 0x587BB700
    if dispatcher not in matched:
        raise AssertionError("The event dispatcher is not byte-verified")
    dispatcher_ranges = record_ranges(records[dispatcher])
    for caller, site, target in MATCHED_DISPATCH_CALLS:
        if caller != dispatcher or target not in selected:
            raise AssertionError("Unexpected external caller edge in the verifier")
        if not any(start <= site < start + size
                   for start, size in dispatcher_ranges):
            raise AssertionError(f"Dispatcher call site {site:08X} is outside its matched body")
        if direct_call_target(image, decoder, site) != target:
            raise AssertionError(f"Unexpected dispatcher target at {site:08X}")

    print(
        f"Event 0x80020A03 list update: {len(selected)} byte-identical functions / "
        f"{total_bytes} bytes in {len(manifest)} fresh Ghidra ranges; "
        f"{total_instructions} instructions and {checked_transfers} direct transfers "
        "checked; both matched dispatcher call sites verified"
    )


if __name__ == "__main__":
    main()
