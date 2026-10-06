"""Verify the mapped RTTI, vtable edges, and boundaries for CWarfogOnFight."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
VTABLE = 0x589A24A8
SLOTS = (0x58900E50, 0x58731770, 0x588A9ED0, 0x58903040, 0x5873B360, 0x58900E80)


def main():
    image = IMAGE.read_bytes()

    def offset(address, size=1):
        value = address - BASE
        if value < 0 or value + size > len(image):
            raise ValueError(f"Address outside mapped image: {address:08X}")
        return value

    def u32(address):
        return struct.unpack_from("<I", image, offset(address, 4))[0]

    def bytes_at(address, size):
        return image[offset(address, size):offset(address, size) + size]

    def call_target(site):
        instruction = bytes_at(site, 5)
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct call at {site:08X}")
        return site + 5 + struct.unpack_from("<i", instruction, 1)[0]

    locator = u32(VTABLE - 4)
    if locator != 0x589AAE68:
        raise AssertionError(f"Unexpected complete object locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CDED4:
        raise AssertionError(f"Unexpected type descriptor: {type_descriptor:08X}")
    start = offset(type_descriptor + 8)
    end = image.find(b"\0", start)
    name = image[start:end].decode("ascii")
    if name != ".?AVCWarfogOnFight@@":
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(VTABLE + 4 * index) for index in range(len(SLOTS)))
    if slots != SLOTS:
        raise AssertionError(f"Unexpected vtable slots: {slots!r}")

    if call_target(0x587EF639) != 0x58900E20:
        raise AssertionError("Expected matched constructor caller to reach FUN_58900E20")
    if call_target(0x58900E37) != 0x589031A0:
        raise AssertionError("Constructor initializer call target changed")
    if call_target(0x58900E59) != 0x58902D60:
        raise AssertionError("Deleting wrapper base cleanup call target changed")
    if call_target(0x58900E66) != 0x5897CC42:
        raise AssertionError("Conditional deleting thunk target changed")

    if bytes_at(0x58900E40, 6) != bytes.fromhex("C7 06 A8 24 9A 58"):
        raise AssertionError("Constructor no longer installs the RTTI-backed vtable")
    if bytes_at(0x58900E71, 3) != bytes.fromhex("C2 04 00"):
        raise AssertionError("Deleting wrapper ret 4 moved")
    if bytes_at(0x589015DD, 3) != bytes.fromhex("C2 0C 00"):
        raise AssertionError("Fog-grid method ret 0x0C moved")
    if bytes_at(0x589015E0, 4) != bytes.fromhex("33 11 90 58"):
        raise AssertionError("Adjacent jump-table data changed")

    print(f"{VTABLE:08X}: {name}; {len(slots)} RTTI-backed vtable slots verified")
    print("Constructor, destructor-wrapper calls, vtable store, method boundary, and adjacent table verified")


if __name__ == "__main__":
    main()
