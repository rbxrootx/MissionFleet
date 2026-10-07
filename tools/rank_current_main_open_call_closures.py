"""Rank reachable byte-match closures from the installed Main.dll call graph."""
import argparse
import csv
import json
from collections import defaultdict, deque
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
DEFAULT_EDGES = ROOT / "var/current-main-next/main-function-edges.tsv"
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
IMAGE_BASE = 0x58730000
MARKER = "objdiff-3.8.0-byte-identical"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--edges", type=Path, default=DEFAULT_EDGES)
    parser.add_argument("--limit", type=int, default=40)
    parser.add_argument("--min-bytes", type=int, default=500)
    args = parser.parse_args()

    with INVENTORY.open(encoding="utf-8", newline="") as stream:
        rows = {row["address"].upper(): row for row in csv.DictReader(stream, delimiter="\t")
                if row["component"] == "client-main-current"}
    records = json.loads(CATALOG.read_text(encoding="utf-8"))["matches"]
    matched = {item["address"].upper() for item in records if item.get("verified_by") == MARKER}
    open_addresses = set(rows) - matched

    outgoing = defaultdict(set)
    incoming = defaultdict(set)
    data_references = defaultdict(set)
    unresolved = defaultdict(set)
    image_end = IMAGE_BASE + IMAGE.stat().st_size
    with args.edges.open(encoding="utf-8", newline="") as stream:
        reader = csv.DictReader(stream, delimiter="\t")
        for edge in reader:
            source = edge["function"].upper()
            if edge["kind"] == "DATA":
                data_references[source].add(edge["site"].upper())
                continue
            raw_target = edge["target"].upper()
            target = edge["target_function"].upper()
            if not target:
                target_address = int(raw_target, 16)
                if IMAGE_BASE <= target_address < image_end:
                    unresolved[source].add(raw_target)
                continue
            if target not in rows:
                unresolved[source].add(target)
                continue
            outgoing[source].add(target)
            incoming[target].add(source)

    candidates = []
    for root in open_addresses:
        matched_callers = incoming[root] & matched
        data_refs = data_references[root]
        if not matched_callers and not data_refs:
            continue

        closure = {root}
        queue = deque([root])
        while queue:
            source = queue.popleft()
            for target in outgoing[source]:
                if target in open_addresses and target not in closure:
                    closure.add(target)
                    queue.append(target)

        total = sum(int(rows[address]["size"]) for address in closure)
        if total >= args.min_bytes:
            unknown = set().union(*(unresolved[address] for address in closure))
            candidates.append((total, len(closure), len(matched_callers), len(data_refs),
                               len(unknown), root, rows[root]["name"], closure, unknown))

    candidates.sort(reverse=True)
    for total, count, callers, references, unknown_count, root, name, closure, unknown in candidates[:args.limit]:
        print(f"{total:7,} bytes {count:4} functions matched-callers={callers:3} "
              f"data-refs={references:3} unresolved-in-module={unknown_count:3} root={root} {name}")
        if unknown:
            print("    unresolved: " + ", ".join(sorted(unknown)[:12]))
        top = sorted(closure, key=lambda address: int(rows[address]["size"]), reverse=True)[:8]
        print("    largest: " + ", ".join(
            f"{address}:{int(rows[address]['size'])}" for address in top))


if __name__ == "__main__":
    main()
