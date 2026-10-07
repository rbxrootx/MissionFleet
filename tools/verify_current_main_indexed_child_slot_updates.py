"""Verify the indexed slot-update helper family against the installed Main.dll."""
import csv
import json
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-indexed-child-slot-update-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-indexed-child-slot-update-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
GLOBAL_UPDATE_RECEIVER = 0x58A245FC
HELPERS = (0x58907360, 0x587A15E0)

BODIES = {
    0x58858360: (61, 21, 0xA50, 0x898, "calls"),
    0x588583A0: (36, 8, 0, 0x8B8, "tail"),
    0x5885EAF0: (61, 21, 0x70C, 0x5E4, "calls"),
    0x5885EB30: (36, 8, 0, 0x604, "tail"),
}

INCOMING = {
    0x58857558: (0x58857020, 0x5885EAF0),
    0x58857576: (0x58857020, 0x5885EB30),
    0x588575A8: (0x58857020, 0x58858360),
    0x588575C5: (0x58857020, 0x588583A0),
    0x588E7551: (0x588E7480, 0x58858360),
    0x588E757D: (0x588E7480, 0x588583A0),
    0x588E75A8: (0x588E7480, 0x5885EAF0),
    0x588E75D3: (0x588E7480, 0x5885EB30),
}

# These instruction windows bind the calls to their input fields, receiver
# subobjects, paired index, and caller-side 0xAA decoding exactly as mapped.
CALLER_WINDOWS = {
    0x58857558: (
        ("mov", "eax, dword ptr [0x58a247f8]"),
        ("mov", "edx, dword ptr [eax + 4]"),
        ("movzx", "eax, word ptr [edx + edi*4 + 0xe7c]"),
        ("mov", "ecx, dword ptr [esi + 0xa0]"),
        ("push", "eax"), ("push", "edi"),
        ("call", "0x5885eaf0"),
    ),
    0x58857576: (
        ("mov", "ecx, dword ptr [0x58a247f8]"),
        ("mov", "edx, dword ptr [ecx + 4]"),
        ("movzx", "eax, word ptr [edx + edi*4 + 0xe7e]"),
        ("mov", "ecx, dword ptr [esi + 0xa0]"),
        ("push", "eax"), ("push", "edi"),
        ("call", "0x5885eb30"),
    ),
    0x588575A8: (
        ("mov", "eax, dword ptr [0x58a247f8]"),
        ("mov", "ecx, dword ptr [eax + 4]"),
        ("movzx", "edx, word ptr [ecx + edi*4 + 0xe7c]"),
        ("mov", "ecx, dword ptr [esi + 0x9c]"),
        ("push", "edx"), ("push", "edi"),
        ("call", "0x58858360"),
    ),
    0x588575C5: (
        ("mov", "eax, dword ptr [0x58a247f8]"),
        ("mov", "ecx, dword ptr [eax + 4]"),
        ("movzx", "edx, word ptr [ecx + edi*4 + 0xe7e]"),
        ("mov", "ecx, dword ptr [esi + 0x9c]"),
        ("push", "edx"), ("push", "edi"),
        ("call", "0x588583a0"),
    ),
    0x588E7551: (
        ("mov", "eax, dword ptr [edi + 0x118]"),
        ("movzx", "ecx, byte ptr [eax + esi + 0xc]"),
        ("movzx", "edx, word ptr [ebx + 0x98]"),
        ("mov", "eax, dword ptr [0x58a245c4]"),
        ("xor", "ecx, 0xaa"), ("push", "ecx"),
        ("mov", "ecx, dword ptr [eax + 0x9c]"),
        ("dec", "edx"), ("push", "edx"),
        ("call", "0x58858360"),
    ),
    0x588E757D: (
        ("mov", "ecx, dword ptr [edi + 0x118]"),
        ("movzx", "edx, byte ptr [ecx + esi + 0xd]"),
        ("movzx", "eax, word ptr [ebx + 0x98]"),
        ("mov", "ecx, dword ptr [0x58a245c4]"),
        ("mov", "ecx, dword ptr [ecx + 0x9c]"),
        ("xor", "edx, 0xaa"), ("push", "edx"),
        ("dec", "eax"), ("push", "eax"),
        ("call", "0x588583a0"),
    ),
    0x588E75A8: (
        ("mov", "edx, dword ptr [edi + 0x118]"),
        ("movzx", "eax, byte ptr [edx + esi + 0xc]"),
        ("movzx", "ecx, word ptr [ebx + 0x98]"),
        ("mov", "edx, dword ptr [0x58a245c4]"),
        ("xor", "eax, 0xaa"), ("dec", "ecx"),
        ("push", "eax"), ("push", "ecx"),
        ("mov", "ecx, dword ptr [edx + 0xa0]"),
        ("call", "0x5885eaf0"),
    ),
    0x588E75D3: (
        ("mov", "eax, dword ptr [edi + 0x118]"),
        ("movzx", "ecx, byte ptr [eax + esi + 0xd]"),
        ("movzx", "edx, word ptr [ebx + 0x98]"),
        ("mov", "eax, dword ptr [0x58a245c4]"),
        ("xor", "ecx, 0xaa"), ("push", "ecx"),
        ("mov", "ecx, dword ptr [eax + 0xa0]"),
        ("dec", "edx"), ("push", "edx"),
        ("call", "0x5885eb30"),
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
    body_rows = read_tsv(BODY_EXPORTS)
    exports = {"58758ee0-fresh", "587cef70-fresh"}
    if len(body_rows) != len(BODIES) * len(exports):
        raise AssertionError("Expected two independent fresh Ghidra bodies per helper")
    expected_bodies = {
        (export, f"{address:08x}", f"{address:08x}", str(size), str(size), str(count))
        for export in exports
        for address, (size, count, _, _, _) in BODIES.items()
    }
    actual_bodies = {
        (row["export"], row["function"].lower(), row["start"].lower(),
         row["length"], row["instruction_bytes"], row["instruction_count"])
        for row in body_rows
    }
    if actual_bodies != expected_bodies:
        raise AssertionError(f"Fresh Ghidra body extents changed: {actual_bodies}")

    expected_edges = set()
    for export in exports:
        for site, (caller, target) in INCOMING.items():
            expected_edges.add((export, "CALL", f"{caller:08x}", f"{site:08x}",
                                f"{target:08x}", "UNCONDITIONAL_CALL"))
        for address, (size, count, _, _, transfer_kind) in BODIES.items():
            if transfer_kind == "calls":
                tail = ((address + 0x1C, 0x58907360, "UNCONDITIONAL_CALL"),
                        (address + 0x32, 0x587A15E0, "UNCONDITIONAL_CALL"))
            else:
                tail = ((address + size - 5, 0x587A15E0, "CALL_TERMINATOR"),)
            for site, target, edge_type in tail:
                expected_edges.add((export, "CALL", f"{address:08x}",
                                    f"{site:08x}", f"{target:08x}", edge_type))

    edge_rows = read_tsv(EDGE_EXPORTS)
    actual_edges = {
        (row["export"], row["kind"], row["function"].lower(), row["site"].lower(),
         row["target"].lower(), row["type"])
        for row in edge_rows
    }
    if actual_edges != expected_edges:
        raise AssertionError(
            f"Fresh Ghidra incoming/outgoing edges changed: "
            f"missing={expected_edges - actual_edges}, extra={actual_edges - expected_edges}"
        )


def indexed_setter_ops(companion_offset, slot_offset):
    return [
        ("push", "ebx"),
        ("mov", "ebx, dword ptr [esp + 8]"),
        ("push", "esi"),
        ("push", "edi"),
        ("mov", "edi, dword ptr [esp + 0x14]"),
        ("mov", "eax, edi"),
        ("mov", "esi, ecx"),
        ("mov", f"ecx, dword ptr [esi + ebx*4 + {companion_offset:#x}]"),
        ("xor", "eax, 0xaa"),
        ("push", "eax"),
        ("call", "0x58907360"),
        ("lea", f"eax, [esi + ebx*4 + {slot_offset:#x}]"),
        ("push", "edi"),
        ("mov", "dword ptr [eax], edi"),
        ("mov", f"ecx, dword ptr [{GLOBAL_UPDATE_RECEIVER:#x}]"),
        ("push", "eax"),
        ("call", "0x587a15e0"),
        ("pop", "edi"),
        ("pop", "esi"),
        ("pop", "ebx"),
        ("ret", "8"),
    ]


def indexed_notify_ops(slot_offset):
    return [
        ("mov", "eax, dword ptr [esp + 4]"),
        ("lea", f"eax, [ecx + eax*4 + {slot_offset:#x}]"),
        ("mov", "ecx, dword ptr [esp + 8]"),
        ("mov", "dword ptr [eax], ecx"),
        ("mov", "dword ptr [esp + 8], ecx"),
        ("mov", f"ecx, dword ptr [{GLOBAL_UPDATE_RECEIVER:#x}]"),
        ("mov", "dword ptr [esp + 4], eax"),
        ("jmp", "0x587a15e0"),
    ]


def verify_bodies(image, decoder, matched):
    for address, (size, count, companion_offset, slot_offset, transfer_kind) in BODIES.items():
        code = image[address - BASE:address - BASE + size]
        instructions = list(decoder.disasm(code, address))
        if (len(code) != size or len(instructions) != count
                or sum(insn.size for insn in instructions) != size
                or not instructions or instructions[0].address != address
                or instructions[-1].address + instructions[-1].size != address + size):
            raise AssertionError(f"Mapped body coverage differs from Ghidra at {address:08X}")
        expected = (indexed_setter_ops(companion_offset, slot_offset)
                    if transfer_kind == "calls" else indexed_notify_ops(slot_offset))
        actual = [(insn.mnemonic, insn.op_str) for insn in instructions]
        if actual != expected:
            raise AssertionError(f"Mapped operation stream changed at {address:08X}: {actual}")
        for insn in instructions:
            if insn.group(CS_GRP_JUMP):
                target = insn.operands[0].imm & 0xFFFFFFFF
                if transfer_kind != "tail" or insn.address != address + size - 5 or target != 0x587A15E0:
                    raise AssertionError(f"Unexpected control transfer in {address:08X}: {insn}")

    missing_helpers = set(HELPERS) - matched
    if missing_helpers:
        raise AssertionError(f"Direct helper dependencies are not byte-matched: {missing_helpers}")


def decode_record(image, decoder, record):
    instructions = []
    for start, size in record_ranges(record):
        code = image[start - BASE:start - BASE + size]
        decoded = list(decoder.disasm(code, start))
        if sum(insn.size for insn in decoded) != size:
            raise AssertionError(f"Could not decode matched caller range at {start:08X}")
        instructions.extend(decoded)
    return sorted(instructions, key=lambda insn: insn.address)


def verify_callers(image, decoder, records, matched):
    decoded_callers = {}
    for caller in {entry[0] for entry in INCOMING.values()}:
        if caller not in matched or caller not in records:
            raise AssertionError(f"Caller {caller:08X} is not byte-matched")
        decoded_callers[caller] = decode_record(image, decoder, records[caller])

    for site, (caller, target) in INCOMING.items():
        ranges = record_ranges(records[caller])
        if not contains(ranges, site):
            raise AssertionError(f"Callsite {site:08X} is outside matched caller code")
        insns = decoded_callers[caller]
        index = next((i for i, insn in enumerate(insns) if insn.address == site), None)
        if index is None:
            raise AssertionError(f"Could not decode callsite {site:08X}")
        call = insns[index]
        if (call.id != X86_INS_CALL or not call.operands
                or call.operands[0].type != X86_OP_IMM
                or (call.operands[0].imm & 0xFFFFFFFF) != target):
            raise AssertionError(f"Caller target changed at {site:08X}")
        expected = CALLER_WINDOWS[site]
        actual = tuple((insn.mnemonic, insn.op_str)
                       for insn in insns[index - len(expected) + 1:index + 1])
        if actual != expected:
            raise AssertionError(f"Caller field, receiver, or argument flow changed at {site:08X}: {actual}")


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
    for address, (size, _, _, _, _) in BODIES.items():
        record = records.get(address)
        if address not in inventory or int(inventory[address]["size"]) != size:
            raise AssertionError(f"Installed-client inventory differs at {address:08X}")
        if (record is None or address not in matched
                or record_ranges(record) != ((address, size),)):
            raise AssertionError(f"Function {address:08X} is not an exact byte match")
    for helper, size in ((0x58907360, 18), (0x587A15E0, 87)):
        if helper not in matched or helper not in records:
            raise AssertionError(f"Required dependency {helper:08X} is not byte-matched")
        if record_ranges(records[helper]) != ((helper, size),):
            raise AssertionError(f"Dependency extent changed at {helper:08X}")

    verify_bodies(image, decoder, matched)
    verify_callers(image, decoder, records, matched)
    print(
        "Indexed slot-update family: 4 functions / 194 bytes match both fresh "
        "Ghidra body exports; paired caller argument paths and all 6 outgoing "
        "helper transfers are verified against byte-matched functions"
    )


if __name__ == "__main__":
    main()
