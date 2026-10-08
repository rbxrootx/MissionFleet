"""Validate the byte-matched /user chat-command branch and its open closure."""
import csv
import json
import re
from collections import defaultdict, deque
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/main-user-chat-command-body-ranges.tsv"
BODY_EXPORTS = ROOT / "config/NF2_2026/main-user-chat-command-body-exports.tsv"
EDGE_EXPORTS = ROOT / "config/NF2_2026/main-user-chat-command-call-edges.tsv"
FRESH_DIR = ROOT / "var/current-main-next"
GHIDRA_LOG = FRESH_DIR / "frontier-587edf60-fresh-ghidra.log"
GHIDRA_DECOMP = FRESH_DIR / "frontier-587edf60-fresh-ghidra.c"
MARKER = "objdiff-3.8.0-byte-identical"
EXPORTS = ("58758ee0-fresh", "587cef70-fresh")

FUNCTIONS = ("5873A730", "587B7700", "587EDF60", "5897CFF6")
ROOT_FUNCTION = "587EDF60"
EXPECTED = {
    "5873A730": (("5873A730", 48, 23),),
    "587B7700": (("587B7700", 261, 94),),
    "587EDF60": (("587EDF60", 727, 228),),
    "5897CFF6": (("5897CFF6", 6, 1),),
}
EXPECTED_INCOMING = {
    "587EDF60": {("587FC9C0", "587FD1B1")},
    "5873A730": {
        ("587EDF60", "587EE13C"),
        ("58890110", "58891B5D"), ("58890110", "58892064"),
        ("58890110", "588923CD"), ("58890110", "588926DD"),
    },
    "5897CFF6": {
        ("587EDF60", "587EDFD0"), ("58890110", "5889251D"),
    },
    "587B7700": {
        ("587EDF60", "587EE1BB"), ("587EDF60", "587EE1ED"),
        ("587EDF60", "587EE1FE"), ("587EDF60", "587EE20F"),
        ("58890110", "58892770"), ("58890110", "58892799"),
        ("58890110", "588927AD"), ("58890110", "588927C1"),
    },
}
EXPECTED_BYTES = 1_042
EXPECTED_INSTRUCTIONS = 346


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def body_signature(rows):
    return sorted(
        (row["function"].upper(), int(row["start"], 16), int(row["length"]),
         int(row["instruction_bytes"]), int(row["instruction_count"]))
        for row in rows
    )


