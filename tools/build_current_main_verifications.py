"""Build the installed Main.dll byte-match inventory from the local capture."""
import argparse
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = (
    "587962C0", "587C35A0",
    "58F76B6B", "58C3A998", "58BF62F5", "58DDB193", "58BFF900",
    "58C60FD6", "58E0A61E", "58F8160D", "58C84F0B", "58DC34AD",
    "58C319AB", "58D6F6B0", "58D6F58A", "58C5D37B", "58FAC690",
)
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
    "58F76B6B": {
        "name_in_analysis": "entry",
        "called_by": "PE module entrypoint at RVA 0x846B6B in the installed Main.dll.",
        "behavior": "The 37-byte entry stream pushes 0x45D54D3E, calls 0x58C3A998, then contains flag/register operations ending in a JMP to 0x58C60FD6.",
        "uncertainty": "The on-disk .vmp1 bytes are unchanged in this function. Dynamic reachability of its trailing JMP is not established because the C3A998 helper chain ends in PUSH EBP; RET, whose EBP target is unknown.",
    },
    "58C3A998": {
        "name_in_analysis": "FUN_58c3a998",
        "called_by": "Direct call from entry at 0x58F76B6B.",
        "behavior": "The captured function transfers into helper 0x58BF62F5.",
        "uncertainty": "Ghidra's register/flag-level pseudocode does not establish the helper's VMProtect semantics.",
    },
    "58BF62F5": {
        "name_in_analysis": "FUN_58bf62f5",
        "called_by": "Reached from the entry setup helper at 0x58C3A998.",
        "behavior": "A 179-byte protected-section routine ending in a JMP to 0x58DDB193; its mapped immediate operands include load-time values that differ from the on-disk bytes.",
        "uncertainty": "The transfer chain is statically observed, but the EBP-based dynamic target and the routine's VM state/application-level behavior are not recovered.",
    },
    "58DDB193": {
        "name_in_analysis": "FUN_58ddb193",
        "called_by": "Static helper chain from 0x58BF62F5.",
        "behavior": "A 13-byte transfer in the entry setup helper chain.",
        "uncertainty": "The transfer target is recorded from captured code; the protected state transition is unknown.",
    },
    "58BFF900": {
        "name_in_analysis": "FUN_58bff900",
        "called_by": "Static helper chain through 0x58DDB193.",
        "behavior": "The two captured instructions are PUSH EBP; RET, transferring control to the runtime value in EBP.",
        "uncertainty": "The EBP target and the dynamic return destination are unknown; this is not proven to return to the lexical caller.",
    },
    "58C60FD6": {
        "name_in_analysis": "thunk_FUN_58e0a61e",
        "called_by": "The entry function has a direct JMP at 0x58F76B8B to this thunk after its call to 0x58C3A998; whether runtime execution reaches that lexical JMP is unresolved.",
        "behavior": "A 5-byte thunk that transfers to 0x58E0A61E.",
        "uncertainty": "This records the captured trampoline edge only.",
    },
    "58E0A61E": {
        "name_in_analysis": "FUN_58e0a61e",
        "called_by": "Reached through thunk 0x58C60FD6.",
        "behavior": "Compares EDI with ESP+0x60, then jumps to 0x58F8160D; that CMP supplies flags for the following JA.",
        "uncertainty": "The VM interpreter state and intended application routine remain unresolved.",
    },
    "58F8160D": {
        "name_in_analysis": "FUN_58f8160d",
        "called_by": "Reached from 0x58E0A61E.",
        "behavior": "JA transfers to the 2-byte JMP ESI stub at 0x58C84F0B; fallthrough loads EDX from ESP and JMPs to 0x58DC34AD. The JA flags were set by the preceding CMP at 0x58E0A622.",
        "uncertainty": "The runtime comparison outcome and ESI target are unknown; do not infer handler semantics from the static branch.",
    },
    "58C84F0B": {
        "name_in_analysis": "FUN_58c84f0b",
        "called_by": "Conditional path from 0x58F8160D.",
        "behavior": "The captured 2-byte function body is JMP ESI.",
        "uncertainty": "The runtime ESI value and handler set are not present in the static capture.",
    },
    "58DC34AD": {
        "name_in_analysis": "FUN_58dc34ad",
        "called_by": "Conditional path from 0x58F8160D.",
        "behavior": "Transfers to 0x58C319AB with an unconditional JMP.",
        "uncertainty": "The protected state transition and meaning of the alternate path are unknown.",
    },
    "58C319AB": {
        "name_in_analysis": "FUN_58c319ab",
        "called_by": "Reached from 0x58DC34AD.",
        "behavior": "Transfers to 0x58D6F6B0.",
        "uncertainty": "The destination's role in the VMProtect protocol remains unknown.",
    },
    "58D6F6B0": {
        "name_in_analysis": "FUN_58d6f6b0",
        "called_by": "Reached from 0x58C319AB.",
        "behavior": "Pushes EDI and jumps to the 25-byte routine at 0x58D6F58A.",
        "uncertainty": "The runtime purpose of the register transfer is unknown.",
    },
    "58D6F58A": {
        "name_in_analysis": "FUN_58d6f58a",
        "called_by": "Direct JMP from 0x58D6F6B0.",
        "behavior": "A 25-byte flag/register-sensitive routine ending in a JMP to thunk 0x58C5D37B.",
        "uncertainty": "No application-level meaning is established from this static body.",
    },
    "58C5D37B": {
        "name_in_analysis": "thunk_FUN_58fac690",
        "called_by": "Direct JMP from 0x58D6F59E.",
        "behavior": "Executes CLD and jumps to 0x58FAC690.",
        "uncertainty": "This is a transfer stub; its runtime context is not fully understood.",
    },
    "58FAC690": {
        "name_in_analysis": "FUN_58fac690",
        "called_by": "Direct JMP from thunk 0x58C5D37B.",
        "behavior": "Executes a REP MOVSB sequence and then jumps to the shared JMP ESI stub at 0x58C84F0B.",
        "uncertainty": "The copy count, source/destination register meaning, and indirect ESI target are not established for the VMProtect runtime path.",
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
