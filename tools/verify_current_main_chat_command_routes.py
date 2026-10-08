"""Verify the matched slash-command routes against installed Main.dll evidence."""
import csv
import json
from collections import Counter
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
FUNCTIONS = (0x587F5EE0, 0x587F60A0, 0x587F62A0, 0x587F73B0, 0x587B7FD0)
RANGES = {
    0x587F5EE0: ((0x587F5EE0, 419, 120), (0x587F6087, 18, 8)),
    0x587F60A0: ((0x587F60A0, 109, 32), (0x587F6110, 283, 82),
                 (0x587F6241, 90, 27)),
    0x587F62A0: ((0x587F62A0, 429, 124), (0x587F6463, 105, 30)),
    0x587F73B0: ((0x587F73B0, 378, 134),),
    0x587B7FD0: ((0x587B7FD0, 315, 113),),
}
TOTAL_SIZE = sum(size for ranges in RANGES.values() for _, size, _ in ranges)
TOTAL_INSTRUCTIONS = sum(count for ranges in RANGES.values()
                         for _, _, count in ranges)
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")
FRESH_DIR = ROOT / "var/current-main-next"
BODY_EXPORTS = ROOT / "config/NF2_2026/current-main-chat-command-routes-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/current-main-chat-command-routes-call-edges.tsv"
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
MARKER = "objdiff-3.8.0-byte-identical"

