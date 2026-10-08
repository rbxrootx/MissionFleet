"""Snapshot two independent Ghidra exports for the ManageSquad tab slice."""
import argparse
import csv
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
EXPORTS = (
    ("58758EE0-fresh", "main-function-bodies.tsv", "main-function-edges.tsv"),
    ("587CEF70-fresh", "audit-5885-cluster-bodies.tsv", "audit-5885-cluster-edges.tsv"),
)
FUNCTIONS = {
    "5883ACB0", "587B6A60", "587B6A70", "587B6ED0", "5883A0A0",
    "587B6F10", "5883B500", "5883ACD0", "5882F000", "587B6A80",
    "58833D70", "587BAAE0", "58839730", "58839F30", "58839FA0",
    "5883A4D0", "58848420",
}
EXTERNAL_CONSTRUCTOR_CALL = ("58843380", "588442E6", "5883BBE0")
BODY_FIELDS = ("function", "start", "length", "instruction_bytes", "instruction_count")
EDGE_FIELDS = ("kind", "function", "site", "type", "target", "target_function")


def read_rows(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def tsv(fields, rows):
    lines = ["\t".join(fields)]
    lines.extend("\t".join(row[field] for field in fields) for row in rows)
    return "\n".join(lines) + "\n"


def build_outputs():
    source_root = ROOT / "var/current-main-next"
    body_rows = []
    edge_rows = []
    first_export_bodies = None
    first_export_edges = None
    for export, body_name, edge_name in EXPORTS:
        bodies = [row for row in read_rows(source_root / body_name)
                  if row["function"].upper() in FUNCTIONS]
        edges = [row for row in read_rows(source_root / edge_name)
                 if row["kind"] in {"CALL", "DATA"}
                 and row["function"].upper() in FUNCTIONS]
        if export == EXPORTS[0][0]:
            first_export_bodies = bodies
            first_export_edges = edges
        body_rows.extend({"export": export, **row} for row in bodies)
        edge_rows.extend({"export": export, **row} for row in edges)

    if first_export_bodies is None or first_export_edges is None:
        raise AssertionError("Both fresh Ghidra exports are required")
    for export, body_name, edge_name in EXPORTS[1:]:
        bodies = [row for row in read_rows(source_root / body_name)
                  if row["function"].upper() in FUNCTIONS]
        edges = [row for row in read_rows(source_root / edge_name)
                 if row["kind"] in {"CALL", "DATA"}
                 and row["function"].upper() in FUNCTIONS]
        if bodies != first_export_bodies:
            raise AssertionError(f"Fresh body exports disagree: {export}")
        if edges != first_export_edges:
            raise AssertionError(f"Fresh call/data exports disagree: {export}")

    expected_functions = FUNCTIONS
    found_functions = {row["function"].upper() for row in first_export_bodies}
    if found_functions != expected_functions:
        raise AssertionError(f"Body export function set differs: {sorted(found_functions ^ expected_functions)}")
    expected_call = {
        ("58843380", "588442E6", "5883BBE0"),
    }
    external = [row for row in read_rows(source_root / EXPORTS[0][2])
                if row["kind"] == "CALL"
                and (row["function"].upper(), row["site"].upper(), row["target"].upper())
                in expected_call]
    if len(external) != 1:
        raise AssertionError("Matched ManageSquad constructor call evidence is missing or duplicated")
    for export, _, edge_name in EXPORTS:
        source_external = [row for row in read_rows(source_root / edge_name)
                           if row["kind"] == "CALL"
                           and (row["function"].upper(), row["site"].upper(), row["target"].upper())
                           in expected_call]
        if len(source_external) != 1:
            raise AssertionError(f"Constructor call differs in fresh export {export}")
        edge_rows.append({"export": export, **source_external[0]})

    body_output = tsv(("export", *BODY_FIELDS), body_rows)
    edge_output = tsv(("export", *EDGE_FIELDS), edge_rows)
    emission_output = tsv(BODY_FIELDS, first_export_bodies)
    return {
        ROOT / "config/NF2_2026/current-main-manage-squad-tab-body-exports.tsv": body_output,
        ROOT / "config/NF2_2026/current-main-manage-squad-tab-call-edges.tsv": edge_output,
        source_root / "manage-squad-tab-emission.tsv": emission_output,
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true",
                        help="verify snapshots without writing them")
    args = parser.parse_args()
    outputs = build_outputs()
    for path, content in outputs.items():
        if args.check:
            if not path.is_file() or path.read_text(encoding="utf-8") != content:
                raise SystemExit(f"ManageSquad export snapshot is stale: {path}")
        else:
            path.write_text(content, encoding="utf-8", newline="\n")
    action = "verified" if args.check else "wrote"
    print(f"{action} two-export body and call/data manifests for {len(FUNCTIONS)} ManageSquad functions")


if __name__ == "__main__":
    main()
