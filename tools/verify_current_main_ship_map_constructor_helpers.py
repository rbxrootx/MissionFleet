"""Verify the byte-matched CShip_MapObjectScreen constructor helper slice."""
import csv
import json
import struct
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_ADDRESSES,
        MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_ADDRESSES,
        MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (
    0x58749800, 0x58756750, 0x5877E440, 0x5877FC60, 0x588C08A0,
    0x588D8230, 0x588D9D60, 0x588DA5F0, 0x588DA8F0, 0x588DAD30,
    0x588DDBF0, 0x588E6570, 0x5897D180,
)
RANGES = {
    0x58749800: ((0x58749800, 255, 66),),
    0x58756750: ((0x58756750, 579, 165),),
    0x5877E440: ((0x5877E440, 140, 45),),
    0x5877FC60: ((0x5877FC60, 441, 136),),
    0x588C08A0: ((0x588C08A0, 10, 3),),
    0x588D8230: ((0x588D8230, 667, 184),),
    0x588D9D60: ((0x588D9D60, 171, 55),),
    0x588DA5F0: ((0x588DA5F0, 758, 146),),
    0x588DA8F0: ((0x588DA8F0, 238, 61),),
    0x588DAD30: ((0x588DAD30, 720, 217),),
    0x588DDBF0: ((0x588DDBF0, 214, 47),),
    0x588E6570: ((0x588E6570, 82, 24),),
    0x5897D180: ((0x5897D180, 6, 1),),
}
TOTAL_SIZE = sum(size for ranges in RANGES.values() for _, size, _ in ranges)
TOTAL_INSTRUCTIONS = sum(count for ranges in RANGES.values()
                         for _, _, count in ranges)
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-ship-map-constructor-helper-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-ship-map-constructor-helper-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-ship-map-constructor-helper-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
CONSTRUCTOR = 0x588E05C0
EXPECTED_INCOMING = {
    0x58749800: {(CONSTRUCTOR, 0x588E09A0)},
    0x58756750: {(CONSTRUCTOR, 0x588E18B1), (CONSTRUCTOR, 0x588E18F1)},
    0x5877E440: {(CONSTRUCTOR, 0x588E121B)},
    0x5877FC60: {(CONSTRUCTOR, 0x588E3A19)},
    0x588C08A0: {
        (CONSTRUCTOR, 0x588E1233),
        (0x5877A060, 0x5877A0ED),
        (0x5877A650, 0x5877A7FB),
    },
    0x588D8230: {(CONSTRUCTOR, 0x588E0959)},
    0x588D9D60: {(CONSTRUCTOR, 0x588E0A3D)},
    0x588DA5F0: {(CONSTRUCTOR, 0x588E07CF)},
    0x588DA8F0: {(CONSTRUCTOR, 0x588E0954)},
    0x588DAD30: {(CONSTRUCTOR, 0x588E0B20)},
    0x588DDBF0: {(CONSTRUCTOR, 0x588E3364)},
    0x588E6570: {(CONSTRUCTOR, 0x588E3533), (CONSTRUCTOR, 0x588E356E)},
    0x5897D180: {(CONSTRUCTOR, 0x588E0BC2), (CONSTRUCTOR, 0x588E0BDA)},
}
UNMATCHED_OUTSIDE_CALLERS = {0x5877A060, 0x5877A650}
EXPECTED_INDIRECT_JUMPS = {
    0x588DDBF0: {0x588DDC10: "dword ptr [eax*4 + 0x588ddcc8]"},
    0x5897D180: {0x5897D180: "dword ptr [0x5898c304]"},
}
CHAT_PREFIX_SWITCH_TARGETS = (
    0x588DDCB2, 0x588DDC17, 0x588DDC38,
    0x588DDC59, 0x588DDC7A, 0x588DDC9B,
)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def body_tuple(row):
    return (
        int(row["function"], 16), int(row["start"], 16),
        int(row["length"]), int(row["instruction_bytes"]),
        int(row["instruction_count"]),
    )


