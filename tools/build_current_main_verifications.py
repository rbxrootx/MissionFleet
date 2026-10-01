"""Build the installed Main.dll byte-match inventory from the local capture."""
import argparse
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = ("587962C0", "587C35A0")
EVIDENCE = {
    "587962C0": {
        "name_in_analysis": "AllocScreen",
        "called_by": "Export AllocScreen at RVA 0x662C0 in the installed Main.dll image.",
        "behavior": "Allocates 0x84 bytes through 0x5897CC4E, constructs the screen through FUN_587C35A0, stores the pointer at 0x58A24584, optionally calls vtable offset +0x20 through 0x58A24594, and returns the stored pointer.",
        "uncertainty": "The host meaning of the optional third parameter and vtable callback is unknown. This capture is the installed 2026 build, distinct from the archived 2062 Main.dll.",
    },
    "587C35A0": {
        "name_in_analysis": "FUN_587c35a0",
        "called_by": "Directly called by exported AllocScreen at 0x587962C0.",
        "behavior": "Initializes a CMenuScreen/CNavyFIELDScreen object, constructs a series of child controls with 0x70-byte allocations, initializes shared menu fields, and reads a FleetMission registry version value before returning the screen object.",
        "uncertainty": "The exact purpose and labels of several child controls and the significance of the registry/version paths are not fully established. Ghidra's indexed function extent is 1,704 bytes.",
    },
}


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--mark-verified", action="store_true",
                        help="record objdiff verification after verify_client_matches.py passes")
    args = parser.parse_args()
    old_config = json.loads((ROOT / "config/NF2_2062/client-verifications.json").read_text(encoding="utf-8"))
    manifest_path = ROOT / "reports/unpacked-current-main/manifest.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    module = next(item for item in manifest["modules"] if item["name"] == "Main.dll")
    capture = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
    inventory_path = ROOT / "config/NF2_2026/client-functions.tsv"
    with inventory_path.open(encoding="utf-8", newline="") as stream:
        inventory = {row["address"].upper(): row for row in csv.DictReader(stream, delimiter="\t")}
    relocation_data = json.loads((ROOT / "var/current-main-relocations.json").read_text(encoding="utf-8"))
    marker = "objdiff-3.8.0-byte-identical" if args.mark_verified else "candidate-not-yet-verified"
    matches = []
    for address in ADDRESSES:
        row = inventory[address]
        source = f"src/client-current/Main/{row['name']}.cpp"
        source_path = ROOT / source
        name = row["name"]
        matches.append({
            "address": address,
            "name": name,
            "size": int(row["size"]),
            "symbol": "_" + name,
            "source": source,
            "source_sha256": sha256(source_path),
            "verified_by": marker,
            "flags": ["/O2", "/GX-", "/Zm200"],
            "relocations": [dict(item, audit_only=True) for item in relocation_data[address]],
            "evidence": EVIDENCE[address],
        })
    document = {
        "schema_version": 1,
        "component": "Main.dll",
        "image_base": "58730000",
        "mapped_image": "reports/unpacked-current-main/Main.mapped.bin",
        "manifest": "reports/unpacked-current-main/manifest.json",
        "mapped_sha256": sha256(capture),
        "original_sha256": module["original_sha256"],
        "compiler": old_config["compiler"],
        "matches": matches,
    }
    output = ROOT / "config/NF2_2026/client-verifications.json"
    output.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"Wrote {len(matches)} {marker} records to {output.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
