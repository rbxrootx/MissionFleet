"""Audit an open Main.dll direct-call closure against fresh Ghidra body ranges."""
import argparse
import csv
import json
from collections import defaultdict, deque
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
DEFAULT_EDGES = ROOT / "var/current-main-next/main-function-edges.tsv"
DEFAULT_BODIES = ROOT / "var/current-main-next/main-function-bodies.tsv"
MARKER = "objdiff-3.8.0-byte-identical"
IMAGE_BASE = 0x58730000


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", required=True, help="open root function address")
    parser.add_argument("--edges", type=Path, default=DEFAULT_EDGES)
    parser.add_argument("--bodies", type=Path, default=DEFAULT_BODIES)
    parser.add_argument("--manifest", type=Path,
                        help="write closure body ranges as an emitter-compatible TSV")
    args = parser.parse_args()
    root = f"{int(args.root, 16):08X}"

    rows = {row["address"].upper(): row for row in read_tsv(INVENTORY)
            if row["component"] == "client-main-current"}
    catalog = json.loads(CATALOG.read_text(encoding="utf-8"))["matches"]
    matched = {item["address"].upper() for item in catalog
               if item.get("verified_by") == MARKER}
    open_addresses = set(rows) - matched
    if root not in rows or root not in open_addresses:
        raise SystemExit(f"root {root} is not an open client-main-current function")

    outgoing = defaultdict(set)
    incoming = defaultdict(set)
    edges = read_tsv(args.edges)
    image = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
    image_end = IMAGE_BASE + image.stat().st_size
    unresolved = defaultdict(set)
    call_edges = []
    for edge in edges:
        if edge["kind"] != "CALL":
            continue
        source = edge["function"].upper()
        target = edge["target_function"].upper()
        raw_target = edge["target"].upper()
        call_edges.append((source, edge["site"].upper(), target, raw_target))
        if target:
            if target in rows:
                outgoing[source].add(target)
                incoming[target].add(source)
            else:
                unresolved[source].add(target)
        else:
            target_value = int(raw_target, 16)
            if IMAGE_BASE <= target_value < image_end:
                unresolved[source].add(raw_target)

    closure = {root}
    queue = deque([root])
    while queue:
        source = queue.popleft()
        for target in outgoing[source] & open_addresses:
            if target not in closure:
                closure.add(target)
                queue.append(target)

    body_rows = defaultdict(list)
    for body in read_tsv(args.bodies):
        body_rows[body["function"].upper()].append(body)
    issues = []
    for address in sorted(closure):
        parts = body_rows[address]
        indexed_size = int(rows[address]["size"])
        body_size = sum(int(part["length"]) for part in parts)
        instruction_size = sum(int(part["instruction_bytes"]) for part in parts)
        if not parts or body_size != indexed_size or instruction_size != body_size:
            issues.append((address, indexed_size, body_size, instruction_size))

    outside_edges = [(source, site, target) for source, site, target, _ in call_edges
                     if target in closure and source not in closure]
    boundary = [(source, site, target or raw) for source, site, target, raw in call_edges
                if source in closure and (target in matched or
                    (not target and IMAGE_BASE <= int(raw, 16) < image_end))]
    unknown = set().union(*(unresolved[address] for address in closure))
    total = sum(int(rows[address]["size"]) for address in closure)
    print(f"root={root} {rows[root]['name']}")
    print(f"open closure={len(closure)} functions, {total:,} indexed bytes")
    print(f"external control-flow sites={len(outside_edges)} from {len({x[0] for x in outside_edges})} functions; "
          f"matched external callers={len({x[0] for x in outside_edges if x[0] in matched})}")
    print(f"boundary transfer sites to verified functions={len(boundary)}; "
          f"unresolved internal targets={len(unknown)}")
    print(f"Ghidra body coverage issues={len(issues)}")
    for issue in issues[:25]:
        print(f"  {issue[0]} inventory={issue[1]} body={issue[2]} instruction={issue[3]}")
    direct = sorted(outgoing[root])
    print("direct children and their open closures:")
    for child in direct:
        if child not in open_addresses:
            continue
        child_closure = {child}
        child_queue = deque([child])
        while child_queue:
            for target in outgoing[child_queue.popleft()] & open_addresses:
                if target not in child_closure:
                    child_closure.add(target)
                    child_queue.append(target)
        child_bytes = sum(int(rows[address]["size"]) for address in child_closure)
        print(f"  {child} {rows[child]['name']}: {int(rows[child]['size']):,} B; "
              f"closure={len(child_closure)} functions, {child_bytes:,} B")

    if args.manifest:
        args.manifest.parent.mkdir(parents=True, exist_ok=True)
        with args.manifest.open("w", encoding="utf-8", newline="") as stream:
            writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
            writer.writerow(["function", "start", "length", "instruction_bytes", "instruction_count"])
            for address in sorted(closure):
                for part in body_rows[address]:
                    writer.writerow([address, part["start"], part["length"],
                                     part["instruction_bytes"], part["instruction_count"]])
        print(f"wrote {args.manifest}")
    if issues:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
