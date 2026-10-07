"""Verify the mapped byte match and Manage Fleet tab caller for FUN_5881D570."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x5881D570
CALLER = 0x58836B90
SIZE = 915
INSTRUCTION_COUNT = 284
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-5881d570-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-5881d570-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
CALLER_DECOMP = FRESH_DIR / "58836b90-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
CALL_SITE = 0x58837EDB
DIRECT_TARGET_COUNTS = {
    0x589031A0: 3,
    0x5897CC4E: 5,
    0x588F3D70: 1,
    0x58902CE0: 1,
    0x58902D20: 5,
    0x5875DDA0: 2,
}
CALLER_WINDOW = (
    ("test", "eax, eax"),
    ("je", "0x58837ee2"),
    ("mov", "ecx, dword ptr [esi + 0x30]"),
    ("push", "0x40"),
    ("push", "0"),
    ("push", "0"),
    ("push", "0"),
    ("push", "0"),
    ("push", "ecx"),
    ("mov", "ecx, eax"),
    ("call", "0x5881d570"),
    ("jmp", "0x58837ee4"),
    ("xor", "eax, eax"),
    ("mov", "dword ptr [esi + 0x1d0], eax"),
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
        if len(matches) != 1:
            raise AssertionError(f"Expected one fresh body row in {project}")
        row = matches[0]
        extent = (int(row["start"], 16), int(row["length"]),
                  int(row["instruction_bytes"]), int(row["instruction_count"]))
        if extent != (FUNCTION, SIZE, SIZE, INSTRUCTION_COUNT):
            raise AssertionError(f"Fresh body extent changed in {project}: {extent}")
        rows.add((export, FUNCTION, *extent))
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
        if (len(incoming) != 1 or int(incoming[0]["function"], 16) != CALLER
                or int(incoming[0]["site"], 16) != CALL_SITE or len(outgoing) != 17):
            raise AssertionError(f"Incoming or outgoing edges changed in {project}")
        rows.update((export, row["kind"], int(row["function"], 16),
                     int(row["site"], 16), int(row["target"], 16), row["type"])
                    for row in selected)
    return rows


def verify_exports():
    actual_bodies = {
        (row["export"], int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if actual_bodies != expected_bodies():
        raise AssertionError("Checked-in body rows differ from both fresh projects")

    actual_edges = {
        (row["export"], row["kind"], int(row["function"], 16),
         int(row["site"], 16), int(row["target"], 16), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edges != expected_edges():
        raise AssertionError("Checked-in call edges differ from both fresh projects")


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
    if (record is None or FUNCTION not in inventory or FUNCTION not in matched
            or int(inventory[FUNCTION]["size"]) != SIZE
            or record_ranges(record) != ((FUNCTION, SIZE),)):
        raise AssertionError("FUN_5881D570 is not recorded as the expected byte match")

    instructions = decode_range(image, decoder, FUNCTION, SIZE)
    if (len(instructions) != INSTRUCTION_COUNT or not instructions
            or instructions[0].address != FUNCTION
            or instructions[-1].address + instructions[-1].size != FUNCTION + SIZE):
        raise AssertionError("Mapped body instruction count or extent changed")
    calls = {}
    for instruction in instructions:
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
        raise AssertionError(f"Direct call target counts changed: {counts}")

    fresh_calls = {
        int(row["site"], 16): int(row["target"], 16)
        for row in read_tsv(EDGE_EXPORTS)
        if row["export"] == EXPORTS[0] and row["kind"] == "CALL"
        and int(row["function"], 16) == FUNCTION
    }
    if calls != fresh_calls:
        raise AssertionError("Mapped calls differ from fresh Ghidra edges")

    caller = records.get(CALLER)
    if caller is None or CALLER not in matched:
        raise AssertionError("The Manage Fleet tab constructor is not byte-matched")
    caller_instructions = []
    for start, size in record_ranges(caller):
        caller_instructions.extend(decode_range(image, decoder, start, size))
    by_address = {item.address: item for item in caller_instructions}
    actual_window = []
    address = 0x58837EC7
    for _ in CALLER_WINDOW:
        instruction = by_address.get(address)
        if instruction is None:
            raise AssertionError(f"Caller evidence is absent at {address:08X}")
        actual_window.append((instruction.mnemonic, instruction.op_str))
        address += instruction.size
    if tuple(actual_window) != CALLER_WINDOW or CALL_SITE not in by_address:
        raise AssertionError(f"Verified caller setup changed: {actual_window}")

    source = CALLER_DECOMP.read_text(encoding="utf-8")
    required = (
        "iVar8 = FUN_5897cc4e(0x7c);",
        "uVar6 = FUN_5881d570(param_1[0xc],0,0,0,0,0x40);",
        "param_1[0x74] = uVar6;",
    )
    positions = [source.find(text) for text in required]
    if any(position < 0 for position in positions) or positions != sorted(positions):
        raise AssertionError("Fresh Ghidra parent allocation/call/store evidence changed")


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    print(
        "FUN_5881D570 verified: 915 bytes / 284 instructions match; the "
        "byte-matched Manage Fleet tab caller and all 17 direct dependencies "
        "are verified."
    )


if __name__ == "__main__":
    main()
