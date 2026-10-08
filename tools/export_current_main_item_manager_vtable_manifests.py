"""Cross-check independent Ghidra inventories for the ItemManager vtable closure."""
import argparse
import csv
import json
import re
from collections import defaultdict, deque
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
FRESH_DIR = ROOT / "var/current-main-next"
FRESH_LOG = FRESH_DIR / "item-manager-primary-vtable-fresh-ghidra.log"
FRESH_C = FRESH_DIR / "item-manager-primary-vtable-fresh-ghidra.c"
EXPORTS = (
    ("58758EE0-FRESH", "58758ee0-fresh-function-bodies.tsv", "58758ee0-fresh-function-edges.tsv"),
    ("587CEF70-FRESH", "587cef70-fresh-function-bodies.tsv", "587cef70-fresh-function-edges.tsv"),
)
ROOTS = {"588826D0", "5887DA90", "5887A470", "5887A500", "588826F0", "58881680"}
FUNCTIONS = {
    "587BA0A0", "587BA0C0", "5887A3E0", "5887A470", "5887A500",
    "5887A770", "5887A810", "5887A980", "5887AD20", "5887ADC0",
    "5887BE10", "5887D1C0", "5887DA90", "58881150", "58881680",
    "58881C30", "588826D0", "588826F0", "588C5C30", "588F3FA0",
}
CALLER_EDGE = ("5878AF40", "5878CA20", "58883F80")
BODY_FIELDS = ("function", "start", "length", "instruction_bytes", "instruction_count")
EDGE_FIELDS = ("kind", "function", "site", "type", "target", "target_function")
FUNCTION_RE = re.compile(r"DumpExactFunctionRanges\.java> FUNCTION FUN_([0-9a-fA-F]+) entry=([0-9a-fA-F]+) bodyBytes=(\d+)")
RANGE_RE = re.compile(r"DumpExactFunctionRanges\.java> RANGE ([0-9a-fA-F]+)\.\.([0-9a-fA-F]+) length=(\d+)")
COVERAGE_RE = re.compile(r"DumpExactFunctionRanges\.java> COVERAGE instructionCount=(\d+) instructionBytes=(\d+) rangeBytes=(\d+) bodyBytes=(\d+)")
CALL_RE = re.compile(r"DumpExactFunctionRanges\.java> CALL ([0-9a-fA-F]+) -> ([0-9a-fA-F]+)(?: FUN_([0-9a-fA-F]+))?")


def read_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def norm_address(value):
    return f"{int(value, 16):08X}"


def normalize_body(row):
    return {
        "function": norm_address(row["function"]), "start": norm_address(row["start"]),
        "length": str(int(row["length"])), "instruction_bytes": str(int(row["instruction_bytes"])),
        "instruction_count": str(int(row["instruction_count"])),
    }


def normalize_edge(row):
    return {
        "kind": row["kind"], "function": norm_address(row["function"]),
        "site": norm_address(row["site"]), "type": row["type"],
        "target": norm_address(row["target"]),
        "target_function": norm_address(row["target_function"]) if row["target_function"] else "-",
    }


def tsv(fields, rows):
    lines = ["\t".join(fields)]
    lines.extend("\t".join(row[field] for field in fields) for row in rows)
    return "\n".join(lines) + "\n"


