"""Audit direct calls from current-client matched functions to indexed targets."""

from __future__ import annotations

import argparse
import csv
import json
import re
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLIENT_CONFIG = ROOT / "config/NF2_2026/client-verifications.json"
CLIENT_INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
SOURCE_DIR = ROOT / "src/client-current/Main"
DIRECT_TARGET = re.compile(r"\b(?:call|jmp)\s+(?:dword\s+ptr\s+)?(0x[0-9a-f]{8})\b", re.I)


def direct_targets(source: str) -> dict[str, list[int]]:
    """Return direct call/tail-jump targets and source line numbers."""
    found: dict[str, list[int]] = defaultdict(list)
    for line_number, line in enumerate(source.splitlines(), 1):
        for match in DIRECT_TARGET.finditer(line):
            found[match.group(1)[2:].upper()].append(line_number)
    return dict(found)


def load_indexes() -> tuple[dict[str, dict], dict[str, dict]]:
    with CLIENT_INVENTORY.open(encoding="utf-8", newline="") as stream:
        inventory = {
            row["address"].upper(): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    config = json.loads(CLIENT_CONFIG.read_text(encoding="utf-8"))
    matches = {item["address"].upper(): item for item in config["matches"]}
    return inventory, matches


def audit(seed: str, depth: int = 1) -> list[dict]:
    inventory, matches = load_indexes()
    seed = seed.upper().removeprefix("0X")
    if seed not in inventory:
        raise ValueError(f"seed {seed} is not in the current Main.dll inventory")
    seen = {seed}
    frontier = [seed]
    edges = []
    for level in range(1, depth + 1):
        next_frontier = []
        for caller in frontier:
            caller_row = inventory[caller]
            source = SOURCE_DIR / f"{caller_row['name']}.cpp"
            if not source.is_file():
                continue
            for target, lines in direct_targets(source.read_text(encoding="utf-8")).items():
                if target not in inventory:
                    continue
                target_row = inventory[target]
                record = matches.get(target)
                status = "verified" if record and record.get("verified_by") == "objdiff-3.8.0-byte-identical" else "unmatched"
                edges.append({
                    "depth": level,
                    "caller": caller,
                    "target": target,
                    "name": target_row["name"],
                    "size": int(target_row["size"]),
                    "status": status,
                    "sites": ",".join(str(line) for line in lines),
                })
                if target not in seen:
                    seen.add(target)
                    next_frontier.append(target)
        frontier = next_frontier
    return edges


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("seed", help="current Main.dll function address, e.g. 58799EB0")
    parser.add_argument("--depth", type=int, default=1, help="number of direct-call layers (default: 1)")
    args = parser.parse_args()
    for edge in audit(args.seed, args.depth):
        print("{depth}\t{caller}\t{target}\t{size}\t{status}\t{sites}\t{name}".format(**edge))


if __name__ == "__main__":
    main()
