"""Verify RTTI, vtable dispatch, and constructor linkage for battle-result controls."""

from pathlib import Path
import json
import struct


ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
VTABLE = 0x5899D5F4
EXPECTED_SLOTS = (
    0x58809890,
    0x5880C1B0,
    0x5880C4E0,
    0x5880FC50,
    0x5880C0B0,
    0x5880AF30,
    0x5880F950,
    0x5880B450,
)
MATCHED_METHODS = {
    0x58809890: 27,
    0x5880C1B0: 815,
    0x5880C4E0: 551,
    0x5880FC50: 1084,
    0x5880C0B0: 243,
    0x5880F950: 713,
    0x5880AF30: 91,
    0x5880B450: 649,
}


def main():
    image = IMAGE.read_bytes()

    def offset(address, size=1):
        result = address - BASE
        if result < 0 or result + size > len(image):
            raise ValueError(f"Address outside mapped image: {address:08X}")
        return result

    def bytes_at(address, size):
        return image[offset(address, size):offset(address, size) + size]

    def u32(address):
        return struct.unpack_from("<I", image, offset(address, 4))[0]

    def call_target(site):
        instruction = bytes_at(site, 5)
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct call at {site:08X}")
        return site + 5 + struct.unpack_from("<i", instruction, 1)[0]

    locator = u32(VTABLE - 4)
    if locator != 0x589A7DD8:
        raise AssertionError(f"Unexpected complete object locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CC2E8:
        raise AssertionError(f"Unexpected TypeDescriptor: {type_descriptor:08X}")
    name_start = offset(type_descriptor + 8)
    name_end = image.find(b"\0", name_start)
    name = image[name_start:name_end].decode("ascii")
    expected_name = ".?AVCPageResultOfBattle_ControlMenuScreen@@"
    if name != expected_name:
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(VTABLE + 4 * index) for index in range(len(EXPECTED_SLOTS)))
    if slots != EXPECTED_SLOTS:
        raise AssertionError(f"Unexpected battle-result vtable: {slots!r}")

    if call_target(0x5878C75A) != 0x5880DD80:
        raise AssertionError("Global UI initializer no longer calls the page constructor")
    if bytes_at(0x5880DDE8, 6) != bytes.fromhex("C7 06 F4 D5 99 58"):
        raise AssertionError("Page constructor no longer installs the RTTI-backed vtable")

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
            raise AssertionError(f"Matched method is absent from the RTTI-backed vtable: {address:08X}")

    print(f"{VTABLE:08X}: {name}; {len(slots)} RTTI-backed slots verified")
    print("Global initializer call, constructor vtable write, and selected method extents verified")


if __name__ == "__main__":
    main()
