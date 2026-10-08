"""Validate the RTTI-backed C2ndProtectionSystemManager client slice."""
import csv
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-second-protection-system-body-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = (
    "58731000", "58731230", "587312D0", "58731840", "58731860",
    "58731A10",
    "58731D30", "58732290", "587324A0", "58732710", "58732980",
    "58732BF0", "58732E60", "587330C0", "58733120", "587331A0",
    "58733E70", "587344A0", "58734770", "58734850",
)
EXPECTED_BYTES = 9_712
EXPECTED_RANGES = 24
EXPECTED_INSTRUCTIONS = 2_829

# The four nearby vftables have different TypeDescriptors, so they are not
# assumed to be secondary vftables for this screen.
VFTABLES = (
    (0x5898C4E0, 0x589A3D98, (
        0x58731840, 0x58734850, 0x58731A10, 0x58731230,
        0x58731860, 0x58902FE0, 0x58733E70,
    )),
)
VIRTUAL_ROOTS = {
    "58731840", "58734850", "58731A10", "58731230", "58731860",
    "58733E70",
}
TYPE_DESCRIPTOR = 0x589B9000
REQUIRED_STRINGS = (
    b"TEXT_2NDPROTECT", b"PASSWORD_INPUT", b"CHECK_PASSWORD",
    b"CHANGE_PASSWORD", b"INFORM_NEEDPASSWORD", b"INFORM_BLOCKPASSWORD",
    b"ITPNNMPD.spr",
)
REQUIRED_IMMEDIATES = {0x80016101, 0x80016102, 0x0BBA, 0x0BBB}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def read_pointer(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Address outside mapped Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def body_rows(path, selected):
    return sorted(
        (row for row in read_tsv(path) if row["function"].upper() in selected),
        key=lambda row: (row["function"].upper(), int(row["start"], 16)),
    )


def row_signature(rows):
    return [
        (
            row["function"].upper(), int(row["start"], 16), int(row["length"]),
            int(row["instruction_bytes"]), int(row["instruction_count"]),
        )
        for row in rows
    ]


def edge_signature(rows):
    return sorted(
        (
            row["kind"], row["function"].upper(), row["site"].upper(),
            row["type"], row["target"].upper(), row["target_function"].upper(),
        )
        for row in rows
    )


def main():
    selected = set(FUNCTIONS)
    if len(selected) != len(FUNCTIONS):
        raise AssertionError("Duplicate address in second-protection manifest")

    inventory = {
        row["address"].upper(): row
        for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    missing = selected - inventory.keys()
    if missing:
        raise AssertionError(f"Functions missing from installed-client inventory: {sorted(missing)}")

    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))["matches"]
    matches = {row["address"].upper(): row for row in catalog}
    unverified = [address for address in FUNCTIONS
                  if matches.get(address, {}).get("verified_by") != MARKER]
    if unverified:
        raise AssertionError(f"Functions without an ObjDiff 100% record: {unverified}")
    missing_sources = [
        address for address in FUNCTIONS
        if not (ROOT / f"src/client-current/Main/FUN_{address.lower()}.cpp").is_file()
    ]
    if missing_sources:
        raise AssertionError(f"Missing emitted source files: {missing_sources}")

    ranges = read_tsv(RANGE_PATH)
    if {row["function"].upper() for row in ranges} != selected:
        raise AssertionError("Tracked Ghidra ranges do not cover the exact class slice")
    signatures = row_signature(ranges)
    for path in BODY_EXPORTS:
        if row_signature(body_rows(path, selected)) != signatures:
            raise AssertionError(f"Tracked ranges disagree with independent Ghidra export: {path.name}")
    range_count = len(ranges)
    body_bytes = sum(int(row["length"]) for row in ranges)
    instruction_count = sum(int(row["instruction_count"]) for row in ranges)
    if (range_count, body_bytes, instruction_count) != (
            EXPECTED_RANGES, EXPECTED_BYTES, EXPECTED_INSTRUCTIONS):
        raise AssertionError(
            f"Unexpected range totals: {range_count} ranges, {body_bytes} bytes, "
            f"{instruction_count} instructions"
        )
    inventory_bytes = sum(int(inventory[address]["size"]) for address in selected)
    if inventory_bytes != body_bytes:
        raise AssertionError(f"Ghidra body bytes {body_bytes} != indexed extents {inventory_bytes}")

    image = IMAGE_PATH.read_bytes()
    seen_virtual_slots = set()
    for table, col, expected_slots in VFTABLES:
        if read_pointer(image, table - 4) != col:
            raise AssertionError(f"Unexpected COL pointer for vftable {table:08X}")
        locator_type = read_pointer(image, col + 0x0C)
        if locator_type != TYPE_DESCRIPTOR:
            raise AssertionError(f"Unexpected TypeDescriptor for COL {col:08X}: {locator_type:08X}")
        slots = tuple(read_pointer(image, table + 4 * index)
                      for index in range(len(expected_slots)))
        if slots != expected_slots:
            raise AssertionError(
                f"Vftable mismatch at {table:08X}: "
                f"{[f'{item:08X}' for item in slots]}"
            )
        seen_virtual_slots.update(f"{item:08X}" for item in slots if item in {
            int(address, 16) for address in selected
        })
    td_name_offset = TYPE_DESCRIPTOR - BASE + 8
    td_name_end = image.find(b"\0", td_name_offset)
    if td_name_end < 0:
        raise AssertionError("C2ndProtectionSystemManager TypeDescriptor is not terminated")
    type_name = image[td_name_offset:td_name_end].decode("ascii", errors="replace")
    if type_name != ".?AVC2ndProtectionSystemManager@@":
        raise AssertionError(f"Unexpected RTTI name: {type_name!r}")
    if not VIRTUAL_ROOTS <= seen_virtual_slots:
        raise AssertionError(f"Vftables omit open virtual roots: {sorted(VIRTUAL_ROOTS - seen_virtual_slots)}")
    for value in REQUIRED_STRINGS:
        if image.find(value) < 0:
            raise AssertionError(f"Mapped Main.dll is missing evidence string {value!r}")

    constructor = "58733360"
    setup_caller = "5878AF40"
    if any(matches.get(address, {}).get("verified_by") != MARKER
           for address in (constructor, setup_caller)):
        raise AssertionError("The verified constructor/setup caller evidence is missing")
    constructor_bytes = image[int(constructor, 16) - BASE:
                              int(constructor, 16) - BASE + int(inventory[constructor]["size"])]
    if constructor_bytes.count(struct.pack("<I", VFTABLES[0][0])) != 1:
        raise AssertionError("The original constructor does not uniquely install this vftable")

    edge_exports = [read_tsv(path) for path in EDGE_EXPORTS]
    filtered_edges = [
        [row for row in export if row["function"].upper() in selected]
        for export in edge_exports
    ]
    if edge_signature(filtered_edges[0]) != edge_signature(filtered_edges[1]):
        raise AssertionError("Independent Ghidra call/data edge exports disagree")
    constructor_edges = [
        row for export in edge_exports for row in export
        if row["function"].upper() == setup_caller
        and row["target"].upper() == constructor
    ]
    if len(constructor_edges) < 2 or any(
            row["site"].upper() != "5878CA6C" for row in constructor_edges):
        raise AssertionError("Matched setup caller no longer calls the constructor at 0x5878CA6C")

    outgoing = defaultdict(set)
    for row in filtered_edges[0]:
        if row["kind"] != "DATA" and row["target_function"]:
            outgoing[row["function"].upper()].add(row["target_function"].upper())
    reachable = set(VIRTUAL_ROOTS)
    queue = deque(reachable)
    while queue:
        source = queue.popleft()
        for target in outgoing[source] & selected - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Open direct-call closure differs: {sorted(selected - reachable)}")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    direct_transfers = {}
    indirect_calls = 0
    indirect_jumps = 0
    internal_transfers = 0
    boundary_targets = set()
    observed_immediates = set()
    image_end = BASE + len(image)
    extents = {}
    for address in selected:
        own = [row for row in ranges if row["function"].upper() == address]
        extents[address] = (
            min(int(row["start"], 16) for row in own),
            max(int(row["start"], 16) + int(row["length"]) for row in own),
        )
    for row in ranges:
        function = row["function"].upper()
        start = int(row["start"], 16)
        size = int(row["length"])
        code = image[start - BASE:start - BASE + size]
        instructions = list(decoder.disasm(code, start))
        if (not instructions or sum(item.size for item in instructions) != size
                or instructions[-1].address + instructions[-1].size != start + size
                or len(instructions) != int(row["instruction_count"])):
            raise AssertionError(f"Mapped instruction coverage disagrees at {start:08X}")
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type == X86_OP_IMM:
                    observed_immediates.add(operand.imm & 0xFFFFFFFF)
            if instruction.id not in (X86_INS_CALL, X86_INS_JMP):
                continue
            if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
                if instruction.id == X86_INS_CALL:
                    indirect_calls += 1
                else:
                    indirect_jumps += 1
                continue
            target = instruction.operands[0].imm & 0xFFFFFFFF
            direct_transfers[instruction.address] = target
            target_address = f"{target:08X}"
            if target_address in selected or extents[function][0] <= target < extents[function][1]:
                internal_transfers += 1
            elif target_address in matches and matches[target_address].get("verified_by") == MARKER:
                boundary_targets.add(target_address)
            elif BASE <= target < image_end:
                raise AssertionError(
                    f"Unmatched in-module direct transfer {function} -> {target_address} "
                    f"at {instruction.address:08X}"
                )
    missing_immediates = REQUIRED_IMMEDIATES - observed_immediates
    if missing_immediates:
        raise AssertionError(f"Expected screen message/status immediates absent: {sorted(missing_immediates)}")

    for row in filtered_edges[0]:
        if row["kind"] == "DATA":
            continue
        site = int(row["site"], 16)
        target = int(row["target"], 16)
        if direct_transfers.get(site) != target:
            raise AssertionError(
                f"Ghidra transfer disagrees with mapped x86 at {site:08X}: "
                f"edge={target:08X}, decoded={direct_transfers.get(site)}"
            )

    print(
        f"C2ndProtectionSystemManager: RTTI {type_name}, primary vftable "
        f"{VFTABLES[0][0]:08X}; "
        f"{len(selected)} ObjDiff-verified functions / {body_bytes:,} bytes; "
        f"{range_count} exact ranges / {instruction_count:,} instructions; "
        f"{internal_transfers} internal transfers, {len(boundary_targets)} "
        f"byte-matched boundary targets, {indirect_calls} indirect calls, "
        f"{indirect_jumps} indirect jumps; two independent Ghidra body/edge exports, "
        "RTTI, vftable slots, prompts, and protocol identifiers validated"
    )


if __name__ == "__main__":
    main()
