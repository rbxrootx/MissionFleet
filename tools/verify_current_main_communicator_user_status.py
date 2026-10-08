"""Verify the exact CPannelCommunicatorConfigPannel user-status slice."""
import csv
import json
import re
import struct
from collections import Counter
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_COMMUNICATOR_USER_STATUS_ADDRESSES,
        MAIN_COMMUNICATOR_USER_STATUS_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_COMMUNICATOR_USER_STATUS_ADDRESSES,
        MAIN_COMMUNICATOR_USER_STATUS_EVIDENCE,
    )

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x588424D0, 0x58842B10, 0x58844CA0, 0x58888F10)
RANGES = {
    0x588424D0: ((0x588424D0, 649, 198),),
    0x58842B10: ((0x58842B10, 649, 198),),
    0x58844CA0: (
        (0x58844CA0, 157, 37),
        (0x58844D40, 73, 19),
        (0x58844D90, 336, 78),
    ),
    0x58888F10: ((0x58888F10, 58, 13),),
}
DIRECT_TARGET_COUNTS = {
    0x588424D0: Counter({
        0x589088D0: 4, 0x58753E60: 1, 0x587538B0: 6,
        0x587B9270: 1, 0x587B9290: 1, 0x5897CBDA: 1,
    }),
    0x58842B10: Counter({
        0x589088D0: 4, 0x58753E60: 1, 0x587538B0: 6,
        0x587B9270: 1, 0x587B9290: 1, 0x5897CBDA: 1,
    }),
    0x58844CA0: Counter({
        0x58902D20: 5, 0x589087F0: 1, 0x588424D0: 1,
        0x58893860: 1, 0x58888F10: 1,
    }),
    0x58888F10: Counter(),
}
PARENT = 0x588450B0
PARENT_CALLS = {
    0x588450D5: 0x588424D0,
    0x588456D0: 0x588424D0,
    0x588457EA: 0x58842B10,
    0x58845914: 0x588424D0,
}
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / (
    "config/NF2_2026/current-main-communicator-user-status-body-exports.tsv"
)
EDGE_EXPORTS = ROOT / (
    "config/NF2_2026/current-main-communicator-user-status-call-edges.tsv"
)
GHIDRA_C = FRESH_DIR / "frontier-config-panel-methods-fresh-ghidra.c"
PARENT_C = FRESH_DIR / "588450b0-ghidra.c"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899E400
VTABLE_TYPE = ".?AVCPannelCommunicatorConfigPannel@@"
EXTERNAL_DIRECT_TARGETS = {
    0x58902D20, 0x589087F0, 0x58893860, 0x589088D0,
    0x58753E60, 0x587538B0, 0x587B9270, 0x587B9290, 0x5897CBDA,
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def address(value):
    return int(value, 16)


def body_rows_from_fresh():
    expected = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        rows = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        for function, ranges in RANGES.items():
            actual = tuple(
                (address(row["start"]), int(row["length"]),
                 int(row["instruction_bytes"]), int(row["instruction_count"]))
                for row in rows if address(row["function"]) == function
            )
            wanted = tuple((start, size, size, count)
                           for start, size, count in ranges)
            if actual != wanted:
                raise AssertionError(
                    f"Fresh Ghidra body ranges changed for {function:08X} in {project}"
                )
            expected.update(
                (export, function, start, size, size, count)
                for start, size, count in ranges
            )
    return expected


def calls_from_fresh():
    expected = set()
    selected_functions = set(FUNCTIONS)
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        rows = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in rows if row["kind"] == "CALL" and
                    (address(row["function"]) in selected_functions or
                     address(row["target"]) in selected_functions)]
        outgoing = {
            function: Counter(address(row["target"]) for row in selected
                              if address(row["function"]) == function)
            for function in FUNCTIONS
        }
        if outgoing != DIRECT_TARGET_COUNTS:
            raise AssertionError(f"Fresh direct-call closure changed in {project}")
        incoming = {
            address(row["site"]): address(row["target"])
            for row in selected if address(row["function"]) == PARENT
        }
        if incoming != PARENT_CALLS:
            raise AssertionError(f"Fresh parent callsites changed in {project}")
        external = set().union(*(set(counter) for counter in outgoing.values())) - selected_functions
        if external != EXTERNAL_DIRECT_TARGETS:
            raise AssertionError(f"Fresh direct dependency boundary changed in {project}")
        if len(selected) != 41:
            raise AssertionError(f"Expected 41 selected CALL edges in {project}, got {len(selected)}")
        expected.update(
            (export, row["kind"], address(row["function"]), address(row["site"]),
             address(row["target"]), row["type"])
            for row in selected
        )
    return expected


