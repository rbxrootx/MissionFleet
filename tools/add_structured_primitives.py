"""Register the curated structured primitive source batch."""

from __future__ import annotations

import csv
import hashlib
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062"
SPECS = {
    "login-server": [("0040d560", 48)],
    "game-server": [
        ("0041ed20", 44), ("0044c5e0", 44), ("004769c0", 44),
        ("00531412", 48),
    ],
    "save-server": [
        ("0040d1f0", 34), ("00413da0", 34), ("00413e60", 34),
        ("0040c150", 41), ("0040d7a0", 41), ("00422490", 41),
        ("00402c60", 41), ("004062e0", 41), ("00409760", 41),
        ("0043c8f0", 55), ("0043d290", 55), ("0043df20", 55),
        ("00525212", 48),
    ],
}


def append_records(path: Path, records: list[dict[str, object]]) -> None:
    text = path.read_text(encoding="utf-8")
    tail = "\n  ]\n}\n"
    blocks = [
        "\n".join("    " + line for line in json.dumps(item, indent=2).splitlines())
        for item in records
    ]
    if not text.endswith(tail):
        raise ValueError(f"unexpected JSON layout: {path}")
    path.write_text(
        text[: -len(tail)] + ",\n" + ",\n".join(blocks) + tail,
        encoding="utf-8",
    )


def main() -> int:
    with (CONFIG / "functions.tsv").open(encoding="utf-8", newline="") as stream:
        names = {
            (row["component"], row["address"].lower()): row["name"]
            for row in csv.DictReader(stream, delimiter="\t")
        }
    verifications = []
    matches = []
    for component, specs in SPECS.items():
        source_rel = Path("src") / component / "matches/RecoveredStructuredPrimitives.cpp"
        digest = hashlib.sha256((ROOT / source_rel).read_bytes()).hexdigest()
        for address, size in specs:
            common = {
                "component": component,
                "address": address,
                "size": size,
                "source": source_rel.as_posix(),
            }
            verifications.append(
                common
                | {
                    "symbol": f"_Recovered{address.upper()}",
                    "flags": ["/Od", "/GZ", "/GX-"],
                    "relocations": [],
                }
            )
            matches.append(
                common
                | {
                    "name": names[(component, address)],
                    "source_sha256": digest,
                    "verified_by": "objdiff-3.8.0-byte-identical",
                }
            )
    append_records(CONFIG / "verifications.json", verifications)
    append_records(CONFIG / "matches.json", matches)
    print(f"added {len(matches)} structured primitives")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
