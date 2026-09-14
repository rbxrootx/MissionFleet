"""Export a public-safe function inventory from the local Ghidra analysis."""
import argparse
import csv
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
COMPONENTS = ("login-server", "game-server", "save-server")


def read_component(name):
    source = ROOT / "private-inputs" / "decompilation" / "pseudocode" / f"{name}-functions.tsv"
    summary_path = source.with_name(f"{name}-summary.txt")
    summary = dict(line.split("=", 1) for line in summary_path.read_text().splitlines())
    with source.open(encoding="utf-8", newline="") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    if len(rows) != int(summary["functions"]):
        raise ValueError(f"{name}: summary and inventory counts differ")
    result = []
    seen = set()
    for row in rows:
        address = int(row["address"], 16)
        size = int(row["body_bytes"])
        if address in seen or size <= 0:
            raise ValueError(f"{name}: invalid function at {address:#x}")
        seen.add(address)
        result.append((name, f"{address:08x}", str(size), row["name"]))
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="fail if the committed snapshot differs")
    args = parser.parse_args()
    output = ROOT / "config" / "NF2_2062" / "functions.tsv"
    lines = ["component\taddress\tsize\tname\n"]
    for component in COMPONENTS:
        for row in read_component(component):
            lines.append("\t".join(row) + "\n")
    text = "".join(lines)
    if args.check:
        if not output.exists() or output.read_text(encoding="utf-8") != text:
            raise SystemExit("Committed function inventory is stale; rerun without --check and review")
    else:
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_text(text, encoding="utf-8", newline="\n")
    print(f"{len(lines) - 1} functions -> {output.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