def edge_tuple(row):
    return (
        row["kind"], int(row["function"], 16), int(row["site"], 16),
        row["type"], int(row["target"], 16), row["target_function"],
    )


def expected_bodies():
    expected_rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        fresh = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        actual = [body_tuple(row) for row in fresh
                  if int(row["function"], 16) in RANGES]
        expected = [
            (function, start, size, size, count)
            for function in FUNCTIONS
            for start, size, count in RANGES[function]
        ]
        if actual != expected:
            raise AssertionError(
                f"Fresh Ghidra body ranges changed in {project}: {actual}"
            )
        expected_rows.update((export, *row) for row in expected)

    actual_rows = {
        (row["export"], *body_tuple(row)) for row in read_tsv(BODY_EXPORTS)
    }
    if actual_rows != expected_rows:
        raise AssertionError("Tracked body rows differ from both fresh Ghidra exports")
    return expected_rows


def expected_edges():
    expected_rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        fresh = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [
            row for row in fresh
            if int(row["function"], 16) in RANGES
            or int(row["target"], 16) in RANGES
        ]
        if len(selected) != 59:
            raise AssertionError(
                f"Expected 59 body/inbound edge rows in {project}, got {len(selected)}"
            )
        incoming = {
            function: {
                (int(row["function"], 16), int(row["site"], 16))
                for row in selected if row["kind"] == "CALL"
                and int(row["target"], 16) == function
            }
            for function in FUNCTIONS
        }
        if incoming != EXPECTED_INCOMING:
            raise AssertionError(
                f"Fresh incoming call sites changed in {project}: {incoming}"
            )
        expected_rows.update((export, *edge_tuple(row)) for row in selected)

    actual_rows = {
        (row["export"], *edge_tuple(row)) for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_rows != expected_rows:
        raise AssertionError("Tracked edge rows differ from both fresh Ghidra exports")
    return expected_rows


def decode_range(image, decoder, start, size):
    data = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(data, start))
    if (sum(item.size for item in instructions) != size or not instructions
            or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def verify_matches(image, decoder):
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    selected = {int(address, 16)
                for address in MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_ADDRESSES}
    evidence_addresses = {
        int(address, 16) for address in MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_EVIDENCE
    }
    if selected != set(FUNCTIONS) or selected != evidence_addresses:
        raise AssertionError("Builder metadata does not identify the 13-function slice")

    decoded_direct = {}
    indirect_calls = {}
    indirect_jumps = {}
    total_size = 0
    total_instructions = 0
    for function, ranges in RANGES.items():
        row = inventory.get(function)
        record = records.get(function)
        segments = tuple((int(item["address"], 16), int(item["size"]))
                         for item in (record or {}).get("segments", []))
        expected_segments = tuple((start, size) for start, size, _ in ranges)
        expected_size = sum(size for _, size, _ in ranges)
        if (row is None or record is None or function not in matched
                or int(row["size"]) != expected_size
                or int(record["size"]) != expected_size
                or segments != expected_segments):
            raise AssertionError(f"{function:08X} is missing its exact verified body record")

        direct = {}
        indirect_call_sites = {}
        indirect_jump_sites = {}
        for start, size, expected_count in ranges:
            instructions = decode_range(image, decoder, start, size)
            if len(instructions) != expected_count:
                raise AssertionError(f"Mapped instruction count changed at {start:08X}")
            total_size += size
            total_instructions += len(instructions)
            for instruction in instructions:
                if instruction.id == X86_INS_CALL:
                    if instruction.operands[0].type == X86_OP_IMM:
                        direct[instruction.address] = instruction.operands[0].imm & 0xFFFFFFFF
                    else:
                        indirect_call_sites[instruction.address] = instruction.op_str
                elif (instruction.id == X86_INS_JMP
                      and instruction.operands[0].type != X86_OP_IMM):
                    indirect_jump_sites[instruction.address] = instruction.op_str

        if indirect_call_sites:
            indirect_calls[function] = indirect_call_sites
        if indirect_jump_sites:
            indirect_jumps[function] = indirect_jump_sites
        decoded_direct[function] = direct

    if total_size != TOTAL_SIZE or total_instructions != TOTAL_INSTRUCTIONS:
        raise AssertionError("Mapped slice byte or instruction total changed")
    if indirect_calls:
        raise AssertionError(f"Unexpected indirect calls in slice: {indirect_calls}")
    if indirect_jumps != EXPECTED_INDIRECT_JUMPS:
        raise AssertionError(f"Indirect tail jumps changed: {indirect_jumps}")
    table_offset = 0x588DDCC8 - BASE
    table_targets = struct.unpack_from("<6I", image, table_offset)
    if table_targets != CHAT_PREFIX_SWITCH_TARGETS:
        raise AssertionError(f"Chat-prefix switch targets changed: {table_targets}")

    edge_rows = read_tsv(EDGE_EXPORTS)
    first_export = EXPORTS[0]
    fresh_direct = {
        function: {
            int(row["site"], 16): int(row["target"], 16)
            for row in edge_rows if row["export"] == first_export
            and row["kind"] == "CALL" and int(row["function"], 16) == function
        }
        for function in FUNCTIONS
    }
    if decoded_direct != fresh_direct:
        raise AssertionError("Mapped direct calls differ from fresh Ghidra call edges")
    direct_targets = {target for calls in decoded_direct.values()
                      for target in calls.values()}
    if direct_targets - matched:
        raise AssertionError(
            "Slice has direct callees without byte-match verification: "
            + ", ".join(f"{item:08X}" for item in sorted(direct_targets - matched))
        )

    expected_calls = {
        (caller, site, function)
        for function, callers in EXPECTED_INCOMING.items()
        for caller, site in callers
    }
    caller_addresses = {caller for caller, _, _ in expected_calls}
    if CONSTRUCTOR not in matched or UNMATCHED_OUTSIDE_CALLERS & matched:
        raise AssertionError("Constructor/caller byte-match boundary changed")
    if caller_addresses != {CONSTRUCTOR} | UNMATCHED_OUTSIDE_CALLERS:
        raise AssertionError("Expected incoming caller set changed")
    for caller, site, target in expected_calls:
        instructions = decode_range(image, decoder, site, 5)
        if (len(instructions) != 1 or instructions[0].id != X86_INS_CALL
                or instructions[0].size != 5
                or instructions[0].operands[0].type != X86_OP_IMM
                or instructions[0].operands[0].imm & 0xFFFFFFFF != target):
            raise AssertionError(f"Mapped caller edge changed at {caller:08X}:{site:08X}")

    constructor_calls = {(caller, site, target) for caller, site, target in expected_calls
                         if caller == CONSTRUCTOR}
    if len(constructor_calls) != 16:
        raise AssertionError("Constructor helper call-site count changed")


def verify_range_manifest():
    actual = tuple(
        (int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(RANGE_MANIFEST)
    )
    expected = tuple(
        (function, start, size, size, count)
        for function in FUNCTIONS for start, size, count in RANGES[function]
    )
    if actual != expected:
        raise AssertionError("Tracked body-range manifest differs from fresh Ghidra ranges")


def main():
    expected_addresses = tuple(f"{function:08X}" for function in FUNCTIONS)
    if tuple(address.upper() for address in MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_ADDRESSES) != expected_addresses:
        raise AssertionError("Builder address order changed; review this subsystem verifier")
    verify_range_manifest()
    expected_bodies()
    expected_edges()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    print(
        f"CShip_MapObjectScreen constructor helper slice verified: {TOTAL_SIZE} bytes / "
        f"{TOTAL_INSTRUCTIONS} instructions across 13 functions. Both fresh Ghidra "
        "projects, mapped call edges, and byte-match records agree; 41 direct "
        "calls target matched functions, and one unresolved indirect tail jump "
        "remains. Two additional setter callers are unmatched and out of scope."
    )


if __name__ == "__main__":
    main()
