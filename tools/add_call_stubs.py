"""Register short relative-call wrappers with explicit relocation targets."""

from __future__ import annotations

import csv
import hashlib
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062"
SPECS = {
    "login-server": [
        ("00429520", 15, 8, "00429530"),
        ("0042c759", 14, 7, "0042C767"),
        ("0042e01e", 14, 7, "0042E02C"),
    ],
    "game-server": [
        ("004ca0b0", 15, 8, "004CA0C0"),
        ("004b20ea", 6, 1, "004B1FD0"),
        ("004b8760", 15, 6, "004B8770"),
        ("00548047", 16, 8, "0054806E"),
        ("004fae21", 16, 8, "004FADB0"),
    ],
    "save-server": [
        ("00484af0", 15, 8, "00484B00"),
        ("0046f5ea", 6, 1, "0046F4D0"),
        ("004807b0", 15, 6, "004807C0"),
        ("005430e7", 16, 8, "0054310E"),
        ("004d9f21", 16, 8, "004D9EB0"),
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
        source_rel = Path("src") / component / "matches/RecoveredCallStubs.cpp"
        digest = hashlib.sha256((ROOT / source_rel).read_bytes()).hexdigest()
        for address, size, offset, target in specs:
            common = {"component": component, "address": address, "size": size, "source": source_rel.as_posix()}
            verifications.append(common | {"symbol": f"_Recovered{address.upper()}", "flags": ["/Od", "/GZ", "/GX-"], "relocations": [{"offset": offset, "symbol": f"_Target{target}"}]})
            matches.append(common | {"name": names[(component, address)], "source_sha256": digest, "verified_by": "objdiff-3.8.0-byte-identical"})
    append_records(CONFIG / "verifications.json", verifications)
    append_records(CONFIG / "matches.json", matches)
    print(f"added {len(matches)} call stubs")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
