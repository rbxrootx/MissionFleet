"""Audit the mode-7 OpConvoy state-update byte-match closure and client anchor."""
import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import OPCONVOY_BATTLE_UPDATE_ADDRESSES

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x587CDD60
ROOT_SIZE = 1389
EXPECTED_FUNCTIONS = 29
EXPECTED_BYTES = 10594
FUNCTION_RANGES = {
    0x58756B40: ((0x58756B40, 0x72),),
    0x58756BC0: ((0x58756BC0, 0xE6),),
    0x5878A190: ((0x5878A190, 0x45),),
    0x58796F00: ((0x58796F00, 0x61),),
    0x58796F80: ((0x58796F80, 0x4F),),
    0x587C9F30: ((0x587C9F30, 0x27B),),
    0x587CA1C0: ((0x587CA1C0, 0xEB),),
    0x587CADA0: ((0x587CADA0, 0x25),),
    0x587CB2F0: ((0x587CB2F0, 0x4F),),
    0x587CC780: ((0x587CC780, 0x20C),),
    0x587CC990: ((0x587CC990, 0x5A),),
    0x587CD000: ((0x587CD000, 0x1A), (0x587CD020, 0x3A),
                 (0x587CD060, 0x3D), (0x587CD0A0, 0x184)),
    0x587CD230: ((0x587CD230, 0x290),),
    0x587CD4C0: ((0x587CD4C0, 0x18A),),
    0x587CD650: ((0x587CD650, 0x237), (0x587CD890, 0x135)),
    0x587CD9F0: ((0x587CD9F0, 0x6F),),
    0x587CDA60: ((0x587CDA60, 0x2E9),),
    0x587CDD60: ((0x587CDD60, 0xAD), (0x587CDE10, 0x4C0)),
    0x587CE320: ((0x587CE320, 0x39),),
    0x587CE360: ((0x587CE360, 0x6C),),
    0x587CE7A0: ((0x587CE7A0, 0xC3),),
    0x587E5C30: ((0x587E5C30, 0x45),),
    0x587E8C00: ((0x587E8C00, 0x6A3),),
    0x587EF0C0: ((0x587EF0C0, 0x93),),
    0x587F2A70: ((0x587F2A70, 0x5F),),
    0x587F2AD0: ((0x587F2AD0, 0x2F5),),
    0x58800FD0: ((0x58800FD0, 0x149), (0x58801120, 0x93)),
    0x58896200: ((0x58896200, 0x2D),),
    0x588D6D50: ((0x588D6D50, 0x35),),
}

# Existing, matched caller chain: the PageFight vtable's +0x0C method invokes
# the screen update helper, which dispatches this subsystem only in mode 7.
VTABLE_ADDRESS = 0x5899D180
VTABLE_SLOT = VTABLE_ADDRESS + 0x0C
SCREEN_UPDATE = 0x587FD890
SCREEN_UPDATE_TO_EVENT_ROOT = {
    0x587FEF97: 0x587FB810,
    0x587FF039: 0x587FB810,
}
EVENT_ROOT = 0x587FB810
EVENT_ROOT_TO_OPCONVOY = {0x587FBC99: ROOT_ADDRESS}


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def decode_external_transfers(code, start, own_ranges, image_end, decoder):
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(insn.size for insn in instructions) != len(code)
            or instructions[-1].address + instructions[-1].size != start + len(code)):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    transfers = []
    for insn in instructions:
        if insn.id not in (X86_INS_CALL, X86_INS_JMP) or not insn.operands:
            continue
        operand = insn.operands[0]
        if operand.type != X86_OP_IMM:
            continue
        target = operand.imm & 0xFFFFFFFF
        if not BASE <= target < image_end:
            continue
        if any(lo <= target < hi for lo, hi in own_ranges):
            continue
        transfers.append((insn.address, target))
    return transfers


def require_direct_calls(image, decoder, calls, label):
    actual = {}
    for site in calls:
        instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
        if (instruction is None or instruction.id != X86_INS_CALL
                or not instruction.operands or instruction.operands[0].type != X86_OP_IMM):
            raise AssertionError(f"Expected direct call at {site:08X} ({label})")
        actual[site] = instruction.operands[0].imm & 0xFFFFFFFF
    return actual


