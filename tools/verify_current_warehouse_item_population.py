"""Check original RTTI, vtable, item-population call chain, and boundaries."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
FORCE_VTABLE = 0x589A210C
FORCE_SLOTS = (
    0x588F8820,
    0x58903400,
    0x58903420,
    0x588F7FE0,
    0x588F7EF0,
    0x58902FE0,
    0x589033F0,
    0x588F8EA0,
    0x588F8840,
    0x588F7D30,
    0x588F7D10,
)
CALLS = (
    (0x588FBFA0, 0x588FFFE0),  # list population -> candidate insertion
    (0x588FFFF1, 0x588F8520),  # candidate insertion -> variant dispatch
    (0x58900003, 0x588F8070),  # candidate insertion -> record application
    (0x588F8592, 0x588F8870),  # selector 1 -> Force constructor
    (0x588F85E9, 0x588FB0E0),  # selector 0 -> Ship constructor
    (0x588F88BB, 0x588F8100),  # Force constructor -> base constructor
    (0x588F8091, 0x588F7D60),  # record application -> placement helper
)
BOUNDARIES = (
    # function start, ret instruction, ret bytes, function end, next entry
    (0x588F7D60, 0x588F7DE0, bytes.fromhex("C2 08 00"), 0x588F7DE3, 0x588F7DF0),
    (0x588F8070, 0x588F80F6, bytes.fromhex("C2 04 00"), 0x588F80F9, 0x588F8100),
    (0x588F8520, 0x588F8615, bytes.fromhex("C2 04 00"), 0x588F8618, 0x588F8620),
    (0x588F8870, 0x588F8E94, bytes.fromhex("C2 18 00"), 0x588F8E97, 0x588F8EA0),
    (0x588FFFE0, 0x58900030, bytes.fromhex("C2 04 00"), 0x58900033, 0x58900040),
    (0x588FBEF0, 0x588FC047, bytes.fromhex("C2 14 00"), 0x588FC04A, 0x588FC050),
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

    locator = u32(FORCE_VTABLE - 4)
    if locator != 0x589AAA6C:
        raise AssertionError(f"Unexpected Force Complete Object Locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CDD24:
        raise AssertionError(f"Unexpected Force TypeDescriptor: {type_descriptor:08X}")
    start = offset(type_descriptor + 8)
    end = image.find(b"\0", start)
    if end < start:
        raise ValueError(f"Unterminated RTTI name at {type_descriptor:08X}")
    name = image[start:end].decode("ascii")
    if name != ".?AVCWarehouseItemForce@@":
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(FORCE_VTABLE + 4 * i) for i in range(len(FORCE_SLOTS)))
    if slots != FORCE_SLOTS:
        raise AssertionError(f"Unexpected Force vtable slots: {slots!r}")

    for site, expected in CALLS:
        instruction = image[offset(site, 5):offset(site, 5) + 5]
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct call at {site:08X}")
        target = site + 5 + struct.unpack_from("<i", instruction, 1)[0]
        if target != expected:
            raise AssertionError(f"Call at {site:08X} targets {target:08X}, expected {expected:08X}")

    for function, ret_address, ret_bytes, end_address, next_entry in BOUNDARIES:
        if image[offset(ret_address, len(ret_bytes)):offset(ret_address, len(ret_bytes)) + len(ret_bytes)] != ret_bytes:
            raise AssertionError(f"Return instruction changed for {function:08X}")
        if end_address > next_entry:
            raise AssertionError(f"Invalid function extent for {function:08X}")
        padding = image[offset(end_address, next_entry - end_address):offset(end_address, next_entry - end_address) + next_entry - end_address]
        if padding != b"\xCC" * (next_entry - end_address):
            raise AssertionError(f"Boundary padding changed after {function:08X}")

    print(f"{FORCE_VTABLE:08X}: {name}; {len(slots)} slots verified")
    print(f"{len(CALLS)} direct calls and {len(BOUNDARIES)} function boundaries verified")


if __name__ == "__main__":
    main()
