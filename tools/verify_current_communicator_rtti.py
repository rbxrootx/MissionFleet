"""Verify the three communicator panel names from the pinned Main.dll RTTI."""

from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
EXPECTED = {
    0x5898C500: ".?AVCMenuScreen@@",
    0x5899E780: ".?AVCPannelCommunicatorIDPannel@@",
    0x5899E400: ".?AVCPannelCommunicatorConfigPannel@@",
    0x5899E518: ".?AVCPannelCommunicatorDetailedUserInfo@@",
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

    # The ID constructor stores this vtable at 0x58849BE6.
    vtable_store = image[offset(0x58849BE6, 6):offset(0x58849BE6, 6) + 6]
    if vtable_store != b"\xc7\x06" + struct.pack("<I", 0x5899E780):
        raise AssertionError("ID-panel constructor vtable store changed")

    for vtable, expected_name in EXPECTED.items():
        locator = u32(vtable - 4)
        type_descriptor = u32(locator + 12)
        start = offset(type_descriptor + 8)
        end = image.find(b"\0", start)
        if end < start:
            raise ValueError(f"Unterminated RTTI name at {type_descriptor:08X}")
        actual_name = image[start:end].decode("ascii")
        if actual_name != expected_name:
            raise AssertionError(f"{vtable:08X}: {actual_name!r} != {expected_name!r}")
        print(f"{vtable:08X}: {actual_name}")


if __name__ == "__main__":
    main()
