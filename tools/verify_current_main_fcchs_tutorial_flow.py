"""Validate the RTTI-rooted FCCHS tutorial flow in the installed Main.dll."""

import csv
import json
import struct
from collections import deque
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import MAIN_FCCHS_TUTORIAL_VTABLE_ADDRESSES
except ImportError:
    from build_current_main_verifications import MAIN_FCCHS_TUTORIAL_VTABLE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-fcchs-tutorial-vtables-body-ranges.tsv"
GAP_PATH = ROOT / "config/NF2_2026/main-fcchs-tutorial-vtables-unindexed-fragments.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

EXPECTED_FUNCTIONS = 29
EXPECTED_BODY_BYTES = 9_237
EXPECTED_RANGES = 44
EXPECTED_INSTRUCTIONS = 3_008
EXPECTED_GAPS = 15
EXPECTED_GAP_BYTES = 76
EXPECTED_ROOTS = 13
EXPECTED_DIRECT_CALLS = 114
EXPECTED_INTERNAL_CALLS = 21
EXPECTED_BOUNDARY_CALLS = 93
EXPECTED_EXTERNAL_TARGETS = 30
EXPECTED_INDIRECT_CALLS = 66
EXPECTED_INDIRECT_JUMPS = 6

VFTABLES = (
    {
        "name": ".?AVCFCCH_MainManager@@",
        "type_descriptor": 0x589BA82C,
        "locator": 0x589A5950,
        "table": 0x58995C20,
        "slots": (
            0x5876ED60, 0x588A3A00, 0x5876ED80, 0x58770800,
            0x5873B360, 0x58902FE0,
        ),
    },
    {
        "name": ".?AVCFCCH_PannelTutorialMessage@@",
        "type_descriptor": 0x589BA850,
        "locator": 0x589A599C,
        "table": 0x58996170,
        "slots": (
            0x58770AC0, 0x58770AE0, 0x58771330, 0x58874260,
            0x58770B90, 0x58902FE0, 0x58770A10,
        ),
    },
    {
        "name": ".?AVCFCCH_PannelTutorialStart@@",
        "type_descriptor": 0x589BA87C,
        "locator": 0x589A59F0,
        "table": 0x58996190,
        "slots": (
            0x587713C0, 0x587713E0, 0x58771330, 0x58874260,
            0x58771430, 0x58902FE0, 0x58771370,
        ),
    },
)

