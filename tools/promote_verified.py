"""Promote selected objdiff-verified entries into the public progress inventory."""
import argparse
import csv
import hashlib
import json
import re
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("selectors", nargs="+", metavar="COMPONENT:ADDRESS")
    args = parser.parse_args()
    requested = {tuple(value.rsplit(":", 1)) for value in args.selectors}
    requested = {(component, address.lower()) for component, address in requested}

    verification = json.loads((CONFIG / "verifications.json").read_text())
    candidates = {(m["component"], m["address"].lower()): m
                  for m in verification["matches"]}
    missing = requested - candidates.keys()
    if missing:
        raise ValueError(f"selectors absent from verification inventory: {sorted(missing)}")

    public_path = CONFIG / "matches.json"
    public = json.loads(public_path.read_text())
    existing = {(m["component"], m["address"].lower()) for m in public["matches"]}
    names = {(row["component"], row["address"].lower()): row["name"]
             for row in csv.DictReader((CONFIG / "functions.tsv").open(), delimiter="\t")}
    records = []
    for key in sorted(requested - existing):
        match = candidates[key]
        source = ROOT / match["source"]
        records.append({
            "component": match["component"], "address": match["address"],
            "size": match["size"], "source": match["source"], "name": names[key],
            "source_sha256": hashlib.sha256(source.read_bytes()).hexdigest(),
            "verified_by": "objdiff-3.8.0-byte-identical",
        })
    if records:
        append_records(public_path, records)

    public = json.loads(public_path.read_text())
    functions = len(public["matches"])
    code_bytes = sum(int(m["size"]) for m in public["matches"])
    replacements = {
        ROOT / "README.md": [(r"current [\d,]+ reconstructed", f"current {functions:,} reconstructed")],
        ROOT / "STATUS.md": [(r"There are [\d,]+ functions", f"There are {functions:,} functions"),
                             (r"totaling [\d,]+ bytes", f"totaling {code_bytes:,} bytes")],
        ROOT / "docs/decomp-dev.md": [(r"credits [\d,]+ functions totaling [\d,]+ bytes",
                                        f"credits {functions:,} functions totaling {code_bytes:,} bytes")],
        ROOT / "tests/test_progress.py": [(r'("matched_functions"\], )\d[\d_]*', rf"\g<1>{functions:_}"),
                                           (r'("matched_code"\], ")\d+', rf"\g<1>{code_bytes}")],
    }
    for path, patterns in replacements.items():
        text = path.read_text()
        for pattern, replacement in patterns:
            text, count = re.subn(pattern, replacement, text)
            if count != 1:
                raise ValueError(f"expected one progress field in {path}: {pattern}")
        path.write_text(text)
    print(f"Promoted {len(records)} functions; totals are {functions} functions / {code_bytes} bytes.")


if __name__ == "__main__":
    main()
