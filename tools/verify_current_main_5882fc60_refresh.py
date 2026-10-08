"""Verify the installed Main.dll tax/investment UI refresh closure."""

import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .build_current_main_verifications import (
        MAIN_TAX_INVESTMENT_REFRESH_EVIDENCE,
    )
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import (
        MAIN_TAX_INVESTMENT_REFRESH_EVIDENCE,
    )

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/current-main-5882fc60-refresh-body-ranges.tsv"
TRANSFER_PATH = ROOT / "config/NF2_2026/current-main-5882fc60-refresh-transfers.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ADDRESSES = (
    "5882FC60",
    "58785EA0", "58785ED0", "58785F00", "58785F30", "58785F60",
    "58785F90", "58785FC0", "58785FD0",
    "58786200", "58786210", "58786220", "58786230", "58786240",
    "58786320", "58786330", "587863B0", "58786430", "58786630",
)
EXPECTED_SIZES = {
    "5882FC60": 931,
    "58785EA0": 14, "58785ED0": 14, "58785F00": 14, "58785F30": 14,
    "58785F60": 14, "58785F90": 14, "58785FC0": 14, "58785FD0": 90,
    "58786200": 5, "58786210": 5, "58786220": 5, "58786230": 5,
    "58786240": 5, "58786320": 14, "58786330": 14, "587863B0": 5,
    "58786430": 5, "58786630": 14,
}
EXPECTED_INCOMING = {
    ("5882F270", "5882F2B4", "58785F90"),
    ("5882F350", "5882F394", "58785FC0"),
    ("58830010", "58830047", "58785F90"),
    ("58830010", "588300B0", "58785ED0"),
    ("58830010", "588300D1", "58785F30"),
    ("58830010", "588300F0", "58785F30"),
    ("58830010", "58830109", "58785F90"),
    ("58830010", "5883014A", "58785F90"),
    ("58830010", "588301B3", "58785ED0"),
    ("58830010", "588301D4", "58785F30"),
    ("58830280", "588302B7", "58785FC0"),
    ("58830280", "58830320", "58785F00"),
    ("58830280", "58830341", "58785F60"),
    ("58830280", "58830360", "58785F60"),
    ("58830280", "58830379", "58785FC0"),
    ("58830280", "588303BA", "58785FC0"),
    ("58830280", "58830423", "58785F00"),
    ("58830280", "58830444", "58785F60"),
    ("588C4210", "588C4DB0", "5882FC60"),
    ("588C4210", "588C4EC4", "5882FC60"),
}
MATCHED_EVENT_CALLS = {
    ("588C4210", "588C4DB0", "5882FC60", "0x8002311B"),
    ("588C4210", "588C4EC4", "5882FC60", "0x8002312B"),
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def call_target(image, decoder, site):
    offset = site - BASE
    instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
    if (instruction is None or instruction.address != site
            or instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM):
        raise AssertionError(f"Expected a direct CALL at {site:08X}")
    return instruction.operands[0].imm & 0xFFFFFFFF


def main():
    manifest = read_tsv(RANGE_PATH)
    selected = {int(address, 16) for address in ADDRESSES}
    if len(ADDRESSES) != 19 or len(selected) != 19:
        raise AssertionError("The selected 0x5882FC60 closure changed")
    if {int(row["function"], 16) for row in manifest} != selected:
        raise AssertionError("The range manifest does not cover the selected closure")

    ranges_by_function = {}
    instruction_total = 0
    for row in manifest:
        address = int(row["function"], 16)
        start = int(row["start"], 16)
        length = int(row["length"])
        count = int(row["instruction_count"])
        if (start != address or length != EXPECTED_SIZES[f"{address:08X}"]
                or int(row["instruction_bytes"]) != length or count <= 0):
            raise AssertionError(f"Unexpected or incomplete Ghidra body range: {row}")
        ranges_by_function[address] = ((start, length),)
        instruction_total += count
    total_bytes = sum(EXPECTED_SIZES.values())
    if len(manifest) != 19 or total_bytes != 1_196 or instruction_total != 371:
        raise AssertionError(
            f"Unexpected Ghidra body extent: {len(manifest)} ranges, "
            f"{total_bytes} bytes, {instruction_total} instructions"
        )

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, record in records.items()
        if record.get("verified_by") == MARKER
    }
    if not selected.issubset(matched):
        raise AssertionError(f"Unverified closure members: {sorted(selected - matched)}")

    actual_selected_transfers = set()
    checked_instructions = 0
    for function, ranges in ranges_by_function.items():
        for start, length in ranges:
            code = image[start - BASE:start - BASE + length]
            instructions = list(decoder.disasm(code, start))
            expected_count = next(
                int(row["instruction_count"])
                for row in manifest if int(row["function"], 16) == function
            )
            if (len(code) != length or len(instructions) != expected_count
                    or sum(item.size for item in instructions) != length
                    or not instructions or instructions[0].address != start
                    or instructions[-1].address + instructions[-1].size != start + length):
                raise AssertionError(f"Capstone coverage/count differs at {start:08X}")
            checked_instructions += len(instructions)
            for instruction in instructions:
                if (instruction.id not in (X86_INS_CALL, X86_INS_JMP)
                        or not instruction.operands
                        or instruction.operands[0].type != X86_OP_IMM):
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                if target in inventory:
                    actual_selected_transfers.add(
                        (f"{function:08X}", f"{instruction.address:08X}",
                         f"{target:08X}")
                    )

    edges = read_tsv(TRANSFER_PATH)
    if any(row["kind"] != "CALL" or row["type"] != "UNCONDITIONAL_CALL"
           for row in edges):
        raise AssertionError("The transfer manifest contains a non-call Ghidra edge")
    edge_tuples = {
        (row["function"].upper(), row["site"].upper(), row["target_function"].upper())
        for row in edges
    }
    incoming = {
        edge for edge in edge_tuples if edge[0] not in {f"{a:08X}" for a in selected}
        and int(edge[2], 16) in selected
    }
    outgoing = {
        edge for edge in edge_tuples if int(edge[0], 16) in selected
        and int(edge[2], 16) not in selected
    }
    internal = {
        edge for edge in edge_tuples if int(edge[0], 16) in selected
        and int(edge[2], 16) in selected
    }
    if incoming != EXPECTED_INCOMING:
        raise AssertionError("External incoming references differ from the audited Ghidra set")
    if (len(outgoing) != 33 or len(internal) != 23
            or edge_tuples != incoming | outgoing | internal):
        raise AssertionError(
            f"Unexpected transfer boundary: {len(incoming)} incoming, "
            f"{len(internal)} internal, {len(outgoing)} outgoing"
        )
    if actual_selected_transfers != internal | outgoing:
        raise AssertionError("Mapped direct transfers differ from Ghidra's closure edges")

    for source, site, target in edge_tuples:
        source_address = int(source, 16)
        site_address = int(site, 16)
        target_address = int(target, 16)
        if source_address not in inventory or target_address not in inventory:
            raise AssertionError(f"Transfer endpoint is absent from Main.dll inventory: {source} -> {target}")
        if call_target(image, decoder, site_address) != target_address:
            raise AssertionError(f"Mapped CALL differs from Ghidra transfer at {site}")
        if source_address in selected:
            if source_address not in matched:
                raise AssertionError(f"Unmatched source in closure: {source}")
            if target_address not in selected and target_address not in matched:
                raise AssertionError(f"Unresolved open callee at {site}: {target}")

    callers = {int(edge[0], 16) for edge in incoming}
    expected_callers = {0x5882F270, 0x5882F350, 0x58830010, 0x58830280, 0x588C4210}
    expected_matched_callers = {
        0x58830010, 0x58830280, 0x588C4210,
    }
    if callers != expected_callers or callers & matched != expected_matched_callers:
        raise AssertionError("The matched and unmatched incoming caller boundary changed")
    matched_parent_edges = {
        edge for edge in incoming if edge[0] == "588C4210"
    }
    expected_parent_edges = {
        (source, site, target)
        for source, site, target, _ in MATCHED_EVENT_CALLS
    }
    if matched_parent_edges != expected_parent_edges:
        raise AssertionError("The matched dispatcher callsites changed")
    parent = records.get(0x588C4210)
    if (parent is None or parent.get("verified_by") != MARKER
            or any(not any(start <= int(site, 16) < start + size
                           for start, size in record_ranges(parent))
                   for _, site, _, _ in MATCHED_EVENT_CALLS)):
        raise AssertionError("Matched dispatcher sites are not within verified FUN_588C4210")
    root_evidence = MAIN_TAX_INVESTMENT_REFRESH_EVIDENCE["5882FC60"]["called_by"]
    if any(site not in root_evidence or event not in root_evidence
           for _, site, _, event in MATCHED_EVENT_CALLS):
        raise AssertionError("Matched event/callsite evidence is incomplete")

    for address in selected:
        if address not in inventory or address not in records:
            raise AssertionError(f"Missing catalog or inventory record at {address:08X}")
        record = records[address]
        if (int(record["size"]) != EXPECTED_SIZES[f"{address:08X}"]
                or record.get("evidence") != MAIN_TAX_INVESTMENT_REFRESH_EVIDENCE[
                    f"{address:08X}"]
                or record.get("evidence", {}).get("called_by") is None
                or record.get("evidence", {}).get("behavior") is None
                or record.get("evidence", {}).get("uncertainty") is None):
            raise AssertionError(f"Incomplete match evidence or size at {address:08X}")

    print(
        f"Tax/investment refresh: {len(selected)} byte-identical functions / "
        f"{total_bytes} bytes in {len(manifest)} fresh Ghidra ranges; "
        f"{checked_instructions} instructions and {len(edge_tuples)} direct "
        "transfers checked; the matched dispatcher and paired update-event "
        "handlers plus two remaining unmatched callers recorded"
    )


if __name__ == "__main__":
    main()
