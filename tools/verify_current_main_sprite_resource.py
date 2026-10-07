"""Audit the byte-matched ITFFM sprite-resource call closure."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_JMP, X86_OP_IMM, X86_OP_MEM, X86_OP_REG,
    X86_REG_INVALID,
)

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
MARKER = "objdiff-3.8.0-byte-identical"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"

FUNCTION_RANGES = {
    0x58755CF0: (
        (0x58755CF0, 312), (0x58755E30, 76),
        (0x58755E85, 312), (0x58755FC6, 38),
    ),
    0x587555C0: (
        (0x587555C0, 797), (0x587558E0, 782),
        (0x58755BF5, 103), (0x58755C5F, 53),
    ),
}
OPEN_CALLS = ((0x58755CF0, 0x58755DC3, 0x587555C0),)
INCOMING_CALL = (0x58756020, 0x58756088, 0x58755CF0)
INDIRECT_TRANSFERS = {
    (0x58755CF0, 0x58755D2B, "reg", None),
    (0x58755CF0, 0x58755D37, "reg", None),
    (0x58755CF0, 0x58755E99, "abs", 0x5898C180),
    (0x58755CF0, 0x58755EB8, "reg", None),
    (0x58755CF0, 0x58755F09, "reg", None),
    (0x58755CF0, 0x58755F2E, "reg", None),
    (0x58755CF0, 0x58755F78, "reg", None),
    (0x58755CF0, 0x58755F8C, "reg", None),
    (0x58755CF0, 0x58755FA0, "abs", 0x5898C184),
    (0x587555C0, 0x58755674, "abs", 0x5898C3C4),
    (0x587555C0, 0x58755693, "abs", 0x5898C3C4),
}


def function_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def main():
    image = IMAGE_PATH.read_bytes()
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {int(row["address"], 16): row
                     for row in csv.DictReader(stream, delimiter="\t")}
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    selected = set(FUNCTION_RANGES)
    matched_targets = {address for address, item in records.items()
                       if item.get("verified_by") == MARKER}
    expected_bytes = sum(size for ranges in FUNCTION_RANGES.values()
                         for _, size in ranges)
    if len(selected) != 2 or expected_bytes != 2473:
        raise AssertionError("Candidate set or total differs from the audited 2-function, 2,473-byte closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    observed_open_calls = set()
    observed_indirect_transfers = set()
    checked_transfers = 0

    def decode_site(site):
        offset = site - BASE
        instruction = next(decoder.disasm(image[offset:offset + 15], site), None)
        if instruction is None or instruction.address != site:
            raise AssertionError(f"Could not decode transfer at {site:08X}")
        return instruction

    for address, expected_ranges in FUNCTION_RANGES.items():
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff byte-identical record for {address:08X}")
        if address not in inventory:
            raise AssertionError(f"Missing Ghidra inventory row for {address:08X}")
        expected_size = sum(size for _, size in expected_ranges)
        if (int(inventory[address]["size"]) != expected_size
                or int(record["size"]) != expected_size):
            raise AssertionError(f"Unexpected indexed or verified size for {address:08X}")
        actual_ranges = function_ranges(record)
        if actual_ranges != expected_ranges:
            raise AssertionError(f"Unexpected exact Ghidra ranges for {address:08X}: {actual_ranges}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            offset = start - BASE
            code = image[offset:offset + size]
            instructions = list(decoder.disasm(code, start))
            if (not instructions or instructions[0].address != start
                    or sum(insn.size for insn in instructions) != size
                    or instructions[-1].address + instructions[-1].size != start + size):
                raise AssertionError(f"Mapped instructions do not cover {start:08X} + {size} bytes")
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type == X86_OP_REG:
                    observed_indirect_transfers.add(
                        (address, instruction.address, "reg", None))
                    continue
                if operand.type == X86_OP_MEM:
                    mem = operand.mem
                    if mem.base == X86_REG_INVALID and mem.index == X86_REG_INVALID:
                        observed_indirect_transfers.add(
                            (address, instruction.address, "abs", mem.disp & 0xFFFFFFFF))
                    else:
                        observed_indirect_transfers.add(
                            (address, instruction.address, "mem", None))
                    continue
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                checked_transfers += 1
                if not BASE <= target < BASE + len(image):
                    continue
                if any(lo <= target < hi for lo, hi in own_ranges):
                    continue
                if target in selected:
                    observed_open_calls.add((address, instruction.address, target))
                elif target not in matched_targets:
                    raise AssertionError(
                        f"Open direct callee {target:08X} from {instruction.address:08X} lies outside this subsystem")

    if observed_open_calls != set(OPEN_CALLS):
        missing = sorted(set(OPEN_CALLS) - observed_open_calls)
        unexpected = sorted(observed_open_calls - set(OPEN_CALLS))
        raise AssertionError(f"Open call closure mismatch; missing={missing}, unexpected={unexpected}")
    if observed_indirect_transfers != INDIRECT_TRANSFERS:
        missing = sorted(INDIRECT_TRANSFERS - observed_indirect_transfers)
        unexpected = sorted(observed_indirect_transfers - INDIRECT_TRANSFERS)
        raise AssertionError(f"Indirect transfer sites changed; missing={missing}, unexpected={unexpected}")

    caller, site, target = INCOMING_CALL
    if caller not in matched_targets:
        raise AssertionError("The matched FUN_58756020 sprite-resource caller is not ObjDiff-verified")
    instruction = decode_site(site)
    if (instruction.id not in (X86_INS_CALL, X86_INS_JMP)
            or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or instruction.operands[0].imm & 0xFFFFFFFF != target):
        raise AssertionError(f"Unexpected incoming transfer at {site:08X}")

    print(
        f"ITFFM sprite-resource path: {len(selected)} functions / {expected_bytes:,} bytes ObjDiff-identical; "
        f"{len(OPEN_CALLS)} open call edge, matched caller, and {len(INDIRECT_TRANSFERS)} "
        f"indirect callback sites checked; {checked_transfers} direct transfers checked"
    )


if __name__ == "__main__":
    main()
