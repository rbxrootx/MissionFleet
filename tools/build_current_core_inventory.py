"""Normalize the Ghidra Core.dll function index for decomp.dev progress."""
import argparse
import csv
import hashlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
EXPECTED_CORE_SHA256 = "75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4"
# Ghidra stores this parser's discontiguous control-flow body as the sum of its
# block addresses. Its byte-matching extent is the full linear output through
# RET at 0x587BA82C, including addresses omitted from that sparse body.
# Ghidra can end these bodies mid-instruction. Keep the full linear spans:
# 0x587B6D70 ends at its RET; 0x586EA6E0 continues through RET 8 at 0x586EA97C;
# 0x5884C890 continues through MOV EAX,[ESP+0xC], POP/POP/RET at 0x5884CDC0.
LINEAR_SPAN_OVERRIDES = {
    "587b6d70": 0x3ABD,
    "586ea6e0": 0x29D,
    "5884c890": 0x537,
    # These scene callbacks contain small holes between Ghidra's control-flow
    # ranges. Keep the complete linear output span so disassembly and byte
    # verification include the intervening mapped bytes and the final RET.
    "586e9af0": 0xB4A,
    "586eaa50": 0xAD9,
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--ghidra-tsv", type=Path, default=Path("var/core-core-functions.tsv"))
    parser.add_argument("--core", type=Path, default=Path("D:/FleetMission/Core.dll"))
    parser.add_argument("--output", type=Path,
                        default=Path("config/NF2_2026/core-functions.tsv"))
    args = parser.parse_args()

    core = args.core if args.core.is_absolute() else ROOT / args.core
    if hashlib.sha256(core.read_bytes()).hexdigest() != EXPECTED_CORE_SHA256:
        raise ValueError(f"Core.dll does not match pinned installed build: {core}")

    source = args.ghidra_tsv if args.ghidra_tsv.is_absolute() else ROOT / args.ghidra_tsv
    with source.open(encoding="utf-8", newline="") as stream:
        reader = csv.DictReader(stream, delimiter="\t")
        rows = list(reader)
        if set(reader.fieldnames or ()) == {"component", "address", "name", "size"}:
            rows = [row for row in rows if row["component"] == "client-core-current"]
        elif set(reader.fieldnames or ()) != {"address", "size", "name"}:
            raise ValueError(f"Unsupported Ghidra TSV columns: {reader.fieldnames}")
    normalized = []
    seen = set()
    for row in rows:
        address = f"{int(row['address'], 16):08x}"
        size = LINEAR_SPAN_OVERRIDES.get(address, int(row["size"]))
        name = row["name"]
        if size <= 0 or address in seen or not name:
            raise ValueError(f"Invalid or duplicate Ghidra function record: {row}")
        seen.add(address)
        normalized.append({"component": "client-core-current", "address": address,
                           "name": name, "size": size})
    normalized.sort(key=lambda item: int(item["address"], 16))

    output = args.output if args.output.is_absolute() else ROOT / args.output
    output.parent.mkdir(parents=True, exist_ok=True)
    with output.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=("component", "address", "name", "size"),
                                delimiter="\t", lineterminator="\n")
        writer.writeheader()
        writer.writerows(normalized)
    print(f"Wrote {len(normalized)} functions / "
          f"{sum(item['size'] for item in normalized)} bytes to {output.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
