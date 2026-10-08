"""Verify the CPannelInfoBattleRoom interaction and refresh subsystem."""
import csv
import hashlib
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import (
    X86_INS_CALL, X86_INS_JMP, X86_INS_MOVZX, X86_OP_IMM, X86_OP_MEM,
)

if __package__:
    from .build_current_main_verifications import (
        MAIN_BATTLE_ROOM_UPDATE_ADDRESSES,
        MAIN_BATTLE_ROOM_UPDATE_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_BATTLE_ROOM_UPDATE_ADDRESSES,
        MAIN_BATTLE_ROOM_UPDATE_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x587B60A0, 0x58877AD0, 0x58877B60, 0x58877B90,
             0x58877BC0, 0x58878180)
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-battle-room-update-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-battle-room-update-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-battle-room-update-body-ranges.tsv"
RAW_FRAGMENTS = ROOT / "config/NF2_2026/main-battle-room-update-raw-fragments.tsv"
SWITCH_TABLES = ROOT / "config/NF2_2026/main-battle-room-update-switch-tables.tsv"
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
    (0x587B60A0, 0x587B60A0, 527, 527, 188),
    (0x58877AD0, 0x58877AD0, 66, 66, 17),
    (0x58877B60, 0x58877B60, 44, 44, 12),
    (0x58877B90, 0x58877B90, 44, 44, 12),
    (0x58877BC0, 0x58877BC0, 1418, 1418, 402),
    (0x58878180, 0x58878180, 141, 141, 43),
    (0x58878180, 0x58878210, 28, 28, 15),
)
RANGES_BY_FUNCTION = {
    function: tuple((row[1], row[2]) for row in EXPECTED_RANGES if row[0] == function)
    for function in FUNCTIONS
}
FUNCTION_SIZES = {function: sum(size for _, size in RANGES_BY_FUNCTION[function])
                  for function in FUNCTIONS}
EXPECTED_INDIRECT_CALLS = {
    0x587B61F3, 0x587B6201,
    0x58877C70, 0x58877CD0, 0x58877D3B, 0x58877DC1, 0x58877E5B,
    0x58877EBE, 0x5887803F, 0x5887804B, 0x588780D5, 0x588780E1,
    0x5887821D,
}
EXPECTED_INDIRECT_JUMPS = {0x58877ADE, 0x58877C02, 0x5887822A}
INCOMING_SHARED_CALL = (0x587B6360, 0x587B636B, 0x587B60A0)
VTABLE_ENTRIES = (
    (VTABLE + 4, 0x58877B60),
    (VTABLE + 8, 0x58877B90),
    (VTABLE + 0x0C, 0x58878180),
)
EXTERNAL_DIRECT_TARGETS = {
    0x587B6020, 0x5897CC48, 0x5875F360, 0x5875F310,
    0x58907360, 0x58903290, 0x5897CBDA, 0x58902E10,
    0x58902E60, 0x58903360, 0x587B7400,
}
MAPPER_TARGET_TABLE = 0x58877B14
MAPPER_TARGETS = (
    0x58877B0F, 0x58877B0F, 0x58877AE5, 0x58877AED, 0x58877AF5,
    0x58877AF5, 0x58877AFD, 0x58877AFD, 0x58877B02, 0x58877B0A,
)
REFRESH_TARGET_TABLE = 0x5887814C
REFRESH_TARGETS = (0x58877C09, 0x58877CF1, 0x58877DE9, 0x58877D5C, 0x58877E7D)
REFRESH_SELECTOR_TABLE = 0x58878160
REFRESH_SELECTOR = (0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 2, 3)
RAW_FRAGMENT_ROWS = (
    (0x58877AD0, 0x58877B12, 2, "8BFF", 1, "mov edi, edi", "before-switch-table"),
    (0x58877BC0, 0x5887814A, 2, "8BFF", 1, "mov edi, edi", "before-switch-table"),
    (0x58878180, 0x5887820D, 3, "8D4900", 1, "lea ecx, [ecx]", "skipped-alignment"),
)
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


