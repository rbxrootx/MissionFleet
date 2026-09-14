"""Rank repeated, unmatched function bodies across recovered server regions."""

from __future__ import annotations

import argparse
import csv
import json
from collections import defaultdict
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
COMPONENTS = ("login-server", "game-server", "save-server")


def parse_int(value: str) -> int:
    return int(value, 0)


def load_inventory(path: Path) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def load_matched(path: Path) -> set[tuple[str, str]]:
    data = json.loads(path.read_text(encoding="utf-8"))
    return {
        (item["component"], item["address"].lower())
        for item in data["matches"]
    }


def find_groups(
    inventory: list[dict[str, str]],
    matched: set[tuple[str, str]],
    regions: dict[str, bytes],
    base_address: int,
    min_size: int,
    max_size: int,
    min_count: int,
) -> list[tuple[bytes, list[dict[str, str]]]]:
    groups: dict[bytes, list[dict[str, str]]] = defaultdict(list)
    for row in inventory:
        key = (row["component"], row["address"].lower())
        if key in matched:
            continue
        size = int(row["size"])
        if size < min_size or size > max_size:
            continue
        start = int(row["address"], 16) - base_address
        end = start + size
        region = regions[row["component"]]
        if start < 0 or end > len(region):
            continue
        groups[region[start:end]].append(row)

    return sorted(
        (
            (body, members)
            for body, members in groups.items()
            if len(members) >= min_count
        ),
        key=lambda item: (-len(item[1]), len(item[0]), item[0]),
    )


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description=(
            "Rank byte-identical function bodies that are not yet credited in "
            "matches.json."
        )
    )
    parser.add_argument(
        "--config",
        type=Path,
        default=ROOT / "config/NF2_2062",
        help="version config directory",
    )
    parser.add_argument(
        "--regions",
        type=Path,
        default=ROOT / "private-inputs/decompilation/regions",
        help="directory containing <component>.bin recovered regions",
    )
    parser.add_argument("--base-address", type=parse_int, default=0x401000)
    parser.add_argument("--min-size", type=int, default=4)
    parser.add_argument("--max-size", type=int, default=64)
    parser.add_argument("--min-count", type=int, default=2)
    parser.add_argument("--limit", type=int, default=50)
    return parser


def main() -> int:
    args = build_parser().parse_args()
    if args.min_size < 1 or args.max_size < args.min_size:
        raise SystemExit("invalid size range")
    if args.min_count < 2 or args.limit < 1:
        raise SystemExit("--min-count must be at least 2 and --limit must be positive")

    inventory = load_inventory(args.config / "functions.tsv")
    matched = load_matched(args.config / "matches.json")
    regions = {
        component: (args.regions / f"{component}.bin").read_bytes()
        for component in COMPONENTS
    }
    groups = find_groups(
        inventory,
        matched,
        regions,
        args.base_address,
        args.min_size,
        args.max_size,
        args.min_count,
    )

    for index, (body, members) in enumerate(groups[: args.limit], 1):
        print(f"group {index}: {len(members)} functions, {len(body)} bytes")
        print(f"  bytes: {body.hex()}")
        for row in members:
            print(
                f"  {row['component']} {row['address']} "
                f"{row['name']}"
            )
    print(f"listed {min(len(groups), args.limit)} of {len(groups)} repeated groups")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
