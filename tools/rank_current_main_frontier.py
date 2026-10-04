"""Rank unmatched Main.dll functions reached directly by verified functions."""
import argparse
from collections import defaultdict
from pathlib import Path

try:
    from .audit_match_callgraph import SOURCE_DIR, direct_targets, load_indexes
except ImportError:
    from audit_match_callgraph import SOURCE_DIR, direct_targets, load_indexes


def collect_frontier(inventory, matches, source_dir=SOURCE_DIR):
    verified = {
        address for address, record in matches.items()
        if record.get("verified_by") == "objdiff-3.8.0-byte-identical"
    }
    incoming = defaultdict(set)
    sites = defaultdict(list)
    for caller in verified:
        caller_row = inventory.get(caller)
        if caller_row is None:
            continue
        source = Path(source_dir) / f"{caller_row['name']}.cpp"
        if not source.is_file():
            continue
        for target, line_numbers in direct_targets(source.read_text(encoding="utf-8")).items():
            if target not in inventory or target in verified:
                continue
            incoming[target].add(caller)
            sites[target].extend((caller, line) for line in line_numbers)
    ranked = []
    for target, callers in incoming.items():
        ranked.append({
            "target": target,
            "name": inventory[target]["name"],
            "size": int(inventory[target]["size"]),
            "caller_count": len(callers),
            "callers": sorted(callers),
            "sites": sorted(sites[target]),
        })
    return sorted(ranked, key=lambda item: (-item["caller_count"], -item["size"], item["target"]))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--limit", type=int, default=30)
    args = parser.parse_args()
    inventory, matches = load_indexes()
    for item in collect_frontier(inventory, matches)[:args.limit]:
        callers = ",".join(item["callers"])
        print(f"{item['caller_count']}\t{item['size']}\t{item['target']}\t{item['name']}\t{callers}")


if __name__ == "__main__":
    main()
