"""Verify FUN_5888DF10 against fresh Ghidra exports and mapped Main.dll."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM, X86_OP_REG

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x5888DF10
CALLER = 0x587B83E0
RANGES = ((0x5888DF10, 489, 122), (0x5888E100, 432, 118))
TOTAL_SIZE = sum(size for _, size, _ in RANGES)
TOTAL_INSTRUCTIONS = sum(count for _, _, count in RANGES)
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-5888df10-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-5888df10-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
CALLER_DECOMP = FRESH_DIR / "587b83e0-ghidra.c"
CONSTRUCTOR_DECOMP = FRESH_DIR / "5888e5e0-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
INCOMING_SITES = (0x587B87E2, 0x587B8802, 0x587B8822,
                  0x587B8A56, 0x587B8A97, 0x587B8AD8)
DIRECT_TARGET_COUNTS = {0x58903290: 10}
CALLER_WINDOWS = {
    0x587B87CC: (
        ("cmp", "ax, 2"), ("jne", "0x587b87ec"),
        ("movzx", "edx, word ptr [esi + 0xc]"),
        ("mov", "dword ptr [edi + 0x188], edx"),
        ("mov", "ecx, dword ptr [0x58a245c0]"),
        ("call", "0x5888df10"),
    ),
    0x587B87EC: (
        ("cmp", "ax, 3"), ("jne", "0x587b880c"),
        ("movzx", "eax, word ptr [esi + 0xc]"),
        ("mov", "dword ptr [edi + 0x18c], eax"),
        ("mov", "ecx, dword ptr [0x58a245c0]"),
        ("call", "0x5888df10"),
    ),
    0x587B880C: (
        ("cmp", "ax, 4"), ("jne", "0x587b882c"),
        ("movzx", "ecx, word ptr [esi + 0xc]"),
        ("mov", "dword ptr [edi + 0x190], ecx"),
        ("mov", "ecx, dword ptr [0x58a245c0]"),
        ("call", "0x5888df10"),
    ),
    0x587B8A43: (
        ("push", "eax"), ("push", "2"), ("push", "0x58a0b450"),
        ("call", "0x5888dd80"),
        ("mov", "ecx, dword ptr [0x58a245c0]"),
        ("call", "0x5888df10"),
    ),
    0x587B8A84: (
        ("push", "eax"), ("push", "3"), ("push", "0x58a0b450"),
        ("call", "0x5888dd80"),
        ("mov", "ecx, dword ptr [0x58a245c0]"),
        ("call", "0x5888df10"),
    ),
    0x587B8AC5: (
        ("push", "eax"), ("push", "4"), ("push", "0x58a0b450"),
        ("call", "0x5888dd80"),
        ("mov", "ecx, dword ptr [0x58a245c0]"),
        ("call", "0x5888df10"),
    ),
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def expected_bodies():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        source = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        matches = [row for row in source if int(row["function"], 16) == FUNCTION]
        actual = tuple((int(row["start"], 16), int(row["length"]),
                        int(row["instruction_bytes"]), int(row["instruction_count"]))
                       for row in matches)
        expected = tuple((start, size, size, count) for start, size, count in RANGES)
        if actual != expected:
            raise AssertionError(f"Fresh Ghidra body ranges changed in {project}: {actual}")
        rows.update((export, FUNCTION, start, size, size, count)
                    for start, size, count in RANGES)
    return rows


def expected_edges():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        source = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in source
                    if int(row["function"], 16) == FUNCTION
                    or int(row["target"], 16) == FUNCTION]
        incoming = [row for row in selected if int(row["target"], 16) == FUNCTION]
        outgoing = [row for row in selected if int(row["function"], 16) == FUNCTION]
        if ({int(row["site"], 16) for row in incoming} != set(INCOMING_SITES)
                or any(int(row["function"], 16) != CALLER for row in incoming)
                or len(outgoing) != 10
                or any(int(row["target"], 16) != 0x58903290 for row in outgoing)):
            raise AssertionError(f"Incoming or outgoing edge inventory changed in {project}")
        rows.update((export, row["kind"], int(row["function"], 16),
                     int(row["site"], 16), int(row["target"], 16), row["type"])
                    for row in selected)
    return rows


def verify_exports():
    expected_body_rows = expected_bodies()
    actual_body_rows = {
        (row["export"], int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if actual_body_rows != expected_body_rows:
        raise AssertionError("Checked-in body rows differ from the two fresh projects")

    expected_edge_rows = expected_edges()
    actual_edge_rows = {
        (row["export"], row["kind"], int(row["function"], 16),
         int(row["site"], 16), int(row["target"], 16), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edge_rows != expected_edge_rows:
        raise AssertionError("Checked-in call edges differ from the two fresh projects")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if sum(item.size for item in instructions) != size:
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def verify_matches(image, decoder):
    inventory = {
        int(row["address"], 16): row
        for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, record in records.items()
               if record.get("verified_by") == MARKER}
    record = records.get(FUNCTION)
    expected_ranges = tuple((start, size) for start, size, _ in RANGES)
    if (record is None or FUNCTION not in inventory or FUNCTION not in matched
            or int(inventory[FUNCTION]["size"]) != TOTAL_SIZE
            or record_ranges(record) != expected_ranges):
        raise AssertionError("FUN_5888DF10 is not recorded with its exact matched ranges")

    body = []
    for start, size, count in RANGES:
        instructions = decode_range(image, decoder, start, size)
        if (len(instructions) != count or not instructions
                or instructions[0].address != start
                or instructions[-1].address + instructions[-1].size != start + size):
            raise AssertionError(f"Mapped Ghidra range changed at {start:08X}")
        body.extend(instructions)
    if (len(body) != TOTAL_INSTRUCTIONS
            or sum(item.size for item in body) != TOTAL_SIZE):
        raise AssertionError("Combined mapped body size or instruction count changed")

    direct_calls = {}
    indirect_calls = []
    for instruction in body:
        if instruction.id != X86_INS_CALL:
            continue
        if instruction.operands and instruction.operands[0].type == X86_OP_IMM:
            target = instruction.operands[0].imm & 0xFFFFFFFF
            direct_calls[instruction.address] = target
            if target not in matched:
                raise AssertionError(f"Unmatched direct dependency {FUNCTION:08X}->{target:08X}")
        else:
            indirect_calls.append(instruction)
    counts = {}
    for target in direct_calls.values():
        counts[target] = counts.get(target, 0) + 1
    if counts != DIRECT_TARGET_COUNTS:
        raise AssertionError(f"Direct dependency calls changed: {counts}")
    if (len(indirect_calls) != 1 or indirect_calls[0].address != 0x5888DFC8
            or indirect_calls[0].operands[0].type != X86_OP_REG
            or decoder.reg_name(indirect_calls[0].operands[0].reg) != "eax"):
        raise AssertionError("The unresolved child-vtable callback moved or changed")

    fresh_calls = {
        int(row["site"], 16): int(row["target"], 16)
        for row in read_tsv(EDGE_EXPORTS)
        if row["export"] == EXPORTS[0] and row["kind"] == "CALL"
        and int(row["function"], 16) == FUNCTION
    }
    if direct_calls != fresh_calls:
        raise AssertionError("Mapped direct calls differ from fresh Ghidra call edges")

    by_address = {item.address: item for item in body}
    callback_sequence = (
        (0x5888DFBD, "mov", "ecx, dword ptr [esi + 0x620]"),
        (0x5888DFC3, "mov", "edx, dword ptr [ecx]"),
        (0x5888DFC5, "mov", "eax, dword ptr [edx + 8]"),
        (0x5888DFC8, "call", "eax"),
    )
    for address, mnemonic, op_str in callback_sequence:
        instruction = by_address.get(address)
        if instruction is None or (instruction.mnemonic, instruction.op_str) != (mnemonic, op_str):
            raise AssertionError(f"Child-vtable callback evidence changed at {address:08X}")

    caller_record = records.get(CALLER)
    if caller_record is None or CALLER not in matched:
        raise AssertionError("The chat/channel event-handler caller is not byte-matched")
    caller_instructions = []
    for start, size in record_ranges(caller_record):
        caller_instructions.extend(decode_range(image, decoder, start, size))
    caller_by_address = {item.address: item for item in caller_instructions}
    mapped_incoming = {
        site: caller_by_address[site].operands[0].imm & 0xFFFFFFFF
        for site in INCOMING_SITES if site in caller_by_address
        and caller_by_address[site].id == X86_INS_CALL
        and caller_by_address[site].operands[0].type == X86_OP_IMM
    }
    if mapped_incoming != {site: FUNCTION for site in INCOMING_SITES}:
        raise AssertionError("Mapped incoming call sites differ from fresh Ghidra edges")
    for start, expected in CALLER_WINDOWS.items():
        actual = []
        address = start
        for _ in expected:
            instruction = caller_by_address.get(address)
            if instruction is None:
                raise AssertionError(f"Caller evidence is absent at {address:08X}")
            actual.append((instruction.mnemonic, instruction.op_str))
            address += instruction.size
        if tuple(actual) != expected:
            raise AssertionError(f"Mapped event-handler context changed at {start:08X}: {actual}")

    caller_source = CALLER_DECOMP.read_text(encoding="utf-8").lower()
    required_parent_evidence = (
        "0x8002b111", "0x8002b112",
        "*(uint *)(param_1 + 0x188) = (uint)*(ushort *)(param_2 + 0xc)",
        "*(uint *)(param_1 + 0x18c) = (uint)*(ushort *)(param_2 + 0xc)",
        "*(uint *)(param_1 + 400) = (uint)*(ushort *)(param_2 + 0xc)",
        "fun_5888dd80(&dat_58a0b450,2,*(uint *)(param_1 + 0x188));",
        "fun_5888dd80(&dat_58a0b450,3,*(uint *)(param_1 + 0x18c));",
        "fun_5888dd80(&dat_58a0b450,4,*(uint *)(param_1 + 400));",
    )
    if any(text not in caller_source for text in required_parent_evidence):
        raise AssertionError("Fresh Ghidra handler no longer ties refresh to add/remove cases")
    if caller_source.count("fun_5888df10();") != 6:
        raise AssertionError("Fresh Ghidra handler no longer has six refresh calls")
    constructor_source = CONSTRUCTOR_DECOMP.read_text(encoding="utf-8")
    if "CPannelMainControl_MenuScreen::vftable" not in constructor_source:
        raise AssertionError("Fresh Ghidra constructor no longer identifies the menu vtable")


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    print(
        "FUN_5888DF10 verified: 921 bytes / 240 instructions match across two "
        "Ghidra ranges; six matched chat/channel event calls and ten direct calls "
        "to matched dependencies are verified. The child-vtable callback remains unresolved."
    )


if __name__ == "__main__":
    main()
