"""Register the curated small semantic primitive source batch."""

from __future__ import annotations

import csv
import hashlib
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062"
SPECS = {
    "login-server": [
        ("00411310", 1), ("00412ca8", 1), ("00416b38", 1),
        ("00435998", 1), ("004359df", 1), ("00435aa0", 1),
        ("00435c9c", 1), ("004362e6", 1), ("004370f8", 1),
        ("0043711e", 1), ("0043779f", 1), ("0041a045", 4),
        ("0041d1e0", 4), ("0040c400", 17), ("0040ada0", 17),
    ],
    "game-server": [
        ("00420830", 11), ("004412e0", 11), ("004784a0", 11),
        ("0048cfc0", 17), ("005343b6", 17), ("0055d542", 17),
        ("00446550", 24), ("004895b0", 24), ("00403fd0", 27),
        ("0044a390", 27), ("004466f0", 29), ("00473b60", 29),
    ],
    "save-server": [
        ("00435a90", 3), ("0043cee0", 10), ("0043cf20", 10),
        ("0043cf60", 10), ("0043ced0", 10), ("0043cf10", 10),
        ("0043cf50", 10), ("00436670", 17), ("00449650", 17),
        ("00528152", 17), ("005605c2", 17), ("0042c520", 24),
        ("0042c380", 27), ("00429900", 29),
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
        source_rel = Path("src") / component / "matches/RecoveredSmallPrimitives.cpp"
        digest = hashlib.sha256((ROOT / source_rel).read_bytes()).hexdigest()
        for address, size in specs:
            token = address.upper()
            common = {
                "component": component,
                "address": address,
                "size": size,
                "source": source_rel.as_posix(),
            }
            verifications.append(
                common
                | {
                    "symbol": f"_Recovered{token}",
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
    print(f"added {len(matches)} curated small primitives")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