def parse_fresh_log(text):
    functions, ranges, coverage, calls = {}, defaultdict(list), {}, defaultdict(list)
    current = None
    for line in text.splitlines():
        found = FUNCTION_RE.search(line)
        if found:
            current = norm_address(found.group(1))
            if current != norm_address(found.group(2)):
                raise AssertionError("Fresh Ghidra function entry changed")
            functions[current] = int(found.group(3))
            continue
        found = RANGE_RE.search(line)
        if found and current:
            start, end, length = int(found.group(1), 16), int(found.group(2), 16), int(found.group(3))
            if end - start + 1 != length:
                raise AssertionError("Malformed fresh Ghidra function range")
            ranges[current].append({
                "function": current, "start": f"{start:08X}", "length": str(length),
                "instruction_bytes": str(length), "instruction_count": "0",
            })
            continue
        found = COVERAGE_RE.search(line)
        if found and current:
            count, instruction_bytes, range_bytes, body_bytes = map(int, found.groups())
            coverage[current] = (count, instruction_bytes, range_bytes, body_bytes)
            continue
        found = CALL_RE.search(line)
        if found and current:
            calls[current].append({
                "kind": "CALL", "function": current, "site": norm_address(found.group(1)),
                "type": "Ghidra-targeted", "target": norm_address(found.group(2)),
                "target_function": norm_address(found.group(3)) if found.group(3) else "-",
            })
    for function, parts in ranges.items():
        count, instruction_bytes, range_bytes, body_bytes = coverage[function]
        total = sum(int(part["length"]) for part in parts)
        if total != body_bytes or range_bytes != body_bytes or instruction_bytes != body_bytes:
            raise AssertionError(f"Fresh Ghidra instruction coverage differs at {function}")
        # The independent export carries the per-range instruction counts; filled below after cross-check.
        if count <= 0:
            raise AssertionError(f"Fresh Ghidra has no decoded instructions at {function}")
    return functions, ranges, coverage, calls


