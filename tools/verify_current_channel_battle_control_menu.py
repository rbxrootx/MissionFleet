"""Verify RTTI, constructor vtable store, and matched slot methods."""

import json
from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
VTABLE = 0x5899B494
CONSTRUCTOR = 0x587D26C0
EXPECTED_SLOTS = (
    0x587D3840,
    0x587D3860,
    0x587D0940,
    0x587D5B20,
    0x587D51D0,
    0x5880AF30,
    0x587D1460,
)
MATCHED_METHODS = {
    0x587D3840: 27,
    0x587D3860: 6493,
    0x587D0940: 348,
    0x587D5B20: 2296,
    0x587D51D0: 2244,
    0x5880AF30: 91,
    0x587D1460: 588,
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

    locator = u32(VTABLE - 4)
    if locator != 0x589A7AD8:
        raise AssertionError(f"Unexpected Complete Object Locator pointer: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CBFB8:
        raise AssertionError(f"Unexpected TypeDescriptor: {type_descriptor:08X}")
    name_start = offset(type_descriptor + 8)
    name_end = image.find(b"\0", name_start)
    name = image[name_start:name_end].decode("ascii")
    expected_name = ".?AVCPageChannelBattle_ControlMenuScreen@@"
    if name != expected_name:
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(VTABLE + 4 * index) for index in range(len(EXPECTED_SLOTS)))
    if slots != EXPECTED_SLOTS:
        raise AssertionError(f"Unexpected channel-battle vtable: {slots!r}")

    constructor = image[offset(CONSTRUCTOR, 0x117C):offset(CONSTRUCTOR, 0x117C) + 0x117C]
    if bytes.fromhex("C7 06 94 B4 99 58") not in constructor:
        raise AssertionError("Channel-battle constructor no longer installs the RTTI vtable")

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
            raise AssertionError(f"Matched method is absent from the vtable: {address:08X}")

    print(f"{VTABLE:08X}: {name}; {len(slots)} RTTI-backed slots verified")
    print("Constructor vtable store and all seven byte-match records verified")


if __name__ == "__main__":
    main()
