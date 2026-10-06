"""Verify the fight-menu helper call edges and mapped body boundaries."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
CALLS = (
    (0x587EF714, 0x58894A60),
    (0x587EF745, 0x58894A60),
    (0x587EF7F8, 0x587EBA90),
    (0x587EF8E2, 0x5888CDF0),
    (0x5878AE5B, 0x58894A60),
    (0x587E646C, 0x58894A60),
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

    def call_target(site):
        instruction = bytes_at(site, 5)
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct call at {site:08X}")
        return site + 5 + struct.unpack_from("<i", instruction, 1)[0]

    for site, expected in CALLS:
        target = call_target(site)
        if target != expected:
            raise AssertionError(f"Call at {site:08X} targets {target:08X}, expected {expected:08X}")

    if bytes_at(0x58894B30, 2) != bytes.fromhex("FF E0"):
        raise AssertionError("Shared layout helper's tail jump moved")
    if bytes_at(0x587EBCA8, 5) != bytes.fromhex("E9 BD FE FF FF"):
        raise AssertionError("Two-side statistics helper's final branch changed")
    if bytes_at(0x5888CDFA, 3) != bytes.fromhex("C2 04 00"):
        raise AssertionError("Single-field setter ret 4 moved")

    print(f"{len(CALLS)} mapped direct-call edges verified")
    print("210-byte layout helper, 541-byte statistics helper, and 13-byte setter boundaries verified")


if __name__ == "__main__":
    main()
