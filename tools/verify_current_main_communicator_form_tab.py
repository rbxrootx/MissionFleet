"""Verify the mapped FormTab RTTI, exact bodies, and direct-transfer closure."""
import csv
import hashlib
import json
import struct
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM, X86_OP_MEM

try:
    from .build_current_main_verifications import (
        MAIN_COMMUNICATOR_FORM_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_FORM_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )
except ImportError:
    from build_current_main_verifications import (
        MAIN_COMMUNICATOR_FORM_TAB_ADDRESSES,
        MAIN_COMMUNICATOR_FORM_TAB_EVIDENCE,
        SOURCE_COMPILER,
    )


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BODY = ROOT / "config/NF2_2026/current-main-form-tab-body-exports.tsv"
EDGES = ROOT / "config/NF2_2026/current-main-form-tab-call-edges.tsv"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
FUNCTIONS = {int(value, 16) for value in MAIN_COMMUNICATOR_FORM_TAB_ADDRESSES}
ROOTS = {0x58829690, 0x588296B0, 0x58829B40, 0x5882A1C0, 0x58829BE0, 0x5882B340}
EXPORTS = {"58758EE0-FRESH", "587CEF70-FRESH"}
MARKER = "objdiff-3.8.0-byte-identical"
VTABLE = 0x5899DED8
VTABLE_ENTRIES = (0x58829690, 0x588296B0, 0x58829B40, 0x5882A1C0,
                  0x58829BE0, 0x58902FE0, 0x5882B340)
CONSTRUCTOR_EDGE = (0x58843380, 0x5884425C, 0x5882A730)


def rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def ranges(record):
    if record.get("segments"):
        return tuple(sorted((int(segment["address"], 16), int(segment["size"]))
                            for segment in record["segments"]))
    return ((int(record["address"], 16), int(record["size"])),)


def u32(image, address):
    offset = address - BASE
    if offset < 0 or offset + 4 > len(image):
        raise AssertionError(f"Address outside mapped image: {address:08X}")
    return struct.unpack_from("<I", image, offset)[0]