def build_outputs():
    inventory = {
        row["address"].upper(): row for row in read_rows(ROOT / "config/NF2_2026/client-functions.tsv")
        if row["component"] == "client-main-current"
    }
    catalog = json.loads((ROOT / "config/NF2_2026/client-verifications.json").read_text(encoding="utf-8"))["matches"]
    matched = {item["address"].upper() for item in catalog if item.get("verified_by") == "objdiff-3.8.0-byte-identical"}
    open_addresses = set(inventory) - matched
    if not ROOTS <= open_addresses and not FUNCTIONS <= matched:
        raise AssertionError("ItemManager closure is neither wholly open nor wholly matched")
    closure_pool = open_addresses if ROOTS <= open_addresses else FUNCTIONS

    body_exports, edge_exports = [], []
    for export, body_name, edge_name in EXPORTS:
        bodies = [normalize_body(row) for row in read_rows(FRESH_DIR / body_name)
                  if row["function"].upper() in FUNCTIONS]
        bodies.sort(key=lambda row: (row["function"], row["start"]))
        edges = [normalize_edge(row) for row in read_rows(FRESH_DIR / edge_name)
                 if row["kind"] in {"CALL", "DATA"}
                 and (row["function"].upper() in FUNCTIONS
                      or (row["kind"] == "CALL" and
                          (row["function"].upper(), row["site"].upper(), row["target"].upper()) == CALLER_EDGE))]
        edges.sort(key=lambda row: (row["function"], row["site"], row["kind"], row["target"]))
        body_exports.append((export, bodies))
        edge_exports.append((export, edges))
    if body_exports[0][1] != body_exports[1][1]:
        raise AssertionError("The two fresh Ghidra body exports disagree")
    if edge_exports[0][1] != edge_exports[1][1]:
        raise AssertionError("The two fresh Ghidra call/data exports disagree")

    bodies = body_exports[0][1]
    if {row["function"] for row in bodies} != FUNCTIONS:
        raise AssertionError("Independent Ghidra inventories omit an ItemManager closure function")
    sizes, instructions = defaultdict(int), defaultdict(int)
    for row in bodies:
        sizes[row["function"]] += int(row["length"])
        instructions[row["function"]] += int(row["instruction_count"])
        if int(row["instruction_bytes"]) != int(row["length"]):
            raise AssertionError(f"Incomplete Ghidra body coverage: {row}")
    for function in FUNCTIONS:
        if sizes[function] != int(inventory[function]["size"]):
            raise AssertionError(f"Inventory body size changed at {function}")

    functions, fresh_ranges, coverage, fresh_calls = parse_fresh_log(FRESH_LOG.read_text(encoding="utf-8", errors="replace"))
    if "/* failed:" in FRESH_C.read_text(encoding="utf-8", errors="replace"):
        raise AssertionError("Fresh Ghidra decompilation failed")
    if not FUNCTIONS | {"58883F80", "5878AF40"} <= set(functions):
        raise AssertionError("Fresh Ghidra decompilation or body dump omitted selected functions")
    fresh_bodies = []
    for row in bodies:
        function = row["function"]
        fresh = sorted((part["start"], int(part["length"])) for part in fresh_ranges.get(function, ()))
        expected = sorted((part["start"], int(part["length"])) for part in bodies if part["function"] == function)
        if fresh != expected or int(row["instruction_count"]) <= 0:
            raise AssertionError(f"Targeted Ghidra ranges differ from independent exports at {function}")
        fresh_bodies.extend(part for part in bodies if part["function"] == function)
    for function in FUNCTIONS:
        if sizes[function] != functions[function]:
            raise AssertionError(f"Targeted Ghidra body size differs at {function}")
        if sum(int(row["instruction_count"]) for row in bodies if row["function"] == function) != coverage[function][0]:
            raise AssertionError(f"Targeted Ghidra instruction count differs at {function}")

    all_edges = edge_exports[0][1]
    calls = [row for row in all_edges if row["kind"] == "CALL" and row["function"] in FUNCTIONS]
    data = [row for row in all_edges if row["kind"] == "DATA" and row["function"] in FUNCTIONS]
    if len(calls) != 118:
        raise AssertionError(f"Unexpected ItemManager direct-call count: {len(calls)}")
    if not any((row["function"], row["site"], row["target"]) == CALLER_EDGE for row in all_edges):
        raise AssertionError("Matched ItemManager constructor caller edge is absent")

    outgoing = defaultdict(set)
    for row in calls:
        if row["target_function"] == "-":
            raise AssertionError(f"Ghidra could not resolve a direct call: {row}")
        outgoing[row["function"]].add(row["target_function"])
    closure = set(ROOTS)
    pending = deque(ROOTS)
    while pending:
        for target in outgoing[pending.popleft()] & closure_pool:
            if target not in closure:
                closure.add(target)
                pending.append(target)
    if closure != FUNCTIONS:
        raise AssertionError(f"ItemManager open direct closure changed: {sorted(closure ^ FUNCTIONS)}")
    internal = [row for row in calls if row["target_function"] in FUNCTIONS]
    external = [row for row in calls if row["target_function"] not in FUNCTIONS]
    external_targets = {row["target_function"] for row in external}
    if len(internal) != 28 or len(external) != 90 or not external_targets <= matched:
        raise AssertionError("ItemManager direct calls no longer close at the byte-matched boundary")

    fresh_call_rows = [row for function in FUNCTIONS for row in fresh_calls.get(function, ())]
    inventory_call_rows = [row for row in calls]
    fresh_signature = sorted((row["function"], row["site"], row["target"]) for row in fresh_call_rows)
    inventory_signature = sorted((row["function"], row["site"], row["target"]) for row in inventory_call_rows)
    if fresh_signature != inventory_signature:
        raise AssertionError("Targeted Ghidra direct-call sites differ from the independent inventories")

    body_rows = [{"export": export, **row} for export, records in body_exports for row in records]
    edge_rows = [{"export": export, **row} for export, records in edge_exports for row in records]
    return {
        ROOT / "config/NF2_2026/current-main-item-manager-vtable-body-exports.tsv": tsv(("export", *BODY_FIELDS), body_rows),
        ROOT / "config/NF2_2026/current-main-item-manager-vtable-call-edges.tsv": tsv(("export", *EDGE_FIELDS), edge_rows),
        FRESH_DIR / "item-manager-vtable-emission.tsv": tsv(BODY_FIELDS, bodies),
    }, len(FUNCTIONS), len(bodies), sum(sizes.values()), sum(instructions.values()), len(calls), len(data)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="verify tracked snapshots without writing")
    args = parser.parse_args()
    outputs, functions, ranges, byte_count, instruction_count, calls, data = build_outputs()
    for path, content in outputs.items():
        if args.check:
            if not path.is_file() or path.read_text(encoding="utf-8") != content:
                raise SystemExit(f"ItemManager evidence snapshot is stale: {path}")
        else:
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(content, encoding="utf-8", newline="\n")
    action = "verified" if args.check else "wrote"
    print(f"{action} ItemManager evidence: {functions} functions, {ranges} ranges, "
          f"{byte_count:,} bytes, {instruction_count:,} instructions, {calls} calls, {data} data refs")


if __name__ == "__main__":
    main()
