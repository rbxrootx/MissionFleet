"""Verify the RTTI-backed CPannelItemManager direct-call closure and byte matches."""
import hashlib
import json
import re
import struct
from collections import defaultdict
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

try:
    from .export_current_main_item_manager_vtable_manifests import (
        CALLER_EDGE, FRESH_C, FRESH_DIR, FRESH_LOG, FUNCTIONS, ROOTS,
        build_outputs, read_rows,
    )
    from .build_current_main_verifications import MAIN_ITEM_MANAGER_VTABLE_ADDRESSES
except ImportError:  # Support direct execution as a script.
    from export_current_main_item_manager_vtable_manifests import (
        CALLER_EDGE, FRESH_C, FRESH_DIR, FRESH_LOG, FUNCTIONS, ROOTS,
        build_outputs, read_rows,
    )
    from build_current_main_verifications import MAIN_ITEM_MANAGER_VTABLE_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
BODY_EXPORTS_PATH = ROOT / "config/NF2_2026/current-main-item-manager-vtable-body-exports.tsv"
EDGE_EXPORTS_PATH = ROOT / "config/NF2_2026/current-main-item-manager-vtable-call-edges.tsv"
ADDRESS_POINT = 0x5899F918
CLASS_LOCATOR = 0x589A8FE0
TYPE_DESCRIPTOR = 0x589CD010
CLASS_HIERARCHY = 0x589A8FF4
CLASS_NAME = ".?AVCPannelItemManager@@"
BASE_NAMES = (
    ".?AVCPannelItemManager@@", ".?AVCControlMenuScreen@@",
    ".?AVCMenuScreen@@", ".?AVCScreen@@",
)
SLOTS = (0x588826D0, 0x5887DA90, 0x5887A470, 0x5887A500,
         0x588826F0, 0x58902FE0, 0x58881680)
SLOT_REFS = tuple((function, ADDRESS_POINT + 4 * index)
                  for index, function in enumerate(SLOTS) if function in {int(x, 16) for x in ROOTS})
MARKER = "objdiff-3.8.0-byte-identical"
BODY_FIELDS = ("function", "start", "length", "instruction_bytes", "instruction_count")
EDGE_FIELDS = ("kind", "function", "site", "type", "target", "target_function")
REF_RE = re.compile(
    r"DumpFunctionRefs\.java> REF ([0-9a-fA-F]+) type=([A-Z_]+) "
    r"source=([A-Z_]+) caller=(?:FUN_[0-9a-fA-F]+@)?([0-9a-fA-F]+|none)"
)


def u32(image, address):
    return struct.unpack_from("<I", image, address - BASE)[0]


def type_name(image, address):
    start = address + 8 - BASE
    end = image.find(b"\0", start)
    if end < 0:
        raise AssertionError(f"Unterminated RTTI name at {address:08X}")
    return image[start:end].decode("ascii")


