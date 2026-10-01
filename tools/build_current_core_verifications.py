"""Build evidence-backed byte-match records for the installed Core.dll renderer."""
import argparse
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = (
    "587BA830", "58800A60", "5880D420",
    "588009C0", "58800A30", "588099F0",
    "5880D370", "5880D3E0", "58816550",
)
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
    "588009C0": {
        "name_in_analysis": "FUN_588009c0",
        "called_by": "Selected by the Core loader for the first compressed-format-2 sprite class on a 16-bit target; installs vtable 0x588BE71C.",
        "behavior": "Calls shared base initialization at 0x587C9800 with the three constructor arguments, stores the class vtable at object offset 0, and returns the object.",
        "uncertainty": "The names and semantic meaning of the three base-initialization arguments are unresolved; the constructor call site and vtable write are visible in the mapped Core analysis.",
    },
    "58800A30": {
        "name_in_analysis": "FUN_58800a30",
        "called_by": "Slot 0 of vtable 0x588BE71C installed by constructor 0x588009C0.",
        "behavior": "Calls class cleanup at 0x588009F0; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The exact C++ deleting-destructor convention is inferred from the flag-controlled deallocation call; external delete call sites were not traced in this slice.",
    },
    "588099F0": {
        "name_in_analysis": "FUN_588099f0",
        "called_by": "Slot 2 of vtable 0x588BE71C installed by constructor 0x588009C0; the indirect invocation sites for this slot have not yet been identified.",
        "behavior": "Reads the sprite span stream at object offset 0x0C, rejects an empty stream and nonintersecting clip geometry, obtains destination geometry through screen helpers, then walks row/span controls and writes masked 16-bit pixel results to the target buffer.",
        "uncertainty": "The precise slot-2 effect contract, runtime mask configuration, and all span subformats are not fully named from Ghidra pseudocode. No live framebuffer comparison has been recorded.",
    },
    "5880D370": {
        "name_in_analysis": "FUN_5880d370",
        "called_by": "Selected by the Core loader for the alternate compressed-format-2 sprite class on a 16-bit target; installs vtable 0x588BE72C.",
        "behavior": "Calls shared base initialization at 0x587C9800 with the three constructor arguments, stores the class vtable at object offset 0, and returns the object.",
        "uncertainty": "The names and semantic meaning of the three base-initialization arguments are unresolved; the constructor call site and vtable write are visible in the mapped Core analysis.",
    },
    "5880D3E0": {
        "name_in_analysis": "FUN_5880d3e0",
        "called_by": "Slot 0 of vtable 0x588BE72C installed by constructor 0x5880D370.",
        "behavior": "Calls class cleanup at 0x5880D3A0; when flag bit 0 is set, releases 0x38 bytes at the object address through 0x58831034; returns the object address.",
        "uncertainty": "The exact C++ deleting-destructor convention is inferred from the flag-controlled deallocation call; external delete call sites were not traced in this slice.",
    },
    "58816550": {
        "name_in_analysis": "FUN_58816550",
        "called_by": "Slot 2 of vtable 0x588BE72C installed by constructor 0x5880D370; the indirect invocation sites for this slot have not yet been identified.",
        "behavior": "Reads the sprite span stream at object offset 0x0C, rejects an empty stream and nonintersecting clip geometry, obtains destination geometry through screen helpers, then walks row/span controls and writes masked 16-bit pixel results to the target buffer.",
        "uncertainty": "The precise slot-2 effect contract, runtime mask configuration, and all span subformats are not fully named from Ghidra pseudocode. No live framebuffer comparison has been recorded.",
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
