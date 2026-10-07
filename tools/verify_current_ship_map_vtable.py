"""Verify ship-map RTTI, matched slots, and exact helper call edges."""

import json
from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
VTABLE = 0x589A10EC
CONSTRUCTOR_STORE = 0x588E064D
EXPECTED_SLOTS = (
    0x588E0240,
    0x58731770,
    0x588A9ED0,
    0x588E5150,
    0x5873B360,
    0x588DF6B0,
    0x588D81D0,
    0x5874DDD0,
)
MATCHED_METHODS = {
    0x588E0240: 27,
    0x58731770: 30,
    0x588A9ED0: 39,
    0x588E5150: 5014,
    0x5873B360: 69,
    0x588DF6B0: 745,
    0x588D81D0: 93,
    0x5874DDD0: 1,
}
MATCHED_HELPERS = {
    0x588DD520: (1321, 0x588E5674, 0x588E5150),
    0x588DE620: (1281, 0x588E63B4, 0x588E5150),
    0x588DF9B0: (1431, 0x588E0243, 0x588E0240),
    0x588D6570: (80, 0x588DEB95, 0x588DEB30),
    0x588DCE90: (186, 0x588DEDB0, 0x588DEB30),
    0x588E6540: (39, 0x588DEE93, 0x588DEB30),
    0x588E7480: (350, 0x588DEE7F, 0x588DEB30),
    0x5885FC40: (365, 0x588DF189, 0x588DEB30),
    0x5885A340: (288, 0x588DF1C4, 0x588DEB30),
    0x58861F40: (1298, 0x58862BE7, 0x588628D0),
    0x58860070: (571, 0x58862445, 0x58861F40),
}
MATCHED_CALL_EDGES = (
    (0x58860070, 0x5874116D, 0x5873FE80),
    (0x58860070, 0x58862737, 0x588626B0),
    (0x58860070, 0x58862856, 0x588627C0),
    (0x58860070, 0x58860403, 0x588603C0),
    (0x58860070, 0x588609D8, 0x588607A0),
    (0x58860070, 0x58862DF6, 0x58862D50),
    (0x588626B0, 0x5873C38F, 0x5873C2E0),
    (0x588627C0, 0x5873C3E5, 0x5873C2E0),
    (0x588603C0, 0x58861E50, 0x58861CE0),
    (0x588607A0, 0x58861E59, 0x58861CE0),
    (0x588603C0, 0x58863130, 0x58862FA0),
    (0x588607A0, 0x58863139, 0x58862FA0),
    (0x58861F40, 0x588631CD, 0x58862FA0),
    (0x58862D50, 0x588DB0EE, 0x588DB050),
    (0x588DB050, 0x588E6082, 0x588E5150),
    (0x5885ECC0, 0x58861E97, 0x58861CE0),
    (0x5885ECC0, 0x58863178, 0x58862FA0),
    (0x5885F8C0, 0x58863106, 0x58862FA0),
    (0x5885F8C0, 0x5885FE4C, 0x5885FDC0),
    (0x5885F8C0, 0x5885FEE4, 0x5885FE90),
    (0x5885FDC0, 0x58861DA8, 0x58861CE0),
    (0x5885FDC0, 0x58856AF7, 0x58856560),
    (0x5885FE90, 0x58862FE8, 0x58862FA0),
    (0x5885FE90, 0x58856B38, 0x58856560),
    (0x58860540, 0x58861E8E, 0x58861CE0),
    (0x58860540, 0x5886316F, 0x58862FA0),
    (0x58860650, 0x58861D63, 0x58861CE0),
    (0x58860650, 0x58861D72, 0x58861CE0),
    (0x58860650, 0x58861EE2, 0x58861CE0),
    (0x58860650, 0x58861F0C, 0x58861CE0),
    (0x58860650, 0x58863077, 0x58862FA0),
    (0x58860650, 0x5886308E, 0x58862FA0),
    (0x587E5A70, 0x588605CE, 0x58860540),
    (0x587E5A70, 0x5885ED07, 0x5885ECC0),
    (0x587E5A70, 0x5886326B, 0x58862FA0),
    (0x5885FA60, 0x58860796, 0x58860650),
    (0x587E5F80, 0x5885ECD1, 0x5885ECC0),
    (0x5885F3A0, 0x5885FE6A, 0x5885FDC0),
    (0x5885EA90, 0x5885FF0C, 0x5885FE90),
    (0x5885EA90, 0x5885FF2B, 0x5885FE90),
    (0x587A1640, 0x5885FEC6, 0x5885FE90),
    (0x587A1640, 0x5886068E, 0x58860650),
    (0x587A1640, 0x5885FB42, 0x5885FA60),
    (0x587ED5B0, 0x5885F3CC, 0x5885F3A0),
    (0x587ED5B0, 0x5885F3FD, 0x5885F3A0),
    (0x587ED5B0, 0x5885EAB3, 0x5885EA90),
    (0x587A1550, 0x587A1645, 0x587A1640),
    (0x58743AF0, 0x587A157A, 0x587A1567),
    (0x5877ABA0, 0x5885F8FE, 0x5885F8C0),
    (0x5897CC48, 0x5885FE1C, 0x5885FDC0),
    (0x5897CBDA, 0x5885FE5C, 0x5885FDC0),
    (0x5897CBDA, 0x5885FE7A, 0x5885FDC0),
    (0x588EC100, 0x5885FEFB, 0x5885FE90),
    (0x588EC080, 0x5885FF22, 0x5885FE90),
    (0x58907990, 0x58860602, 0x58860540),
    (0x58907360, 0x5886078F, 0x58860650),
    (0x5897CD4C, 0x587E5A9A, 0x587E5A70),
    (0x58902F50, 0x587E5F96, 0x587E5F80),
    (0x58909B00, 0x5885F3A9, 0x5885F3A0),
    (0x58909B00, 0x5885F3D9, 0x5885F3A0),
    (0x58970AE0, 0x587A1656, 0x587A1640),
    (0x587E9A10, 0x587ED5C8, 0x587ED5B0),
    (0x587E9A10, 0x587ED5D6, 0x587ED5B0),
    (0x587E9A10, 0x587ED5E4, 0x587ED5B0),
    (0x587E9A10, 0x587ED5F2, 0x587ED5B0),
    (0x5897CC72, 0x58743B3A, 0x58743AF0),
    (0x5897CC72, 0x587A1591, 0x587A1567),
    (0x5897CC72, 0x587A15AA, 0x587A1567),
    (0x5897CC72, 0x587A15B4, 0x587A1567),
    (0x587A1330, 0x587A15C5, 0x587A1567),
)
MATCHED_BRANCH_EDGES = (
    (0x587A1567, 0x587A155D, 0x587A1550),
)


