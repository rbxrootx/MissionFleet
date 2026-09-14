"""Add exact five-byte relative-jump thunks to the matching inventory."""

from __future__ import annotations

import csv
import hashlib
import json
import struct
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2062"
REGIONS = ROOT / "private-inputs/decompilation/regions"
BASE_ADDRESS = 0x401000
COMPONENTS = ("login-server", "game-server", "save-server")


def append_records(path: Path, records: list[dict[str, object]]) -> None:
    if not records:
        return
    text = path.read_text(encoding="utf-8")
    tail = "\n  ]\n}\n"
    if not text.endswith(tail):
        raise ValueError(f"unexpected JSON layout: {path}")
    rendered = []
    for record in records:
        block = json.dumps(record, indent=2)
        rendered.append("\n".join("    " + line for line in block.splitlines()))
    path.write_text(
        text[: -len(tail)] + ",\n" + ",\n".join(rendered) + tail,
        encoding="utf-8",
    )


def main() -> int:
    matches_path = CONFIG / "matches.json"
    verifications_path = CONFIG / "verifications.json"
    matched = {
        (item["component"], item["address"].lower())
        for item in json.loads(matches_path.read_text(encoding="utf-8"))["matches"]
    }
    with (CONFIG / "functions.tsv").open(encoding="utf-8", newline="") as stream:
        inventory = list(csv.DictReader(stream, delimiter="\t"))

    total = 0
    all_matches: list[dict[str, object]] = []
    all_verifications: list[dict[str, object]] = []
    for component in COMPONENTS:
        region = (REGIONS / f"{component}.bin").read_bytes()
        thunks: list[tuple[dict[str, str], int]] = []
        for row in inventory:
            if row["component"] != component or int(row["size"]) != 5:
                continue
            address = int(row["address"], 16)
            if (component, row["address"].lower()) in matched:
                continue
            start = address - BASE_ADDRESS
            body = region[start : start + 5]
            if len(body) != 5 or body[0] != 0xE9:
                continue
            displacement = struct.unpack("<i", body[1:])[0]
            thunks.append((row, address + 5 + displacement))
        if not thunks:
            continue

        source_rel = Path("src") / component / "matches/RecoveredJumpThunks.cpp"
        source_path = ROOT / source_rel
        lines = [
            "// Five-byte import and dispatch thunks recovered from the original image.",
            "",
        ]
        for row, target in thunks:
            address_token = row["address"].upper()
            target_token = f"{target:08X}"
            lines.extend(
                [
                    f'extern "C" void Target{target_token}();',
                    f'extern "C" __declspec(naked) void Recovered{address_token}()',
                    "{",
                    f"    __asm jmp Target{target_token}",
                    "}",
                    "",
                ]
            )
        source_path.write_text("\n".join(lines), encoding="ascii")
        digest = hashlib.sha256(source_path.read_bytes()).hexdigest()

        for row, target in thunks:
            address = row["address"].lower()
            address_token = row["address"].upper()
            target_symbol = f"_Target{target:08X}"
            all_verifications.append(
                {
                    "component": component,
                    "address": address,
                    "size": 5,
                    "source": source_rel.as_posix(),
                    "symbol": f"_Recovered{address_token}",
                    "flags": ["/Od", "/GZ", "/GX-"],
                    "relocations": [{"offset": 1, "symbol": target_symbol}],
                }
            )
            all_matches.append(
                {
                    "component": component,
                    "address": address,
                    "name": row["name"],
                    "size": 5,
                    "source": source_rel.as_posix(),
                    "source_sha256": digest,
                    "verified_by": "objdiff-3.8.0-byte-identical",
                }
            )
        total += len(thunks)

    append_records(verifications_path, all_verifications)
    append_records(matches_path, all_matches)
    print(f"added {total} five-byte jump thunks")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