JUMP_TABLES = (
    (0x5876F458, (0x5876F286, 0x5876F296, 0x5876F365,
                  0x5876F2AE, 0x5876F38B, 0x5876F2DF)),
    (0x5876F470, (0x5876F32D, 0x5876F34D, 0x5876F365, 0x5876F2AE,
                  0x5876F38B, 0x5876F3B1, 0x5876F3F5, 0x5876F41B)),
    (0x587700E8, (0x5876FD58, 0x5876FDE1, 0x5876FEBB, 0x5876FF0E,
                  0x587700AE, 0x5876FD5B, 0x5876FD58)),
    (0x58770104, (0x5876FD58, 0x5876FF72, 0x58770052, 0x5876FD58,
                  0x587700AE, 0x5876FD5B, 0x587700CA, 0x5876FD58,
                  0x5876FD58)),
)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def pointer(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Address is outside mapped Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def read_body_ranges():
    ranges = {}
    instruction_count = 0
    with RANGE_PATH.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            address = int(row["function"], 16)
            start = int(row["start"], 16)
            size = int(row["length"])
            if (size <= 0 or int(row["instruction_bytes"]) != size
                    or int(row["instruction_count"]) <= 0):
                raise AssertionError(f"Incomplete Ghidra body range: {row}")
            ranges.setdefault(address, []).append((start, size))
            instruction_count += int(row["instruction_count"])
    for address, parts in ranges.items():
        parts.sort()
        previous_end = None
        for start, size in parts:
            if previous_end is not None and start < previous_end:
                raise AssertionError(f"Overlapping body ranges at {address:08X}")
            previous_end = start + size
    return ranges, instruction_count


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def verify_rtti_and_tables(image, inventory, selected):
    roots = set()
    for item in VFTABLES:
        table = item["table"]
        locator = item["locator"]
        if pointer(image, table - 4) != locator:
            raise AssertionError(f"Bad COL pointer before {item['name']} vtable")
        if pointer(image, locator) != 0:
            raise AssertionError(f"Unexpected RTTI COL signature for {item['name']}")
        if pointer(image, locator + 12) != item["type_descriptor"]:
            raise AssertionError(f"COL TypeDescriptor mismatch for {item['name']}")
        td_offset = item["type_descriptor"] - BASE + 8
        type_name = image[td_offset:td_offset + 128].split(b"\0", 1)[0]
        if type_name.decode("ascii", errors="strict") != item["name"]:
            raise AssertionError(f"RTTI name mismatch for {item['name']}")

        actual_slots = tuple(pointer(image, table + index * 4)
                             for index in range(len(item["slots"])))
        if actual_slots != item["slots"]:
            raise AssertionError(f"Vtable slot mismatch for {item['name']}: {actual_slots}")
        for target in actual_slots:
            if target not in inventory:
                raise AssertionError(f"Vtable target is not inventoried: {target:08X}")
            if target in selected:
                roots.add(target)
    if len(roots) != EXPECTED_ROOTS:
        raise AssertionError(f"Expected {EXPECTED_ROOTS} unique open vtable roots, got {len(roots)}")

    # These two small state callbacks are shared with sibling panel vtables.
    for reference, expected in (
        (0x5899D858, 0x58771330),
        (0x589A0654, 0x58771330),
        (0x589A0650, 0x588A3A00),
    ):
        if pointer(image, reference) != expected:
            raise AssertionError(f"Shared vtable reference changed at {reference:08X}")
    return roots


def verify_unindexed_fragments(image, ranges):
    rows = read_tsv(GAP_PATH)
    observed = []
    expected_derived = []
    for function, parts in ranges.items():
        for (start, size), (next_start, _) in zip(parts, parts[1:]):
            end = start + size
            if next_start > end:
                expected_derived.append((function, end, next_start - end))
    for row in rows:
        function = int(row["function"], 16)
        start = int(row["start"], 16)
        size = int(row["length"])
        raw = bytes.fromhex(row["bytes"])
        if len(raw) != size or image[start - BASE:start - BASE + size] != raw:
            raise AssertionError(f"Unindexed fragment differs from Main.dll at {start:08X}")
        observed.append((function, start, size))
    if sorted(observed) != sorted(expected_derived):
        raise AssertionError("Unindexed-fragment manifest does not cover exact Ghidra range gaps")
    if len(rows) != EXPECTED_GAPS or sum(item[2] for item in observed) != EXPECTED_GAP_BYTES:
        raise AssertionError("Unexpected unindexed-fragment count or byte total")


def verify_switch_tables(image, ranges):
    all_ranges = [(start, start + size)
                  for parts in ranges.values() for start, size in parts]
    for address, targets in JUMP_TABLES:
        table_end = address + 4 * len(targets)
        if any(address < high and low < table_end for low, high in all_ranges):
            raise AssertionError(f"Switch table overlaps an indexed body at {address:08X}")
        actual = tuple(pointer(image, address + index * 4)
                       for index in range(len(targets)))
        if actual != targets:
            raise AssertionError(f"Switch-table targets changed at {address:08X}")


def verify_message_keys(image):
    keys = [
        f"MESSAGESTRING__FCCHS__TUTORIAL_MESSAGE_LEVEL{level}_{index}".encode("ascii")
        for level, count in ((1, 9), (2, 7), (3, 3))
        for index in range(1, count + 1)
    ]
    if any(key not in image for key in keys):
        raise AssertionError("A tutorial-level localized message key is absent from Main.dll")


def main():
    image = IMAGE_PATH.read_bytes()
    inventory_rows = read_tsv(INVENTORY_PATH)
    inventory = {int(row["address"], 16): row for row in inventory_rows
                 if row["component"] == "client-main-current"}
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(record["address"], 16): record for record in catalog["matches"]}
    matched = {address for address, record in records.items()
               if record.get("verified_by") == MARKER}
    selected = {int(address, 16) for address in MAIN_FCCHS_TUTORIAL_VTABLE_ADDRESSES}
    ranges, instruction_count = read_body_ranges()

    if selected != set(ranges):
        raise AssertionError("Builder set and exact Ghidra body-range manifest disagree")
    range_count = sum(len(parts) for parts in ranges.values())
    body_bytes = sum(size for parts in ranges.values() for _, size in parts)
    if (len(selected) != EXPECTED_FUNCTIONS or range_count != EXPECTED_RANGES
            or body_bytes != EXPECTED_BODY_BYTES
            or instruction_count != EXPECTED_INSTRUCTIONS):
        raise AssertionError("Unexpected FCCHS tutorial closure shape")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    roots = verify_rtti_and_tables(image, inventory, selected)
    verify_unindexed_fragments(image, ranges)
    verify_switch_tables(image, ranges)
    verify_message_keys(image)

    graph = {address: set() for address in selected}
    internal_calls = 0
    boundary_calls = 0
    external_targets = set()
    indirect_calls = 0
    indirect_jumps = 0
    for address in sorted(selected):
        inventory_row = inventory.get(address)
        record = records.get(address)
        expected_ranges = tuple(ranges[address])
        if (inventory_row is None or record is None
                or record.get("verified_by") != MARKER):
            raise AssertionError(f"Missing byte-verified tutorial function {address:08X}")
        if (int(record["size"]) != int(inventory_row["size"])
                or sum(size for _, size in expected_ranges) != int(inventory_row["size"])
                or record_ranges(record) != expected_ranges):
            raise AssertionError(f"Catalog ranges disagree with Ghidra at {address:08X}")

        own_low = min(start for start, _ in expected_ranges)
        own_high = max(start + size for start, size in expected_ranges)
        for start, size in expected_ranges:
            code = image[start - BASE:start - BASE + size]
            instructions = list(decoder.disasm(code, start))
            if (not instructions or instructions[0].address != start
                    or sum(item.size for item in instructions) != size
                    or instructions[-1].address + instructions[-1].size != start + size):
                raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
            for instruction in instructions:
                if instruction.id == X86_INS_CALL:
                    if (not instruction.operands
                            or instruction.operands[0].type != X86_OP_IMM):
                        indirect_calls += 1
                        continue
                    target = instruction.operands[0].imm & 0xFFFFFFFF
                    if target in selected:
                        graph[address].add(target)
                        internal_calls += 1
                    elif own_low <= target < own_high:
                        internal_calls += 1
                    elif target in matched:
                        boundary_calls += 1
                        external_targets.add(target)
                    else:
                        raise AssertionError(
                            f"Unmatched direct call target {target:08X} "
                            f"from {instruction.address:08X}"
                        )
                elif instruction.id == X86_INS_JMP:
                    if (not instruction.operands
                            or instruction.operands[0].type != X86_OP_IMM):
                        indirect_jumps += 1
                    else:
                        target = instruction.operands[0].imm & 0xFFFFFFFF
                        if target in selected:
                            graph[address].add(target)
                        elif not own_low <= target < own_high and target in matched:
                            # Ghidra records this tail jump as a call edge.
                            boundary_calls += 1
                            external_targets.add(target)

    reachable = set(roots)
    queue = deque(roots)
    while queue:
        for target in graph[queue.popleft()] - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"RTTI-rooted direct-call closure differs: {sorted(selected - reachable)}")
    if (internal_calls != EXPECTED_INTERNAL_CALLS
            or boundary_calls != EXPECTED_BOUNDARY_CALLS
            or len(external_targets) != EXPECTED_EXTERNAL_TARGETS
            or internal_calls + boundary_calls != EXPECTED_DIRECT_CALLS):
        raise AssertionError(
            "Unexpected direct-call boundary counts: "
            f"internal={internal_calls}, boundary={boundary_calls}, "
            f"unique_external={len(external_targets)}"
        )
    if (indirect_calls != EXPECTED_INDIRECT_CALLS
            or indirect_jumps != EXPECTED_INDIRECT_JUMPS):
        raise AssertionError("Unexpected dynamic-call/jump site counts")

    print(
        f"FCCHS tutorial RTTI flow: {len(selected)} byte-verified functions, "
        f"{body_bytes:,} indexed bytes in {range_count} Ghidra ranges "
        f"({instruction_count:,} instructions); three RTTI tables, "
        f"{internal_calls} internal and {boundary_calls} matched boundary transfers, "
        f"{len(external_targets)} matched external targets, {indirect_calls} "
        f"dynamic calls, {indirect_jumps} dynamic jumps, {EXPECTED_GAPS} exact "
        f"unindexed fragments, and four switch tables validated"
    )


if __name__ == "__main__":
    main()
