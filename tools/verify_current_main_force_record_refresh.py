"""Verify the force-record population and refresh closure."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_FORCE_RECORD_REFRESH_ADDRESSES,
        MAIN_FORCE_RECORD_REFRESH_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_FORCE_RECORD_REFRESH_ADDRESSES,
        MAIN_FORCE_RECORD_REFRESH_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / (
    "config/NF2_2026/current-main-force-record-refresh-closure-body-ranges.tsv"
)
TRANSFER_PATH = ROOT / "config/NF2_2026/current-main-force-record-refresh-transfers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTION_RANGES = {
    0x588B6050: ((0x588B6050, 347, 96),),
    0x588B81F0: ((0x588B81F0, 519, 142), (0x588B8400, 163, 47)),
    0x588B8980: (
        (0x588B8980, 245, 69),
        (0x588B8A7E, 101, 33),
        (0x588B8AEC, 441, 119),
    ),
}
EXPECTED_INTERNAL_CALLS = (
    (0x588B8980, 0x588B8C6D, 0x588B81F0),
    (0x588B81F0, 0x588B8489, 0x588B6050),
)
MATCHED_CONTEXT_CALLS = (
    # Matched message dispatcher, event case 0x80020D03.
    (0x587BB700, 0x587BDE7D, 0x588B8980),
    # The root constructs CForce children through the matched constructor.
    (0x588B8980, 0x588B8B72, 0x5877CC30),
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
    if len(MAIN_FORCE_RECORD_REFRESH_ADDRESSES) != 3:
        raise AssertionError("The selected force-record closure changed")
    actual_ranges = {}
    range_rows = []
    for row in manifest:
        function = int(row["function"], 16)
        start = int(row["start"], 16)
        length = int(row["length"])
        instruction_count = int(row["instruction_count"])
        if (length <= 0 or int(row["instruction_bytes"]) != length
                or instruction_count <= 0):
            raise AssertionError(f"Incomplete Ghidra range: {row}")
        actual_ranges.setdefault(function, []).append((start, length))
        range_rows.append((function, start, length, instruction_count))

    selected = {int(address, 16) for address in MAIN_FORCE_RECORD_REFRESH_ADDRESSES}
    if set(actual_ranges) != selected:
        raise AssertionError("The selected functions differ from the Ghidra range manifest")
    expected_ranges = {
        function: tuple((start, length) for start, length, _ in ranges)
        for function, ranges in FUNCTION_RANGES.items()
    }
    if {function: tuple(ranges) for function, ranges in actual_ranges.items()} != expected_ranges:
        raise AssertionError("Recorded function ranges differ from the fresh Ghidra closure")
    total_bytes = sum(length for ranges in actual_ranges.values()
                      for _, length in ranges)
    total_instructions = sum(row[3] for row in range_rows)
    if len(manifest) != 6 or total_bytes != 1_816 or total_instructions != 506:
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
    if set(internal_transfers) != set(EXPECTED_INTERNAL_CALLS):
        raise AssertionError("The expected closure path between the three functions changed")

    for address in selected:
        if address not in inventory or address not in records:
            raise AssertionError(f"Missing inventory/catalog record: {address:08X}")
        if records[address].get("evidence") != MAIN_FORCE_RECORD_REFRESH_EVIDENCE[
                f"{address:08X}"]:
            raise AssertionError(f"Catalog evidence is stale for {address:08X}")
        ranges = tuple(actual_ranges[address])
        size = sum(length for _, length in ranges)
        if (record_ranges(records[address]) != ranges
                or int(inventory[address]["size"]) != size
                or int(records[address]["size"]) != size):
            raise AssertionError(f"Catalog/inventory extent differs at {address:08X}")

    for caller, site, target in MATCHED_CONTEXT_CALLS:
        if caller not in matched or target not in matched:
            raise AssertionError(f"Unverified endpoint in call {caller:08X}->{target:08X}")
        caller_record = records[caller]
        if not any(start <= site < start + size
                   for start, size in record_ranges(caller_record)):
            raise AssertionError(f"Call site {site:08X} is outside its matched function")
        if direct_call_target(image, decoder, site) != target:
            raise AssertionError(f"Unexpected direct call at {site:08X}")

    print(
        f"Force-record population/refresh: {len(selected)} byte-identical functions / "
        f"{total_bytes} bytes in {len(manifest)} fresh Ghidra ranges; "
        f"{total_instructions} instructions and {checked_transfers} direct transfers "
        "checked; matched event-dispatcher and CForce-constructor calls verified"
    )


if __name__ == "__main__":
    main()
