"""Verify the shell-map secondary fallback against fresh Ghidra evidence."""
import csv
import json
from collections import defaultdict
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

try:
    from .verify_current_main_shell_map_object_update_closure import verify_rtti
except ImportError:
    from verify_current_main_shell_map_object_update_closure import verify_rtti


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
BODY_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-shell-map-secondary-fallback-body-exports.tsv"
)
EDGE_MANIFEST = ROOT / (
    "config/NF2_2026/current-main-shell-map-secondary-fallback-call-edges.tsv"
)
SOURCE_PATH = ROOT / "src/client-current/Main/FUN_587754e0.cpp"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTION = 0x587754E0
CALLER = 0x58775980
EXPECTED_RANGE = (FUNCTION, 520, 151)
EXPECTED_HELPER_CALLS = {
    0x58775526: 0x5897CC72,
    0x58775544: 0x5897CC72,
    0x58775553: 0x5897CC72,
    0x5877556A: 0x5897CC72,
    0x5877557A: 0x5897CC72,
    0x58775598: 0x5897CC72,
    0x587755A8: 0x5897CC72,
    0x587755D8: 0x587A5080,
    0x587755EF: 0x587A5080,
    0x58775603: 0x587A5080,
    0x5877561D: 0x587A5080,
    0x58775637: 0x587A5080,
    0x5877565B: 0x587A5080,
    0x5877566B: 0x587A5080,
    0x5877567B: 0x587A5080,
    0x58775696: 0x587A5080,
    0x587756A6: 0x587A5080,
    0x587756B8: 0x5897CC72,
    0x587756C8: 0x5897CC72,
}
EXPECTED_PATH_CALLS = {
    (0x588D4300, 0x588D4EC5, 0x588D31B0),
    (0x588D31B0, 0x588D3285, CALLER),
    (0x588D31B0, 0x588D331A, CALLER),
    (CALLER, 0x58775BD0, 0x587756F0),
    (CALLER, 0x58775BE8, FUNCTION),
    (CALLER, 0x58775BFD, 0x587752D0),
}
EXPECTED_EXPORTS = {"58758EE0", "587CEF70"}
MATCHED_BOUNDARY = {
    0x588D4300,
    0x588D31B0,
    CALLER,
    0x587756F0,
    0x587752D0,
    0x5897CC72,
    0x587A5080,
}


def read_manifests():
    ranges_by_export = defaultdict(dict)
    with BODY_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            address = int(row["function"], 16)
            if address != FUNCTION:
                raise AssertionError(f"Unexpected Ghidra body in manifest: {row}")
            body = (
                int(row["start"], 16),
                int(row["length"]),
                int(row["instruction_count"]),
            )
            if int(row["instruction_bytes"]) != body[1]:
                raise AssertionError(f"Incomplete Ghidra body coverage: {row}")
            if address in ranges_by_export[export]:
                raise AssertionError(f"Duplicate Ghidra body row: {row}")
            ranges_by_export[export][address] = body
    if set(ranges_by_export) != EXPECTED_EXPORTS:
        raise AssertionError("Expected two independent fresh Ghidra body exports")
    if any(rows != {FUNCTION: EXPECTED_RANGE} for rows in ranges_by_export.values()):
        raise AssertionError("Ghidra body range or instruction count changed")
    if ranges_by_export["58758EE0"] != ranges_by_export["587CEF70"]:
        raise AssertionError("Independent fresh Ghidra body exports disagree")

    edges_by_export = defaultdict(set)
    with EDGE_MANIFEST.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            export = row["export"].upper()
            if row["kind"] != "CALL":
                continue
            edges_by_export[export].add(
                (
                    int(row["function"], 16),
                    int(row["site"], 16),
                    int(row["target"], 16),
                )
            )
    if set(edges_by_export) != EXPECTED_EXPORTS:
        raise AssertionError("Expected two independent fresh Ghidra call-edge exports")
    if edges_by_export["58758EE0"] != edges_by_export["587CEF70"]:
        raise AssertionError("Independent fresh Ghidra call-edge exports disagree")

    helper_edges = {
        (FUNCTION, site, target)
        for site, target in EXPECTED_HELPER_CALLS.items()
    }
    if edges_by_export["58758EE0"] != helper_edges | EXPECTED_PATH_CALLS:
        raise AssertionError("The helper calls or matched caller path changed")
    return edges_by_export["58758EE0"]


def load_catalog():
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    return inventory, records


def verify_call_instruction(image, decoder, site, target):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 5], site, count=1), None)
    if instruction is None or instruction.id != X86_INS_CALL:
        raise AssertionError(f"Mapped call site is not a direct CALL: {site:08X}")
    if instruction.size != 5 or instruction.operands[0].type != X86_OP_IMM:
        raise AssertionError(f"Mapped call is not a five-byte direct call: {site:08X}")
    if instruction.operands[0].imm & 0xFFFFFFFF != target:
        raise AssertionError(f"Mapped call target changed at {site:08X}")


def main():
    read_manifests()
    image = IMAGE_PATH.read_bytes()
    verify_rtti(image)
    code = image[FUNCTION - BASE:FUNCTION - BASE + EXPECTED_RANGE[1]]
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    instructions = list(decoder.disasm(code, FUNCTION))
    if (
        sum(instruction.size for instruction in instructions) != EXPECTED_RANGE[1]
        or len(instructions) != EXPECTED_RANGE[2]
        or instructions[-1].address + instructions[-1].size
        != FUNCTION + EXPECTED_RANGE[1]
    ):
        raise AssertionError("Mapped instruction coverage disagrees with Ghidra")

    mapped_calls = {
        instruction.address: instruction.operands[0].imm & 0xFFFFFFFF
        for instruction in instructions
        if instruction.id == X86_INS_CALL
        and instruction.operands
        and instruction.operands[0].type == X86_OP_IMM
    }
    if mapped_calls != EXPECTED_HELPER_CALLS:
        raise AssertionError("Mapped helper calls disagree with fresh Ghidra edges")
    if sum(instruction.id == X86_INS_CALL for instruction in instructions) != len(
        EXPECTED_HELPER_CALLS
    ):
        raise AssertionError("Unexpected indirect call in the helper body")

    inventory, records = load_catalog()
    for address in MATCHED_BOUNDARY | {FUNCTION}:
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Required byte-matched boundary is missing: {address:08X}")
    if inventory.get(FUNCTION, {}).get("size") != "520":
        raise AssertionError("The function inventory no longer identifies a 520-byte body")
    if not SOURCE_PATH.is_file():
        raise AssertionError("The instruction-stream candidate source is missing")
    if records[FUNCTION].get("source") != "src/client-current/Main/FUN_587754e0.cpp":
        raise AssertionError("The catalog points to a different candidate source")

    for _, site, target in EXPECTED_PATH_CALLS:
        verify_call_instruction(image, decoder, site, target)

    print(
        "Verified FUN_587754e0: 520 bytes / 151 instructions, 19 calls to "
        "byte-matched helpers, and its gated position in the RTTI-rooted "
        "shell-map fallback chain."
    )


if __name__ == "__main__":
    main()
