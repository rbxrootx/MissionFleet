"""Remove explicitly selected, unpromoted experiments from verification config."""
import argparse
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("selectors", nargs="+", metavar="COMPONENT:ADDRESS")
    args = parser.parse_args()
    requested = {tuple(value.rsplit(":", 1)) for value in args.selectors}
    requested = {(component, address.lower()) for component, address in requested}
    public = json.loads((ROOT / "config/NF2_2062/matches.json").read_text())
    promoted = {(m["component"], m["address"].lower()) for m in public["matches"]}
    overlap = requested & promoted
    if overlap:
        raise ValueError(f"refusing to prune promoted matches: {sorted(overlap)}")
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text())
    before = len(document["matches"])
    document["matches"] = [m for m in document["matches"]
                           if (m["component"], m["address"].lower()) not in requested]
    removed = before - len(document["matches"])
    if removed != len(requested):
        raise ValueError(f"requested {len(requested)} entries but removed {removed}")
    path.write_text(json.dumps(document, indent=2) + "\n")
    print(f"Removed {removed} unpromoted verification experiments.")


if __name__ == "__main__":
    main()