def decode(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if (not instructions or instructions[0].address != start
            or sum(item.size for item in instructions) != size
            or instructions[-1].address + instructions[-1].size != start + size):
        raise AssertionError(f"Incomplete mapped x86 range {start:08X}+{size}")
    return instructions


def main():
    image = IMAGE.read_bytes()
    if u32(image, 0x5899DED4) != 0x589A8310:
        raise AssertionError("FormTab complete-object locator pointer changed")
    if tuple(u32(image, 0x589A8310 + offset) for offset in (0, 4, 8, 12, 16)) != (
            0, 0, 0, 0x589CC5A4, 0x589A8324):
        raise AssertionError("FormTab complete-object locator changed")
    name = b".?AVCPannelCommunicatorConfigFormTab@@\0"
    if image[0x589CC5A4 - BASE + 8:0x589CC5A4 - BASE + 8 + len(name)] != name:
        raise AssertionError("FormTab RTTI name changed")
    if tuple(u32(image, VTABLE + i * 4) for i in range(7)) != VTABLE_ENTRIES:
        raise AssertionError("FormTab primary vtable changed")

    body_exports = defaultdict(lambda: defaultdict(list))
    counts = defaultdict(dict)
    for row in rows(BODY):
        export, function = row["export"], int(row["function"], 16)
        start, size, count = int(row["start"], 16), int(row["length"]), int(row["instruction_count"])
        if function not in FUNCTIONS or size <= 0 or int(row["instruction_bytes"]) != size:
            raise AssertionError(f"Unexpected or incomplete body row: {row}")
        body_exports[export][function].append((start, size))
        counts[export][(function, start, size)] = count
    if set(body_exports) != EXPORTS or counts["58758EE0-FRESH"] != counts["587CEF70-FRESH"]:
        raise AssertionError("The two Ghidra body exports disagree")
    first = {function: tuple(sorted(parts)) for function, parts in body_exports["58758EE0-FRESH"].items()}
    second = {function: tuple(sorted(parts)) for function, parts in body_exports["587CEF70-FRESH"].items()}
    if first != second or set(first) != FUNCTIONS:
        raise AssertionError("The two Ghidra body range sets disagree")
    if (sum(map(len, first.values())) != 16
            or sum(size for parts in first.values() for _, size in parts) != 5667
            or sum(counts["58758EE0-FRESH"].values()) != 1695):
        raise AssertionError("FormTab body totals changed")

    edge_exports = defaultdict(lambda: {"CALL": set(), "DATA": set()})
    terminators = defaultdict(set)
    for row in rows(EDGES):
        export, kind = row["export"], row["kind"]
        if export not in EXPORTS or kind not in {"CALL", "DATA"}:
            raise AssertionError(f"Unexpected edge row: {row}")
        caller, site, target = (int(row[field], 16) for field in ("function", "site", "target"))
        target_function = int(row["target_function"], 16) if row["target_function"] else 0
        if caller not in FUNCTIONS and (kind != "CALL" or (caller, site, target) != CONSTRUCTOR_EDGE):
            raise AssertionError(f"Unexpected supporting edge: {row}")
        edge_exports[export][kind].add((caller, site, target, target_function, row["type"]))
        if row["type"] == "CALL_TERMINATOR":
            terminators[export].add((caller, site, target))
    if set(edge_exports) != EXPORTS or edge_exports["58758EE0-FRESH"] != edge_exports["587CEF70-FRESH"]:
        raise AssertionError("The two Ghidra edge exports disagree")
    if terminators["58758EE0-FRESH"] != terminators["587CEF70-FRESH"]:
        raise AssertionError("The two Ghidra terminator sets disagree")
    calls = edge_exports["58758EE0-FRESH"]["CALL"]
    selected = {edge for edge in calls if edge[0] in FUNCTIONS}
    data = edge_exports["58758EE0-FRESH"]["DATA"]
    if (len(selected), len(data), len(terminators["58758EE0-FRESH"])) != (203, 6, 3):
        raise AssertionError("FormTab edge totals changed")
    if len(calls) != 204 or not any(edge[:3] == CONSTRUCTOR_EDGE for edge in calls):
        raise AssertionError("Matched parent constructor call changed")

    records = {int(record["address"], 16): record for record in
               json.loads(CATALOG.read_text(encoding="utf-8"))["matches"]}
    inventory = {int(row["address"], 16): row for row in rows(INVENTORY)
                 if row["component"] == "client-main-current"}
    if set(MAIN_COMMUNICATOR_FORM_TAB_EVIDENCE) != set(MAIN_COMMUNICATOR_FORM_TAB_ADDRESSES):
        raise AssertionError("FormTab evidence set changed")
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    direct = set()
    direct_tail_jumps = set()
    terminator_instructions = {}
    indirect = defaultdict(set)
    for function, parts in first.items():
        record, item = records.get(function), inventory.get(function)
        if record is None or item is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing byte-matched FormTab function {function:08X}")
        if (ranges(record) != parts or int(record["size"]) != int(item["size"])
                or sum(size for _, size in parts) != int(item["size"])):
            raise AssertionError(f"FormTab body range mismatch at {function:08X}")
        if record.get("source_compiler") != SOURCE_COMPILER:
            raise AssertionError(f"Compiler provenance changed at {function:08X}")
        if record.get("evidence") != MAIN_COMMUNICATOR_FORM_TAB_EVIDENCE[f"{function:08X}"]:
            raise AssertionError(f"Evidence changed at {function:08X}")
        source = ROOT / record["source"]
        if hashlib.sha256(source.read_bytes()).hexdigest() != record.get("source_sha256"):
            raise AssertionError(f"Source hash changed at {function:08X}")
        for start, size in parts:
            instructions = decode(image, decoder, start, size)
            if len(instructions) != counts["58758EE0-FRESH"][(function, start, size)]:
                raise AssertionError(f"Instruction count changed at {start:08X}")
            for instruction in instructions:
                if instruction.id not in {X86_INS_CALL, X86_INS_JMP} or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type == X86_OP_IMM:
                    edge = (function, instruction.address, operand.imm & 0xFFFFFFFF)
                    if edge in terminators["58758EE0-FRESH"]:
                        terminator_instructions[edge] = instruction.id
                    if instruction.id == X86_INS_CALL or edge in terminators["58758EE0-FRESH"]:
                        direct.add(edge)
                    if instruction.id == X86_INS_JMP and not any(
                            part_start <= edge[2] < part_start + part_size
                            for part_start, part_size in parts):
                        direct_tail_jumps.add(edge)
                elif instruction.id == X86_INS_CALL:
                    indirect[function].add(instruction.address)
    if direct != {edge[:3] for edge in selected}:
        raise AssertionError("Mapped direct transfers differ from Ghidra edge exports")
    expected_tail = {(0x5882B040, 0x5882B2E8, 0x5882A420)}
    if (set(terminator_instructions) != terminators["58758EE0-FRESH"]
            or direct_tail_jumps != expected_tail
            or any(kind != (X86_INS_JMP if edge in expected_tail else X86_INS_CALL)
                   for edge, kind in terminator_instructions.items())):
        raise AssertionError(
            f"FormTab terminators or direct tail jumps changed: "
            f"terminators={terminator_instructions}, jumps={sorted(direct_tail_jumps)}")
    graph = defaultdict(set)
    boundary = set()
    for caller, site, target, target_function, _ in selected:
        if target_function in FUNCTIONS:
            graph[caller].add(target_function)
        else:
            boundary.add(target_function)
            if records.get(target_function, {}).get("verified_by") != MARKER:
                raise AssertionError(f"Unmatched outgoing boundary {target_function:08X}")
    reached, pending = set(ROOTS), deque(ROOTS)
    while pending:
        for target in graph[pending.popleft()] - reached:
            reached.add(target)
            pending.append(target)
    if reached != FUNCTIONS or len(boundary) != 22:
        raise AssertionError("FormTab open closure changed")
    if sum(edge[3] in FUNCTIONS for edge in selected) != 12:
        raise AssertionError("FormTab internal transfer count changed")
    for caller, site, target, _, _ in data:
        if u32(image, site) != target:
            raise AssertionError(f"Mapped vtable reference changed at {site:08X}")
    for support in (0x5882A730, 0x58843380, 0x58754D60):
        if records.get(support, {}).get("verified_by") != MARKER:
            raise AssertionError(f"Supporting matched caller changed: {support:08X}")
    if records.get(0x58754E80, {}).get("verified_by") == MARKER:
        raise AssertionError("Previously unmatched incoming caller changed; update FormTab scope notes")
    constructor = [instruction for start, size in ranges(records[0x5882A730])
                   for instruction in decode(image, decoder, start, size)
                   if instruction.address == 0x5882A79D]
    if (len(constructor) != 1 or constructor[0].mnemonic != "mov"
            or constructor[0].operands[1].type != X86_OP_IMM
            or constructor[0].operands[1].imm & 0xFFFFFFFF != VTABLE):
        raise AssertionError("Matched constructor vtable write changed")
    for caller, site, target in (CONSTRUCTOR_EDGE,
                                 (0x58754D60, 0x58754D74, 0x58753CC0)):
        instructions = [instruction for start, size in ranges(records[caller])
                        for instruction in decode(image, decoder, start, size)
                        if instruction.address == site]
        if (len(instructions) != 1 or instructions[0].id != X86_INS_CALL
                or instructions[0].operands[0].type != X86_OP_IMM
                or instructions[0].operands[0].imm & 0xFFFFFFFF != target):
            raise AssertionError(f"Matched incoming call changed at {site:08X}")
    print("verified FormTab RTTI, seven vtable slots, constructor path, and two export snapshots")
    print("verified 14 byte-identical functions / 5,667 bytes / 1,695 instructions across 16 ranges")
    print(f"verified 203 direct transfers (12 internal, 191 to 22 matched targets), 6 data refs; {sum(map(len, indirect.values()))} unresolved indirect calls")


if __name__ == "__main__":
    main()