def mapped_segment_instructions(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (len(code) != size or not instructions
            or sum(item.size for item in instructions) != size
            or instructions[0].address != start
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Mapped instruction coverage incomplete at {start:08X}")
    expected_count = next(row[4] for row in EXPECTED_RANGES
                          if row[1] == start and row[2] == size)
    if len(instructions) != expected_count:
        raise AssertionError(f"Mapped instruction count changed at {start:08X}")
    return instructions


def expected_edges_from_mapped_image(image, decoder):
    edges = set()
    for function in FUNCTIONS:
        for start, size in RANGES_BY_FUNCTION[function]:
            for instruction in mapped_segment_instructions(image, decoder, start, size):
                if instruction.id != X86_INS_CALL:
                    continue
                operand = instruction.operands[0]
                if operand.type == X86_OP_IMM:
                    target = operand.imm & 0xFFFFFFFF
                    edges.add(("CALL", function, instruction.address,
                               "UNCONDITIONAL_CALL", target, f"{target:08x}"))

    caller, site, target = INCOMING_SHARED_CALL
    code = image[site - BASE:site - BASE + 5]
    decoded = list(decoder.disasm(code, site))
    if (not decoded or decoded[0].id != X86_INS_CALL
            or decoded[0].size != 5 or decoded[0].operands[0].type != X86_OP_IMM
            or (decoded[0].operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError("The shared-helper caller at 0x587B636B changed")
    edges.add(("CALL", caller, site, "UNCONDITIONAL_CALL", target, f"{target:08x}"))
    edges.update(
        ("DATA", function, slot, "DATA", function, "")
        for slot, function in VTABLE_ENTRIES
    )
    return edges


def expected_switch_rows():
    rows = [
        ("58877ad0", f"{MAPPER_TARGET_TABLE:08x}", index,
         "absolute_target", f"{target:08x}", f"{target:08x}")
        for index, target in enumerate(MAPPER_TARGETS)
    ]
    rows.extend(
        ("58877bc0", f"{REFRESH_TARGET_TABLE:08x}", index,
         "absolute_target", f"{target:08x}", f"{target:08x}")
        for index, target in enumerate(REFRESH_TARGETS)
    )
    rows.extend(
        ("58877bc0", f"{REFRESH_SELECTOR_TABLE:08x}", index,
         "case_index", f"{value:02x}", f"{REFRESH_TARGETS[value]:08x}")
        for index, value in enumerate(REFRESH_SELECTOR)
    )
    return tuple(rows)


def expected_edges_from_manifest_rows():
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    expected = expected_edges_from_mapped_image(
        IMAGE_PATH.read_bytes(), decoder
    )
    actual_body_exports = {
        (row["export"], *body_tuple(row)) for row in read_tsv(BODY_EXPORTS)
    }
    expected_body_exports = {
        (f"{project}-fresh", *body)
        for project in EXPORTS for body in EXPECTED_RANGES
    }
    if actual_body_exports != expected_body_exports:
        raise AssertionError("Tracked body exports differ from both fresh Ghidra projects")
    actual_edges = {
        (row["export"], *edge_tuple(row)) for row in read_tsv(EDGE_EXPORTS)
    }
    expected_edge_exports = {
        (f"{project}-fresh", *edge) for project in EXPORTS for edge in expected
    }
    if actual_edges != expected_edge_exports:
        raise AssertionError("Tracked call/data edges differ from the mapped and Ghidra evidence")


def verify_fresh_exports(image, decoder):
    expected_edges = expected_edges_from_mapped_image(image, decoder)
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

        rows = read_tsv(FRESH_DIR / f"{export}-function-edges.tsv")
        selected = [row for row in rows if row["kind"] in {"CALL", "DATA"}
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


def verify_manifests(image, decoder):
    actual_ranges = tuple(body_tuple(row) for row in read_tsv(RANGE_MANIFEST))
    if actual_ranges != EXPECTED_RANGES:
        raise AssertionError("Tracked body ranges differ from fresh Ghidra")
    if sum(row[2] for row in actual_ranges) != 2268:
        raise AssertionError("ObjDiff ranges must cover exactly 2,268 bytes")
    if sum(row[4] for row in actual_ranges) != 689:
        raise AssertionError("Ghidra indexed ranges must cover exactly 689 instructions")

    actual_raw = tuple(
        (int(row["function"], 16), int(row["address"], 16), int(row["length"]),
         row["bytes_hex"].upper(), int(row["instruction_count"]),
         row["instruction"].lower(), row["role"])
        for row in read_tsv(RAW_FRAGMENTS)
    )
    if actual_raw != RAW_FRAGMENT_ROWS:
        raise AssertionError(f"Raw padding/alignment fragments changed: {actual_raw}")

    for function, address, size, expected_hex, count, expected_instruction, _ in RAW_FRAGMENT_ROWS:
        code = image[address - BASE:address - BASE + size]
        instructions = list(decoder.disasm(code, address))
        if (code.hex().upper() != expected_hex or len(instructions) != count
                or sum(instruction.size for instruction in instructions) != size
                or instructions[0].mnemonic + " " + instructions[0].op_str
                != expected_instruction):
            raise AssertionError(f"Raw mapped fragment changed at {address:08X}")
        source = (SOURCE_DIR / f"FUN_{function:08x}.cpp").read_text(encoding="utf-8")
        if not all(f"_emit 0x{value:02X}" in source
                   for value in code):
            raise AssertionError(f"Raw fragment bytes are missing from source at {address:08X}")

    actual_switch_rows = tuple(
        (row["function"], row["table_address"], int(row["index"]),
         row["entry_kind"], row["raw_value"].lower(), row["resolved_target"].lower())
        for row in read_tsv(SWITCH_TABLES)
    )
    if actual_switch_rows != expected_switch_rows():
        raise AssertionError("Switch table manifest differs from the mapped image")


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
        0x587B60A0: (
            "param_1 + 0x5c) != 0x40000000",
            "param_1 + 0x68) == 2",
            "fun_58902e10(uvar3",
            "fun_58902e60(ivar2)",
            "fun_58903360(",
            "fun_587b7400(",
        ),
        0x58877AD0: (
            "switch(param_1)", "case 2:", "return 4;", "case 9:", "uvar1 = 6;",
        ),
        0x58877B60: (
            "0xe1ff | 0x100", "fun_587b6020(0x374",
        ),
        0x58877B90: (
            "0xe4ff | 0x400", "fun_587b6020(0x406",
        ),
        0x58877BC0: (
            "switch(*(undefined2 *)(param_1 + 0x142))",
            "case 0xc:", "case 0xf:", "case 0x10:",
            "fun_58877ad0();", "\"%d/%d/%d\"",
        ),
        0x58878180: (
            "*(ushort *)(param_1 + 0x24) & 4", "fun_587b60a0(),",
            "fun_58877bc0();", "(**(code **)(*pivar2 + 0xc))();",
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
        return struct.unpack_from("<I", image, address - BASE)[0]

    expected = (0x58877B40, 0x58877B60, 0x58877B90, 0x58878180)
    slots = tuple(u32(VTABLE + 4 * index) for index in range(len(expected)))
    if slots != expected:
        raise AssertionError(f"CPannelInfoBattleRoom vtable entries changed: {slots}")
    if u32(VTABLE - 4) != COL:
        raise AssertionError("CPannelInfoBattleRoom vtable no longer points to its COL")
    col_values = struct.unpack_from("<5I", image, COL - BASE)
    if col_values != (0, 0, 0, TYPE_DESCRIPTOR, 0x589A8EF4):
        raise AssertionError(f"Complete Object Locator changed: {col_values}")
    offset = TYPE_DESCRIPTOR - BASE + 8
    class_name = image[offset:offset + 128].split(b"\0", 1)[0]
    if class_name != RTTI_CLASS:
        raise AssertionError(f"Unexpected vtable RTTI class name: {class_name!r}")

    for slot, function in VTABLE_ENTRIES:
        if u32(slot) != function:
            raise AssertionError(f"Vtable slot {slot:08X} no longer names {function:08X}")
    if 0x58877B40 not in {
        int(item["address"], 16)
        for item in json.loads(CATALOG_PATH.read_text(encoding="utf-8"))["matches"]
        if item.get("verified_by") == MARKER
    }:
        raise AssertionError("The vtable deleting-destructor slot is not byte-verified")


def verify_switch_tables(image, decoder):
    def u32(address):
        return struct.unpack_from("<I", image, address - BASE)[0]

    mapper_targets = tuple(u32(MAPPER_TARGET_TABLE + 4 * index)
                           for index in range(len(MAPPER_TARGETS)))
    if mapper_targets != MAPPER_TARGETS:
        raise AssertionError(f"Mode-mapper switch targets changed: {mapper_targets}")
    for target in mapper_targets:
        if not 0x58877AD0 <= target < 0x58877B12:
            raise AssertionError(f"Mode-mapper target leaves its body: {target:08X}")

    refresh_targets = tuple(u32(REFRESH_TARGET_TABLE + 4 * index)
                            for index in range(len(REFRESH_TARGETS)))
    if refresh_targets != REFRESH_TARGETS:
        raise AssertionError(f"Display-refresh targets changed: {refresh_targets}")
    selector = tuple(image[REFRESH_SELECTOR_TABLE - BASE:
                           REFRESH_SELECTOR_TABLE - BASE + len(REFRESH_SELECTOR)])
    if selector != REFRESH_SELECTOR:
        raise AssertionError(f"Display-refresh selector changed: {selector}")
    for target in refresh_targets:
        if not 0x58877BC0 <= target < 0x5887814A:
            raise AssertionError(f"Display-refresh target leaves its body: {target:08X}")
    for index in selector:
        if index >= len(refresh_targets):
            raise AssertionError(f"Display-refresh selector index is invalid: {index}")

    for address, table in ((0x58877ADE, MAPPER_TARGET_TABLE),
                           (0x58877C02, REFRESH_TARGET_TABLE)):
        code = image[address - BASE:address - BASE + 7]
        instruction = next(decoder.disasm(code, address), None)
        if (instruction is None or instruction.id != X86_INS_JMP
                or instruction.operands[0].type != X86_OP_MEM
                or (instruction.operands[0].mem.disp & 0xFFFFFFFF) != table
                or instruction.operands[0].mem.scale != 4):
            raise AssertionError(f"Indirect switch jump changed at {address:08X}")
    selector_load = next(decoder.disasm(
        image[0x58877BFB - BASE:0x58877BFB - BASE + 7], 0x58877BFB
    ), None)
    if (selector_load is None or selector_load.id != X86_INS_MOVZX
            or selector_load.operands[-1].type != X86_OP_MEM
            or (selector_load.operands[-1].mem.disp & 0xFFFFFFFF)
            != REFRESH_SELECTOR_TABLE):
        raise AssertionError("Display-refresh selector load no longer uses its mapped table")


def verify_mapped_functions():
    inventory = {
        int(row["address"], 16): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}

    addresses = {int(value, 16) for value in MAIN_BATTLE_ROOM_UPDATE_ADDRESSES}
    evidence_addresses = {int(value, 16) for value in MAIN_BATTLE_ROOM_UPDATE_EVIDENCE}
    if addresses != set(FUNCTIONS) or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify this six-function slice")

    for function in FUNCTIONS:
        row = inventory.get(function)
        record = records.get(function)
        segments = tuple((int(item["address"], 16), int(item["size"]))
                         for item in (record or {}).get("segments", []))
        if (row is None or record is None or function not in matched
                or int(row["size"]) != FUNCTION_SIZES[function]
                or int(record["size"]) != FUNCTION_SIZES[function]
                or segments != RANGES_BY_FUNCTION[function]):
            raise AssertionError(f"The exact {function:08X} body is not byte-verified")
        source_path = ROOT / record["source"]
        if hashlib.sha256(source_path.read_bytes()).hexdigest() != record["source_sha256"]:
            raise AssertionError(f"Source hash changed for {function:08X}")

    missing = (set(FUNCTIONS) | EXTERNAL_DIRECT_TARGETS) - matched
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
    indirect_jumps = set()
    for function in FUNCTIONS:
        body_ranges = tuple((start, start + size)
                            for start, size in RANGES_BY_FUNCTION[function])
        for start, size in RANGES_BY_FUNCTION[function]:
            instructions = mapped_segment_instructions(image, decoder, start, size)
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
                        indirect_jumps.add(instruction.address)
                    elif (operand.type != X86_OP_IMM or not any(
                        lo <= (operand.imm & 0xFFFFFFFF) < hi
                        for lo, hi in body_ranges
                    )):
                        raise AssertionError(
                            f"Unexpected external branch at {instruction.address:08X}"
                        )

    expected_direct_sites = {
        instruction.address: instruction.operands[0].imm & 0xFFFFFFFF
        for function in FUNCTIONS
        for start, size in RANGES_BY_FUNCTION[function]
        for instruction in mapped_segment_instructions(image, decoder, start, size)
        if instruction.id == X86_INS_CALL
        and instruction.operands[0].type == X86_OP_IMM
    }
    if direct_calls != expected_direct_sites:
        raise AssertionError("Mapped direct call-site inventory changed")
    if indirect_calls != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Mapped indirect call sites changed: {indirect_calls}")
    if indirect_jumps != EXPECTED_INDIRECT_JUMPS:
        raise AssertionError(f"Mapped indirect jump sites changed: {indirect_jumps}")

    shared_call = INCOMING_SHARED_CALL
    code = image[shared_call[1] - BASE:shared_call[1] - BASE + 5]
    incoming = list(decoder.disasm(code, shared_call[1]))
    if (not incoming or incoming[0].id != X86_INS_CALL
            or incoming[0].operands[0].type != X86_OP_IMM
            or (incoming[0].operands[0].imm & 0xFFFFFFFF) != shared_call[2]):
        raise AssertionError("The external incoming call to the shared helper changed")

    verify_switch_tables(image, decoder)
    expected_edges_from_manifest_rows()
    verify_fresh_exports(image, decoder)
    verify_manifests(image, decoder)


def main():
    verify_targeted_decompilation()
    verify_mapped_functions()
    print(
        "CPannelInfoBattleRoom interaction/update slice verified: 2,268 indexed "
        "bytes / 689 Ghidra instructions across six functions, plus three exact "
        "mapped padding/alignment fragments and 32 switch-table entries. Both "
        "fresh Ghidra exports agree; RTTI slots, 36 direct edges, dynamic calls, "
        "switch targets, and byte-matched external callees are accounted for."
    )


if __name__ == "__main__":
    main()