def require_call(decoder, image, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (instruction is None or instruction.id != X86_INS_CALL or not instruction.operands
            or instruction.operands[0].type != X86_OP_IMM
            or (instruction.operands[0].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Changed direct call at {site:08X} -> {target:08X}")


def require_vtable_store(decoder, image, site, target):
    instruction = next(decoder.disasm(image[site - BASE:site - BASE + 15], site), None)
    if (instruction is None or instruction.mnemonic != "mov" or not instruction.operands
            or instruction.operands[-1].type != X86_OP_IMM
            or (instruction.operands[-1].imm & 0xFFFFFFFF) != target):
        raise AssertionError(f"Missing ItemManager vtable store at {site:08X}")


def body_export_signature(rows):
    return sorted((row["export"], row["function"], row["start"], int(row["length"]),
                   int(row["instruction_bytes"]), int(row["instruction_count"])) for row in rows)


def edge_export_signature(rows):
    return sorted((row["export"], row["kind"], row["function"], row["site"], row["type"],
                   row["target"], row["target_function"]) for row in rows)


def main():
    if set(MAIN_ITEM_MANAGER_VTABLE_ADDRESSES) != FUNCTIONS:
        raise AssertionError("Builder and ItemManager verifier function sets disagree")
    generated, function_count, range_count, byte_count, instruction_count, call_count, data_count = build_outputs()
    for path, content in generated.items():
        if path.name == "item-manager-vtable-emission.tsv":
            continue
        if not path.is_file() or path.read_text(encoding="utf-8") != content:
            raise AssertionError(f"ItemManager evidence snapshot is stale: {path}")

    body_rows = read_rows(BODY_EXPORTS_PATH)
    edge_rows = read_rows(EDGE_EXPORTS_PATH)
    if {row["export"] for row in body_rows} != {"58758EE0-FRESH", "587CEF70-FRESH"}:
        raise AssertionError("Unexpected ItemManager independent body-export sources")
    if {row["export"] for row in edge_rows} != {"58758EE0-FRESH", "587CEF70-FRESH"}:
        raise AssertionError("Unexpected ItemManager independent edge-export sources")
    for export in ("58758EE0-FRESH", "587CEF70-FRESH"):
        if {row["function"] for row in body_rows if row["export"] == export} != FUNCTIONS:
            raise AssertionError(f"{export} omits an ItemManager closure body")
    if body_export_signature([row for row in body_rows if row["export"] == "58758EE0-FRESH"]) != \
            body_export_signature([dict(row, export="58758EE0-FRESH") for row in body_rows
                                   if row["export"] == "587CEF70-FRESH"]):
        raise AssertionError("The two independent ItemManager body manifests disagree")
    first_edges = [row for row in edge_rows if row["export"] == "58758EE0-FRESH"]
    second_edges = [dict(row, export="58758EE0-FRESH") for row in edge_rows
                    if row["export"] == "587CEF70-FRESH"]
    if edge_export_signature(first_edges) != edge_export_signature(second_edges):
        raise AssertionError("The two independent ItemManager edge manifests disagree")

    image = IMAGE_PATH.read_bytes()
    image_end = BASE + len(image)
    document = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {item["address"].upper(): item for item in document["matches"]}
    matched = {address for address, item in records.items() if item.get("verified_by") == MARKER}
    if not FUNCTIONS <= matched:
        raise AssertionError("Not every ItemManager closure method has a recorded byte match")
    body_by_function = defaultdict(list)
    for row in body_rows:
        if row["export"] == "58758EE0-FRESH":
            body_by_function[row["function"]].append(row)

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    outgoing = defaultdict(set)
    direct_calls = []
    direct_call_opcodes = 0
    indirect_calls = defaultdict(int)
    direct_transfers_to_matched = set()
    for address in sorted(FUNCTIONS):
        record = records[address]
        inventory_rows = body_by_function[address]
        expected_ranges = tuple(sorted((int(row["start"], 16), int(row["length"]))
                                       for row in inventory_rows))
        record_ranges = tuple(sorted((int(part["address"], 16), int(part["size"]))
                                      for part in record.get("segments", ())))
        if (record_ranges != expected_ranges or sum(size for _, size in expected_ranges) != int(record["size"])):
            raise AssertionError(f"Byte-match range metadata differs from Ghidra at {address}")
        source = ROOT / record["source"]
        if not source.is_file() or hashlib.sha256(source.read_bytes()).hexdigest() != record["source_sha256"]:
            raise AssertionError(f"Byte-match source hash changed at {address}")
        own_ranges = tuple((start, start + size) for start, size in expected_ranges)
        for row in sorted(inventory_rows, key=lambda item: int(item["start"], 16)):
            start, size = int(row["start"], 16), int(row["length"])
            code = image[start - BASE:start - BASE + size]
            instructions = list(decoder.disasm(code, start))
            if (len(code) != size or not instructions or sum(item.size for item in instructions) != size
                    or len(instructions) != int(row["instruction_count"])):
                raise AssertionError(f"Incomplete mapped instruction coverage at {start:08X}")
            for instruction in instructions:
                if instruction.id == X86_INS_CALL:
                    if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
                        indirect_calls[address] += 1
                        continue
                    target = instruction.operands[0].imm & 0xFFFFFFFF
                    direct_call_opcodes += 1
                    direct_calls.append((address, instruction.address, target))
                    if any(low <= target < high for low, high in own_ranges):
                        continue
                    if target in {int(item, 16) for item in FUNCTIONS}:
                        outgoing[address].add(f"{target:08X}")
                    elif f"{target:08X}" not in matched:
                        raise AssertionError(f"Unmatched direct call {instruction.address:08X} -> {target:08X}")
                    else:
                        direct_transfers_to_matched.add(instruction.address)
                elif instruction.id == X86_INS_JMP and instruction.operands \
                        and instruction.operands[0].type == X86_OP_IMM:
                    target = instruction.operands[0].imm & 0xFFFFFFFF
                    if any(low <= target < high for low, high in own_ranges):
                        continue
                    direct_calls.append((address, instruction.address, target))
                    if target in {int(item, 16) for item in FUNCTIONS}:
                        outgoing[address].add(f"{target:08X}")
                    elif BASE <= target < image_end and f"{target:08X}" not in matched:
                        raise AssertionError(f"Unmatched tail transfer {instruction.address:08X} -> {target:08X}")
                    elif f"{target:08X}" in matched:
                        direct_transfers_to_matched.add(instruction.address)

    call_edges = [row for row in first_edges if row["kind"] == "CALL" and row["function"] in FUNCTIONS]
    internal = [row for row in call_edges if row["target_function"] in FUNCTIONS]
    external = [row for row in call_edges if row["target_function"] not in FUNCTIONS]
    decoded_call_sites = {(source, f"{site:08X}", f"{target:08X}")
                         for source, site, target in direct_calls}
    exported_call_sites = {(row["function"], row["site"], row["target"]) for row in call_edges}
    if (len(call_edges) != 118 or len(direct_calls) != 118 or direct_call_opcodes != 117
            or len(direct_calls) - direct_call_opcodes != 1
            or len(internal) != 28
            or len(external) != 90 or any(row["target_function"] not in matched for row in external)):
        bad_targets = sorted({row["target_function"] for row in external
                              if row["target_function"] not in matched})
        raise AssertionError(
            f"ItemManager direct-transfer boundary changed: edges={len(call_edges)}/{len(direct_calls)}, "
            f"internal={len(internal)}, external={len(external)}, unmatched={bad_targets[:12]}, "
            f"export-only={sorted(exported_call_sites - decoded_call_sites)[:4]}, "
            f"decode-only={sorted(decoded_call_sites - exported_call_sites)[:4]}"
        )
    graph_from_exports = defaultdict(set)
    for row in call_edges:
        if row["target_function"] in FUNCTIONS:
            graph_from_exports[row["function"]].add(row["target_function"])
    closure = set(ROOTS)
    pending = list(ROOTS)
    while pending:
        for target in graph_from_exports[pending.pop()] - closure:
            closure.add(target)
            pending.append(target)
    if closure != FUNCTIONS:
        raise AssertionError(f"ItemManager vtable roots reach a changed closure: {sorted(closure ^ FUNCTIONS)}")
    if not any((row["function"], row["site"], row["target"]) ==
               ("58881680", "58881ACE", "58759E90") for row in call_edges):
        raise AssertionError("The guarded item-selection call to FUN_58759E90 changed")
    require_call(decoder, image, 0x58881ACE, 0x58759E90)
    if (len({(source, site, target) for source, site, target in direct_calls}) != 118
            or data_count != 6 or function_count != 20 or range_count != 25
            or byte_count != 6867 or instruction_count != 2240 or call_count != 118
            or sum(indirect_calls.values()) != 62):
        raise AssertionError("ItemManager body, instruction, or edge totals changed")

    # RTTI and vtable extent from the installed mapped Main.dll.
    if u32(image, ADDRESS_POINT - 4) != CLASS_LOCATOR:
        raise AssertionError("ItemManager primary address point no longer points to its COL")
    col = struct.unpack_from("<IIIII", image, CLASS_LOCATOR - BASE)
    if col != (0, 0, 0, TYPE_DESCRIPTOR, CLASS_HIERARCHY):
        raise AssertionError("ItemManager complete-object locator changed")
    if type_name(image, TYPE_DESCRIPTOR) != CLASS_NAME:
        raise AssertionError("ItemManager RTTI type descriptor changed")
    hierarchy = struct.unpack_from("<IIII", image, CLASS_HIERARCHY - BASE)
    if hierarchy[:3] != (0, 0, len(BASE_NAMES)):
        raise AssertionError("ItemManager inheritance descriptor changed")
    actual_bases = tuple(
        type_name(image, u32(image, u32(image, hierarchy[3] + 4 * index)))
        for index in range(hierarchy[2])
    )
    if actual_bases != BASE_NAMES:
        raise AssertionError(f"ItemManager RTTI base chain changed: {actual_bases}")
    actual_slots = tuple(u32(image, ADDRESS_POINT + 4 * index) for index in range(len(SLOTS)))
    if actual_slots != SLOTS or f"{SLOTS[5]:08X}" not in matched:
        raise AssertionError("ItemManager seven-slot primary vtable changed")
    if not image[0x5899F934 - BASE:].startswith(b"ITEM_NAME_REINFORCEITEM\0"):
        raise AssertionError("ItemManager vtable boundary no longer precedes localized item-name data")

    # Independent targeted Ghidra references tie each open method to its vtable slot.
    log_text = FRESH_LOG.read_text(encoding="utf-8", errors="replace").lower()
    for function, slot in SLOT_REFS:
        expected = f"ref {slot:08x} type=data source=default caller=none"
        if expected not in log_text:
            raise AssertionError(f"Fresh Ghidra lacks vtable slot reference {slot:08X}->{function:08X}")
    if "ref 58883ff9 type=data source=analysis caller=fun_58883f80@58883f80" not in log_text:
        raise AssertionError("Fresh Ghidra lacks the matched ItemManager constructor vtable-store reference")
    if "ref 5878ca20 type=unconditional_call source=default caller=fun_5878af40@5878af40" not in log_text:
        raise AssertionError("Fresh Ghidra lacks the matched ItemManager constructor caller")
    if CALLER_EDGE != ("5878AF40", "5878CA20", "58883F80"):
        raise AssertionError("ItemManager matched caller definition changed")
    if not {"58883F80", "5878AF40"} <= matched:
        raise AssertionError("ItemManager constructor path is no longer byte matched")
    require_vtable_store(decoder, image, 0x58883FF9, ADDRESS_POINT)
    require_call(decoder, image, 0x5878CA20, 0x58883F80)

    decomp = FRESH_C.read_text(encoding="utf-8", errors="replace").lower()
    for evidence in ("item_name_premiumship", "item_name_shipitem",
                     "textstring_transferingdatafromserver", "0x8001c004", "0x8001c005"):
        if evidence not in decomp:
            raise AssertionError(f"Fresh Ghidra behavior evidence is absent: {evidence}")

    indirect_total = sum(indirect_calls.values())
    print(
        f"verified RTTI-identified CPannelItemManager: {function_count} functions / "
        f"{byte_count:,} bytes / {instruction_count:,} instructions across {range_count} ranges; "
        f"{len(call_edges)} direct transfers ({direct_call_opcodes} CALL instructions, "
        f"{len(call_edges) - direct_call_opcodes} tail jumps; {len(internal)} internal, "
        f"{len(external)} to matched code), "
        f"{data_count} data references, {indirect_total} unresolved indirect calls; RTTI, seven slots, "
        "matched constructor path, fresh Ghidra evidence, and ObjDiff catalog coverage pass"
    )


if __name__ == "__main__":
    main()
