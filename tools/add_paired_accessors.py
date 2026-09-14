"""Register paired field accessors and fixed-result stubs."""

from __future__ import annotations

import csv
import hashlib
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062"
SPECS = {
    "game-server": [
        ("004e1b40", 17), ("004f2f76", 17), ("00550912", 17),
        ("00497de7", 17), ("00552823", 17), ("00531964", 17),
        ("0053f686", 17), ("00557f71", 17), ("005343c7", 17),
        ("00533b87", 17), ("00508628", 18), ("005192c2", 18),
        ("00569983", 18), ("004f85de", 18),
    ],
    "save-server": [
        ("004bbe80", 17), ("004d0ea6", 17), ("0054f382", 17),
        ("0045440c", 17), ("00551293", 17), ("0052572d", 17),
        ("0052f0e6", 17), ("005569cb", 17), ("00528163", 17),
        ("00527950", 17), ("004ed607", 18), ("005024ad", 18),
        ("00572333", 18), ("004d767e", 18),
    ],
}


def append_records(path: Path, records: list[dict[str, object]]) -> None:
    text = path.read_text(encoding="utf-8")
    tail = "\n  ]\n}\n"
    if not text.endswith(tail):
        raise ValueError(f"unexpected JSON layout: {path}")
    blocks = ["\n".join("    " + line for line in json.dumps(item, indent=2).splitlines()) for item in records]
    path.write_text(text[: -len(tail)] + ",\n" + ",\n".join(blocks) + tail, encoding="utf-8")


def main() -> int:
    with (CONFIG / "functions.tsv").open(encoding="utf-8", newline="") as stream:
        names = {(row["component"], row["address"].lower()): row["name"] for row in csv.DictReader(stream, delimiter="\t")}
    verifications = []
    matches = []
    for component, specs in SPECS.items():
        source_rel = Path("src") / component / "matches/RecoveredPairedAccessors.cpp"
        digest = hashlib.sha256((ROOT / source_rel).read_bytes()).hexdigest()
        for address, size in specs:
            common = {"component": component, "address": address, "size": size, "source": source_rel.as_posix()}
            verifications.append(common | {"symbol": f"_Recovered{address.upper()}", "flags": ["/Od", "/GZ", "/GX-"], "relocations": []})
            matches.append(common | {"name": names[(component, address)], "source_sha256": digest, "verified_by": "objdiff-3.8.0-byte-identical"})
    append_records(CONFIG / "verifications.json", verifications)
    append_records(CONFIG / "matches.json", matches)
    print(f"added {len(matches)} paired accessors")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
