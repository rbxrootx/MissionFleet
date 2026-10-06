"""Check RTTI, vtable, constructor, and call-site evidence for the warehouse locked-slot sprite."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
VTABLE = 0x589A2204
EXPECTED_SLOTS = (
    0x588FB4F0,
    0x58903400,
    0x58903420,
    0x58822F10,
    0x5873B360,
    0x58902FE0,
    0x589033F0,
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

    locator = u32(VTABLE - 4)
    if locator != 0x589AABB8:
        raise AssertionError(f"Unexpected Complete Object Locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CDDB8:
        raise AssertionError(f"Unexpected TypeDescriptor: {type_descriptor:08X}")
    start = offset(type_descriptor + 8)
    end = image.find(b"\0", start)
    if end < start:
        raise ValueError(f"Unterminated RTTI name at {type_descriptor:08X}")
    actual_name = image[start:end].decode("ascii")
    if actual_name != ".?AVCWarehouseLockedSlotSprite@@":
        raise AssertionError(f"Unexpected RTTI name: {actual_name!r}")

    actual_slots = tuple(u32(VTABLE + 4 * index)
                         for index in range(len(EXPECTED_SLOTS)))
    if actual_slots != EXPECTED_SLOTS:
        raise AssertionError(f"Unexpected vtable slots: {actual_slots!r}")

    # Constructor's `mov dword ptr [ebp], 0x589A2204` at 0x588FB5E3.
    constructor_store = image[offset(0x588FB5E3, 7):offset(0x588FB5E3, 7) + 7]
    if constructor_store != bytes.fromhex("C7 45 00 04 22 9A 58"):
        raise AssertionError("Constructor no longer installs the RTTI-backed vtable")

    # The parent directly calls the nonvirtual helper at 0x588FF436.
    call_site = 0x588FF436
    instruction = image[offset(call_site, 5):offset(call_site, 5) + 5]
    if instruction[0] != 0xE8:
        raise AssertionError("Expected a direct call at 0x588FF436")
    target = call_site + 5 + struct.unpack_from("<i", instruction, 1)[0]
    if target != 0x588FB510:
        raise AssertionError(f"Helper call target changed: {target:08X}")

    print(f"{VTABLE:08X}: {actual_name}; {len(actual_slots)} slots verified")
    print(f"FUN_588FF420 calls FUN_{target:08x} at {call_site:08X}")


if __name__ == "__main__":
    main()