def main():
    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {int(row["address"], 16): row for row in csv.DictReader(stream, delimiter="\t")
                     if row["component"] == "client-main-current"}
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    selected = set(FUNCTION_RANGES)
    configured = {int(address, 16) for address in OPCONVOY_BATTLE_UPDATE_ADDRESSES}
    if selected != configured:
        raise AssertionError("Verifier and candidate-builder closure address sets differ")
    if len(selected) != EXPECTED_FUNCTIONS or ROOT_ADDRESS not in selected:
        raise AssertionError("Unexpected OpConvoy closure address set")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    graph = {address: set() for address in selected}
    checked_transfers = 0
    matched_boundaries = set()

    for address in sorted(selected):
        row = inventory.get(address)
        record = records.get(address)
        if row is None or record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-verified record for {address:08X}")
        expected_ranges = record_ranges(record)
        indexed_size = int(row["size"])
        if (int(record["size"]) != indexed_size
                or sum(size for _, size in expected_ranges) != indexed_size):
            raise AssertionError(f"Ghidra body size mismatch for {address:08X}")
        if expected_ranges != FUNCTION_RANGES[address]:
            raise AssertionError(f"Unexpected Ghidra body ranges for {address:08X}: {expected_ranges}")
        if address == ROOT_ADDRESS and indexed_size != ROOT_SIZE:
            raise AssertionError(f"Unexpected OpConvoy root size: {indexed_size}")
        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for start, size in expected_ranges:
            code = image[start - BASE:start - BASE + size]
            for site, target in decode_external_transfers(
                    code, start, own_ranges, image_end, decoder):
                checked_transfers += 1
                if target in selected:
                    graph[address].add(target)
                elif target in matched:
                    matched_boundaries.add(target)
                else:
                    raise AssertionError(
                        f"Unmatched external direct transfer {target:08X} from {site:08X}")

    reachable = {ROOT_ADDRESS}
    queue = deque([ROOT_ADDRESS])
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        missing = sorted(selected - reachable)
        raise AssertionError(f"Address set is not the root's exact direct-transfer closure: {missing}")

    byte_count = sum(int(inventory[address]["size"]) for address in selected)
    if byte_count != EXPECTED_BYTES:
        raise AssertionError(f"Unexpected closure byte total: {byte_count}")
    if SCREEN_UPDATE not in matched or EVENT_ROOT not in inventory:
        raise AssertionError("The PageFight vtable/update anchor is incomplete")

    slot_offset = VTABLE_SLOT - BASE
    if struct.unpack_from("<I", image, slot_offset)[0] != SCREEN_UPDATE:
        raise AssertionError("PageFight vtable slot +0x0C no longer points to the update method")
    screen_calls = require_direct_calls(image, decoder, SCREEN_UPDATE_TO_EVENT_ROOT,
                                        "PageFight update to event-loop helper")
    if screen_calls != SCREEN_UPDATE_TO_EVENT_ROOT:
        raise AssertionError(f"Unexpected PageFight event-loop call targets: {screen_calls}")
    event_calls = require_direct_calls(image, decoder, EVENT_ROOT_TO_OPCONVOY,
                                       "event-loop helper to OpConvoy state update")
    if event_calls != EVENT_ROOT_TO_OPCONVOY:
        raise AssertionError(f"Unexpected OpConvoy dispatch target: {event_calls}")

    print(
        f"PageFight mode-7 OpConvoy path: {len(selected)} functions / {byte_count:,} bytes "
        f"ObjDiff-identical; root has {len(FUNCTION_RANGES[ROOT_ADDRESS])} exact ranges; "
        f"direct-transfer closure reaches every selected function, "
        f"{len(matched_boundaries)} verified boundary targets and {checked_transfers} "
        f"mapped direct transfers checked; vtable/update/dispatch anchors pass"
    )


if __name__ == "__main__":
    main()
