"""Snapshot two independent Ghidra exports for the LeaveTab call closure."""
import argparse
import csv
import json
from collections import defaultdict, deque
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
FRESH_DIR = ROOT / "var/current-main-next"
EXPORTS = (
    ("58758EE0-FRESH", "58758ee0-fresh-function-bodies.tsv",
     "58758ee0-fresh-function-edges.tsv"),
    ("587CEF70-FRESH", "587cef70-fresh-function-bodies.tsv",
     "587cef70-fresh-function-edges.tsv"),
)
ROOTS = {"58833640", "58833680", "588336D0", "588337A0"}
FUNCTIONS = {
    "58753E80", "587B9320", "58833550", "58833640", "58833680",
    "588336D0", "588337A0",
}
CONSTRUCTOR_CALL = ("58843380", "5884421D", "58833980")
BODY_FIELDS = ("function", "start", "length", "instruction_bytes", "instruction_count")
EDGE_FIELDS = ("kind", "function", "site", "type", "target_function", "target")
MARKER = "objdiff-3.8.0-byte-identical"


def read_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def address(value):
    return f"{int(value, 16):08X}"


def normalize_body(row):
    return {
        "function": address(row["function"]),
        "start": address(row["start"]),
        "length": str(int(row["length"])),
        "instruction_bytes": str(int(row["instruction_bytes"])),
        "instruction_count": str(int(row["instruction_count"])),
    }


def normalize_edge(row):
    return {
        "kind": row["kind"],
        "function": address(row["function"]),
        "site": address(row["site"]),
        "type": row["type"],
        "target": address(row["target"]),
        "target_function": address(row["target_function"]) if row["target_function"] else "",
    }


def tsv(fields, rows):
    lines = ["\t".join(fields)]
    lines.extend("\t".join(row[field] for field in fields) for row in rows)
    return "\n".join(lines) + "\n"