def main():
    image = IMAGE.read_bytes()

    def offset(address, size=1):
        result = address - BASE
        if result < 0 or result + size > len(image):
            raise ValueError(f"Address outside mapped image: {address:08X}")
        return result

    def u32(address):
        return struct.unpack_from("<I", image, offset(address, 4))[0]

    def call_target(address):
        instruction = image[offset(address, 5):offset(address, 5) + 5]
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct CALL at {address:08X}")
        displacement = struct.unpack_from("<i", instruction, 1)[0]
        return address + 5 + displacement

    def conditional_branch_target(address):
        instruction = image[offset(address, 2):offset(address, 2) + 2]
        if not 0x70 <= instruction[0] <= 0x7F:
            raise AssertionError(f"Expected short conditional branch at {address:08X}")
        displacement = struct.unpack_from("<b", instruction, 1)[0]
        return address + 2 + displacement

    def contains(record, address):
        segments = record.get("segments")
        if segments:
            return any(
                int(segment["address"], 16) <= address <
                int(segment["address"], 16) + int(segment["size"])
                for segment in segments
            )
        start = int(record["address"], 16)
        return start <= address < start + int(record["size"])

    locator = u32(VTABLE - 4)
    if locator != 0x589AA384:
        raise AssertionError(f"Unexpected Complete Object Locator pointer: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589B92E0:
        raise AssertionError(f"Unexpected TypeDescriptor: {type_descriptor:08X}")
    name_start = offset(type_descriptor + 8)
    name_end = image.find(b"\0", name_start)
    name = image[name_start:name_end].decode("ascii")
    expected_name = ".?AVCShip_MapObjectScreen@@"
    if name != expected_name:
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(VTABLE + 4 * index) for index in range(len(EXPECTED_SLOTS)))
    if slots != EXPECTED_SLOTS:
        raise AssertionError(f"Unexpected ship-map vtable: {slots!r}")

    vtable_store = bytes.fromhex("C7 06 EC 10 9A 58")
    if image[offset(CONSTRUCTOR_STORE, len(vtable_store)):
            offset(CONSTRUCTOR_STORE, len(vtable_store)) + len(vtable_store)] != vtable_store:
        raise AssertionError("Ship-map constructor no longer installs the RTTI vtable")

    catalog_path = ROOT / "config/NF2_2026/client-verifications.json"
    catalog = json.loads(catalog_path.read_text(encoding="utf-8"))
    records = {int(record["address"], 16): record for record in catalog["matches"]}
    for address, size in MATCHED_METHODS.items():
        record = records.get(address)
        if record is None or record.get("verified_by") != "objdiff-3.8.0-byte-identical":
            raise AssertionError(f"ObjDiff byte-match record is missing for {address:08X}")
        if record.get("size") != size:
            raise AssertionError(f"Unexpected matched extent for {address:08X}")
        if address not in slots:
            raise AssertionError(f"Matched method is absent from the RTTI vtable: {address:08X}")

    for address, (size, callsite, caller) in MATCHED_HELPERS.items():
        record = records.get(address)
        if record is None or record.get("verified_by") != "objdiff-3.8.0-byte-identical":
            raise AssertionError(f"ObjDiff byte-match record is missing for {address:08X}")
        if record.get("size") != size:
            raise AssertionError(f"Unexpected matched extent for {address:08X}")
        if call_target(callsite) != address:
            raise AssertionError(f"Call at {callsite:08X} does not target {address:08X}")
        caller_record = records.get(caller)
        if (caller_record is None or
                caller_record.get("verified_by") != "objdiff-3.8.0-byte-identical"):
            raise AssertionError(f"Callsite owner is not byte-matched: {caller:08X}")
        if not contains(caller_record, callsite):
            raise AssertionError(f"Callsite {callsite:08X} is outside matched caller {caller:08X}")

    for target, callsite, caller in MATCHED_CALL_EDGES:
        target_record = records.get(target)
        caller_record = records.get(caller)
        if (target_record is None or
                target_record.get("verified_by") != "objdiff-3.8.0-byte-identical"):
            raise AssertionError(f"Call target is not byte-matched: {target:08X}")
        if call_target(callsite) != target:
            raise AssertionError(f"Call at {callsite:08X} does not target {target:08X}")
        if (caller_record is None or
                caller_record.get("verified_by") != "objdiff-3.8.0-byte-identical"):
            raise AssertionError(f"Callsite owner is not byte-matched: {caller:08X}")
        if not contains(caller_record, callsite):
            raise AssertionError(f"Callsite {callsite:08X} is outside matched caller {caller:08X}")

    for target, branchsite, caller in MATCHED_BRANCH_EDGES:
        target_record = records.get(target)
        caller_record = records.get(caller)
        if (target_record is None or
                target_record.get("verified_by") != "objdiff-3.8.0-byte-identical"):
            raise AssertionError(f"Branch target is not byte-matched: {target:08X}")
        if conditional_branch_target(branchsite) != target:
            raise AssertionError(f"Branch at {branchsite:08X} does not target {target:08X}")
        if (caller_record is None or
                caller_record.get("verified_by") != "objdiff-3.8.0-byte-identical"):
            raise AssertionError(f"Branch source is not byte-matched: {caller:08X}")
        if not contains(caller_record, branchsite):
            raise AssertionError(f"Branchsite {branchsite:08X} is outside matched source {caller:08X}")

    print(f"{VTABLE:08X}: {name}; {len(slots)} RTTI-backed slots verified")
    print(
        f"Constructor store, eight slot matches, {len(MATCHED_HELPERS)} helper sites, "
        f"{len(MATCHED_CALL_EDGES)} call edges, and "
        f"{len(MATCHED_BRANCH_EDGES)} conditional branch-edge targets verified"
    )


if __name__ == "__main__":
    main()
