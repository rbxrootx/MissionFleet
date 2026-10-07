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

    print(f"{VTABLE:08X}: {name}; {len(slots)} RTTI-backed slots verified")
    print("Constructor store, eight slot matches, and eleven matched helper call edges verified")


if __name__ == "__main__":
    main()
