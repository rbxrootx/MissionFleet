"""Verify the /e and /enter chat-input command slice against Main.dll."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM, X86_OP_MEM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x587F7000, 0x587B78D0, 0x587B7E70, 0x587EE9C0)
RANGES = {
    0x587F7000: ((0x587F7000, 570, 180), (0x587F7240, 365, 114)),
    0x587B78D0: ((0x587B78D0, 93, 43),),
    0x587B7E70: ((0x587B7E70, 121, 41), (0x587B7EF0, 61, 23),
                 (0x587B7F30, 149, 53)),
    0x587EE9C0: ((0x587EE9C0, 62, 25),),
}
TOTAL_SIZE = sum(size for ranges in RANGES.values() for _, size, _ in ranges)
TOTAL_INSTRUCTIONS = sum(count for ranges in RANGES.values()
                         for _, _, count in ranges)
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-user-chat-enter-command-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-user-chat-enter-command-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
PARENT_DECOMP = FRESH_DIR / "587fc9c0-ghidra.c"
ROOT_DECOMP = FRESH_DIR / "frontier-587f7000-fresh.c"
MARKER = "objdiff-3.8.0-byte-identical"

DIRECT_TARGET_COUNTS = {
    0x587F7000: {
        0x5897CBDA: 2, 0x5897CC48: 2, 0x5897CCA0: 1,
        0x5874BA60: 3, 0x587EE9C0: 2, 0x587B7E70: 1,
        0x587B78D0: 1, 0x5890BD90: 1, 0x5875F940: 1,
    },
    0x587B78D0: {},
    0x587B7E70: {0x5897CC48: 3, 0x58970C70: 1, 0x5897CBDA: 1},
    0x587EE9C0: {},
}
EXPECTED_INCOMING = {
    0x587F7000: {(0x587FC9C0, 0x587FD674)},
    0x587B78D0: {(0x587F7000, 0x587F72C5), (0x58890110, 0x588921CD)},
    0x587B7E70: {(0x587F7000, 0x587F72AA), (0x58890110, 0x588921A3),
                 (0x58890110, 0x588921BC)},
    0x587EE9C0: {(0x587F7000, 0x587F7212), (0x587F7000, 0x587F7326),
                 (0x588AB330, 0x588AB48B)},
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def expected_bodies():
    rows = set()
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        source = read_tsv(FRESH_DIR / f"{project}-fresh-function-bodies.tsv")
        for function, ranges in RANGES.items():
            matches = [row for row in source
                       if int(row["function"], 16) == function]
            actual = tuple((int(row["start"], 16), int(row["length"]),
                            int(row["instruction_bytes"]),
                            int(row["instruction_count"])) for row in matches)
            expected = tuple((start, size, size, count)
                             for start, size, count in ranges)
            if actual != expected:
                raise AssertionError(
                    f"Fresh body ranges changed for {function:08X} in {project}: {actual}"
                )
            rows.update((export, function, start, size, size, count)
                        for start, size, count in ranges)
    return rows


def expected_edges():
    rows = set()
    closure = set(FUNCTIONS)
    for export in EXPORTS:
        project = export.removesuffix("-fresh")
        source = read_tsv(FRESH_DIR / f"{project}-fresh-function-edges.tsv")
        selected = [row for row in source
                    if int(row["function"], 16) in closure
                    or int(row["target"], 16) in closure]
        for function, expected_incoming in EXPECTED_INCOMING.items():
            actual_incoming = {
                (int(row["function"], 16), int(row["site"], 16))
                for row in selected if int(row["target"], 16) == function
            }
            if actual_incoming != expected_incoming:
                raise AssertionError(
                    f"Fresh incoming edges changed for {function:08X} in {project}"
                )
        for function, expected_counts in DIRECT_TARGET_COUNTS.items():
            actual_counts = {}
            for row in selected:
                if int(row["function"], 16) == function:
                    target = int(row["target"], 16)
                    actual_counts[target] = actual_counts.get(target, 0) + 1
            if actual_counts != expected_counts:
                raise AssertionError(
                    f"Fresh direct dependencies changed for {function:08X} "
                    f"in {project}: {actual_counts}"
                )
        rows.update((export, row["kind"], int(row["function"], 16),
                     int(row["site"], 16), int(row["target"], 16), row["type"])
                    for row in selected)
    return rows


def verify_exports():
    expected_body_rows = expected_bodies()
    actual_body_rows = {
        (row["export"], int(row["function"], 16), int(row["start"], 16),
         int(row["length"]), int(row["instruction_bytes"]),
         int(row["instruction_count"]))
        for row in read_tsv(BODY_EXPORTS)
    }
    if actual_body_rows != expected_body_rows:
        raise AssertionError("Checked-in body rows differ from the fresh projects")

    expected_edge_rows = expected_edges()
    actual_edge_rows = {
        (row["export"], row["kind"], int(row["function"], 16),
         int(row["site"], 16), int(row["target"], 16), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edge_rows != expected_edge_rows:
        raise AssertionError("Checked-in call edges differ from the fresh projects")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if sum(item.size for item in instructions) != size:
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


def verify_matches(image, decoder):
    inventory = {
        int(row["address"], 16): row
        for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {address for address, record in records.items()
               if record.get("verified_by") == MARKER}

    actual_body_size = 0
    actual_instruction_count = 0
    mapped_calls = {}
    all_ranges = {}
    for function, ranges in RANGES.items():
        record = records.get(function)
        expected_ranges = tuple((start, size) for start, size, _ in ranges)
        if (record is None or function not in matched or function not in inventory
                or int(inventory[function]["size"]) != sum(size for _, size, _ in ranges)
                or record_ranges(record) != expected_ranges):
            raise AssertionError(f"{function:08X} is not recorded with exact matched ranges")
        body = []
        for start, size, count in ranges:
            instructions = decode_range(image, decoder, start, size)
            if (len(instructions) != count or not instructions
                    or instructions[0].address != start
                    or instructions[-1].address + instructions[-1].size != start + size):
                raise AssertionError(f"Mapped Ghidra range changed at {start:08X}")
            body.extend(instructions)
            actual_body_size += size
            actual_instruction_count += len(instructions)
        all_ranges[function] = body

        direct = {}
        indirect = []
        for instruction in body:
            if instruction.id != X86_INS_CALL:
                continue
            if instruction.operands[0].type == X86_OP_IMM:
                target = instruction.operands[0].imm & 0xFFFFFFFF
                direct[instruction.address] = target
                if target not in FUNCTIONS and target not in matched:
                    raise AssertionError(
                        f"Unmatched direct dependency {function:08X}->{target:08X}"
                    )
            else:
                indirect.append(instruction)
        counts = {}
        for target in direct.values():
            counts[target] = counts.get(target, 0) + 1
        if counts != DIRECT_TARGET_COUNTS[function]:
            raise AssertionError(f"Mapped direct dependencies changed for {function:08X}: {counts}")
        expected_count = 1 if function == 0x587F7000 else 0
        if len(indirect) != expected_count:
            raise AssertionError(f"Unexpected indirect-call count in {function:08X}")
        if indirect:
            call = indirect[0]
            if (call.address != 0x587F734E or call.operands[0].type != X86_OP_MEM
                    or call.op_str != "dword ptr [0x5898c030]"):
                raise AssertionError("The unresolved callback at [0x5898C030] changed")
        mapped_calls[function] = direct

    if (actual_body_size != TOTAL_SIZE
            or actual_instruction_count != TOTAL_INSTRUCTIONS):
        raise AssertionError("Subsystem total byte size or instruction count changed")

    expected_direct_calls = {
        function: {
            int(row["site"], 16): int(row["target"], 16)
            for row in read_tsv(EDGE_EXPORTS)
            if row["export"] == EXPORTS[0] and row["kind"] == "CALL"
            and int(row["function"], 16) == function
        }
        for function in FUNCTIONS
    }
    if mapped_calls != expected_direct_calls:
        raise AssertionError("Mapped direct calls differ from fresh Ghidra edge exports")

    for function, callers in EXPECTED_INCOMING.items():
        for caller, site in callers:
            code = image[site - BASE:site - BASE + 5]
            instructions = list(decoder.disasm(code, site))
            if (len(instructions) != 1 or instructions[0].id != X86_INS_CALL
                    or instructions[0].size != 5
                    or instructions[0].operands[0].type != X86_OP_IMM
                    or instructions[0].operands[0].imm & 0xFFFFFFFF != function):
                raise AssertionError(f"Mapped caller {caller:08X} edge changed at {site:08X}")

    required_matched_callers = (0x587FC9C0, 0x58890110)
    if any(caller not in matched for caller in required_matched_callers):
        raise AssertionError("A matched chat-input caller is missing its byte-match record")
    if 0x588AB330 in matched:
        raise AssertionError("FUN_588AB330 changed status; revise the recorded uncertainty")

    parent = records[0x587FC9C0]
    parent_by_address = {}
    for start, size in record_ranges(parent):
        parent_by_address.update({item.address: item
                                  for item in decode_range(image, decoder, start, size)})
    call = parent_by_address.get(0x587FD674)
    setup = parent_by_address.get(0x587FD672)
    if (call is None or call.id != X86_INS_CALL
            or call.operands[0].type != X86_OP_IMM
            or call.operands[0].imm & 0xFFFFFFFF != 0x587F7000
            or setup is None or (setup.mnemonic, setup.op_str) != ("mov", "ecx, ebx")):
        raise AssertionError("Matched input-handler call setup changed")

    def mapped_string_at_pointer(pointer_slot):
        pointer = int.from_bytes(image[pointer_slot - BASE:pointer_slot - BASE + 4], "little")
        raw = image[pointer - BASE:pointer - BASE + 80].split(b"\0", 1)[0]
        return raw.decode("ascii")

    if (mapped_string_at_pointer(0x589CC124) != "/e"
            or mapped_string_at_pointer(0x589CC128) != "/enter"):
        raise AssertionError("Mapped command string pointers changed")
    parent_source = PARENT_DECOMP.read_text(encoding="utf-8").lower()
    if (parent_source.count("fun_587f7000();") != 1
            or "dat_589cc124" not in parent_source
            or "dat_589cc128" not in parent_source):
        raise AssertionError("Fresh Ghidra input handler no longer shows this command route")
    root_source = ROOT_DECOMP.read_text(encoding="utf-8").lower()
    required_root_evidence = (
        "fun_587b78d0(pcvar9)",
        "fun_587b7e70(pcvar9,pcvar3)",
        "fun_587ee9c0(pcvar9)",
        "messagestring_userchat_not_allowed",
        "fun_58970c70(0x8001b111,0,0x50000,austack_50,0x49,0);",
    )
    if any(text not in root_source for text in required_root_evidence):
        raise AssertionError("Fresh Ghidra decomp no longer supports the recorded behavior")


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    print(
        f"User-chat /e and /enter subsystem verified: {TOTAL_SIZE} bytes / "
        f"{TOTAL_INSTRUCTIONS} instructions across four functions. Every direct "
        "dependency reaches matched code; the global callback at 0x5898C030 "
        "remains unresolved."
    )


if __name__ == "__main__":
    main()
