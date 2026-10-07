"""Verify FUN_58853B60 and its two mapped callers against the installed Main.dll."""
import csv
import json
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTION = 0x58853B60
BODY = (43, 12)
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-58853b60-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-58853b60-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
CALLERS = {
    0x588DF114: (0x588DEB30, "0x58853b60"),
    0x588E631B: (0x588E5150, "0x58853b60"),
}

BODY_OPS = (
    ("mov", "eax, dword ptr [esp + 4]"),
    ("test", "eax, eax"),
    ("jl", "0x58853b77"),
    ("mov", "ecx, dword ptr [ecx + 0x2bc]"),
    ("mov", "dword ptr [ecx + 0xbc], eax"),
    ("ret", "4"),
    ("cdq", ""),
    ("xor", "eax, edx"),
    ("sub", "eax, edx"),
    ("mov", "edx, dword ptr [ecx + 0x2bc]"),
    ("mov", "dword ptr [edx + 0xbc], eax"),
    ("ret", "4"),
)

CALLER_WINDOWS = {
    0x588DF114: (
        ("mov", "edx, dword ptr [esi + 0x23c]"),
        ("mov", "ecx, dword ptr [edx + 0x50]"),
        ("xor", "ecx, 0xaaaaaaaa"),
        ("mov", "eax, 0x51eb851f"),
        ("imul", "ecx"),
        ("sar", "edx, 5"),
        ("mov", "ecx, dword ptr [0x58a245c4]"),
        ("mov", "eax, edx"),
        ("shr", "eax, 0x1f"),
        ("add", "eax, edx"),
        ("push", "eax"),
        ("call", "0x58853b60"),
    ),
    0x588E631B: (
        ("mov", "ecx, dword ptr [esi + 0x23c]"),
        ("mov", "ecx, dword ptr [ecx + 0x50]"),
        ("xor", "ecx, 0xaaaaaaaa"),
        ("mov", "eax, 0x51eb851f"),
        ("imul", "ecx"),
        ("mov", "ecx, dword ptr [0x58a245c4]"),
        ("sar", "edx, 5"),
        ("mov", "eax, edx"),
        ("shr", "eax, 0x1f"),
        ("add", "eax, edx"),
        ("push", "eax"),
        ("call", "0x58853b60"),
    ),
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def contains(ranges, address):
    return any(start <= address < start + size for start, size in ranges)


def verify_fresh_exports():
    exports = {"58758ee0-fresh", "587cef70-fresh"}
    body_rows = read_tsv(BODY_EXPORTS)
    if len(body_rows) != 2:
        raise AssertionError("Expected one body row from each fresh Ghidra project")
    expected_body = {
        (export, f"{FUNCTION:08x}", f"{FUNCTION:08x}", str(BODY[0]),
         str(BODY[0]), str(BODY[1]))
        for export in exports
    }
    actual_body = {
        (row["export"], row["function"].lower(), row["start"].lower(),
         row["length"], row["instruction_bytes"], row["instruction_count"])
        for row in body_rows
    }
    if actual_body != expected_body:
        raise AssertionError(f"Fresh Ghidra function extents changed: {actual_body}")

    expected_edges = {
        (export, "CALL", f"{caller:08x}", f"{site:08x}", f"{FUNCTION:08x}",
         "UNCONDITIONAL_CALL")
        for export in exports
        for site, (caller, _) in CALLERS.items()
    }
    edge_rows = read_tsv(EDGE_EXPORTS)
    actual_edges = {
        (row["export"], row["kind"], row["function"].lower(), row["site"].lower(),
         row["target"].lower(), row["type"])
        for row in edge_rows
    }
    if actual_edges != expected_edges:
        raise AssertionError(f"Fresh Ghidra caller/dependency edges changed: {actual_edges}")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if sum(insn.size for insn in instructions) != size:
        raise AssertionError(f"Could not decode the complete mapped range at {start:08X}")
    return instructions


def verify_body(image, decoder):
    size, count = BODY
    instructions = decode_range(image, decoder, FUNCTION, size)
    if (len(instructions) != count or not instructions
            or instructions[0].address != FUNCTION
            or instructions[-1].address + instructions[-1].size != FUNCTION + size):
        raise AssertionError("Mapped instruction coverage differs from both Ghidra projects")
    actual = tuple((insn.mnemonic, insn.op_str) for insn in instructions)
    if actual != BODY_OPS:
        raise AssertionError(f"Mapped signed-magnitude store operations changed: {actual}")
    for insn in instructions:
        if insn.group(CS_GRP_JUMP):
            if (insn.mnemonic != "jl" or insn.address != FUNCTION + 6
                    or not insn.operands or insn.operands[0].type != X86_OP_IMM
                    or (insn.operands[0].imm & 0xFFFFFFFF) != 0x58853B77):
                raise AssertionError(f"Unexpected branch in signed-magnitude store: {insn}")
        if insn.id == X86_INS_CALL:
            raise AssertionError("The leaf helper unexpectedly gained an outgoing call")


def decode_record(image, decoder, record):
    instructions = []
    for start, size in record_ranges(record):
        instructions.extend(decode_range(image, decoder, start, size))
    return sorted(instructions, key=lambda insn: insn.address)


def verify_callers(image, decoder, records, matched):
    for site, (caller, _) in CALLERS.items():
        if caller not in matched or caller not in records:
            raise AssertionError(f"Caller {caller:08X} is not byte-matched")
        ranges = record_ranges(records[caller])
        if not contains(ranges, site):
            raise AssertionError(f"Caller evidence {site:08X} is outside matched code")
        instructions = decode_record(image, decoder, records[caller])
        index = next((i for i, insn in enumerate(instructions) if insn.address == site), None)
        if index is None:
            raise AssertionError(f"Could not decode caller site {site:08X}")
        call = instructions[index]
        if (call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != FUNCTION):
            raise AssertionError(f"Mapped caller target changed at {site:08X}")
        expected = CALLER_WINDOWS[site]
        actual = tuple((insn.mnemonic, insn.op_str)
                       for insn in instructions[index - len(expected) + 1:index + 1])
        if actual != expected:
            raise AssertionError(f"Caller input conversion or receiver changed at {site:08X}: {actual}")


def main():
    verify_fresh_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    inventory = {
        int(row["address"], 16): row
        for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, item in records.items()
               if item.get("verified_by") == MARKER}
    record = records.get(FUNCTION)
    if FUNCTION not in inventory or int(inventory[FUNCTION]["size"]) != BODY[0]:
        raise AssertionError("Installed-client inventory differs from the Ghidra body")
    if (record is None or FUNCTION not in matched
            or record_ranges(record) != ((FUNCTION, BODY[0]),)):
        raise AssertionError("FUN_58853B60 is not recorded as an exact byte match")

    verify_body(image, decoder)
    verify_callers(image, decoder, records, matched)
    print(
        "FUN_58853B60 nested signed-magnitude store: 43 bytes / 12 instructions "
        "match both fresh Ghidra body exports; both incoming callers are "
        "byte-matched and pass the same decoded divide-by-100 input"
    )


if __name__ == "__main__":
    main()
