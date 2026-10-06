"""Check RTTI, vtable, constructor-call, and extent evidence for CWarehouseItem."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
VTABLE = 0x589A20D4
EXPECTED_SLOTS = (
    0x588F7D40,
    0x58903400,
    0x58903420,
    0x588F7FE0,
    0x588F7EF0,
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
    if locator != 0x589AA9D0:
        raise AssertionError(f"Unexpected Complete Object Locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CDCE0:
        raise AssertionError(f"Unexpected TypeDescriptor: {type_descriptor:08X}")
    start = offset(type_descriptor + 8)
    end = image.find(b"\0", start)
    if end < start:
        raise ValueError(f"Unterminated RTTI name at {type_descriptor:08X}")
    actual_name = image[start:end].decode("ascii")
    if actual_name != ".?AVCWarehouseItem@@":
        raise AssertionError(f"Unexpected RTTI name: {actual_name!r}")

    actual_slots = tuple(u32(VTABLE + 4 * index)
                         for index in range(len(EXPECTED_SLOTS)))
    if actual_slots != EXPECTED_SLOTS:
        raise AssertionError(f"Unexpected vtable slots: {actual_slots!r}")

    # The matched ship constructor directly calls this base constructor.
    call_site = 0x588FB12B
    call = image[offset(call_site, 5):offset(call_site, 5) + 5]
    if call[0] != 0xE8:
        raise AssertionError("Expected a direct call at 0x588FB12B")
    target = call_site + 5 + struct.unpack_from("<i", call, 1)[0]
    if target != 0x588F8100:
        raise AssertionError(f"Base-constructor call target changed: {target:08X}")

    # The complete constructor range ends at ret 0x18, followed by seven INT3s.
    if image[offset(0x588F84D6, 3):offset(0x588F84D6, 3) + 3] != bytes.fromhex("C2 18 00"):
        raise AssertionError("Constructor return instruction changed")
    if image[offset(0x588F84D9, 7):offset(0x588F84D9, 7) + 7] != b"\xCC" * 7:
        raise AssertionError("Constructor boundary padding changed")

    print(f"{VTABLE:08X}: {actual_name}; {len(actual_slots)} slots verified")
    print(f"FUN_588FB0E0 calls FUN_{target:08x} at {call_site:08X}; extent verified")


if __name__ == "__main__":
    main()