def verify_exports():
    expected_bodies = body_rows_from_fresh()
    checked_bodies = {
        (row["export"], address(row["function"]), address(row["start"]),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if checked_bodies != expected_bodies:
        raise AssertionError("Checked-in Ghidra body rows differ from both fresh projects")

    expected_edges = calls_from_fresh()
    checked_edges = {
        (row["export"], row["kind"], address(row["function"]),
         address(row["site"]), address(row["target"]), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if checked_edges != expected_edges:
        raise AssertionError("Checked-in Ghidra call edges differ from both fresh projects")


def function_text(text, function):
    marker = f"/* FUN_{function:08x} at {function:08x} */"
    start = text.lower().find(marker.lower())
    if start < 0:
        raise AssertionError(f"Ghidra pseudocode does not contain FUN_{function:08X}")
    end = text.find("/* FUN_", start + len(marker))
    return text[start:] if end < 0 else text[start:end]


def verify_reconstructed_behavior():
    text = GHIDRA_C.read_text(encoding="utf-8")
    first = function_text(text, 0x588424D0).lower()
    second = function_text(text, 0x58842B10).lower()
    panel = function_text(text, 0x58844CA0).lower()
    reset = function_text(text, 0x58888F10).lower()
    for body, list_offset in ((first, "0x6c"), (second, "100")):
        if (f"+ {list_offset}" not in body or "+ 0x54" not in body
                or "+ 0x9e" not in body or "+ 0x80" not in body
                or "str_commuserstatus_logoff" not in body
                or "str_commuserstatus_underbattle" not in body
                or "[fm] %s" not in body or "[sm] %s" not in body
                or "[f] %s" not in body or "[s] %s" not in body
                or "0x777777" not in body or "0xffffff" not in body):
            raise AssertionError("Fresh pseudocode no longer supports observed user-status labels")
    if ("fun_588424d0()" not in panel or "fun_58888f10()" not in panel
            or "+ 0x18" not in panel or "+ 0x90" not in panel):
        raise AssertionError("Fresh pseudocode no longer supports panel child/list updates")
    for offset in ("0xdc", "0xe0", "0xe4", "0xe8", "0xec"):
        if f"param_1 + {offset}" not in reset:
            raise AssertionError(f"Five-child reset no longer includes +{offset}")
    if reset.count("& 0xfff0") != 5:
        raise AssertionError("Five-child reset no longer clears exactly five low nibbles")
    parent = PARENT_C.read_text(encoding="utf-8").lower()
    if (parent.count("fun_588424d0();") != 3
            or parent.count("fun_58842b10();") != 1):
        raise AssertionError("Matched-parent pseudocode no longer shows the four refresh calls")


def emitted_bytes(path):
    text = path.read_text(encoding="utf-8")
    return bytes(int(value, 16) for value in
                 re.findall(r"__asm _emit 0x([0-9A-Fa-f]{2})", text))


def verify_matches():
    if MAIN_COMMUNICATOR_USER_STATUS_ADDRESSES != tuple(
            f"{function:08X}" for function in FUNCTIONS):
        raise AssertionError("The selected communicator user-status slice changed")
    if set(MAIN_COMMUNICATOR_USER_STATUS_EVIDENCE) != set(MAIN_COMMUNICATOR_USER_STATUS_ADDRESSES):
        raise AssertionError("Per-function source evidence is incomplete")

    inventory = {
        address(row["address"]): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {address(item["address"]): item for item in catalog["matches"]}
    matched = {function for function, item in records.items()
               if item.get("verified_by") == MARKER}
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True

    for function, ranges in RANGES.items():
        record = records.get(function)
        inventory_row = inventory.get(function)
        size = sum(item[1] for item in ranges)
        expected_segments = [{"address": f"{start:08X}", "size": part_size}
                             for start, part_size, _ in ranges]
        actual_segments = [
            {"address": item["address"].upper(), "size": int(item["size"])}
            for item in (record or {}).get("segments", [])
        ]
        if (record is None or inventory_row is None
                or record.get("verified_by") != MARKER
                or int(inventory_row["size"]) != size
                or int(record["size"]) != size
                or actual_segments != expected_segments
                or record.get("evidence") != MAIN_COMMUNICATOR_USER_STATUS_EVIDENCE[
                    f"{function:08X}"]):
            raise AssertionError(f"{function:08X} is not recorded with the exact matched ranges/evidence")
        code = b"".join(image[start - BASE:start - BASE + part_size]
                         for start, part_size, _ in ranges)
        source = ROOT / record["source"]
        if emitted_bytes(source) != code:
            raise AssertionError(f"Emitted source bytes differ from Main.dll at {function:08X}")
        instructions = []
        for start, part_size, expected_count in ranges:
            segment = image[start - BASE:start - BASE + part_size]
            decoded = list(decoder.disasm(segment, start))
            if (len(segment) != part_size or len(decoded) != expected_count
                    or sum(item.size for item in decoded) != part_size):
                raise AssertionError(f"Instruction coverage changed at {function:08X}/{start:08X}")
            instructions.extend(decoded)
        actual_calls = Counter(
            item.operands[0].imm & 0xFFFFFFFF
            for item in instructions
            if item.id == X86_INS_CALL and item.operands
            and item.operands[0].type == X86_OP_IMM
        )
        if actual_calls != DIRECT_TARGET_COUNTS[function]:
            raise AssertionError(f"Mapped direct calls changed at {function:08X}")
        if any(target not in matched for target in actual_calls):
            raise AssertionError(f"Unmatched direct dependency from {function:08X}")

    if PARENT not in matched:
        raise AssertionError("The byte-matched communicator panel handler is missing")
    parent = records[PARENT]
    parent_ranges = tuple((start, start + size)
                          for start, size in record_ranges(parent))
    for site, target in PARENT_CALLS.items():
        if not any(start <= site < end for start, end in parent_ranges):
            raise AssertionError(f"Parent caller range omits {site:08X}")
        instruction = instruction_at(image, decoder, site)
        if (instruction.id != X86_INS_CALL or not instruction.operands
                or instruction.operands[0].type != X86_OP_IMM
                or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
            raise AssertionError(f"Mapped parent call differs at {site:08X}")

    def u32(address_value):
        return struct.unpack_from("<I", image, address_value - BASE)[0]

    if (u32(VTABLE + 0x04) != 0x58844CA0
            or u32(VTABLE + 0x18) != PARENT):
        raise AssertionError("Config-panel vtable slots +0x04/+0x18 changed")
    locator = u32(VTABLE - 4)
    descriptor = u32(locator + 12)
    name_start = descriptor + 8 - BASE
    name_end = image.find(b"\0", name_start)
    if name_end < name_start or image[name_start:name_end].decode("ascii") != VTABLE_TYPE:
        raise AssertionError("RTTI no longer identifies the communicator config panel")


def record_ranges(record):
    if record.get("segments"):
        return tuple((address(segment["address"]), int(segment["size"]))
                     for segment in record["segments"])
    return ((address(record["address"]), int(record["size"])),)


def instruction_at(image, decoder, site):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
    if instruction is None or instruction.address != site:
        raise AssertionError(f"No instruction at mapped call site {site:08X}")
    return instruction


def main():
    verify_exports()
    verify_reconstructed_behavior()
    verify_matches()
    print(
        "PASS CPannelCommunicatorConfigPannel user-status slice: 4 functions / "
        "1,922 byte-identical bytes / 543 instructions; two fresh Ghidra "
        "exports, 41 call edges each, RTTI/vtable slots, and open direct-call "
        "closure verified."
    )


if __name__ == "__main__":
    main()
