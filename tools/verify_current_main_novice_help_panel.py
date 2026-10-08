"""Validate the RTTI-backed CPannelNoviceHelp client slice."""
import csv
import json
import re
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
RANGE_PATH = ROOT / "config/NF2_2026/main-novice-help-panel-body-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
GHIDRA_LOG = ROOT / "var/current-main-next/novice-help-fresh-ghidra.log"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = (
    "5889B410", "5889B5A0", "5889B5C0", "5889B630", "5889B930",
    "5889BC40", "5889BEA0", "5889C070", "5889C6A0", "5889C880",
    "5889D070", "5889D0A0", "5889D420", "5889D5F0",
)
EXPECTED_BYTES = 7_712
EXPECTED_RANGES = 33
EXPECTED_INSTRUCTIONS = 2_412

VFTABLE = 0x589A01A8
COL = 0x589A937C
TYPE_DESCRIPTOR = 0x589CD32C
EXPECTED_SLOTS = (
    0x5889B5A0, 0x5874DDD0, 0x5889D070, 0x5889D5F0,
    0x5889B5C0, 0x58902FE0, 0x5889D0A0,
)
VIRTUAL_ROOTS = {"5889B5A0", "5889D070", "5889D5F0", "5889B5C0", "5889D0A0"}
CONSTRUCTOR = "5889C8D0"
SETUP_CALLER = "5878AF40"
RESOURCE_STRING = b"ITFNVCHelp.spr"


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


def ghidra_log_signature(path, selected):
    current = None
    ranges = []
    function_line = re.compile(r"FUNCTION FUN_([0-9a-fA-F]+) entry=([0-9a-fA-F]+)")
    range_line = re.compile(
        r"RANGE ([0-9a-fA-F]+)\.\.([0-9a-fA-F]+) length=(\d+)"
    )
    with path.open(encoding="utf-8", errors="replace") as stream:
        for line in stream:
            function_match = function_line.search(line)
            if function_match:
                current = function_match.group(2).upper()
                continue
            range_match = range_line.search(line)
            if range_match and current in selected:
                start, end, length = range_match.groups()
                ranges.append((current, int(start, 16), int(length), int(length)))
                if int(end, 16) - int(start, 16) + 1 != int(length):
                    raise AssertionError(f"Malformed Ghidra range in {path.name}: {line.strip()}")
    return sorted(ranges)


def main():
    selected = set(FUNCTIONS)
    if len(selected) != len(FUNCTIONS):
        raise AssertionError("Duplicate address in novice-help panel manifest")

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
    unverified = [address for address in (*FUNCTIONS, CONSTRUCTOR)
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
        raise AssertionError("Tracked Ghidra ranges do not cover the exact open class slice")
    signatures = row_signature(ranges)
    for path in BODY_EXPORTS:
        if row_signature(body_rows(path, selected)) != signatures:
            raise AssertionError(f"Tracked ranges disagree with independent Ghidra export: {path.name}")
    if sorted((fn, start, length, byte_count)
              for fn, start, length, byte_count, _ in signatures) != ghidra_log_signature(GHIDRA_LOG, selected):
        raise AssertionError("Tracked ranges disagree with the fresh selected-function Ghidra log")

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
    if read_pointer(image, VFTABLE - 4) != COL:
        raise AssertionError("Unexpected complete-object locator for CPannelNoviceHelp")
    if read_pointer(image, COL + 0x0C) != TYPE_DESCRIPTOR:
        raise AssertionError("Unexpected TypeDescriptor for CPannelNoviceHelp locator")
    slots = tuple(read_pointer(image, VFTABLE + 4 * index)
                  for index in range(len(EXPECTED_SLOTS)))
    if slots != EXPECTED_SLOTS:
        raise AssertionError(f"Vftable mismatch at {VFTABLE:08X}: {[f'{x:08X}' for x in slots]}")
    td_name_offset = TYPE_DESCRIPTOR - BASE + 8
    td_name_end = image.find(bytes([0]), td_name_offset)
    if td_name_end < 0:
        raise AssertionError("CPannelNoviceHelp TypeDescriptor is not terminated")
    type_name = image[td_name_offset:td_name_end].decode("ascii", errors="replace")
    if type_name != ".?AVCPannelNoviceHelp@@":
        raise AssertionError(f"Unexpected RTTI name: {type_name!r}")
    seen_virtual_slots = {f"{address:08X}" for address in slots if f"{address:08X}" in selected}
    if seen_virtual_slots != VIRTUAL_ROOTS:
        raise AssertionError(f"Unexpected open vtable roots: {sorted(seen_virtual_slots)}")
    if image.find(RESOURCE_STRING) < 0:
        raise AssertionError(f"Mapped Main.dll is missing {RESOURCE_STRING!r}")

    constructor_size = int(inventory[CONSTRUCTOR]["size"])
    constructor_bytes = image[int(CONSTRUCTOR, 16) - BASE:
                              int(CONSTRUCTOR, 16) - BASE + constructor_size]
    if constructor_bytes.count(struct.pack("<I", VFTABLE)) != 1:
        raise AssertionError("Matched constructor does not uniquely install this primary vftable")
    if matches.get(SETUP_CALLER, {}).get("verified_by") != MARKER:
        raise AssertionError("Matched setup caller evidence is missing")

    edge_exports = [read_tsv(path) for path in EDGE_EXPORTS]
    filtered_edges = [
        [row for row in export if row["function"].upper() in selected]
        for export in edge_exports
    ]
    if edge_signature(filtered_edges[0]) != edge_signature(filtered_edges[1]):
        raise AssertionError("Independent Ghidra call/data edge exports disagree")
    constructor_edges = [
        row for export in edge_exports for row in export
        if row["function"].upper() == SETUP_CALLER
        and row["target"].upper() == CONSTRUCTOR
    ]
    if len(constructor_edges) < 2 or any(
            row["site"].upper() != "5878C43C" for row in constructor_edges):
        raise AssertionError("Matched setup caller no longer calls the constructor at 0x5878C43C")

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
        f"CPannelNoviceHelp: RTTI {type_name}, primary vftable {VFTABLE:08X}; "
        f"{len(selected)} ObjDiff-verified functions / {body_bytes:,} bytes; "
        f"{range_count} exact ranges / {instruction_count:,} instructions; "
        f"{internal_transfers} internal transfers, {len(boundary_targets)} "
        f"byte-matched boundary targets, {indirect_calls} indirect calls, "
        f"{indirect_jumps} indirect jumps; two independent Ghidra body/edge exports, "
        "fresh Ghidra log, constructor caller, RTTI, and all primary slots validated"
    )


if __name__ == "__main__":
    main()
