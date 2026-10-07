"""Verify the mapped byte match and panel-constructor evidence for FUN_58833980."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58833980
CALLER = 0x58843380
RANGES = ((0x58833980, 157, 46), (0x58833A20, 841, 260))
TOTAL_SIZE = sum(size for _, size, _ in RANGES)
TOTAL_INSTRUCTIONS = sum(count for _, _, count in RANGES)
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-58833980-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-58833980-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
CALLER_DECOMP = FRESH_DIR / "58843380-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
DIRECT_TARGET_COUNTS = {
    0x589031A0: 2,
    0x5897CC4E: 7,
    0x58902D20: 2,
    0x58733280: 4,
    0x5875DDA0: 2,
}
CALL_SITE = 0x5884421D
CALLER_WINDOW = (
    ("test", "eax, eax"),
    ("je", "0x58844224"),
    ("mov", "ecx, dword ptr [esi + 0x90]"),
    ("push", "0x40"),
    ("push", "0"),
    ("push", "0"),
    ("push", "edi"),
    ("push", "ebp"),
    ("push", "ecx"),
    ("mov", "ecx, eax"),
    ("call", "0x58833980"),
    ("jmp", "0x58844226"),
    ("xor", "eax, eax"),
)


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
        if (len(incoming) != 1 or int(incoming[0]["function"], 16) != CALLER
                or int(incoming[0]["site"], 16) != CALL_SITE
                or len([row for row in selected
                        if int(row["function"], 16) == FUNCTION]) != 17):
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
        raise AssertionError("FUN_58833980 is not recorded with its exact matched ranges")

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

    calls = {}
    for instruction in body:
        if instruction.id != X86_INS_CALL:
            continue
        if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
            raise AssertionError(f"Unexpected indirect call at {instruction.address:08X}")
        target = instruction.operands[0].imm & 0xFFFFFFFF
        calls[instruction.address] = target
        if target not in matched:
            raise AssertionError(f"Unmatched direct dependency {FUNCTION:08X}->{target:08X}")
    counts = {}
    for target in calls.values():
        counts[target] = counts.get(target, 0) + 1
    if counts != DIRECT_TARGET_COUNTS:
        raise AssertionError(f"Direct dependency calls changed: {counts}")

    fresh_calls = {
        int(row["site"], 16): int(row["target"], 16)
        for row in read_tsv(EDGE_EXPORTS)
        if row["export"] == EXPORTS[0] and row["kind"] == "CALL"
        and int(row["function"], 16) == FUNCTION
    }
    if calls != fresh_calls:
        raise AssertionError("Mapped direct calls differ from fresh Ghidra call edges")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("The communicator-configuration parent is not byte-matched")
    caller_instructions = []
    for start, size in record_ranges(caller):
        caller_instructions.extend(decode_range(image, decoder, start, size))
    by_address = {item.address: item for item in caller_instructions}
    actual_window = []
    address = 0x58844208
    for _ in CALLER_WINDOW:
        instruction = by_address.get(address)
        if instruction is None:
            raise AssertionError(f"Caller evidence is absent at {address:08X}")
        actual_window.append((instruction.mnemonic, instruction.op_str))
        address += instruction.size
    if tuple(actual_window) != CALLER_WINDOW or CALL_SITE not in by_address:
        raise AssertionError(f"Verified caller argument setup changed: {actual_window}")

    source = CALLER_DECOMP.read_text(encoding="utf-8")
    required = (
        "iVar5 = FUN_5897cc4e(0x84);",
        "uVar3 = FUN_58833980(param_1[0x24],param_3,param_4,0,0,0x40);",
        "param_1[0x56] = uVar3;",
    )
    positions = [source.find(text) for text in required]
    if any(position < 0 for position in positions) or positions != sorted(positions):
        raise AssertionError("Fresh Ghidra parent no longer ties allocation, call, and store")


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    print(
        "FUN_58833980 verified: 998 bytes / 306 instructions match across two "
        "Ghidra ranges; its byte-matched panel caller and all 17 direct calls "
        "to matched dependencies are verified."
    )


if __name__ == "__main__":
    main()
