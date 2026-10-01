"""Build evidence-backed byte-match records for the installed Core.dll renderer."""
import argparse
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = ("587BA830", "58800A60", "5880D420")
CORE_SHA256 = "75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4"
EVIDENCE = {
    "587BA830": {
        "name_in_analysis": "FUN_587ba830",
        "called_by": "Directly called by animation-frame wrapper 0x5849C770 from the ship render-node draw path at 0x587B5DB0.",
        "behavior": "Ghidra shows viewport-edge clamping, screen-origin subtraction for draw position and clip edges, target-buffer retrieval, and indirect dispatch through sprite vtable slot 1. Readable ITNTL.dll independently supports slot 1 receiving the buffer, local geometry, color, and effect.",
        "uncertainty": "Core Ghidra pseudocode misattributes arguments around the buffer accessor and indirect call, so the exact Core ABI is not established from pseudocode alone. No explicit rejection of an inverted clip is visible; downstream handling is unverified. Pixel output is not yet compared against a live original-client frame.",
    },
    "58800A60": {
        "name_in_analysis": "FUN_58800a60",
        "called_by": "Slot 1 of the sprite vtable installed by constructor 0x588009C0; selected by the 16-bit target and compressed format-2 loader path.",
        "behavior": "Consumes the sprite span stream at this+0x0C and writes to the caller's screen pixel buffer. Handles transparent skips and row/image terminators, an opaque-copy branch, and masked 16-bit blend branches. The ship draw path supplies color 0x80 and effect 0x101 to one blend branch.",
        "uncertainty": "The display-mask configuration and full effect contract vary by runtime target. No live framebuffer comparison against the original client has been recorded.",
    },
    "5880D420": {
        "name_in_analysis": "FUN_5880d420",
        "called_by": "Slot 1 of the sprite vtable installed by constructor 0x5880D370; selected by the alternate 16-bit display-mask path for compressed format-2 sprites.",
        "behavior": "Consumes a sprite span stream and writes converted pixels to the passed render target using the alternate mask-specialized blend paths.",
        "uncertainty": "The exact pixel-format distinction from 0x58800A60 and the meaning of all mask/effect values remain unresolved; no live framebuffer comparison has been recorded.",
    },
}


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--mark-verified", action="store_true",
                        help="record byte identity after the local verifier passes")
    args = parser.parse_args()

    inventory_path = ROOT / "config/NF2_2026/core-functions.tsv"
    with inventory_path.open(encoding="utf-8", newline="") as stream:
        inventory = {row["address"].upper(): row for row in csv.DictReader(stream, delimiter="\t")}
    manifest_path = ROOT / "reports/unpacked-client/manifest.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    module = next(item for item in manifest["modules"] if item["name"] == "Core.dll")
    original = Path(module["path"])
    if digest(original) != CORE_SHA256:
        raise ValueError(f"Installed Core.dll does not match pinned build: {original}")
    capture = ROOT / "reports/unpacked-client/Core.mapped.bin"
    relocation_path = ROOT / "var/current-core-relocations.json"
    relocations = json.loads(relocation_path.read_text(encoding="utf-8"))
    old_config = json.loads((ROOT / "config/NF2_2062/client-verifications.json").read_text(encoding="utf-8"))

    matches = []
    marker = "objdiff-3.8.0-byte-identical" if args.mark_verified else "candidate-not-yet-verified"
    for address in ADDRESSES:
        row = inventory[address]
        name = row["name"]
        source = f"src/client-current/Core/{name}.cpp"
        source_path = ROOT / source
        matches.append({
            "address": address,
            "name": name,
            "size": int(row["size"]),
            "symbol": "_" + name,
            "source": source,
            "source_sha256": digest(source_path),
            "verified_by": marker,
            "flags": ["/O2", "/GX-", "/Zm200"],
            "relocations": [dict(item, audit_only=True) for item in relocations[address]],
            "evidence": EVIDENCE[address],
        })

    document = {
        "schema_version": 1,
        "component": "Core.dll",
        "image_base": f"{int(module['loaded_image_base']):08X}",
        "mapped_image": "reports/unpacked-client/Core.mapped.bin",
        "manifest": "reports/unpacked-client/manifest.json",
        "mapped_sha256": digest(capture),
        "original_sha256": CORE_SHA256,
        "compiler": {
            **old_config["compiler"],
            "family": "Microsoft Visual C++ 6.0 SP5 byte-emission toolchain; Core.dll original compiler unverified",
        },
        "matches": matches,
    }
    output = ROOT / "config/NF2_2026/core-verifications.json"
    output.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"Wrote {len(matches)} {marker} Core.dll records to {output.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
