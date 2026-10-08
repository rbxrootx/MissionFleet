"""Verify the CPannelInfoBattleRoom cleanup/deleting-destructor slice."""
import csv
import hashlib
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import (
    X86_INS_ADD, X86_INS_CALL, X86_INS_JMP, X86_OP_IMM, X86_OP_REG,
    X86_REG_ESP,
)

if __package__:
    from .build_current_main_verifications import (
        MAIN_BATTLE_ROOM_DESTRUCTOR_ADDRESSES,
        MAIN_BATTLE_ROOM_DESTRUCTOR_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_BATTLE_ROOM_DESTRUCTOR_ADDRESSES,
        MAIN_BATTLE_ROOM_DESTRUCTOR_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x58877980, 0x58877B40)
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-battle-room-destructor-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-battle-room-destructor-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-battle-room-destructor-body-ranges.tsv"
RAW_GAPS = ROOT / "config/NF2_2026/main-battle-room-destructor-raw-gaps.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
SOURCE_DIR = ROOT / "src/client-current/Main"
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899EFE8
COL = 0x589A8EE0
TYPE_DESCRIPTOR = 0x589CCFA4
RTTI_CLASS = b".?AVCPannelInfoBattleRoom@@"
EXPECTED_RANGES = (
    (0x58877980, 0x58877980, 304, 304, 104),
    (0x58877B40, 0x58877B40, 21, 21, 7),
    (0x58877B40, 0x58877B58, 6, 6, 3),
)
EXPECTED_CALLS = {
    0x58877A97: 0x587B5F50,
    0x58877B43: 0x58877980,
    0x58877B50: 0x5897CC42,
}
EXPECTED_INDIRECT_CALLS = {
    0x588779C7, 0x588779DF, 0x588779F7, 0x58877A0F,
    0x58877A2E, 0x58877A50, 0x58877A6D, 0x58877A85,
}
EXPECTED_INDIRECT_TAIL_JUMPS = set()
EXPECTED_DIRECT_TARGETS = {0x58877980, 0x587B5F50, 0x5897CC42}
RAW_GAP = (0x58877B40, 0x58877B55, 3, "83C404", 1, "add esp, 4")
DECOMP_SOURCE = FRESH_DIR / "hotkeys-next-targeted-ghidra.c"


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
        row["type"], int(row["target"], 16), row["target_function"].lower(),
    )


def expected_edge_tuples():
    return {
        ("CALL", 0x58877980, 0x58877A97, "UNCONDITIONAL_CALL",
         0x587B5F50, "587b5f50"),
        ("CALL", 0x58877B40, 0x58877B43, "UNCONDITIONAL_CALL",
         0x58877980, "58877980"),
        ("CALL", 0x58877B40, 0x58877B50, "CALL_TERMINATOR",
         0x5897CC42, "5897cc42"),
        ("DATA", 0x58877B40, VTABLE, "DATA", 0x58877B40, ""),
    }


