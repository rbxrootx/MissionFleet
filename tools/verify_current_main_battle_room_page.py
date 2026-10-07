"""Verify the battle-room page constructors and helper call graph."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import BATTLE_ROOM_PAGE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

# Exact Ghidra body sizes for the 23 selected nodes. The shared constructor is
# split into two non-adjacent body ranges; the other nodes are contiguous.
FUNCTION_SIZES = {
    0x5874BCF0: 2505,
    0x5874C6C0: 57, 0x5874C8B0: 57, 0x5874CA60: 235,
    0x5874CE40: 57, 0x5874D380: 57, 0x5874D560: 57,
    0x5874D720: 57, 0x5874D8B0: 57, 0x5874DC80: 269,
    0x5874DD90: 57, 0x5874DE10: 57, 0x5874E0A0: 57,
    0x5874E520: 208, 0x5874EB40: 248, 0x5874EC40: 57,
    0x5874EE50: 57, 0x5874EFE0: 57, 0x58750390: 17,
    0x58750FC0: 335, 0x587B5FD0: 50, 0x587B6010: 10,
    0x58878230: 1252,
}
BASE_RANGES = ((0x5874BCF0, 1437), (0x5874C290, 1068))

# These direct CALL sites form the selected Ghidra call graph: 17 derived
# constructors call the common page constructor, which calls five open helpers.
EXPECTED_CALLS = (
    (0x5874C6C0, 0x5874C6E8, 0x5874BCF0),
    (0x5874C8B0, 0x5874C8D8, 0x5874BCF0),
    (0x5874CA60, 0x5874CAAD, 0x5874BCF0),
    (0x5874CE40, 0x5874CE68, 0x5874BCF0),
    (0x5874D380, 0x5874D3A8, 0x5874BCF0),
    (0x5874D560, 0x5874D588, 0x5874BCF0),
    (0x5874D720, 0x5874D748, 0x5874BCF0),
    (0x5874D8B0, 0x5874D8D8, 0x5874BCF0),
    (0x5874DC80, 0x5874DCD0, 0x5874BCF0),
    (0x5874DD90, 0x5874DDB8, 0x5874BCF0),
    (0x5874DE10, 0x5874DE38, 0x5874BCF0),
    (0x5874E0A0, 0x5874E0C8, 0x5874BCF0),
    (0x5874E520, 0x5874E56F, 0x5874BCF0),
    (0x5874EB40, 0x5874EB90, 0x5874BCF0),
    (0x5874EC40, 0x5874EC68, 0x5874BCF0),
    (0x5874EE50, 0x5874EE78, 0x5874BCF0),
    (0x5874EFE0, 0x5874F008, 0x5874BCF0),
    (0x5874BCF0, 0x5874C586, 0x58750FC0),
    (0x5874BCF0, 0x5874C5D7, 0x58750390),
    (0x5874BCF0, 0x5874C62F, 0x58878230),
    (0x5874BCF0, 0x5874C67E, 0x587B6010),
    (0x5874BCF0, 0x5874C68D, 0x587B5FD0),
)

# Every other direct code target in the audited bodies is already ObjDiff
# verified. The runtime scan below also rejects any other open indexed callee.
VERIFIED_EXTERNAL_CALLEES = (
    0x58731C60, 0x58733280, 0x58734A30, 0x5875F420, 0x587B62B0,
    0x58902CE0, 0x58902D20, 0x58902EE0, 0x58902F50, 0x589031A0,
    0x58907100, 0x58907360, 0x5897CC48, 0x5897CC4E,
)


def function_ranges(record):
    if record.get("segments"):
        return [(int(item["address"], 16), int(item["size"]))
                for item in record["segments"]]
    return [(int(record["address"], 16), int(record["size"]))]


def main():
    image = IMAGE.read_bytes()
    with INVENTORY.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
        }
    document = json.loads(CATALOG.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in document["matches"]}
    selected = {int(address, 16) for address in BATTLE_ROOM_PAGE_ADDRESSES}
    if selected != set(FUNCTION_SIZES):
        raise AssertionError("The rolling verification set differs from the audited battle-room cluster")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    matched_targets = {
        address for address, record in records.items()
        if record.get("verified_by") == MARKER
    }
    checked_transfers = 0

    for address in selected:
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff verification record for {address:08X}")
        if address not in inventory:
            raise AssertionError(f"Missing Ghidra function inventory row for {address:08X}")
        size = FUNCTION_SIZES[address]
        if int(inventory[address]["size"]) != size or int(record["size"]) != size:
            raise AssertionError(f"Unexpected audited/verified size for {address:08X}")

        ranges = function_ranges(record)
        expected_ranges = list(BASE_RANGES) if address == 0x5874BCF0 else [(address, size)]
        if ranges != expected_ranges:
            raise AssertionError(f"Unexpected exact Ghidra body ranges for {address:08X}: {ranges}")
        if sum(length for _, length in ranges) != size:
            raise AssertionError(f"Ghidra body ranges do not sum to the verified size for {address:08X}")

        for start, length in ranges:
            offset = start - BASE
            code = image[offset:offset + length]
            instructions = list(decoder.disasm(code, start))
            if not instructions or sum(item.size for item in instructions) != length:
                raise AssertionError(f"Mapped instruction stream does not cover {start:08X} + {length} bytes")
            own_ranges = [(lo, lo + span) for lo, span in ranges]
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
                    raise AssertionError(
                        f"Direct transfer from {instruction.address:08X} targets unindexed Main.dll code {target:08X}"
                    )
                if target not in matched_targets:
                    raise AssertionError(
                        f"Open direct callee {target:08X} from {instruction.address:08X} is outside the selected cluster"
                    )

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
            raise AssertionError(f"Unexpected target at {site:08X}: {actual:08X}, expected {target:08X}")

    for target in VERIFIED_EXTERNAL_CALLEES:
        if target not in matched_targets:
            raise AssertionError(f"External direct callee {target:08X} is not byte-verified")

    print(
        f"Battle-room page subsystem: {len(selected)} functions / "
        f"{sum(FUNCTION_SIZES.values())} bytes verified byte-identical; "
        f"{len(EXPECTED_CALLS)} exact Ghidra CALL edges and {checked_transfers} direct transfers checked; "
        f"{len(VERIFIED_EXTERNAL_CALLEES)} external callees verified; direct-call closure is closed"
    )


if __name__ == "__main__":
    main()
