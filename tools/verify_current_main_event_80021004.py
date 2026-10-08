"""Validate the complete open closure of Main.dll event 0x80021004."""
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
RANGE_PATH = ROOT / "config/NF2_2026/main-event-80021004-body-ranges.tsv"
BODY_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-bodies.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-bodies.tsv",
)
EDGE_EXPORTS = (
    ROOT / "var/current-main-next/58758ee0-fresh-function-edges.tsv",
    ROOT / "var/current-main-next/587cef70-fresh-function-edges.tsv",
)
GHIDRA_LOG = ROOT / "var/current-main-next/case-80021004-full-fresh-ghidra.log"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTIONS = (
    "58797460", "58797470", "587D7D80", "587D8610", "587DA9A0",
    "587DAAC0", "587E4180", "58817800", "588E6530", "588E98E0",
    "588F4290",
)
ROOTS = {"587DAAC0", "587DA9A0", "587D7D80", "587E4180"}
EXPECTED_BYTES = 1_921
EXPECTED_RANGES = 13
EXPECTED_INSTRUCTIONS = 570

DISPATCHER = "587BB700"
CASE_CALLS = {
    "587DAAC0": ("587BFBCB",),
    "587DA9A0": ("587BFBF5",),
    "587D7D80": ("587BFD32",),
    "587E4180": ("587BFD5C",),
    "587E0090": ("587BFC2B", "587BFC75", "587BFCBF", "587BFD06"),
    "5888CC70": ("587BFD7E",),
}
EVENT_ID = 0x80021004


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


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
    range_line = re.compile(r"RANGE ([0-9a-fA-F]+)\.\.([0-9a-fA-F]+) length=(\d+)")
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
                    raise AssertionError(f"Malformed fresh Ghidra range: {line.strip()}")
    return sorted(ranges)


def decode_direct_call(decoder, image, site):
    decoder.detail = True
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 16], site, count=1), None)
    if (instruction is None or instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM):
        raise AssertionError(f"Expected a direct CALL at dispatcher site {site:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def main():
    selected = set(FUNCTIONS)
    if len(selected) != len(FUNCTIONS) or not ROOTS <= selected:
        raise AssertionError("Duplicate address or missing root in event 0x80021004 manifest")

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
    required_matches = (*FUNCTIONS, DISPATCHER, "587E0090", "5888CC70")
    unverified = [address for address in required_matches
                  if matches.get(address, {}).get("verified_by") != MARKER]
    if unverified:
        raise AssertionError(f"Missing ObjDiff 100% records: {unverified}")
    missing_sources = [
        address for address in FUNCTIONS
        if not (ROOT / f"src/client-current/Main/FUN_{address.lower()}.cpp").is_file()
    ]
    if missing_sources:
        raise AssertionError(f"Missing emitted source files: {missing_sources}")

    ranges = read_tsv(RANGE_PATH)
    if {row["function"].upper() for row in ranges} != selected:
        raise AssertionError("Tracked Ghidra ranges do not cover the exact event-case closure")
    signatures = row_signature(ranges)
    for path in BODY_EXPORTS:
        if row_signature(body_rows(path, selected)) != signatures:
            raise AssertionError(f"Tracked ranges disagree with independent Ghidra export: {path.name}")
    log_signature = ghidra_log_signature(GHIDRA_LOG, selected)
    manifest_log_signature = sorted(
        (function, start, length, byte_count)
        for function, start, length, byte_count, _ in signatures
    )
    if manifest_log_signature != log_signature:
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
    if sum(int(inventory[address]["size"]) for address in selected) != body_bytes:
        raise AssertionError("Ghidra body bytes differ from indexed function extents")

    image = IMAGE_PATH.read_bytes()
    dispatcher_row = inventory[DISPATCHER]
    dispatcher = int(DISPATCHER, 16)
    dispatcher_size = int(dispatcher_row["size"])
    dispatcher_bytes = image[dispatcher - BASE:dispatcher - BASE + dispatcher_size]
    if struct.pack("<I", EVENT_ID) not in dispatcher_bytes:
        raise AssertionError("Matched dispatcher body no longer contains event ID 0x80021004")
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    for target, sites in CASE_CALLS.items():
        for site_hex in sites:
            site = int(site_hex, 16)
            if decode_direct_call(decoder, image, site) != int(target, 16):
                raise AssertionError(f"Mapped dispatcher call at {site:08X} no longer targets {target}")

    edge_exports = [read_tsv(path) for path in EDGE_EXPORTS]
    filtered_edges = [
        [row for row in export if row["function"].upper() in selected]
        for export in edge_exports
    ]
    if edge_signature(filtered_edges[0]) != edge_signature(filtered_edges[1]):
        raise AssertionError("Independent Ghidra call/data edge exports disagree")
    for export in edge_exports:
        for target, sites in CASE_CALLS.items():
            for site in sites:
                matching = [row for row in export
                            if row["kind"] == "CALL"
                            and row["function"].upper() == DISPATCHER
                            and row["site"].upper() == site
                            and row["target"].upper() == target]
                if len(matching) != 1:
                    raise AssertionError(f"Ghidra export misses unique case call {site} -> {target}")

    outgoing = defaultdict(set)
    for row in filtered_edges[0]:
        if row["kind"] == "CALL" and row["target_function"]:
            outgoing[row["function"].upper()].add(row["target_function"].upper())
    reachable = set(ROOTS)
    queue = deque(ROOTS)
    while queue:
        for target in outgoing[queue.popleft()] & selected - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Open event-case closure differs: {sorted(selected - reachable)}")

    decoder.detail = True
    image_end = BASE + len(image)
    extents = {}
    for address in selected:
        own = [row for row in ranges if row["function"].upper() == address]
        extents[address] = (
            min(int(row["start"], 16) for row in own),
            max(int(row["start"], 16) + int(row["length"]) for row in own),
        )
    direct_transfers = {}
    boundary_targets = set()
    indirect_calls = 0
    indirect_jumps = 0
    for row in ranges:
        function = row["function"].upper()
        start = int(row["start"], 16)
        size = int(row["length"])
        instructions = list(decoder.disasm(image[start - BASE:start - BASE + size], start))
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
                continue
            if matches.get(target_address, {}).get("verified_by") == MARKER:
                boundary_targets.add(target_address)
            elif BASE <= target < image_end:
                raise AssertionError(
                    f"Unmatched in-module transfer {function} -> {target_address} "
                    f"at {instruction.address:08X}"
                )

    for row in filtered_edges[0]:
        if row["kind"] != "CALL":
            continue
        site = int(row["site"], 16)
        target = int(row["target"], 16)
        if direct_transfers.get(site) != target:
            raise AssertionError(
                f"Ghidra transfer disagrees with mapped x86 at {site:08X}: "
                f"edge={target:08X}, decoded={direct_transfers.get(site)}"
            )

    print(
        f"Event 0x80021004: {len(selected)} ObjDiff-verified functions / {body_bytes:,} bytes; "
        f"{range_count} exact ranges / {instruction_count:,} instructions; "
        f"{len(boundary_targets)} byte-matched boundary targets, {indirect_calls} indirect calls, "
        f"{indirect_jumps} indirect jumps; two independent Ghidra body/edge exports, "
        "fresh Ghidra log, all dispatcher branches, and full open closure validated"
    )


if __name__ == "__main__":
    main()