def build_outputs():
    inventory_rows = read_rows(ROOT / "config/NF2_2026/client-functions.tsv")
    inventory = {
        row["address"].upper(): row for row in inventory_rows
        if row["component"] == "client-main-current"
    }
    catalog = json.loads((ROOT / "config/NF2_2026/client-verifications.json").read_text(
        encoding="utf-8"))["matches"]
    matched = {
        item["address"].upper() for item in catalog
        if item.get("verified_by") == MARKER
    }
    open_addresses = set(inventory) - matched
    if not ROOTS <= open_addresses and not FUNCTIONS <= matched:
        raise AssertionError("LeaveTab roots must be open before verification or the full closure must be matched")
    closure_pool = open_addresses if ROOTS <= open_addresses else FUNCTIONS

    body_exports = []
    edge_exports = []
    for export, body_name, edge_name in EXPORTS:
        all_bodies = read_rows(FRESH_DIR / body_name)
        all_edges = read_rows(FRESH_DIR / edge_name)
        bodies = [normalize_body(row) for row in all_bodies
                  if row["function"].upper() in FUNCTIONS]
        bodies.sort(key=lambda row: (row["function"], row["start"]))
        edges = [normalize_edge(row) for row in all_edges
                 if row["kind"] in {"CALL", "DATA"}
                 and (row["function"].upper() in FUNCTIONS
                      or (row["kind"] == "CALL"
                          and (row["function"].upper(), row["site"].upper(),
                               row["target"].upper()) == CONSTRUCTOR_CALL))]
        edges.sort(key=lambda row: (row["function"], row["site"], row["kind"], row["target"]))
        body_exports.append((export, bodies))
        edge_exports.append((export, edges))

    if body_exports[0][1] != body_exports[1][1]:
        raise AssertionError("The two fresh Ghidra body exports disagree")
    if edge_exports[0][1] != edge_exports[1][1]:
        raise AssertionError("The two fresh Ghidra call/data exports disagree")

    bodies = body_exports[0][1]
    found = {row["function"] for row in bodies}
    if found != FUNCTIONS:
        raise AssertionError(f"The selected LeaveTab body set changed: {sorted(found ^ FUNCTIONS)}")
    sizes = defaultdict(int)
    instructions = defaultdict(int)
    for row in bodies:
        sizes[row["function"]] += int(row["length"])
        instructions[row["function"]] += int(row["instruction_count"])
        if int(row["instruction_bytes"]) != int(row["length"]):
            raise AssertionError(f"Ghidra reports a partially decoded body range: {row}")
    for function in FUNCTIONS:
        if sizes[function] != int(inventory[function]["size"]):
            raise AssertionError(f"Ghidra body size differs from inventory for {function}")
    if sum(sizes.values()) != 750 or len(bodies) != 8 or sum(instructions.values()) != 241:
        raise AssertionError("Unexpected LeaveTab body, range, or instruction totals")

    edges = edge_exports[0][1]
    calls = [row for row in edges if row["kind"] == "CALL" and row["function"] in FUNCTIONS]
    data = [row for row in edges if row["kind"] == "DATA" and row["function"] in FUNCTIONS]
    if len(calls) != 22 or len(data) != 4:
        raise AssertionError(f"Unexpected LeaveTab call/data totals: {len(calls)} calls, {len(data)} data refs")
    expected_constructor = [{
        "kind": "CALL", "function": "58843380", "site": "5884421D",
        "type": "UNCONDITIONAL_CALL", "target": "58833980", "target_function": "58833980",
    }]
    constructor_edges = [row for row in edges if row["kind"] == "CALL"
                         and row["function"] == CONSTRUCTOR_CALL[0]]
    if constructor_edges != expected_constructor:
        raise AssertionError("Matched parent-to-LeaveTab constructor edge changed")

    outgoing = defaultdict(set)
    for edge in calls:
        if not edge["target_function"]:
            raise AssertionError(f"Call edge has no Ghidra target function: {edge}")
        outgoing[edge["function"]].add(edge["target_function"])
    closure = set(ROOTS)
    pending = deque(ROOTS)
    while pending:
        for target in outgoing[pending.popleft()] & closure_pool:
            if target not in closure:
                closure.add(target)
                pending.append(target)
    if closure != FUNCTIONS:
        raise AssertionError(f"The four open LeaveTab slots reach {sorted(closure ^ FUNCTIONS)}")

    internal = [row for row in calls if row["target_function"] in FUNCTIONS]
    external = [row for row in calls if row["target_function"] not in FUNCTIONS]
    matched_targets = {row["target_function"] for row in external}
    if len(internal) != 3 or len(external) != 19 or len(matched_targets) != 10:
        raise AssertionError("LeaveTab direct-call boundary changed")
    if not matched_targets <= matched:
        raise AssertionError(f"Open direct-call boundary targets remain: {sorted(matched_targets - matched)}")

    body_rows = [{"export": export, **row} for export, records in body_exports for row in records]
    edge_rows = [{"export": export, **row} for export, records in edge_exports for row in records]
    return {
        ROOT / "config/NF2_2026/current-main-leave-tab-body-exports.tsv":
            tsv(("export", *BODY_FIELDS), body_rows),
        ROOT / "config/NF2_2026/current-main-leave-tab-call-edges.tsv":
            tsv(("export", *EDGE_FIELDS), edge_rows),
        FRESH_DIR / "communicator-leave-tab-emission.tsv": tsv(BODY_FIELDS, bodies),
    }, len(FUNCTIONS), len(bodies), sum(sizes.values()), sum(instructions.values()), len(calls), len(data)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="verify committed snapshots without writing")
    args = parser.parse_args()
    outputs, functions, ranges, size, instruction_count, calls, data = build_outputs()
    for path, content in outputs.items():
        if args.check:
            if not path.is_file() or path.read_text(encoding="utf-8") != content:
                raise SystemExit(f"LeaveTab export snapshot is stale: {path}")
        else:
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(content, encoding="utf-8", newline="\n")
    action = "verified" if args.check else "wrote"
    print(f"{action} two-export LeaveTab manifests: {functions} functions, {ranges} ranges, "
          f"{size:,} bytes, {instruction_count:,} instructions, {calls} calls, {data} data refs")


if __name__ == "__main__":
    main()
