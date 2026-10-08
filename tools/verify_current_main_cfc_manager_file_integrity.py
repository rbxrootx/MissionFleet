"""Validate the RTTI-backed CFCManager file-integrity/update-list slice."""
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
RANGE_PATH = ROOT / "config/NF2_2026/main-resource-integrity-scan-body-ranges.tsv"
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
    "58771F50", "58771F60", "58771F70", "587720E0", "58772120",
    "58772160", "58772210", "58772380", "58772470", "587724D0",
    "58772530", "58772580", "587725E0", "58772640", "587726A0",
    "58772720", "587727B0", "587728A0", "587728D0", "58772900",
    "58772940", "58772980", "58772AC0", "58772B10", "58772B40",
    "58772B70", "58772BA0", "58772BD0", "58772CB0", "58772CF0",
    "58772D30", "58772DC0", "58772E50", "58772E80", "58772EB0",
    "58773090", "58773360", "58773640", "58773660", "58773730",
    "58773950", "58773A00", "58773AB0", "587741B0", "587743E0",
    "587745A0", "58774A90", "58774BC0", "58774C40", "58774C90",
    "58774D50", "58774DB0", "5897CE92", "5897CE9E", "5897CEA4",
    "5897CEAA", "5897CEB0", "5897CEB6", "5897CEC2",
)
EXPECTED_BYTES = 11_026
EXPECTED_RANGES = 74
EXPECTED_INSTRUCTIONS = 3_766
VFTABLE = 0x58996358
VFTABLE_SLOTS = (0x58774DB0, 0x58771F50, 0x58772BD0, 0x58771F60, 0x58773640)
ENTRY_ROOTS = (
    *VFTABLE_SLOTS, 0x58774A90, 0x58774C40, 0x58774C90, 0x58774D50,
)
REQUIRED_STRINGS = (
    b"*.*", b"*.Data", b"*.cxf", b"*.cmf", b"*.kmf", b"*.spr",
    b"%s : Invalid File (%d / %d)", b"%s : modified (%d / %d)",
    b"%s : OK (%d / %d)", b"#message", b"#zipurl", b"#listurl",
    b"*** FCModule is Safe-Released (%d.%d.%d %d:%d:%d) *** \r\n",
)


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def read_pointer(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Address outside mapped Main.dll: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def body_rows(path, selected):
    rows = [row for row in read_tsv(path) if row["function"].upper() in selected]
    return sorted(
        rows,
        key=lambda row: (row["function"].upper(), int(row["start"], 16)),
    )


def row_signature(rows):
    return [
        (
            row["function"].upper(),
            int(row["start"], 16),
            int(row["length"]),
            int(row["instruction_bytes"]),
            int(row["instruction_count"]),
        )
        for row in rows
    ]


def main():
    selected = set(FUNCTIONS)
    if len(selected) != len(FUNCTIONS):
        raise AssertionError("Duplicate address in CFCManager manifest")

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
        raise AssertionError("Tracked Ghidra-range manifest does not cover the exact function set")
    signatures = row_signature(ranges)
    for path in BODY_EXPORTS:
        if row_signature(body_rows(path, selected)) != signatures:
            raise AssertionError(f"Tracked ranges disagree with fresh Ghidra export: {path.name}")
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
        raise AssertionError(f"Ghidra body bytes {body_bytes} != inventory extents {inventory_bytes}")

    image = IMAGE_PATH.read_bytes()
    locator = read_pointer(image, VFTABLE - 4)
    type_descriptor = read_pointer(image, locator + 0xC)
    name_offset = type_descriptor - BASE + 8
    name_end = image.find(b"\0", name_offset)
    if name_end < 0:
        raise AssertionError("CFCManager TypeDescriptor name is not terminated")
    type_name = image[name_offset:name_end].decode("ascii", errors="replace")
    slots = tuple(read_pointer(image, VFTABLE + 4 * index) for index in range(len(VFTABLE_SLOTS)))
    if type_name != ".?AVCFCManager@@" or slots != VFTABLE_SLOTS:
        raise AssertionError(
            f"RTTI/vtable mismatch: name={type_name!r}, slots={[f'{item:08X}' for item in slots]}"
        )
    for value in REQUIRED_STRINGS:
        if image.find(value) < 0:
            raise AssertionError(f"Mapped Main.dll is missing evidence string {value!r}")

    edge_exports = [read_tsv(path) for path in EDGE_EXPORTS]
    filtered_edges = [
        [row for row in export if row["function"].upper() in selected]
        for export in edge_exports
    ]
    edge_signature = lambda rows: sorted(
        (row["kind"], row["function"].upper(), row["site"].upper(),
         row["type"], row["target"].upper(), row["target_function"].upper())
        for row in rows
    )
    if edge_signature(filtered_edges[0]) != edge_signature(filtered_edges[1]):
        raise AssertionError("Independent Ghidra call/data edge exports disagree")
    data_targets = {
        (row["function"].upper(), row["target_function"].upper())
        for row in filtered_edges[0]
        if row["kind"] == "DATA" and row["target_function"]
    }
    if ("58774C90", "58774D50") not in data_targets:
        raise AssertionError("The scanner-to-callback data reference is absent")

    outgoing = defaultdict(set)
    for row in filtered_edges[0]:
        if row["kind"] != "DATA" and row["target_function"]:
            outgoing[row["function"].upper()].add(row["target_function"].upper())
    reachable = {f"{address:08X}" for address in ENTRY_ROOTS}
    queue = deque(reachable)
    while queue:
        source = queue.popleft()
        for target in outgoing[source] & selected - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"CFCManager direct-call closure differs: {sorted(selected - reachable)}")

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
            if target_address in selected:
                internal_transfers += 1
            elif extents[function][0] <= target < extents[function][1]:
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
        f"CFCManager: RTTI {type_name}, {len(VFTABLE_SLOTS)} vtable slots; "
        f"{len(selected)} ObjDiff-verified functions / {body_bytes:,} bytes; "
        f"{range_count} exact ranges / {instruction_count:,} instructions; "
        f"{internal_transfers} internal transfers, {len(boundary_targets)} "
        f"byte-matched boundary targets, {indirect_calls} indirect calls, "
        f"{indirect_jumps} indirect jumps; two Ghidra exports, RTTI, callbacks, "
        f"and resource/status strings validated"
    )


if __name__ == "__main__":
    main()