def edge_signature(rows):
    return sorted(
        (row["kind"], row["function"].upper(), row["site"].upper(),
         row["type"], row["target"].upper(), row["target_function"].upper())
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
                if int(end, 16) - int(start, 16) + 1 != int(length):
                    raise AssertionError(f"Malformed fresh Ghidra range: {line.strip()}")
                ranges.append((current, int(start, 16), int(length), int(length)))
    return sorted(ranges)


def mapped_string(image, pointer_slot):
    pointer = int.from_bytes(image[pointer_slot - BASE:pointer_slot - BASE + 4], "little")
    offset = pointer - BASE
    if offset < 0 or offset >= len(image):
        raise AssertionError(f"Mapped pointer at {pointer_slot:08X} is outside Main.dll")
    return image[offset:offset + 80].split(b"\0", 1)[0].decode("ascii")


def main():
    selected = set(FUNCTIONS)
    if len(selected) != len(FUNCTIONS):
        raise AssertionError("Duplicate function in /user command closure")

    inventory = {
        row["address"].upper(): row for row in read_tsv(INVENTORY_PATH)
        if row["component"] == "client-main-current"
    }
    if selected - inventory.keys():
        raise AssertionError(f"Functions missing from Main.dll inventory: {sorted(selected - inventory.keys())}")

    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))["matches"]
    matches = {row["address"].upper(): row for row in catalog}
    required_matches = (*FUNCTIONS, "587FC9C0", "58890110")
    missing_matches = [address for address in required_matches
                       if matches.get(address, {}).get("verified_by") != MARKER]
    if missing_matches:
        raise AssertionError(f"Missing ObjDiff 100% records: {missing_matches}")

    manifest = read_tsv(RANGE_PATH)
    if {row["function"].upper() for row in manifest} != selected:
        raise AssertionError("Tracked body manifest differs from the four-function closure")
    expected_rows = body_signature(manifest)
    expected_from_functions = sorted(
        (function, int(start, 16), size, size, instructions)
        for function, entries in EXPECTED.items()
        for start, size, instructions in entries
    )
    if expected_rows != expected_from_functions:
        raise AssertionError("Tracked Ghidra ranges or instruction totals changed")

    body_exports = read_tsv(BODY_EXPORTS)
    for export in EXPORTS:
        actual = [row for row in body_exports if row["export"] == export]
        if body_signature(actual) != expected_rows:
            raise AssertionError(f"Independent Ghidra body export differs: {export}")
    log_rows = ghidra_log_signature(GHIDRA_LOG, selected)
    log_expected = sorted((function, start, length, length)
                          for function, start, length, _, _ in expected_rows)
    if log_rows != log_expected:
        raise AssertionError("Fresh selected Ghidra log differs from tracked function ranges")

    for function in selected:
        match = matches[function]
        if (int(inventory[function]["size"]) != sum(item[1] for item in EXPECTED[function])
                or match.get("source") != f"src/client-current/Main/FUN_{function.lower()}.cpp"):
            raise AssertionError(f"Inventory or source record changed for {function}")
        actual_segments = tuple(
            (item["address"].upper(), int(item["size"]))
            for item in match.get("segments", [])
        )
        expected_segments = tuple((start, size) for start, size, _ in EXPECTED[function])
        if actual_segments != expected_segments:
            raise AssertionError(f"Catalog does not record exact body ranges for {function}")

    edge_exports = read_tsv(EDGE_EXPORTS)
    filtered = {}
    for export in EXPORTS:
        current = [row for row in edge_exports if row["export"] == export]
        current = [row for row in current
                   if row["function"].upper() in selected
                   or row["target"].upper() in selected]
        filtered[export] = current
    if edge_signature(filtered[EXPORTS[0]]) != edge_signature(filtered[EXPORTS[1]]):
        raise AssertionError("Independent Ghidra call/data edge exports disagree")

    observed_incoming = defaultdict(set)
    for row in filtered[EXPORTS[0]]:
        if row["kind"] == "CALL" and row["target"].upper() in selected:
            observed_incoming[row["target"].upper()].add(
                (row["function"].upper(), row["site"].upper())
            )
    for target, expected in EXPECTED_INCOMING.items():
        if observed_incoming[target] != expected:
            raise AssertionError(
                f"Incoming Ghidra call edges changed for {target}: {observed_incoming[target]}"
            )

    image = IMAGE_PATH.read_bytes()
    if mapped_string(image, 0x589CC134) != "/user":
        raise AssertionError("Mapped chat-command pointer 0x589CC134 is no longer '/user'")
    if mapped_string(image, 0x589CC138) != "/c":
        raise AssertionError("The sibling command pointer 0x589CC138 changed")

    decomp = re.sub(r"\s+", " ", GHIDRA_DECOMP.read_text(encoding="utf-8").lower())
    command_branch = re.compile(
        r"if\s*\(pcvar15\[ivar8 - \(int\)pcvar9\] == ' '\)\s*"
        r"\{\s*fun_587edf60\(\);"
    )
    if decomp.count("fun_587edf60();") != 1 or not command_branch.search(decomp):
        raise AssertionError("Fresh Ghidra parent no longer ties the call to '/user ' branch")
    required_behavior = (
        "fun_5897cff6(local_78,0x32);",
        "fun_5873a730(_ptr_5898cb38,ivar3 + -1);",
        "if (0xffff < local_a0) goto lab_587ee21a;",
        "fun_5874ba60(&ustack_98,0x18,&dat_5898d18c,local_a0);",
    )
    if any(snippet not in decomp for snippet in required_behavior):
        raise AssertionError("Fresh Ghidra handler no longer supports the recorded behavior")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    calls = set()
    outgoing = defaultdict(set)
    total_bytes = 0
    total_instructions = 0
    boundary_targets = set()
    image_end = BASE + len(image)
    for function in selected:
        rows = [row for row in manifest if row["function"].upper() == function]
        function_size = 0
        for row in rows:
            start = int(row["start"], 16)
            size = int(row["length"])
            code = image[start - BASE:start - BASE + size]
            instructions = list(decoder.disasm(code, start))
            if (not instructions or sum(item.size for item in instructions) != size
                    or len(instructions) != int(row["instruction_count"])):
                raise AssertionError(f"Mapped instruction coverage differs at {start:08X}")
            total_bytes += size
            total_instructions += len(instructions)
            function_size += size
            for instruction in instructions:
                if instruction.id != X86_INS_CALL or instruction.operands[0].type != X86_OP_IMM:
                    continue
                target = instruction.operands[0].imm & 0xFFFFFFFF
                edge = (function, f"{instruction.address:08X}", f"{target:08X}")
                calls.add(edge)
                outgoing[function].add(f"{target:08X}")
                if BASE <= target < image_end and f"{target:08X}" not in selected:
                    if matches.get(f"{target:08X}", {}).get("verified_by") != MARKER:
                        raise AssertionError(
                            f"Unmatched in-image direct call {function}->{target:08X}"
                        )
                    boundary_targets.add(f"{target:08X}")
        if function_size != sum(item[1] for item in EXPECTED[function]):
            raise AssertionError(f"Unexpected body size for {function}")

    for export in EXPORTS:
        exported_calls = {
            (row["function"].upper(), row["site"].upper(), row["target"].upper())
            for row in filtered[export]
            if row["kind"] == "CALL" and row["function"].upper() in selected
        }
        if exported_calls != calls:
            raise AssertionError(f"Mapped direct calls disagree with Ghidra: {export}")

    reachable = {ROOT_FUNCTION}
    queue = deque([ROOT_FUNCTION])
    while queue:
        for target in outgoing[queue.popleft()] & selected - reachable:
            reachable.add(target)
            queue.append(target)
    if reachable != selected:
        raise AssertionError(f"Open direct-call closure differs: {sorted(selected - reachable)}")
    if (total_bytes, total_instructions) != (EXPECTED_BYTES, EXPECTED_INSTRUCTIONS):
        raise AssertionError(
            f"Unexpected totals: {total_bytes} bytes / {total_instructions} instructions"
        )

    print(
        f"Main.dll /user chat-command branch: {len(selected)} ObjDiff-verified "
        f"functions / {total_bytes:,} bytes / {total_instructions:,} instructions; "
        f"{len(boundary_targets)} matched direct-call boundaries; mapped command "
        "string, matched caller branch, two independent Ghidra exports, fresh "
        "Ghidra body coverage, and complete open closure validated"
    )


if __name__ == "__main__":
    main()
