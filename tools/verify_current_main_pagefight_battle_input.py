"""Audit the byte-matched PageFight battle-input and target-control call closure."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM, X86_OP_MEM, X86_REG_INVALID

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
MARKER = "objdiff-3.8.0-byte-identical"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"

FUNCTION_RANGES = {
    0x587F7E10: ((0x587F7E10, 557), (0x587F8040, 1245),
                 (0x587F8520, 45), (0x587F8550, 429)),
    0x5873A250: ((0x5873A250, 7),),
    0x5873B3B0: ((0x5873B3B0, 398),),
    0x5875EE20: ((0x5875EE20, 4),),
    0x587B0C10: ((0x587B0C10, 136),),
    0x587ED430: ((0x587ED430, 372),),
    0x587F2870: ((0x587F2870, 201),),
    0x588DA150: ((0x588DA150, 144),),
    0x587EAC40: ((0x587EAC40, 297), (0x587EAD70, 94)),
    0x5897CEE0: ((0x5897CEE0, 6),),
    0x587B07B0: ((0x587B07B0, 54),),
    0x5876C6B0: ((0x5876C6B0, 254),),
}

OPEN_CALLS = (
    (0x587F7E10, 0x587F7EF4, 0x587ED430),
    (0x587F7E10, 0x587F8146, 0x587ED430),
    (0x587F7E10, 0x587F7FB7, 0x5873A250),
    (0x587F7E10, 0x587F84C8, 0x5873A250),
    (0x587F7E10, 0x587F8017, 0x5873B3B0),
    (0x587F7E10, 0x587F8055, 0x5873B3B0),
    (0x587F7E10, 0x587F8527, 0x5873B3B0),
    (0x587F7E10, 0x587F8565, 0x5873B3B0),
    (0x587F7E10, 0x587F816E, 0x5875EE20),
    (0x587F7E10, 0x587F83DF, 0x587B0C10),
    (0x587F7E10, 0x587F864F, 0x587F2870),
    (0x587B0C10, 0x587B0C64, 0x5897CEE0),
    (0x587F2870, 0x587F2880, 0x588DA150),
    (0x587F2870, 0x587F28C5, 0x588DA150),
    (0x587F2870, 0x587F292F, 0x587EAC40),
    (0x587EAC40, 0x587EACE7, 0x587B07B0),
    (0x587EAC40, 0x587EACED, 0x5876C6B0),
)
INCOMING_CALL = (0x587FD810, 0x587FD834, 0x587F7E10)
INDIRECT_CALLBACK = (0x5897CEE0, 0x5898C29C)


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

    if len(selected) != 12 or sum(size for ranges in FUNCTION_RANGES.values()
                                  for _, size in ranges) != 4243:
        raise AssertionError("Candidate set or total differs from the audited 12-function, 4,243-byte closure")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    observed_open_calls = set()
    checked_transfers = 0
    indirect_callbacks = []

    def function_ranges(record):
        if record.get("segments"):
            return tuple((int(item["address"], 16), int(item["size"]))
                         for item in record["segments"])
        return ((int(record["address"], 16), int(record["size"])),)

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
        if int(inventory[address]["size"]) != expected_size or int(record["size"]) != expected_size:
            raise AssertionError(f"Unexpected indexed or verified size for {address:08X}")
        actual_ranges = function_ranges(record)
        if actual_ranges != expected_ranges:
            raise AssertionError(f"Unexpected exact Ghidra ranges for {address:08X}: {actual_ranges}")

        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            offset = start - BASE
            code = image[offset:offset + size]
            instructions = list(decoder.disasm(code, start))
            if not instructions or sum(insn.size for insn in instructions) != size:
                raise AssertionError(f"Mapped instructions do not cover {start:08X} + {size} bytes")
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type == X86_OP_MEM and address == INDIRECT_CALLBACK[0]:
                    mem = operand.mem
                    if mem.base == X86_REG_INVALID and mem.index == X86_REG_INVALID:
                        indirect_callbacks.append((address, mem.disp & 0xFFFFFFFF))
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

    caller, site, target = INCOMING_CALL
    if caller not in matched_targets:
        raise AssertionError("The matched PageFight event-handler caller is not ObjDiff-verified")
    instruction = decode_site(site)
    if instruction.id not in (X86_INS_CALL, X86_INS_JMP):
        raise AssertionError(f"Unexpected matched incoming transfer at {site:08X}: {instruction.mnemonic} {instruction.op_str}")
    if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
        raise AssertionError(f"Expected a direct caller at {site:08X}")
    if instruction.operands[0].imm & 0xFFFFFFFF != target:
        raise AssertionError(f"Unexpected matched incoming call target at {site:08X}")

    if indirect_callbacks != [INDIRECT_CALLBACK]:
        raise AssertionError(f"Unexpected 0x5897CEE0 indirect callback sites: {indirect_callbacks}")

    print(
        f"PageFight battle input: {len(selected)} functions / 4,243 bytes ObjDiff-identical; "
        f"{len(OPEN_CALLS)} open call edges and the matched caller edge checked; "
        f"{checked_transfers} direct transfers checked; runtime callback 0x5898C29C remains indirect"
    )


if __name__ == "__main__":
    main()
