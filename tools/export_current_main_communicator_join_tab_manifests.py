"""Snapshot two independent Ghidra exports for the JoinTab class closure."""
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
ROOTS = {
    "588318F0", "58831C30", "58831910", "588336F0", "58832CF0", "588329D0",
}
FUNCTIONS = ROOTS | {
    "588316E0", "58831E20", "58753980", "58753B20", "58754080",
    "587B92E0", "587B9300", "587BA960",
}
EXTERNAL_CONSTRUCTOR_CALL = ("58843380", "588441DE", "58831ED0")
BODY_FIELDS = ("function", "start", "length", "instruction_bytes", "instruction_count")
EDGE_FIELDS = ("kind", "function", "site", "type", "target", "target_function")
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
    matched = {item["address"].upper() for item in catalog
               if item.get("verified_by") == MARKER}
    open_addresses = set(inventory) - matched
    if not ROOTS <= open_addresses and not FUNCTIONS <= matched:
        raise AssertionError(
            "JoinTab roots must be open before verification or the complete class closure must be matched"
        )
    closure_pool = open_addresses if ROOTS <= open_addresses else FUNCTIONS

    body_exports = []
    edge_exports = []
    for export, body_name, edge_name in EXPORTS:
        bodies = [normalize_body(row) for row in read_rows(FRESH_DIR / body_name)
                  if row["function"].upper() in FUNCTIONS]
        bodies.sort(key=lambda row: (row["function"], row["start"]))
        edges = [normalize_edge(row) for row in read_rows(FRESH_DIR / edge_name)
                 if row["kind"] in {"CALL", "DATA"}
                 and (row["function"].upper() in FUNCTIONS
                      or (row["kind"] == "CALL"
                          and (row["function"].upper(), row["site"].upper(), row["target"].upper())
                          == EXTERNAL_CONSTRUCTOR_CALL))]
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
        raise AssertionError(f"The selected body function set changed: {sorted(found ^ FUNCTIONS)}")
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

    edges = edge_exports[0][1]
    calls = [row for row in edges if row["kind"] == "CALL" and row["function"] in FUNCTIONS]
    data = [row for row in edges if row["kind"] == "DATA" and row["function"] in FUNCTIONS]
    if len(calls) != 165 or len(data) != 8:
        raise AssertionError(f"Unexpected JoinTab call/data totals: {len(calls)} calls, {len(data)} data refs")
    if [row for row in edges if row["kind"] == "CALL" and row["function"] == EXTERNAL_CONSTRUCTOR_CALL[0]
            and (row["function"], row["site"], row["target"]) == EXTERNAL_CONSTRUCTOR_CALL] != [
                {"kind": "CALL", "function": "58843380", "site": "588441DE",
                 "type": "UNCONDITIONAL_CALL", "target": "58831ED0", "target_function": "58831ED0"}
            ]:
        raise AssertionError("Matched parent-to-JoinTab constructor call evidence changed")

    outgoing = defaultdict(set)
    for edge in calls:
        if not edge["target_function"]:
            raise AssertionError(f"Call edge has no Ghidra target function: {edge}")
        outgoing[edge["function"]].add(edge["target_function"])
    closure = set(ROOTS)
    pending = deque(ROOTS)
    while pending:
        caller = pending.popleft()
        for target in outgoing[caller] & closure_pool:
            if target not in closure:
                closure.add(target)
                pending.append(target)
    if closure != FUNCTIONS:
        raise AssertionError(f"The six open vtable roots reach {sorted(closure ^ FUNCTIONS)} outside the selected closure")

    internal_call_sites = [row for row in calls if row["target_function"] in FUNCTIONS]
    if len(internal_call_sites) != 16:
        raise AssertionError(f"Unexpected internal open-call site count: {len(internal_call_sites)}")
    external_targets = {row["target_function"] for row in calls
                        if row["target_function"] not in FUNCTIONS}
    if len(external_targets) != 24 or not external_targets <= matched:
        raise AssertionError("A JoinTab direct call no longer resolves to the 24 matched boundary targets")

    body_rows = [{"export": export, **row} for export, records in body_exports for row in records]
    edge_rows = [{"export": export, **row} for export, records in edge_exports for row in records]
    emission_rows = bodies
    return {
        ROOT / "config/NF2_2026/current-main-communicator-join-tab-body-exports.tsv":
            tsv(("export", *BODY_FIELDS), body_rows),
        ROOT / "config/NF2_2026/current-main-communicator-join-tab-call-edges.tsv":
            tsv(("export", *EDGE_FIELDS), edge_rows),
        FRESH_DIR / "communicator-join-tab-emission.tsv": tsv(BODY_FIELDS, emission_rows),
    }, len(FUNCTIONS), len(bodies), sum(sizes.values()), sum(instructions.values()), len(calls), len(data)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="verify committed snapshots without writing them")
    args = parser.parse_args()
    outputs, functions, ranges, size, instruction_count, calls, data = build_outputs()
    for path, content in outputs.items():
        if args.check:
            if not path.is_file() or path.read_text(encoding="utf-8") != content:
                raise SystemExit(f"JoinTab export snapshot is stale: {path}")
        else:
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(content, encoding="utf-8", newline="\n")
    action = "verified" if args.check else "wrote"
    print(f"{action} two-export JoinTab manifests: {functions} functions, {ranges} ranges, "
          f"{size:,} bytes, {instruction_count:,} instructions, {calls} calls, {data} data refs")


if __name__ == "__main__":
    main()
