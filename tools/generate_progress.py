"""Generate the objdiff v2 JSON report consumed by decomp.dev."""
import argparse
import csv
import hashlib
import json
from collections import Counter, defaultdict
from functools import lru_cache
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config" / "NF2_2062"
OUTPUT = ROOT / "build" / "progress" / "report.json"
COMPONENT_LABELS = {
    "login-server": "Login server",
    "game-server": "Game server",
    "save-server": "Persistence server",
    "client-main": "Archived 2062 Main.dll",
}
IMAGE_BASES = {
    "login-server": 0x401000,
    "game-server": 0x401000,
    "save-server": 0x401000,
    "client-main": 0x10000000,
}
SOURCE_PATHS = {
    "login-server": "src/login-server",
    "game-server": "src/game-server",
    "save-server": "src/save-server",
    "client-main": "src/client-2062/Main",
}


def source_hashes(data):
    """Return hashes equivalent under Git's LF/CRLF working-tree conversion."""
    lf = data.replace(b"\r\n", b"\n")
    crlf = lf.replace(b"\n", b"\r\n")
    return {
        hashlib.sha256(data).hexdigest(),
        hashlib.sha256(lf).hexdigest(),
        hashlib.sha256(crlf).hexdigest(),
    }


@lru_cache(maxsize=None)
def directory_entry_names(directory):
    path = Path(directory)
    if not path.is_dir():
        return frozenset()
    return frozenset(entry.name for entry in path.iterdir())


def exact_case_path_exists(relative_path):
    """Check path-component spelling even on case-insensitive filesystems."""
    current = ROOT
    for part in Path(relative_path).parts:
        if part in {"", "."}:
            continue
        if part == "..":
            return False
        if part not in directory_entry_names(current):
            return False
        current = current / part
    return current.is_file()


def measure(rows, matched, unit_count):
    total_bytes = sum(int(row["size"]) for row in rows)
    matched_rows = [row for row in rows if (row["component"], row["address"]) in matched]
    matched_bytes = sum(int(row["size"]) for row in matched_rows)
    percent = 100.0 * matched_bytes / total_bytes if total_bytes else 0.0
    function_percent = 100.0 * len(matched_rows) / len(rows) if rows else 0.0
    return {
        "fuzzy_match_percent": percent,
        "total_code": str(total_bytes),
        "matched_code": str(matched_bytes),
        "matched_code_percent": percent,
        "total_functions": len(rows),
        "matched_functions": len(matched_rows),
        "matched_functions_percent": function_percent,
        "complete_code": str(matched_bytes),
        "complete_code_percent": percent,
        "total_units": unit_count,
        "complete_units": unit_count if rows and len(matched_rows) == len(rows) else 0,
    }


def load_inventory():
    rows = []
    for inventory_path in (CONFIG / "functions.tsv", CONFIG / "client-functions.tsv"):
        with inventory_path.open(encoding="utf-8", newline="") as stream:
            rows.extend(csv.DictReader(stream, delimiter="\t"))
    seen = set()
    inventory = {}
    for row in rows:
        key = (row["component"], row["address"])
        if row["component"] not in COMPONENT_LABELS or key in seen or int(row["size"]) <= 0:
            raise ValueError(f"Invalid inventory row: {row}")
        int(row["address"], 16)
        seen.add(key)
        inventory[key] = row
    return rows, inventory


