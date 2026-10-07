"""Verify the current Main.dll record-display refresh and numeric helpers."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import VISUAL_REFRESH_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTION_SIZES = {0x58868110: 2276, 0x587C9E80: 18, 0x587C9D80: 205}
DIGIT_FORMATTER_RANGES = ((0x587C9D80, 45), (0x587C9DB0, 160))
EXPECTED_CALLS = (
    (0x58868110, 0x5886874A, 0x58907360),
    (0x58868110, 0x58868783, 0x58907360),
    (0x58868110, 0x5886881A, 0x58907360),
    (0x58868110, 0x58868853, 0x58907360),
    (0x58868110, 0x5886887B, 0x58907360),
    (0x58868110, 0x588688B5, 0x58907360),
    (0x58868110, 0x588688F7, 0x58907360),
    (0x58868110, 0x58868910, 0x58907360),
    (0x58868110, 0x5886894F, 0x58907360),
    (0x58868110, 0x58868981, 0x58907360),
    (0x58868110, 0x5886899F, 0x58907360),
    (0x58868110, 0x588689C0, 0x58907360),
    (0x58868110, 0x588689EC, 0x58907360),
    (0x58868110, 0x58868801, 0x587C9E80),
    (0x58868110, 0x58868863, 0x587C9E80),
    (0x58868110, 0x588688C1, 0x587C9E80),
    (0x587C9E80, 0x587C9E8A, 0x587C9D80),
)
INCOMING_CALLS = (
    (0x58868A00, 0x58868A72, 0x58868110, 278),
    (0x58869CF0, 0x58869D72, 0x58868110, 264),
)


def function_ranges(record):
    if record.get("segments"):
        return [(int(item["address"], 16), int(item["size"]))
                for item in record["segments"]]
    return [(int(record["address"], 16), int(record["size"]))]


def main():
    image = IMAGE.read_bytes()
    with INVENTORY.open(encoding="utf-8", newline="") as stream:
        inventory = {int(row["address"], 16): row
                     for row in csv.DictReader(stream, delimiter="\t")}
    document = json.loads(CATALOG.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in document["matches"]}
    selected = {int(address, 16) for address in VISUAL_REFRESH_ADDRESSES}
    if selected != set(FUNCTION_SIZES):
        raise AssertionError("The candidate set differs from the audited record-display closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    matched_targets = {address for address, record in records.items()
                       if record.get("verified_by") == MARKER}
    checked_transfers = 0

    for address, size in FUNCTION_SIZES.items():
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff verification record for {address:08X}")
        if address not in inventory:
            raise AssertionError(f"Missing Ghidra function inventory row for {address:08X}")
        if int(inventory[address]["size"]) != size or int(record["size"]) != size:
            raise AssertionError(f"Unexpected indexed or verified size for {address:08X}")
        expected_ranges = (list(DIGIT_FORMATTER_RANGES) if address == 0x587C9D80
                           else [(address, size)])
        ranges = function_ranges(record)
        if ranges != expected_ranges or sum(length for _, length in ranges) != size:
            raise AssertionError(f"Unexpected Ghidra body ranges for {address:08X}: {ranges}")

        own_ranges = [(start, start + length) for start, length in ranges]
        for start, length in ranges:
            offset = start - BASE
            code = image[offset:offset + length]
            instructions = list(decoder.disasm(code, start))
            if not instructions or sum(item.size for item in instructions) != length:
                raise AssertionError(f"Mapped instructions do not cover {start:08X} + {length} bytes")
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                checked_transfers += 1
                if not BASE <= target < BASE + len(image):
                    continue
                if any(lo <= target < hi for lo, hi in own_ranges):
                    continue
                if target not in inventory:
                    raise AssertionError(f"Direct transfer from {instruction.address:08X} targets unindexed code {target:08X}")
                if target not in matched_targets:
                    raise AssertionError(f"Open direct callee {target:08X} lies outside this subsystem")

    def direct_call_target(site):
        offset = site - BASE
        instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
        if instruction is None or instruction.address != site or instruction.id != X86_INS_CALL:
            raise AssertionError(f"Expected direct CALL at {site:08X}")
        if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
            raise AssertionError(f"Expected immediate CALL target at {site:08X}")
        return instruction.operands[0].imm & 0xFFFFFFFF

    for caller, site, target in EXPECTED_CALLS:
        if caller not in matched_targets or target not in matched_targets:
            raise AssertionError(f"Unverified endpoint in expected edge {caller:08X}->{target:08X}")
        actual = direct_call_target(site)
        if actual != target:
            raise AssertionError(f"Unexpected call target at {site:08X}: {actual:08X}, expected {target:08X}")

    for caller, site, target, size in INCOMING_CALLS:
        if caller not in inventory or int(inventory[caller]["size"]) != size:
            raise AssertionError(f"Unexpected incoming caller extent for {caller:08X}")
        actual = direct_call_target(site)
        if actual != target:
            raise AssertionError(f"Unexpected incoming call target at {site:08X}: {actual:08X}")

    print(
        f"Record-display refresh: {len(selected)} functions / {sum(FUNCTION_SIZES.values())} bytes ObjDiff-identical; "
        f"{len(EXPECTED_CALLS)} selected call edges, {len(INCOMING_CALLS)} incoming context edges, "
        f"and {checked_transfers} direct transfers checked; direct-call closure is closed"
    )


if __name__ == "__main__":
    main()
