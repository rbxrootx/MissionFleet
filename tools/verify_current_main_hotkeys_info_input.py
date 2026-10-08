"""Verify the CPannelHotKeysInfo input path against fresh Ghidra and mapped bytes."""
import csv
import hashlib
import json
import struct
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

if __package__:
    from .build_current_main_verifications import (
        MAIN_HOTKEYS_INFO_INPUT_ADDRESSES,
        MAIN_HOTKEYS_INFO_INPUT_EVIDENCE,
    )
else:
    from build_current_main_verifications import (
        MAIN_HOTKEYS_INFO_INPUT_ADDRESSES,
        MAIN_HOTKEYS_INFO_INPUT_EVIDENCE,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x588772C0, 0x58877310, 0x58877880, 0x588778D0)
EXPORTS = ("58758ee0", "587cef70")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-hotkeys-info-input-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-hotkeys-info-input-call-edges.tsv"
RANGE_MANIFEST = ROOT / "config/NF2_2026/main-hotkeys-info-input-body-ranges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
SOURCE_DIR = ROOT / "src/client-current/Main"
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899EFA0
RTTI_CLASS = b".?AVCPannelHotKeysInfo@@"
EXPECTED_RANGES = (
    (0x588772C0, 0x588772C0, 72, 72, 23),
    (0x58877310, 0x58877310, 83, 83, 28),
    (0x58877880, 0x58877880, 67, 67, 20),
    (0x588778D0, 0x588778D0, 167, 167, 63),
)
EXPECTED_CALLS = {
    0x588772ED: 0x58770A80,
    0x58877302: 0x58770A80,
    0x5887735D: 0x58770A80,
    0x58877893: 0x588772C0,
    0x588778A5: 0x58877310,
    0x5887793F: 0x58877310,
    0x5887795B: 0x58877310,
    0x5887796A: 0x588772C0,
}
EXPECTED_INDIRECT_CALLS = {0x588778FA, 0x588778BC}
EXPECTED_INDIRECT_TAIL_JUMPS = set()
EXPECTED_DIRECT_TARGETS = {0x58770A80, 0x588772C0, 0x58877310}
VTABLE_SLOTS = {
    0x588778D0: VTABLE + 0x10,
    0x58877880: VTABLE + 0x18,
}
DECOMP_FILES = {
    0x588772C0: FRESH_DIR / "588772C0-targeted-ghidra.c",
    0x58877310: FRESH_DIR / "58877310-targeted-ghidra.c",
    0x58877880: FRESH_DIR / "58877880-targeted-ghidra.c",
    0x588778D0: FRESH_DIR / "588778D0-targeted-ghidra.c",
}


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
    calls = {
        ("CALL", function, site, "UNCONDITIONAL_CALL", target,
         f"{target:08x}")
        for site, target in EXPECTED_CALLS.items()
        for function in FUNCTIONS
        if function <= site < function + dict((entry[0], entry[2])
                                              for entry in EXPECTED_RANGES)[function]
    }
    return calls | {
        ("DATA", function, slot, "DATA", function, "")
        for function, slot in VTABLE_SLOTS.items()
    }


def verify_fresh_exports():
    expected_edges = expected_edge_tuples()
    expected_body_exports = set()
    expected_edge_exports = set()

    for project in EXPORTS:
        export = f"{project}-fresh"
        bodies = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        actual_bodies = [body_tuple(row) for row in bodies
                         if int(row["function"], 16) in FUNCTIONS]
        if tuple(actual_bodies) != EXPECTED_RANGES:
            raise AssertionError(
                f"Fresh function body changed in {project}: {actual_bodies}"
            )
        expected_body_exports.update((export, *row) for row in actual_bodies)

        edges = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
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


def verify_range_manifest():
    actual = tuple(body_tuple(row) for row in read_tsv(RANGE_MANIFEST))
    if actual != EXPECTED_RANGES:
        raise AssertionError("Tracked range manifest differs from fresh Ghidra")
    if sum(row[2] for row in actual) != 389 or sum(row[4] for row in actual) != 134:
        raise AssertionError("Ranges do not cover the complete 389-byte input closure")


def verify_targeted_decompilation():
    fragments = {
        0x588772C0: (
            "void __fastcall fun_588772c0(int param_1)",
            "uvar1 <= ivar2 - 0x47u",
            "*(uint *)(param_1 + 0xa8) = uvar1;",
            "fun_58770a80(uvar1);",
        ),
        0x58877310: (
            "void __fastcall fun_58877310(int param_1)",
            "pcvar1 + 0x545 <= pcvar3",
            "*(char **)(param_1 + 0xa8) = pcvar1 + 0x47;",
            "fun_58770a80(*(undefined4 *)(param_1 + 0xa8));",
        ),
        0x58877880: (
            "fun_588772c0();",
            "fun_58877310();",
            "(**(code **)(*param_1 + 8))();",
            "param_3 == 2",
        ),
        0x588778D0: (
            "fun_58877310();",
            "fun_588772c0();",
            "(**(code **)(*pivar1 + 0x10))(param_2);",
            "*(int *)(param_2 + 4) == 0x100",
            "*(int *)(param_2 + 4) != 0x20a",
            "== 0x200",
        ),
    }
    for function, required in fragments.items():
        source = DECOMP_FILES[function].read_text(encoding="utf-8").lower()
        for fragment in required:
            if fragment not in source:
                raise AssertionError(
                    f"Ghidra decompilation for {function:08X} lacks {fragment!r}"
                )


def verify_vtable_and_rtti(image):
    def u32(address):
        offset = address - BASE
        if offset < 0 or offset + 4 > len(image):
            raise AssertionError(f"Mapped address outside image: {address:08X}")
        return struct.unpack_from("<I", image, offset)[0]

    for function, slot in VTABLE_SLOTS.items():
        if u32(slot) != function:
            raise AssertionError(f"Vtable slot {slot:08X} no longer names {function:08X}")
    locator = u32(VTABLE - 4)
    type_descriptor = u32(locator + 0x0C)
    name_offset = type_descriptor - BASE + 8
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

    addresses = {int(value, 16) for value in MAIN_HOTKEYS_INFO_INPUT_ADDRESSES}
    evidence_addresses = {int(value, 16) for value in MAIN_HOTKEYS_INFO_INPUT_EVIDENCE}
    if addresses != set(FUNCTIONS) or evidence_addresses != addresses:
        raise AssertionError("Builder metadata does not identify this four-function slice")

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
        expected_segments = ranges_by_function[function]
        if (row is None or record is None or function not in matched
                or int(row["size"]) != sizes[function]
                or int(record["size"]) != sizes[function]
                or segments != expected_segments):
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
            offset = start - BASE
            code = image[offset:offset + size]
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


def main():
    verify_range_manifest()
    verify_fresh_exports()
    verify_targeted_decompilation()
    verify_mapped_functions()
    print(
        "CPannelHotKeysInfo input path verified: 389 bytes / 134 instructions "
        "across four functions. Two fresh Ghidra exports, RTTI vtable slots, "
        "eight matched direct calls, and both dynamic child callbacks are accounted for."
    )


if __name__ == "__main__":
    main()
