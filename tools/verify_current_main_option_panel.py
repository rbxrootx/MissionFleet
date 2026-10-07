"""Verify the RTTI-backed CPannelOption method and direct-call subsystem."""

import csv
import json
from pathlib import Path
import struct

import capstone
from capstone.x86_const import X86_INS_CALL, X86_INS_JMP, X86_OP_IMM

from build_current_main_verifications import CPANNEL_OPTION_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
CATALOG = ROOT / "config/NF2_2026/client-verifications.json"
INVENTORY = ROOT / "config/NF2_2026/client-functions.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

FUNCTION_SIZES = {
    0x5889F030: 27, 0x588A30B0: 332, 0x5889F050: 106,
    0x58874260: 172, 0x588A34D0: 1114, 0x588A3200: 706,
    0x5889EF90: 152, 0x5889F0C0: 2207, 0x5889FCA0: 825,
    0x588A1340: 118, 0x5889ED80: 280, 0x588A1040: 195,
    0x588A1110: 195, 0x588A11E0: 195, 0x587ECEC0: 75,
    0x5889E910: 95, 0x5889ECD0: 74, 0x588A12B0: 134,
    0x5889ED20: 84, 0x5897CBBC: 6, 0x5897CBCE: 6,
    0x5897CBC8: 6, 0x5897CBB0: 6, 0x5889E430: 1134,
}
DESTRUCTOR_RANGES = ((0x5889F030, 21), (0x5889F048, 6))
EXPECTED_VTABLE = (
    0x5889F030, 0x588A30B0, 0x5889F050, 0x58874260,
    0x588A34D0, 0x58902FE0, 0x588A3200,
)
EXPECTED_CALLS = (
    (0x5889F030, 0x5889F033, 0x5889E430),
    (0x588A30B0, 0x588A31CA, 0x5889F0C0),
    (0x588A30B0, 0x588A31D1, 0x5889ECD0),
    (0x588A30B0, 0x588A31D8, 0x588A1340),
    (0x588A34D0, 0x588A3748, 0x5889ECD0),
    (0x588A34D0, 0x588A3763, 0x588A12B0),
    (0x588A34D0, 0x588A37A2, 0x5889ED80),
    (0x588A34D0, 0x588A38A1, 0x588A1040),
    (0x588A34D0, 0x588A38D5, 0x588A1110),
    (0x588A34D0, 0x588A390A, 0x588A11E0),
    (0x588A3200, 0x588A3231, 0x5889EF90),
    (0x588A3200, 0x588A323F, 0x5889F0C0),
    (0x588A3200, 0x588A3246, 0x5889FCA0),
    (0x588A3200, 0x588A324D, 0x588A0450),
    (0x588A3200, 0x588A328D, 0x588A1340),
    (0x588A3200, 0x588A33E3, 0x5889ED80),
    (0x588A3200, 0x588A3414, 0x588A1040),
    (0x588A3200, 0x588A3438, 0x588A1110),
    (0x588A3200, 0x588A3458, 0x588A11E0),
    (0x5889F0C0, 0x5889F822, 0x587ECEC0),
    (0x588A1340, 0x588A136D, 0x5889ED80),
    (0x588A12B0, 0x588A12C3, 0x5889ED20),
    (0x588A12B0, 0x588A12D6, 0x5889ED80),
    (0x5889ECD0, 0x5889ECDA, 0x5897CBBC),
    (0x5889ECD0, 0x5889ECEC, 0x5897CBCE),
    (0x5889ECD0, 0x5889ED03, 0x5897CBC8),
    (0x5889ECD0, 0x5889ED10, 0x5897CBB0),
    (0x5889E430, 0x5889E885, 0x58902C10),
)
MATCHED_ANCHORS = (
    0x588A13C0, 0x588A0450, 0x5889E970, 0x58902FE0,
    0x58902C10, 0x589032E0, 0x5897CC42,
)


def function_ranges(record):
    if record.get("segments"):
        return [(int(item["address"], 16), int(item["size"]))
                for item in record["segments"]]
    return [(int(record["address"], 16), int(record["size"]))]