def load_matches(inventory):
    document = json.loads((CONFIG / "matches.json").read_text(encoding="utf-8"))
    if document != {"schema_version": 1, "matches": document.get("matches")}:
        raise ValueError("matches.json has unsupported fields or schema")
    result = set()
    for item in document["matches"]:
        required = {"component", "address", "name", "size", "source", "source_sha256", "verified_by"}
        if set(item) != required or item["verified_by"] != "objdiff-3.8.0-byte-identical":
            raise ValueError(f"Unverified match record: {item}")
        key = (item["component"], item["address"])
        if key not in inventory or key in result:
            raise ValueError(f"Unknown or duplicate match: {key}")
        expected = inventory[key]
        if item["name"] != expected["name"] or int(item["size"]) != int(expected["size"]):
            raise ValueError(f"Match identity differs from inventory: {key}")
        source = (ROOT / item["source"]).resolve()
        if (ROOT.resolve() not in source.parents or not source.is_file()
                or not exact_case_path_exists(item["source"])):
            raise ValueError(f"Match source is missing, mis-cased, or outside the project: {source}")
        if item["source_sha256"] not in source_hashes(source.read_bytes()):
            raise ValueError(f"Match source changed: {source}")
        result.add(key)

    client_document = json.loads(
        (CONFIG / "client-verifications.json").read_text(encoding="utf-8")
    )
    if client_document.get("schema_version") != 1 or client_document.get("component") != "Main.dll":
        raise ValueError("Unsupported client verification inventory")
    for item in client_document["matches"]:
        required = {
            "address", "name", "size", "symbol", "source", "source_sha256",
            "verified_by", "flags", "relocations", "evidence",
        }
        if not required.issubset(item) or item["verified_by"] != "objdiff-3.8.0-byte-identical":
            raise ValueError(f"Unverified client match record: {item}")
        key = ("client-main", item["address"].lower())
        if key not in inventory or key in result:
            raise ValueError(f"Unknown or duplicate client match: {key}")
        expected = inventory[key]
        if item["name"] != expected["name"] or int(item["size"]) != int(expected["size"]):
            raise ValueError(f"Client match identity differs from inventory: {key}")
        source = (ROOT / item["source"]).resolve()
        if (ROOT.resolve() not in source.parents or not source.is_file()
                or not exact_case_path_exists(item["source"])):
            raise ValueError(f"Client match source is missing, mis-cased, or outside the project: {source}")
        if item["source_sha256"] not in source_hashes(source.read_bytes()):
            raise ValueError(f"Client match source changed: {source}")
        result.add(key)
    return result


def build_report():
    rows, inventory = load_inventory()
    matched = load_matches(inventory)
    grouped = defaultdict(list)
    for row in rows:
        grouped[row["component"]].append(row)
    units = []
    categories = []
    for component, label in COMPONENT_LABELS.items():
        component_rows = grouped[component]
        measures = measure(component_rows, matched, 1)
        name_counts = Counter(row["name"] for row in component_rows)
        functions = []
        for row in component_rows:
            address = int(row["address"], 16)
            is_match = (component, row["address"]) in matched
            report_name = row["name"] if name_counts[row["name"]] == 1 else f"{row['name']}@{row['address']}"
            functions.append({
                "name": report_name,
                "size": row["size"],
                "fuzzy_match_percent": 100.0 if is_match else 0.0,
                "address": str(address - IMAGE_BASES[component]),
                "metadata": {"virtual_address": str(address)},
            })
        units.append({
            "name": component,
            "measures": measures,
            "functions": functions,
            "metadata": {
                "complete": measures["matched_functions"] == measures["total_functions"],
                "module_name": label,
                "source_path": SOURCE_PATHS[component],
                "progress_categories": [component],
            },
        })
        categories.append({"id": component, "name": label, "measures": measures})
    return {"measures": measure(rows, matched, len(units)), "units": units, "version": 2, "categories": categories}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="verify an existing report is current")
    args = parser.parse_args()
    text = json.dumps(build_report(), separators=(",", ":"), ensure_ascii=False) + "\n"
    if args.check:
        if not OUTPUT.exists() or OUTPUT.read_text(encoding="utf-8") != text:
            raise SystemExit("Progress report is stale; regenerate it and review the change")
    else:
        OUTPUT.parent.mkdir(parents=True, exist_ok=True)
        OUTPUT.write_text(text, encoding="utf-8", newline="\n")
    report = json.loads(text)
    m = report["measures"]
    print(f"NF2_2062: {m['matched_functions']}/{m['total_functions']} functions, "
          f"{m['matched_code']}/{m['total_code']} bytes ({m['matched_code_percent']:.4f}%)")


if __name__ == "__main__":
    main()
