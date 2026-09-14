"""Add exact six-byte absolute indirect-jump import thunks."""

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
    blocks = [
        "\n".join("    " + line for line in json.dumps(item, indent=2).splitlines())
        for item in records
    ]
    path.write_text(
        text[: -len(tail)] + ",\n" + ",\n".join(blocks) + tail,
        encoding="utf-8",
    )


def main() -> int:
    matches_path = CONFIG / "matches.json"
    matched = {
        (item["component"], item["address"].lower())
        for item in json.loads(matches_path.read_text(encoding="utf-8"))["matches"]
    }
    with (CONFIG / "functions.tsv").open(encoding="utf-8", newline="") as stream:
        inventory = list(csv.DictReader(stream, delimiter="\t"))

    public_records: list[dict[str, object]] = []
    verification_records: list[dict[str, object]] = []
    total = 0
    for component in COMPONENTS:
        region = (REGIONS / f"{component}.bin").read_bytes()
        thunks: list[tuple[dict[str, str], int]] = []
        for row in inventory:
            if row["component"] != component or int(row["size"]) != 6:
                continue
            if (component, row["address"].lower()) in matched:
                continue
            start = int(row["address"], 16) - BASE_ADDRESS
            body = region[start : start + 6]
            if len(body) != 6 or body[:2] != b"\xff\x25":
                continue
            thunks.append((row, struct.unpack("<I", body[2:])[0]))
        if not thunks:
            continue

        source_rel = Path("src") / component / "matches/RecoveredImportThunks.cpp"
        source_path = ROOT / source_rel
        lines = ["// Absolute IAT jump thunks recovered from the original image.", ""]
        for row, iat in thunks:
            token = row["address"].upper()
            iat_token = f"{iat:08X}"
            lines.extend(
                [
                    f'extern "C" void *Target{iat_token};',
                    f'extern "C" __declspec(naked) void Recovered{token}()',
                    "{",
                    f"    __asm jmp dword ptr [Target{iat_token}]",
                    "}",
                    "",
                ]
            )
        source_path.write_text("\n".join(lines), encoding="ascii")
        digest = hashlib.sha256(source_path.read_bytes()).hexdigest()

        for row, iat in thunks:
            token = row["address"].upper()
            target_symbol = f"_Target{iat:08X}"
            verification_records.append(
                {
                    "component": component,
                    "address": row["address"].lower(),
                    "size": 6,
                    "source": source_rel.as_posix(),
                    "symbol": f"_Recovered{token}",
                    "flags": ["/Od", "/GZ", "/GX-"],
                    "relocations": [
                        {"offset": 2, "symbol": target_symbol, "kind": "absolute"}
                    ],
                }
            )
            public_records.append(
                {
                    "component": component,
                    "address": row["address"].lower(),
                    "name": row["name"],
                    "size": 6,
                    "source": source_rel.as_posix(),
                    "source_sha256": digest,
                    "verified_by": "objdiff-3.8.0-byte-identical",
                }
            )
        total += len(thunks)

    append_records(CONFIG / "verifications.json", verification_records)
    append_records(matches_path, public_records)
    print(f"added {total} six-byte import thunks")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