def main():
    image = IMAGE.read_bytes()
    with INVENTORY.open(encoding="utf-8", newline="") as stream:
        inventory = {int(row["address"], 16): row
                     for row in csv.DictReader(stream, delimiter="\t")}
    document = json.loads(CATALOG.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in document["matches"]}
    selected = {int(address, 16) for address in CPANNEL_OPTION_ADDRESSES}
    if selected != set(FUNCTION_SIZES):
        raise AssertionError("The rolling verification set differs from the audited CPannelOption cluster")

    vtable = struct.unpack_from("<7I", image, 0x589A0200 - BASE)
    if vtable != EXPECTED_VTABLE:
        raise AssertionError(f"Unexpected CPannelOption vtable: {[f'{item:08X}' for item in vtable]}")
    locator = struct.unpack_from("<I", image, 0x589A01FC - BASE)[0]
    if locator != 0x589A9424:
        raise AssertionError(f"Unexpected CPannelOption CompleteObjectLocator: {locator:08X}")
    type_descriptor = struct.unpack_from("<I", image, locator - BASE + 12)[0]
    if type_descriptor != 0x589CD37C:
        raise AssertionError(f"Unexpected CPannelOption type descriptor: {type_descriptor:08X}")
    name_address = type_descriptor + 8  # MSVC TypeDescriptor: vftable, spare, then name.
    type_name = image[name_address - BASE:name_address - BASE + len(b".?AVCPannelOption@@\0")]
    if type_name != b".?AVCPannelOption@@\0":
        raise AssertionError(f"Unexpected RTTI type name: {type_name!r}")
    loader = records.get(0x588A0450)
    if loader is None or loader.get("verified_by") != MARKER:
        raise AssertionError("The existing key-settings loader anchor is missing or unverified")
    loader_evidence = loader.get("evidence", {})
    if "not itself the vtable entry" not in loader_evidence.get("name_in_analysis", ""):
        raise AssertionError("The key-settings loader is still mislabeled as the +0x18 vtable entry")
    if "0x588A324D" not in loader_evidence.get("called_by", ""):
        raise AssertionError("The loader record lacks the Ghidra-backed +0x18 handler callsite")

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    matched_targets = {address for address, record in records.items()
                       if record.get("verified_by") == MARKER}
    checked_transfers = 0

    for address, size in FUNCTION_SIZES.items():
        record = records.get(address)
        if record is None or record.get("verified_by") != MARKER:
            raise AssertionError(f"Missing ObjDiff verification record for {address:08X}")
        if address not in inventory:
            raise AssertionError(f"Missing Ghidra function inventory row for {address:08X}")
        if int(inventory[address]["size"]) != size or int(record["size"]) != size:
            raise AssertionError(f"Unexpected audited/verified size for {address:08X}")
        expected_ranges = (list(DESTRUCTOR_RANGES) if address == 0x5889F030
                           else [(address, size)])
        ranges = function_ranges(record)
        if ranges != expected_ranges or sum(length for _, length in ranges) != size:
            raise AssertionError(f"Unexpected exact Ghidra body ranges for {address:08X}: {ranges}")

        own_ranges = [(start, start + length) for start, length in ranges]
        for start, length in ranges:
            offset = start - BASE
            code = image[offset:offset + length]
            instructions = list(decoder.disasm(code, start))
            if not instructions or sum(item.size for item in instructions) != length:
                raise AssertionError(f"Mapped instruction stream does not cover {start:08X} + {length} bytes")
            for instruction in instructions:
                if instruction.id not in (X86_INS_CALL, X86_INS_JMP) or not instruction.operands:
                    continue
                operand = instruction.operands[0]
                if operand.type != X86_OP_IMM:
                    continue
                target = operand.imm & 0xFFFFFFFF
                checked_transfers += 1
                if not BASE <= target < BASE + len(image):
                    continue
                if any(lo <= target < hi for lo, hi in own_ranges):
                    continue
                if target not in inventory:
                    raise AssertionError(f"Direct transfer from {instruction.address:08X} targets unindexed code {target:08X}")
                if target not in matched_targets:
                    raise AssertionError(f"Open direct callee {target:08X} from {instruction.address:08X} is outside the selected subsystem")

    def direct_call_target(site):
        offset = site - BASE
        instruction = next(decoder.disasm(image[offset:offset + 8], site), None)
        if instruction is None or instruction.address != site or instruction.id != X86_INS_CALL:
            raise AssertionError(f"Expected direct CALL at {site:08X}")
        if not instruction.operands or instruction.operands[0].type != X86_OP_IMM:
            raise AssertionError(f"Expected immediate CALL target at {site:08X}")
        return instruction.operands[0].imm & 0xFFFFFFFF

    for caller, site, target in EXPECTED_CALLS:
        if caller not in matched_targets or target not in matched_targets:
            raise AssertionError(f"Unverified endpoint in expected edge {caller:08X}->{target:08X}")
        actual = direct_call_target(site)
        if actual != target:
            raise AssertionError(f"Unexpected target at {site:08X}: {actual:08X}, expected {target:08X}")
    for address in MATCHED_ANCHORS:
        if address not in matched_targets:
            raise AssertionError(f"Required existing matched anchor {address:08X} is not verified")

    print(
        f"CPannelOption subsystem: {len(selected)} functions / {sum(FUNCTION_SIZES.values())} bytes ObjDiff-identical; "
        f"RTTI and {len(vtable)} vtable entries checked; {len(EXPECTED_CALLS)} exact Ghidra CALL edges and "
        f"{checked_transfers} direct transfers checked; direct-call closure is closed"
    )


if __name__ == "__main__":
    main()