DIRECT_TARGET_COUNTS = {
    0x587F5EE0: Counter({
        0x5897CC48: 2, 0x5897152E: 1, 0x5897CD4C: 1,
        0x587B8110: 1, 0x587EE240: 1, 0x5897CC42: 1, 0x5897CBDA: 1,
    }),
    0x587F60A0: Counter({
        0x587F2A70: 1, 0x5897CC48: 2, 0x5897152E: 1,
        0x5897CD4C: 1, 0x587B8110: 1, 0x587EE240: 2,
        0x5897CC42: 1, 0x5897CBDA: 1,
    }),
    0x587F62A0: Counter({
        0x587F2A70: 1, 0x5897CC48: 2, 0x5897152E: 1,
        0x5897CD4C: 1, 0x587B8110: 1, 0x587EE240: 2,
        0x5897CC42: 1, 0x5897CBDA: 1,
    }),
    0x587F73B0: Counter({
        0x5897CCA0: 1, 0x5874BA60: 1, 0x587B7FD0: 1,
        0x587EE240: 1, 0x5897CBDA: 2, 0x5875F940: 1,
    }),
    0x587B7FD0: Counter({
        0x5897CC48: 2, 0x58970C70: 1, 0x5897CBDA: 1,
    }),
}
EXPECTED_INCOMING = {
    0x587F5EE0: {(0x587FC9C0, 0x587FD6B0)},
    0x587F60A0: {(0x587FC9C0, 0x587FD6A7)},
    0x587F62A0: {(0x587FC9C0, 0x587FD69E)},
    0x587F73B0: {(0x587FC9C0, 0x587FD668)},
    0x587B7FD0: {(0x587F73B0, 0x587F74DC), (0x58890110, 0x58892458)},
}
INDIRECT_CALLBACKS = {
    0x587F60A0: {
        0x587F60E9: "dword ptr [0x5898c030]",
        0x587F6210: "dword ptr [0x5898c030]",
        0x587F6274: "dword ptr [0x5898c030]",
    },
    0x587F62A0: {
        0x587F6301: "dword ptr [0x5898c030]",
        0x587F6432: "dword ptr [0x5898c030]",
        0x587F64A5: "dword ptr [0x5898c030]",
    },
    0x587F73B0: {
        0x587F74E6: "dword ptr [0x5898c030]",
    },
}
COMMAND_STRINGS = {
    0x589CC0F0: b"/r",
    0x589CC0F4: b"/reply",
    0x589CC0F8: b"/a",
    0x589CC0FC: b"/all",
    0x589CC100: b"/t",
    0x589CC104: b"/team",
    0x589CC12C: b"/x",
    0x589CC130: b"/exit",
}


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple((int(item["address"], 16), int(item["size"]))
                     for item in record["segments"])
    return ((int(record["address"], 16), int(record["size"])),)


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
                    f"Fresh Ghidra body ranges changed for {function:08X} in {project}"
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
                    f"Fresh incoming call edges changed for {function:08X} in {project}"
                )
        for function, expected_counts in DIRECT_TARGET_COUNTS.items():
            actual_counts = Counter(
                int(row["target"], 16) for row in selected
                if int(row["function"], 16) == function and row["kind"] == "CALL"
            )
            if actual_counts != expected_counts:
                raise AssertionError(
                    f"Fresh direct-call targets changed for {function:08X} in {project}"
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
        raise AssertionError("Checked-in body rows differ from both fresh Ghidra projects")

    expected_edge_rows = expected_edges()
    actual_edge_rows = {
        (row["export"], row["kind"], int(row["function"], 16),
         int(row["site"], 16), int(row["target"], 16), row["type"])
        for row in read_tsv(EDGE_EXPORTS)
    }
    if actual_edge_rows != expected_edge_rows:
        raise AssertionError("Checked-in call edges differ from both fresh Ghidra projects")


def decode_range(image, decoder, start, size):
    code = image[start - BASE:start - BASE + size]
    instructions = list(decoder.disasm(code, start))
    if sum(item.size for item in instructions) != size:
        raise AssertionError(f"Mapped instruction coverage is incomplete at {start:08X}")
    return instructions


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

    total_size = 0
    total_instructions = 0
    for function, ranges in RANGES.items():
        record = records.get(function)
        expected_ranges = tuple((start, size) for start, size, _ in ranges)
        if (record is None or function not in matched or function not in inventory
                or int(inventory[function]["size"]) != sum(size for _, size, _ in ranges)
                or record_ranges(record) != expected_ranges):
            raise AssertionError(f"{function:08X} is not recorded with exact matched ranges")
        direct = Counter()
        indirect = {}
        for start, size, count in ranges:
            instructions = decode_range(image, decoder, start, size)
            if (len(instructions) != count or not instructions
                    or instructions[0].address != start
                    or instructions[-1].address + instructions[-1].size != start + size):
                raise AssertionError(f"Mapped Ghidra range changed at {start:08X}")
            total_size += size
            total_instructions += len(instructions)
            for instruction in instructions:
                if instruction.id != X86_INS_CALL:
                    continue
                if instruction.operands[0].type != X86_OP_IMM:
                    indirect[instruction.address] = instruction.op_str
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                direct[target] += 1
                if target not in FUNCTIONS and target not in matched:
                    raise AssertionError(
                        f"Unmatched direct dependency {function:08X}->{target:08X}"
                    )
        if direct != DIRECT_TARGET_COUNTS[function]:
            raise AssertionError(f"Mapped direct-call targets changed for {function:08X}")
        if indirect != INDIRECT_CALLBACKS.get(function, {}):
            raise AssertionError(f"Mapped indirect callback sites changed for {function:08X}")

    if total_size != TOTAL_SIZE or total_instructions != TOTAL_INSTRUCTIONS:
        raise AssertionError("Subsystem byte or instruction total changed")

    edge_rows = read_tsv(EDGE_EXPORTS)
    expected_direct_calls = {
        function: {
            int(row["site"], 16): int(row["target"], 16)
            for row in edge_rows if row["export"] == EXPORTS[0]
            and row["kind"] == "CALL" and int(row["function"], 16) == function
        }
        for function in FUNCTIONS
    }
    mapped_direct_calls = {}
    for function, ranges in RANGES.items():
        calls = {}
        for start, size, _ in ranges:
            for instruction in decode_range(image, decoder, start, size):
                if (instruction.id == X86_INS_CALL
                        and instruction.operands[0].type == X86_OP_IMM):
                    calls[instruction.address] = instruction.operands[0].imm & 0xFFFFFFFF
        mapped_direct_calls[function] = calls
    if mapped_direct_calls != expected_direct_calls:
        raise AssertionError("Mapped direct calls differ from the fresh Ghidra edge export")

    for function, callers in EXPECTED_INCOMING.items():
        for caller, site in callers:
            instruction = decode_range(image, decoder, site, 5)
            if (len(instruction) != 1 or instruction[0].id != X86_INS_CALL
                    or instruction[0].size != 5
                    or instruction[0].operands[0].type != X86_OP_IMM
                    or instruction[0].operands[0].imm & 0xFFFFFFFF != function):
                raise AssertionError(f"Mapped caller {caller:08X} edge changed at {site:08X}")


def verify_command_strings(image):
    for address, expected in COMMAND_STRINGS.items():
        offset = address - BASE
        pointer = int.from_bytes(image[offset:offset + 4], "little")
        actual = image[pointer - BASE:pointer - BASE + len(expected) + 1]
        if actual != expected + b"\0":
            raise AssertionError(
                f"Command string at {address:08X} changed: {actual!r}"
            )


def main():
    verify_exports()
    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    verify_matches(image, decoder)
    verify_command_strings(image)
    print(f"Verified {len(FUNCTIONS)} chat-route functions, {TOTAL_SIZE} bytes, "
          f"{TOTAL_INSTRUCTIONS} instructions, and eight mapped command strings")


if __name__ == "__main__":
    main()
