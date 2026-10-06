"""Check original RTTI, vtable, constructor/destructor calls, and boundaries."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
PANEL_VTABLE = 0x589A23E4
PANEL_SLOTS = (
    0x58900250,
    0x58900270,
    0x58903420,
    0x58822F10,
    0x589002B0,
    0x58902FE0,
    0x58900340,
)
CALLS = (
    (0x588FBC2B, 0x58900400),  # WarehouseManager constructor -> trade panel constructor
    (0x58900253, 0x58900040),  # deleting wrapper -> destructor body
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

    locator = u32(PANEL_VTABLE - 4)
    if locator != 0x589AAE14:
        raise AssertionError(f"Unexpected panel Complete Object Locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CDEB0:
        raise AssertionError(f"Unexpected panel TypeDescriptor: {type_descriptor:08X}")
    start = offset(type_descriptor + 8)
    end = image.find(bytes([0]), start)
    if end < start:
        raise ValueError(f"Unterminated RTTI name at {type_descriptor:08X}")
    name = image[start:end].decode("ascii")
    if name != ".?AVCWarehouseTradePanel@@":
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(PANEL_VTABLE + 4 * i) for i in range(len(PANEL_SLOTS)))
    if slots != PANEL_SLOTS:
        raise AssertionError(f"Unexpected panel vtable slots: {slots!r}")

    for site, expected in CALLS:
        instruction = image[offset(site, 5):offset(site, 5) + 5]
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct call at {site:08X}")
        target = site + 5 + struct.unpack_from("<i", instruction, 1)[0]
        if target != expected:
            raise AssertionError(f"Call at {site:08X} targets {target:08X}, expected {expected:08X}")

    vtable_store = bytes.fromhex("C7 06 E4 23 9A 58")
    if image[offset(0x58900069, len(vtable_store)):offset(0x58900069, len(vtable_store)) + len(vtable_store)] != vtable_store:
        raise AssertionError("Trade panel destructor no longer reinstalls its RTTI-backed vtable")

    wrapper_ret = bytes.fromhex("C2 04 00")
    if image[offset(0x5890026B, len(wrapper_ret)):offset(0x5890026B, len(wrapper_ret)) + len(wrapper_ret)] != wrapper_ret:
        raise AssertionError("Trade panel deleting wrapper ret 4 changed")
    if image[offset(0x5890026E, 2):offset(0x58900270)] != b"\xCC\xCC":
        raise AssertionError("Unexpected bytes between deleting wrapper and next vtable method")

    jump = image[offset(0x589002A8, 5):offset(0x589002A8, 5) + 5]
    if jump[0] != 0xE9:
        raise AssertionError("Expected tail jump at the end of FUN_58900270")
    jump_target = 0x589002AD + struct.unpack_from("<i", jump, 1)[0]
    if jump_target != 0x5875F940:
        raise AssertionError(f"Unexpected method tail-jump target: {jump_target:08X}")

    for address, expected in (
        (0x589001EB, b"\xC3"),
        (0x58900332, bytes.fromhex("C2 04 00")),
        (0x589003F9, bytes.fromhex("C2 0C 00")),
    ):
        actual = image[offset(address, len(expected)):offset(address, len(expected)) + len(expected)]
        if actual != expected:
            raise AssertionError(f"Unexpected return instruction at {address:08X}: {actual.hex(' ')}")

    print(f"{PANEL_VTABLE:08X}: {name}; {len(slots)} RTTI-backed vtable slots verified")
    print(f"{len(CALLS)} direct calls, destructor vtable store, and method boundaries verified")


if __name__ == "__main__":
    main()
