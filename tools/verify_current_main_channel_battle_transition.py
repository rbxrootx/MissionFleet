"""Verify the channel-battle control-screen transition byte-match closure."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import CHANNEL_BATTLE_TRANSITION_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

# Exact direct-call sites from DumpExactFunctionRanges.java and
# DumpFunctionRefs.java in the read-only Ghidra audit.
EXPECTED_CALLS = (
    (0x587D03D0, 0x587D04FE, 0x587CFAD0),
    (0x587D0F90, 0x587D1059, 0x58889120),
    (0x587D0F90, 0x587D11F5, 0x58889120),
    (0x587D0F90, 0x587D123F, 0x587CFA60),
    (0x587D0F90, 0x587D141B, 0x587CFF80),
    (0x587D0F90, 0x587D1432, 0x58888ED0),
    (0x587D0F90, 0x587D143D, 0x58888970),
    (0x587D0F90, 0x587D1446, 0x58888720),
    (0x587D0F90, 0x587D1451, 0x58888970),
    (0x587D0E40, 0x587D0ED7, 0x587B63B0),
    (0x587D0E40, 0x587D0EE4, 0x587896E0),
    (0x587D0E40, 0x587D0F39, 0x587CF690),
    (0x587D0E40, 0x587D0F4C, 0x58888940),
    (0x587896E0, 0x587896F7, 0x5874A7D0),
    (0x587D1810, 0x587D181E, 0x587D0F90),
    (0x587D1810, 0x587D1829, 0x587D0F90),
    (0x587D2630, 0x587D2688, 0x587D0E40),
    (0x587D2630, 0x587D269F, 0x587B9060),
    (0x587D16B0, 0x587D16FE, 0x58789680),
    (0x587D16B0, 0x587D17C1, 0x58789680),
    (0x587D16B0, 0x587D17D8, 0x587D0E40),
    (0x587D16B0, 0x587D17EE, 0x587B9060),
    (0x587D3840, 0x587D3843, 0x587D03D0),
    (0x587D51D0, 0x587D55E6, 0x587D0F90),
    (0x587D51D0, 0x587D55ED, 0x587D0E40),
    (0x587D51D0, 0x587D58A9, 0x587CFA60),
    (0x587D51D0, 0x587D5A25, 0x587D0F90),
    (0x587D51D0, 0x587D5A31, 0x587D0F90),
    (0x587D5B20, 0x587D5C90, 0x58888ED0),
    (0x587D5B20, 0x587D5CB0, 0x587CFF80),
    (0x587D5B20, 0x587D5D5A, 0x587CFAD0),
    (0x587D5B20, 0x587D63E9, 0x587D0E40),
    (0x587D3860, 0x587D5188, 0x587D0F90),
    (0x587D1460, 0x587D1618, 0x58888940),
    (0x587BB700, 0x587BCA4E, 0x58888940),
    (0x587BB700, 0x587BCE42, 0x58888940),
    (0x587BB700, 0x587BCA59, 0x58888760),
    (0x587BB700, 0x587C0AB3, 0x587D2630),
    (0x588889F0, 0x58888C47, 0x587D16B0),
    (0x588889F0, 0x58888C70, 0x587D16B0),
    (0x588889F0, 0x58888C99, 0x587D16B0),
    (0x588889F0, 0x58888CC2, 0x587D16B0),
    (0x588889F0, 0x58888CE0, 0x587D1810),
)

EXPECTED_TAIL_JUMPS = (
    (0x587D0E40, 0x587D0F89, 0x587CFF80),
    (0x58888ED0, 0x58888F0A, 0x58888760),
    (0x58888940, 0x58888955, 0x58907360),
)


def load_catalog():
    document = json.loads(CATALOG.read_text(encoding="utf-8"))
    return {int(item["address"], 16): item for item in document["matches"]}


def function_ranges(record):
    if record.get("segments"):
        return [(int(item["address"], 16), int(item["size"]))
                for item in record["segments"]]
    return [(int(record["address"], 16), int(record["size"]))]


def is_internal_target(target, ranges):
    return any(start <= target < start + size for start, size in ranges)


def main():
    image = IMAGE.read_bytes()
    inventory = {}
    with INVENTORY.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            inventory[int(row["address"], 16)] = row
    records = load_catalog()
    selected = {int(address, 16) for address in CHANNEL_BATTLE_TRANSITION_ADDRESSES}
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    matched_targets = set(records)
    checked_transfers = 0
    total_bytes = 0

    for address in selected:
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff verification record for {address:08X}")
        if address not in inventory:
            raise AssertionError(f"Function {address:08X} is absent from the indexed inventory")
        expected_size = int(inventory[address]["size"])
        if int(record["size"]) != expected_size:
            raise AssertionError(f"Unexpected byte count for {address:08X}")
        ranges = function_ranges(record)
        if sum(size for _, size in ranges) != expected_size:
            raise AssertionError(f"Ghidra body ranges do not sum to the size for {address:08X}")
        total_bytes += expected_size

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
                checked_transfers += 1
                if BASE <= target < BASE + len(image) and not is_internal_target(target, ranges):
                    if target not in inventory:
                        raise AssertionError(
                            f"Direct transfer from {instruction.address:08X} targets unindexed code {target:08X}"
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
        f"Channel-battle transition slice: {len(selected)} functions, {total_bytes} bytes; "
        f"{len(EXPECTED_CALLS)} calls, {len(EXPECTED_TAIL_JUMPS)} tail jumps, "
        f"and {checked_transfers} direct transfers checked; "
        "all indexed direct callees are byte-matched"
    )


if __name__ == "__main__":
    main()
