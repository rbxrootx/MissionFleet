"""Verify the queued event/update call graph against Main.dll and ObjDiff records."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import QUEUE_BATCH_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
QUEUE_DISPATCHER = 0x588075E0
QUEUE_DISPATCHER_SIZE = 711

# Exact direct call sites from the read-only Ghidra body-range audits. The
# root event dispatcher is already byte-matched; the remaining sites connect
# the newly matched caller/handler/leaf graph.
EXPECTED_CALLS = (
    (0x587BB700, 0x587BC1DA, 0x58807D50),
    (0x58807D50, 0x58807E57, QUEUE_DISPATCHER),
    (0x58808080, 0x588080A6, QUEUE_DISPATCHER),
    (0x58808080, 0x588081C0, 0x58805790),
    (0x58808080, 0x588081CB, 0x58894820),
    (0x58808080, 0x58808289, 0x58805B30),
    (0x58808080, 0x58808384, 0x587E8010),
    (0x58808080, 0x5880842C, 0x58805690),
    (0x58808080, 0x58808474, 0x588A5580),
    (0x58808080, 0x58808492, 0x587B9A90),
    (0x58808080, 0x58808502, 0x588060F0),
    (0x58808080, 0x58808538, 0x58805E70),
    (0x58808080, 0x58808551, 0x58804680),
    (0x58808080, 0x58808817, 0x588A6F70),
    (0x58808080, 0x58808835, 0x588A6F70),
    (0x58808080, 0x58808981, 0x587BAF40),
    (0x58808080, 0x58808991, 0x587BA140),
    (0x58808080, 0x588089A1, 0x587BA1A0),
    (0x58808080, 0x588089B1, 0x587BA1D0),
    (0x58808080, 0x588089BE, 0x587BA170),
    (0x58808080, 0x588089CB, 0x587BB230),
    (0x58808080, 0x588089D8, 0x587BB260),
    (0x58808080, 0x588089E5, 0x587BB2C0),
    (0x58808080, 0x588089F2, 0x587BB290),
    (0x58808080, 0x588089FF, 0x587BA200),
    (0x58807D50, 0x58807D87, 0x5890DBF0),
    (0x58807D50, 0x58807DA7, 0x58789770),
    (0x58807D50, 0x58807DC6, 0x58809830),
    (0x58807D50, 0x58807DD6, 0x588C0BD0),
    (0x588D81A0, 0x588D81C1, 0x588D8080),
    (0x58807370, 0x588073A1, 0x588DA340),
    (0x58807370, 0x588073E5, 0x588A6680),
    (0x58807370, 0x5880744E, 0x587899D0),
    (0x58807370, 0x58807490, 0x587899D0),
    (0x58807370, 0x588074A2, 0x58789B40),
    (0x58807370, 0x588074BC, 0x588D81A0),
    (0x58807370, 0x58807511, 0x587AF350),
    (0x58807370, 0x58807596, 0x58805790),
    (0x58807370, 0x588075A7, 0x588A6DF0),
    (0x58807370, 0x588075CC, 0x587B9640),
    (0x588051C0, 0x588051DF, 0x588DA450),
    (0x58805210, 0x5880522C, 0x588DA450),
    (0x58805260, 0x588052F9, 0x587AF330),
    (0x58805260, 0x58805340, 0x58893E50),
    (0x58805260, 0x58805374, 0x58789B40),
    (0x58805260, 0x588053E3, 0x587B9060),
    (0x58805260, 0x58805470, 0x5875A440),
    (0x58805260, 0x588054A0, 0x58752550),
    (0x58805260, 0x588054F8, 0x5875A440),
    (0x58805260, 0x58805542, 0x58752550),
    (0x58805260, 0x5880554E, 0x5878A1F0),
    (0x58805150, 0x5880517A, 0x588D81A0),
    (0x58805150, 0x588051A0, 0x588A6A20),
    (0x587899D0, 0x58789A0A, 0x587897B0),
    (0x587899D0, 0x58789A47, 0x587897B0),
    (0x587AF330, 0x587AF341, 0x587ABD70),
    (0x587AF350, 0x587AF366, 0x587AD0A0),
    (0x587AF370, 0x587AF381, 0x587AB740),
    (0x587AF390, 0x587AF3A6, 0x587AB9D0),
    (0x587B9060, 0x587B9084, 0x58748790),
    (0x58893E50, 0x58893E66, 0x5888D2D0),
    (0x588D8080, 0x588D80B3, 0x5877E2E0),
    (0x587AD0A0, 0x587AD3D6, 0x587ACBA0),
    (0x58748790, 0x5874879C, 0x58748650),
    (0x5888D2D0, 0x5888D355, 0x588A5470),
    (0x58748650, 0x58748669, 0x58748650),
)
EXPECTED_TAIL_JUMPS = ((0x58894820, 0x58894964, 0x588D27F0),)


def load_catalog():
    document = json.loads(CATALOG.read_text(encoding="utf-8"))
    return {int(item["address"], 16): item for item in document["matches"]}


def function_ranges(record):
    if record.get("segments"):
        return [(int(item["address"], 16), int(item["size"]))
                for item in record["segments"]]
    return [(int(record["address"], 16), int(record["size"]))]


def main():
    image = IMAGE.read_bytes()
    inventory = {}
    with INVENTORY.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            inventory[int(row["address"], 16)] = row
    records = load_catalog()
    selected = {int(address, 16) for address in QUEUE_BATCH_ADDRESSES}
    selected.add(QUEUE_DISPATCHER)

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    checked_calls = 0
    matched_targets = set(records)

    for address in selected:
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff verification record for {address:08X}")
        expected_size = QUEUE_DISPATCHER_SIZE if address == QUEUE_DISPATCHER else int(
            inventory[address]["size"])
        if int(record["size"]) != expected_size:
            raise AssertionError(f"Unexpected verified size for {address:08X}")
        ranges = function_ranges(record)
        if sum(size for _, size in ranges) != expected_size:
            raise AssertionError(f"Ghidra body ranges do not sum to the verified size for {address:08X}")

        for start, size in ranges:
            offset = start - BASE
            code = image[offset:offset + size]
            instructions = list(decoder.disasm(code, start))
            if not instructions or sum(item.size for item in instructions) != size:
                raise AssertionError(f"Mapped instructions do not cover {start:08X} + {size} bytes")
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                checked_calls += 1
                if BASE <= target < BASE + len(image):
                    function_start = int(record["address"], 16)
                    if function_start <= target < function_start + expected_size:
                        continue
                    if target not in inventory:
                        raise AssertionError(
                            f"Direct call from {instruction.address:08X} targets unindexed code {target:08X}"
                        )
                    if target not in matched_targets:
                        raise AssertionError(
                            f"Open direct callee {target:08X} from {instruction.address:08X}"
                        )

    def call_target(site):
        offset = site - BASE
        instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
        if instruction is None or instruction.address != site or instruction.id != X86_INS_CALL:
            raise AssertionError(f"Expected direct CALL at {site:08X}")
        if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
            raise AssertionError(f"Expected direct CALL target at {site:08X}")
        return instruction.operands[0].imm & 0xFFFFFFFF

    for caller, site, target in EXPECTED_CALLS:
        if caller not in matched_targets or target not in matched_targets:
            raise AssertionError(f"Unverified endpoint in expected edge {caller:08X}->{target:08X}")
        actual = call_target(site)
        if actual != target:
            raise AssertionError(f"Unexpected target at {site:08X}: {actual:08X}, expected {target:08X}")

    for caller, site, target in EXPECTED_TAIL_JUMPS:
        if caller not in matched_targets or target not in matched_targets:
            raise AssertionError(f"Unverified endpoint in expected tail jump {caller:08X}->{target:08X}")
        offset = site - BASE
        instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
        if instruction is None or instruction.address != site or instruction.id != X86_INS_JMP:
            raise AssertionError(f"Expected direct tail JMP at {site:08X}")
        actual = instruction.operands[0].imm & 0xFFFFFFFF
        if actual != target:
            raise AssertionError(f"Unexpected tail target at {site:08X}: {actual:08X}, expected {target:08X}")

    print(
        f"Queued event/update path: {len(QUEUE_BATCH_ADDRESSES)} new functions plus dispatcher, "
        f"{sum(int(inventory[int(address, 16)]['size']) for address in QUEUE_BATCH_ADDRESSES)} new bytes; "
        f"{len(EXPECTED_CALLS) + len(EXPECTED_TAIL_JUMPS)} Ghidra CALL/JMP edges and "
        f"{checked_calls} direct transfers checked with no open indexed callees"
    )


if __name__ == "__main__":
    main()