def verify_fresh_exports():
    expected_edges = expected_edge_tuples()
    expected_body_exports = set()
    expected_edge_exports = set()

    for project in EXPORTS:
        export = f"{project}-fresh"
        bodies = read_tsv(FRESH_DIR / f"{export}-function-bodies.tsv")
        actual_bodies = [body_tuple(row) for row in bodies
                         if int(row["function"], 16) in FUNCTIONS]
        if tuple(actual_bodies) != EXPECTED_RANGES:
            raise AssertionError(
                f"Fresh function body changed in {project}: {actual_bodies}"
            )
        expected_body_exports.update((export, *row) for row in actual_bodies)

        edges = read_tsv(FRESH_DIR / f"{export}-function-edges.tsv")
        selected = [row for row in edges if row["kind"] in {"CALL", "DATA"}
                    and (int(row["function"], 16) in FUNCTIONS
                         or int(row["target"], 16) in FUNCTIONS)]
        actual_edges = {edge_tuple(row) for row in selected}
        if actual_edges != expected_edges:
            raise AssertionError(
                f"Fresh Ghidra call/data edges changed in {project}: "
                f"{actual_edges ^ expected_edges}"
            )
        expected_edge_exports.update((export, *edge_tuple(row)) for row in selected)

    actual_body_exports = {
        (row["export"], *body_tuple(row)) for row in read_tsv(BODY_EXPORTS)
    }
    if actual_body_exports != expected_body_exports:
        raise AssertionError("Tracked body exports differ from both fresh Ghidra projects")

    actual_edges = {
        (row["export"], *edge_tuple(row)) for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edges != expected_edge_exports:
        raise AssertionError("Tracked call/data edges differ from both fresh Ghidra projects")


def verify_range_and_gap_manifests():
    actual_ranges = tuple(body_tuple(row) for row in read_tsv(RANGE_MANIFEST))
    if actual_ranges != EXPECTED_RANGES:
        raise AssertionError("Tracked body ranges differ from fresh Ghidra")
    if sum(row[2] for row in actual_ranges) != 331:
        raise AssertionError("ObjDiff body ranges must cover exactly 331 bytes")
    if sum(row[4] for row in actual_ranges) != 114:
        raise AssertionError("Ghidra indexed ranges must cover exactly 114 instructions")

    rows = read_tsv(RAW_GAPS)
    actual_gap = tuple(
        (int(row["function"], 16), int(row["address"], 16),
         int(row["length"]), row["bytes_hex"].upper(),
         int(row["instruction_count"]), row["instruction"])
        for row in rows
    )
    if actual_gap != (RAW_GAP,):
        raise AssertionError(f"Raw continuation-byte manifest changed: {actual_gap}")


def verify_targeted_decompilation():
    source = DECOMP_SOURCE.read_text(encoding="utf-8").lower()
    sections = {}
    for function in FUNCTIONS:
        marker = f"/* fun_{function:08x} at {function:08x} */"
        start = source.find(marker)
        if start < 0:
            raise AssertionError(f"Targeted Ghidra decompilation lacks {function:08X}")
        end = source.find("\n/* ", start + len(marker))
        sections[function] = source[start:] if end < 0 else source[start:end]

    fragments = {
        0x58877980: (
            "*param_1 = cpannelinfobattleroom::vftable;",
            "param_1[0x21]", "param_1[0x22]", "param_1[0x23]",
            "param_1[0x2d]", "piVar3 = param_1 + 0x24;",
            "param_1[0x2c]", "param_1[100]", "param_1[0x65]",
            "fun_587b5f50();",
        ),
        0x58877B40: (
            "fun_58877980();", "(param_2 & 1) != 0",
            "fun_5897cc42(param_1);", "return param_1;",
        ),
    }
    for function, required in fragments.items():
        for fragment in required:
            if fragment.lower() not in sections[function]:
                raise AssertionError(
                    f"Ghidra decompilation for {function:08X} lacks {fragment!r}"
                )


def verify_vtable_and_rtti(image):
    def u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address outside image: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    slots = tuple(u32(VTABLE + 4 * index) for index in range(4))
    expected_slots = (0x58877B40, 0x58877B60, 0x58877B90, 0x58878180)
    if slots != expected_slots:
        raise AssertionError(f"CPannelInfoBattleRoom vtable entries changed: {slots}")
    if u32(VTABLE - 4) != COL:
        raise AssertionError("CPannelInfoBattleRoom vtable no longer points to its COL")
    col_values = struct.unpack_from("<5I", image, COL - BASE)
    if col_values != (0, 0, 0, TYPE_DESCRIPTOR, 0x589A8EF4):
        raise AssertionError(f"Complete Object Locator changed: {col_values}")
    name_offset = TYPE_DESCRIPTOR - BASE + 8
    class_name = image[name_offset:name_offset + 128].split(b"\0", 1)[0]
    if class_name != RTTI_CLASS:
        raise AssertionError(f"Unexpected vtable RTTI class name: {class_name!r}")


def verify_mapped_functions():
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}

    addresses = {int(value, 16) for value in MAIN_BATTLE_ROOM_DESTRUCTOR_ADDRESSES}
    evidence_addresses = {int(value, 16)
                          for value in MAIN_BATTLE_ROOM_DESTRUCTOR_EVIDENCE}
    if addresses != set(FUNCTIONS) or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify this destructor pair")

    sizes = {function: sum(row[2] for row in EXPECTED_RANGES if row[0] == function)
             for function in FUNCTIONS}
    ranges_by_function = {
        function: tuple((row[1], row[2]) for row in EXPECTED_RANGES if row[0] == function)
        for function in FUNCTIONS
    }
    for function in FUNCTIONS:
        row = inventory.get(function)
        record = records.get(function)
        segments = tuple((int(item["address"], 16), int(item["size"]))
                         for item in (record or {}).get("segments", []))
        if (row is None or record is None or function not in matched
                or int(row["size"]) != sizes[function]
                or int(record["size"]) != sizes[function]
                or segments != ranges_by_function[function]):
            raise AssertionError(f"The exact {function:08X} body is not byte-verified")
        source_path = ROOT / record["source"]
        if hashlib.sha256(source_path.read_bytes()).hexdigest() != record["source_sha256"]:
            raise AssertionError(f"Source hash changed for {function:08X}")

    missing = (set(FUNCTIONS) | EXPECTED_DIRECT_TARGETS) - matched
    if missing:
        raise AssertionError("Function or direct callee lacks a byte match: "
                             + ", ".join(f"{item:08X}" for item in sorted(missing)))

    image = IMAGE_PATH.read_bytes()
    if hashlib.sha256(image).hexdigest() != catalog["mapped_sha256"]:
        raise AssertionError("Mapped Main.dll hash differs from the verification catalog")
    verify_vtable_and_rtti(image)

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    direct_calls = {}
    indirect_calls = set()
    indirect_tail_jumps = set()
    for function in FUNCTIONS:
        instructions = []
        for start, size in ranges_by_function[function]:
            code = image[start - BASE:start - BASE + size]
            segment = list(decoder.disasm(code, start))
            if (sum(item.size for item in segment) != size
                    or not segment or segment[0].address != start
                    or segment[-1].address + segment[-1].size != start + size):
                raise AssertionError(f"Mapped instruction coverage incomplete at {start:08X}")
            expected_count = next(row[4] for row in EXPECTED_RANGES
                                  if row[0] == function and row[1] == start)
            if len(segment) != expected_count:
                raise AssertionError(f"Mapped instruction count changed at {start:08X}")
            instructions.extend(segment)

        body_ranges = tuple((start, start + size)
                            for start, size in ranges_by_function[function])
        for instruction in instructions:
            if instruction.id == X86_INS_CALL:
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    indirect_calls.add(instruction.address)
                else:
                    direct_calls[instruction.address] = operand.imm & 0xFFFFFFFF
            elif instruction.group(CS_GRP_JUMP):
                operand = instruction.operands[0]
                if instruction.id == X86_INS_JMP and operand.type != X86_OP_IMM:
                    indirect_tail_jumps.add(instruction.address)
                elif (operand.type != X86_OP_IMM or not any(
                    start <= (operand.imm & 0xFFFFFFFF) < end
                    for start, end in body_ranges
                )):
                    raise AssertionError(
                        f"Unexpected external branch at {instruction.address:08X}"
                    )

    if direct_calls != EXPECTED_CALLS:
        raise AssertionError(f"Mapped direct-call sites changed: {direct_calls}")
    if indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Mapped indirect-call sites changed: {indirect_calls}")
    if indirect_tail_jumps != EXPECTED_INDIRECT_TAIL_JUMPS:
        raise AssertionError(f"Unexpected indirect tail jumps: {indirect_tail_jumps}")

    gap = image[RAW_GAP[1] - BASE:RAW_GAP[1] - BASE + RAW_GAP[2]]
    if gap.hex().upper() != RAW_GAP[3]:
        raise AssertionError("Raw wrapper continuation bytes differ from mapped Main.dll")
    decoded_gap = list(decoder.disasm(gap, RAW_GAP[1]))
    if (len(decoded_gap) != 1 or decoded_gap[0].id != X86_INS_ADD
            or decoded_gap[0].size != 3
            or decoded_gap[0].operands[0].type != X86_OP_REG
            or decoded_gap[0].operands[0].reg != X86_REG_ESP
            or decoded_gap[0].operands[1].type != X86_OP_IMM
            or decoded_gap[0].operands[1].imm != 4):
        raise AssertionError("The B55 continuation is not exactly `add esp, 4`")
    raw_source = (SOURCE_DIR / "FUN_58877b40.cpp").read_text(encoding="utf-8")
    for required in ("FUN_58877b40_postcall_stack_cleanup", "_emit 0x83",
                     "_emit 0xC4", "_emit 0x04"):
        if required not in raw_source:
            raise AssertionError(f"Raw continuation source lacks {required!r}")


def main():
    verify_range_and_gap_manifests()
    verify_fresh_exports()
    verify_targeted_decompilation()
    verify_mapped_functions()
    print(
        "CPannelInfoBattleRoom cleanup/deleting-destructor slice verified: "
        "331 indexed bytes / 114 Ghidra instructions across two functions, "
        "plus the mapped 3-byte stack-adjustment fragment. Two fresh Ghidra "
        "exports agree; RTTI, direct edges, eight dynamic child calls, and "
        "byte-matched external callees are accounted for."
    )


if __name__ == "__main__":
    main()
