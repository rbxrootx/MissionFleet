"""Register the curated compact semantic stub batch."""

from __future__ import annotations

import csv
import hashlib
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062"
SPECS = {
    "game-server": [
        ("00557acc", 7), ("0047dcf0", 7), ("004c9900", 7),
        ("004b5680", 10), ("004bedf0", 11), ("004bb930", 11),
        ("00490bad", 12), ("005636b3", 12), ("005726ed", 12),
        ("00564ff6", 13), ("004a2d80", 13), ("00508667", 16),
    ],
    "save-server": [
        ("00556526", 7), ("00472480", 10), ("0047c030", 11),
        ("004773a0", 11), ("0044d1dd", 12), ("005695b3", 12),
        ("0057b09d", 12), ("0056aef6", 13), ("0043ce40", 13),
        ("0043cec0", 13), ("0045f390", 13), ("004ed646", 16),
        ("00437830", 16), ("0043c8e0", 16), ("0043d160", 16),
        ("0043dd90", 16),
    ],
}


def append_records(path: Path, records: list[dict[str, object]]) -> None:
    text = path.read_text(encoding="utf-8")
    tail = "\n  ]\n}\n"
    if not text.endswith(tail):
        raise ValueError(f"unexpected JSON layout: {path}")
    blocks = [
        "\n".join("    " + line for line in json.dumps(item, indent=2).splitlines())
        for item in records
    ]
    path.write_text(text[: -len(tail)] + ",\n" + ",\n".join(blocks) + tail, encoding="utf-8")


def main() -> int:
    with (CONFIG / "functions.tsv").open(encoding="utf-8", newline="") as stream:
        names = {
            (row["component"], row["address"].lower()): row["name"]
            for row in csv.DictReader(stream, delimiter="\t")
        }
    verifications = []
    matches = []
    for component, specs in SPECS.items():
        source_rel = Path("src") / component / "matches/RecoveredCompactStubs.cpp"
        digest = hashlib.sha256((ROOT / source_rel).read_bytes()).hexdigest()
        for address, size in specs:
            common = {"component": component, "address": address, "size": size, "source": source_rel.as_posix()}
            verifications.append(common | {"symbol": f"_Recovered{address.upper()}", "flags": ["/Od", "/GZ", "/GX-"], "relocations": []})
            matches.append(common | {"name": names[(component, address)], "source_sha256": digest, "verified_by": "objdiff-3.8.0-byte-identical"})
    append_records(CONFIG / "verifications.json", verifications)
    append_records(CONFIG / "matches.json", matches)
    print(f"added {len(matches)} compact stubs")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
