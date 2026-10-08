"""Verify the byte-matched CSantaAircraft AP/HE damage callback subsystem."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_ADDRESSES,
        MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_ADDRESSES,
        MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x5873C4A0, 0x5873C790, 0x588DC380, 0x5885EAD0, 0x58858450)
RANGES = {
    0x5873C4A0: ((0x5873C4A0, 752, 198),),
    0x5873C790: ((0x5873C790, 909, 238),),
    0x588DC380: ((0x588DC380, 615, 157),),
    0x5885EAD0: ((0x5885EAD0, 18, 4),),
    0x58858450: ((0x58858450, 18, 4),),
}
TOTAL_SIZE = sum(size for ranges in RANGES.values() for _, size, _ in ranges)
TOTAL_INSTRUCTIONS = sum(count for ranges in RANGES.values()
                         for _, _, count in ranges)
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-santa-aircraft-damage-callbacks-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-santa-aircraft-damage-callbacks-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-santa-aircraft-damage-callbacks-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
COOKIE_HELPER = 0x5897CBDA

DIRECT_TARGET_COUNTS = {
    0x5873C4A0: {0x5897CBDA: 2, 0x5873C2E0: 1, 0x588DC380: 1, 0x58907990: 1},
    0x5873C790: {
        0x5873C2E0: 1, 0x5897CC4E: 1, 0x58907C80: 1, 0x58902D20: 1,
        0x588DC380: 1, 0x58907990: 1, 0x5897CBDA: 1,
    },
    0x588DC380: {0x5885EAD0: 1, 0x58858450: 1},
    0x5885EAD0: {},
    0x58858450: {},
}
INDIRECT_CALLS = {
    0x5873C4A0: {
        0x5873C585: "edx", 0x5873C693: "eax", 0x5873C69F: "eax",
        0x5873C744: "dword ptr [0x5898c3c4]",
        0x5873C759: "dword ptr [0x5898c1a8]",
        0x5873C76C: "dword ptr [0x5898c1a0]",
    },
    0x5873C790: {
        0x5873C90F: "eax", 0x5873CA08: "eax", 0x5873CA14: "eax",
        0x5873CAC0: "dword ptr [0x5898c3c4]",
        0x5873CAD5: "dword ptr [0x5898c1a8]",
        0x5873CAE8: "dword ptr [0x5898c1a0]",
    },
    0x588DC380: {},
    0x5885EAD0: {},
    0x58858450: {},
}
EXPECTED_INCOMING = {
    0x5873C4A0: {(0x588D26D0, 0x588D26D5)},
    0x5873C790: {(0x588D2760, 0x588D276A)},
    0x588DC380: {(0x5873C4A0, 0x5873C5DF), (0x5873C790, 0x5873C979)},
    0x5885EAD0: {(0x588DC380, 0x588DC5C9), (0x58857020, 0x588574C8)},
    0x58858450: {(0x588DC380, 0x588DC5DB), (0x58857020, 0x588574E2)},
}
CALLER_CALLS = {
    (0x588D26D0, 0x588D26D5, 0x5873C4A0),
    (0x588D2760, 0x588D276A, 0x5873C790),
    (0x58857020, 0x588574C8, 0x5885EAD0),
    (0x58857020, 0x588574E2, 0x58858450),
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def expected_bodies():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        source = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        for function, ranges in RANGES.items():
            matches = [row for row in source
                       if int(row["function"], 16) == function]
            expected = tuple((start, size, size, count)
                             for start, size, count in ranges)
            actual = tuple((int(row["start"], 16), int(row["length"]),
                            int(row["instruction_bytes"]),
                            int(row["instruction_count"])) for row in matches)
            if actual != expected:
                raise AssertionError(
                    f"Fresh body ranges changed for {function:08X} in {project}: {actual}"
                )
            rows.update((export, function, start, size, size, count)
                        for start, size, count in ranges)

    actual_rows = {
        (row["export"], int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if actual_rows != rows:
        raise AssertionError("Checked-in body rows differ from the fresh Ghidra exports")
    return rows


def expected_edges():
    rows = set()
    closure = set(FUNCTIONS)
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        source = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in source
                    if int(row["function"], 16) in closure
                    or int(row["target"], 16) in closure]

        for function, callers in EXPECTED_INCOMING.items():
            actual = {
                (int(row["function"], 16), int(row["site"], 16))
                for row in selected if row["kind"] == "CALL"
                and int(row["target"], 16) == function
            }
            if actual != callers:
                raise AssertionError(
                    f"Fresh incoming calls changed for {function:08X} in {project}: {actual}"
                )

        for function, expected_counts in DIRECT_TARGET_COUNTS.items():
            actual_counts = {}
            for row in selected:
                if row["kind"] == "CALL" and int(row["function"], 16) == function:
                    target = int(row["target"], 16)
                    actual_counts[target] = actual_counts.get(target, 0) + 1
            if actual_counts != expected_counts:
                raise AssertionError(
                    f"Fresh direct dependencies changed for {function:08X} "
                    f"in {project}: {actual_counts}"
                )

        rows.update((export, row["kind"], int(row["function"], 16),
                     int(row["site"], 16), int(row["target"], 16), row["type"])
                    for row in selected)

    actual_rows = {
        (row["export"], row["kind"], int(row["function"], 16),
         int(row["site"], 16), int(row["target"], 16), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_rows != rows:
        raise AssertionError("Checked-in edge rows differ from the fresh Ghidra exports")
    return rows


def decode_range(image, decoder, start, size):
    instructions = list(decoder.disasm(image[start - BASE:start - BASE + size], start))
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
                for address in MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_ADDRESSES}
    evidence_addresses = {int(address, 16)
                          for address in MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_EVIDENCE}
    if selected != set(FUNCTIONS) or selected != evidence_addresses:
        raise AssertionError("Builder metadata does not identify the five-function subsystem")

    direct_by_function = {}
    total_size = 0
    total_instructions = 0
    for function, ranges in RANGES.items():
        row = inventory.get(function)
        record = records.get(function)
        expected_segments = tuple((start, size) for start, size, _ in ranges)
        actual_segments = tuple((int(item["address"], 16), int(item["size"]))
                                for item in (record or {}).get("segments", []))
        if (row is None or record is None or function not in matched
                or int(row["size"]) != sum(size for _, size, _ in ranges)
                or int(record["size"]) != sum(size for _, size, _ in ranges)
                or actual_segments != expected_segments):
            raise AssertionError(f"{function:08X} is missing its exact verified body record")

        direct = {}
        indirect = {}
        for start, size, count in ranges:
            instructions = decode_range(image, decoder, start, size)
            if len(instructions) != count:
                raise AssertionError(f"Mapped instruction count changed at {start:08X}")
            total_size += size
            total_instructions += len(instructions)
            for instruction in instructions:
                if instruction.id != X86_INS_CALL:
                    continue
                if instruction.operands[0].type == X86_OP_IMM:
                    direct[instruction.address] = instruction.operands[0].imm & 0xFFFFFFFF
                else:
                    indirect[instruction.address] = instruction.op_str

        counts = {}
        for target in direct.values():
            counts[target] = counts.get(target, 0) + 1
        if counts != DIRECT_TARGET_COUNTS[function]:
            raise AssertionError(f"Mapped direct-call targets changed for {function:08X}: {counts}")
        if indirect != INDIRECT_CALLS[function]:
            raise AssertionError(f"Mapped indirect-call sites changed for {function:08X}: {indirect}")
        for target in direct.values():
            if target not in matched and target not in selected and target != COOKIE_HELPER:
                raise AssertionError(
                    f"Unmatched direct dependency {function:08X}->{target:08X}"
                )
        direct_by_function[function] = direct

    if total_size != TOTAL_SIZE or total_instructions != TOTAL_INSTRUCTIONS:
        raise AssertionError("Mapped subsystem byte or instruction total changed")

    edge_rows = read_tsv(EDGE_EXPORTS)
    fresh_calls = {
        function: {
            int(row["site"], 16): int(row["target"], 16)
            for row in edge_rows if row["export"] == EXPORTS[0]
            and row["kind"] == "CALL" and int(row["function"], 16) == function
        }
        for function in FUNCTIONS
    }
    if direct_by_function != fresh_calls:
        raise AssertionError("Mapped direct calls differ from fresh Ghidra call edges")

    caller_addresses = {caller for caller, _, _ in CALLER_CALLS}
    if any(caller not in matched for caller in caller_addresses):
        raise AssertionError("An evidenced callback/setter caller is not byte-verified")
    for caller, site, target in CALLER_CALLS:
        instructions = decode_range(image, decoder, site, 5)
        if (len(instructions) != 1 or instructions[0].id != X86_INS_CALL
                or instructions[0].size != 5
                or instructions[0].operands[0].type != X86_OP_IMM
                or instructions[0].operands[0].imm & 0xFFFFFFFF != target):
            raise AssertionError(f"Mapped caller edge changed at {caller:08X}:{site:08X}")

    if 0x588D2480 not in matched:
        raise AssertionError("The matched CSantaAircraft constructor evidence is missing")


def verify_range_manifest():
    rows = read_tsv(RANGE_MANIFEST)
    actual = tuple((int(row["function"], 16), int(row["start"], 16),
                    int(row["length"]), int(row["instruction_bytes"]),
                    int(row["instruction_count"])) for row in rows)
    expected = tuple((function, start, size, size, count)
                     for function, ranges in RANGES.items()
                     for start, size, count in ranges)
    if actual != expected:
        raise AssertionError("Tracked body-range manifest differs from fresh Ghidra ranges")


def main():
    expected_addresses = tuple(f"{function:08X}" for function in FUNCTIONS)
    if tuple(address.upper() for address in MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_ADDRESSES) != expected_addresses:
        raise AssertionError("Builder address order changed; review this subsystem verifier")
    verify_range_manifest()
    expected_bodies()
    expected_edges()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)

    if __package__:
        from . import verify_current_main_santa_aircraft_slot6, verify_current_main_santa_aircraft_slot7
    else:
        import verify_current_main_santa_aircraft_slot6
        import verify_current_main_santa_aircraft_slot7

    verify_current_main_santa_aircraft_slot6.main()
    verify_current_main_santa_aircraft_slot7.main()
    print(
        f"CSantaAircraft AP/HE damage callbacks verified: {TOTAL_SIZE} bytes / "
        f"{TOTAL_INSTRUCTIONS} instructions across five functions. Fresh Ghidra "
        "body/edge exports, mapped call closure, and both vtable entry paths agree; "
        "indirect callbacks and field semantics remain unresolved."
    )


if __name__ == "__main__":
    main()
