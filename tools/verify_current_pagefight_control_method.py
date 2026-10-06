"""Verify RTTI, vtable, constructor, and boundary evidence for the fight menu method."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
VTABLE = 0x5899D180
SLOTS = (
    0x58804460,
    0x587EF330,
    0x587EF910,
    0x587FD890,
    0x587FF340,
    0x587E80B0,
    0x587E6010,
)


def main():
    image = IMAGE.read_bytes()

    def offset(address, size=1):
        result = address - BASE
        if result < 0 or result + size > len(image):
            raise ValueError(f"Address outside mapped image: {address:08X}")
        return result

    def bytes_at(address, size):
        start = offset(address, size)
        return image[start:start + size]

    def u32(address):
        return struct.unpack_from("<I", image, offset(address, 4))[0]

    def call_target(site):
        instruction = bytes_at(site, 5)
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct call at {site:08X}")
        return site + 5 + struct.unpack_from("<i", instruction, 1)[0]

    locator = u32(VTABLE - 4)
    if locator != 0x589A7CE8:
        raise AssertionError(f"Unexpected complete object locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CC260:
        raise AssertionError(f"Unexpected TypeDescriptor: {type_descriptor:08X}")
    name_start = offset(type_descriptor + 8)
    name_end = image.find(b"\0", name_start)
    name = image[name_start:name_end].decode("ascii")
    if name != ".?AVCPageFightOn_ControlMenuScreen@@":
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(VTABLE + 4 * index) for index in range(len(SLOTS)))
    if slots != SLOTS:
        raise AssertionError(f"Unexpected fight-menu vtable: {slots!r}")

    if call_target(0x5878C650) != 0x588011C0:
        raise AssertionError("Matched caller no longer reaches the screen constructor")
    if bytes_at(0x58801230, 6) != bytes.fromhex("C7 06 80 D1 99 58"):
        raise AssertionError("Matched constructor no longer installs this RTTI vtable")
    if call_target(0x587EF639) != 0x58900E20:
        raise AssertionError("Fight-menu method no longer constructs CWarfogOnFight at this site")
    if call_target(0x58804463) != 0x587FFBC0:
        raise AssertionError("Deleting wrapper no longer calls the class destructor body")
    if call_target(0x58804470) != 0x5897CC42:
        raise AssertionError("Deleting wrapper deletion-thunk target changed")
    if bytes_at(0x58804475, 3) != bytes.fromhex("83 C4 04"):
        raise AssertionError("Deleting wrapper stack cleanup moved")
    if bytes_at(0x5880447B, 3) != bytes.fromhex("C2 04 00"):
        raise AssertionError("Deleting wrapper ret 4 moved")
    if bytes_at(0x587EF906, 1) != b"\xC3":
        raise AssertionError("Fight-menu method return moved")
    if bytes_at(0x587EF907, 9) != b"\xCC" * 9:
        raise AssertionError("Unexpected bytes between the method and the next function")
    for address, expected in (
        (0x587FF3DD, bytes.fromhex("C2 04 00")),
        (0x587E8250, bytes.fromhex("C2 0C 00")),
        (0x587E61C9, bytes.fromhex("C2 0C 00")),
    ):
        if bytes_at(address, len(expected)) != expected:
            raise AssertionError(f"Unexpected virtual-method return at {address:08X}")

    print(f"{VTABLE:08X}: {name}; {len(slots)} RTTI-backed slots verified")
    print("Constructor, fog creation, deleting-wrapper cleanup, and all vtable method boundaries verified")


if __name__ == "__main__":
    main()
