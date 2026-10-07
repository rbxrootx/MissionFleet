"""Verify the RTTI-backed CExplanPannel event/update closure."""

import csv
import json
from pathlib import Path
import struct

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_C_EXPLAN_PANNEL_EVENT_ADDRESSES,
        MAIN_C_EXPLAN_PANNEL_EVENT_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_C_EXPLAN_PANNEL_EVENT_ADDRESSES,
        MAIN_C_EXPLAN_PANNEL_EVENT_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / (
    "config/NF2_2026/current-main-c-explan-pannel-event-closure-body-ranges.tsv"
)
TRANSFER_PATH = ROOT / (
    "config/NF2_2026/current-main-c-explan-pannel-event-transfers.tsv"
)
MARKER = "objdiff-3.8.0-byte-identical"

VTABLE = 0x5898DC10
EXPECTED_VTABLE = (
    0x58762A00, 0x587644E0, 0x587646A0, 0x5876B7F0,
    0x58763F70, 0x58902FE0, 0x587648F0,
)
ROOT_CALLS = (
    (0x58763F70, 0x587641B7, 0x58762D30),
    (0x587648F0, 0x58764B7A, 0x58762D30),
    (0x587648F0, 0x58764C0F, 0x58762D30),
    (0x5876B7F0, 0x5876B8C6, 0x58762D30),
)
MATCHED_CALLERS = (
    (0x587BB700, 0x587BBFC8, 0x5878F920),
    (0x587E3080, 0x587E3D5F, 0x587DAA30),
    (0x588C4210, 0x588C4C3F, 0x587C2C90),
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


def direct_target(image, decoder, site):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
    if (instruction is None or instruction.address != site
            or instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM):
        raise AssertionError(f"Expected a direct CALL at {site:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def main():
    ranges = read_tsv(RANGE_PATH)
    if len(MAIN_C_EXPLAN_PANNEL_EVENT_ADDRESSES) != 62:
        raise AssertionError("The selected CExplanPannel address set changed")
    function_ranges = {}
    instruction_ranges = []
    for row in ranges:
        function = int(row["function"], 16)
        start = int(row["start"], 16)
        length = int(row["length"])
        instruction_bytes = int(row["instruction_bytes"])
        instruction_count = int(row["instruction_count"])
        if length <= 0 or instruction_bytes != length or instruction_count <= 0:
            raise AssertionError(f"Incomplete fresh Ghidra body range: {row}")
        function_ranges.setdefault(function, []).append((start, length))
        instruction_ranges.append((function, start, length, instruction_count))

    selected = {int(address, 16) for address in MAIN_C_EXPLAN_PANNEL_EVENT_ADDRESSES}
    if set(function_ranges) != selected or len(function_ranges) != 62:
        raise AssertionError("The range manifest differs from the selected 62 functions")
    total_bytes = sum(length for rows in function_ranges.values()
                      for _, length in rows)
    if len(ranges) != 74 or total_bytes != 11_871:
        raise AssertionError(
            f"Unexpected fresh Ghidra closure extent: {len(ranges)} ranges / {total_bytes} bytes"
        )
    expected_root_sizes = {
        0x58762D30: 2_094,
        0x58763F70: 1_044,
        0x587648F0: 835,
        0x5876B7F0: 510,
    }
    for address, expected_size in expected_root_sizes.items():
        actual_size = sum(length for _, length in function_ranges[address])
        if actual_size != expected_size:
            raise AssertionError(
                f"Fresh Ghidra size for {address:08X} is {actual_size}, expected {expected_size}"
            )

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    actual_internal_transfers = {}
    direct_transfers = 0
    all_ranges = [
        (start, start + length)
        for rows in function_ranges.values()
        for start, length in rows
    ]

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
        missing = sorted(selected - matched)
        raise AssertionError(f"Unverified functions remain in the closure: {missing}")

    for function, start, length, expected_count in instruction_ranges:
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
            direct_transfers += 1
            if target in selected:
                actual_internal_transfers[(function, instruction.address, target)] = (
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

    expected_internal_transfers = {
        (int(row["source"], 16), int(row["site"], 16), int(row["target"], 16)):
            row["transfer"].upper()
        for row in read_tsv(TRANSFER_PATH)
    }
    if actual_internal_transfers != expected_internal_transfers:
        missing = sorted(set(expected_internal_transfers) - set(actual_internal_transfers))
        extra = sorted(set(actual_internal_transfers) - set(expected_internal_transfers))
        mismatched = sorted(
            edge for edge in set(actual_internal_transfers) & set(expected_internal_transfers)
            if actual_internal_transfers[edge] != expected_internal_transfers[edge]
        )
        raise AssertionError(
            "Ghidra transfer manifest differs from mapped code; "
            f"missing={missing}, extra={extra}, opcode mismatches={mismatched}"
        )

    for address in selected:
        if address not in inventory or address not in records:
            raise AssertionError(f"Missing function inventory/catalog record: {address:08X}")
        if records[address].get("evidence") != MAIN_C_EXPLAN_PANNEL_EVENT_EVIDENCE[
                f"{address:08X}"]:
            raise AssertionError(f"Catalog evidence is stale for {address:08X}")
        expected = tuple(function_ranges[address])
        if record_ranges(records[address]) != expected:
            raise AssertionError(f"Catalog body ranges differ from Ghidra for {address:08X}")
        size = sum(length for _, length in expected)
        if int(inventory[address]["size"]) != size or int(records[address]["size"]) != size:
            raise AssertionError(f"Inventory/catalog size differs from Ghidra for {address:08X}")

    vtable = struct.unpack_from("<7I", image, VTABLE - BASE)
    if vtable != EXPECTED_VTABLE:
        raise AssertionError(
            f"Unexpected CExplanPannel vtable: {[f'{item:08X}' for item in vtable]}"
        )
    locator = struct.unpack_from("<I", image, VTABLE - BASE - 4)[0]
    if locator != 0x589A55EC:
        raise AssertionError(f"Unexpected CompleteObjectLocator: {locator:08X}")
    type_descriptor = struct.unpack_from("<I", image, locator - BASE + 12)[0]
    if type_descriptor != 0x589BA668:
        raise AssertionError(f"Unexpected TypeDescriptor address: {type_descriptor:08X}")
    expected_type_name = b".?AVCExplanPannel@@\0"
    type_name = image[
        type_descriptor - BASE + 8:
        type_descriptor - BASE + 8 + len(expected_type_name)
    ]
    if type_name != expected_type_name:
        raise AssertionError(f"Unexpected RTTI name: {type_name!r}")

    for caller, site, target in ROOT_CALLS + MATCHED_CALLERS:
        if caller not in matched or target not in matched:
            raise AssertionError(f"Unverified endpoint in required edge {caller:08X}->{target:08X}")
        actual = direct_target(image, decoder, site)
        if actual != target:
            raise AssertionError(f"Unexpected call at {site:08X}: {actual:08X}, expected {target:08X}")

    print(
        f"CExplanPannel: {len(selected)} byte-identical functions / {total_bytes} bytes "
        f"in {len(ranges)} exact Ghidra ranges; RTTI and {len(vtable)} vtable slots "
        f"checked; {len(expected_internal_transfers)} closure transfers and {direct_transfers} "
        "direct transfers checked; three matched external callers reach the closure"
    )


if __name__ == "__main__":
    main()
