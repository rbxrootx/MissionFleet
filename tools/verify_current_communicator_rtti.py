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
    0x5899DB64: ".?AVCPannelCommunicatorClanMessage@@",
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

    # The nested ClanMessage child constructor installs this RTTI-backed vtable.
    clan_message_store = image[offset(0x588232E3, 6):offset(0x588232E3, 6) + 6]
    if clan_message_store != b"\xc7\x06" + struct.pack("<I", 0x5899DB64):
        raise AssertionError("ClanMessage child constructor vtable changed")

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

    if u32(0x5899E780 + 0x18) != 0x58848BC0:
        raise AssertionError("ID-panel event vtable slot changed")
    if u32(0x5899E780 + 0x08) != 0x58848B90:
        raise AssertionError("ID-panel reset vtable slot changed")
    if u32(0x5899E780 + 0x10) != 0x5884AB90:
        raise AssertionError("ID-panel input vtable slot changed")
    if u32(0x5899E780 + 0x0C) != 0x58848E60:
        raise AssertionError("ID-panel periodic vtable slot changed")
    if u32(0x5899E780 + 0x04) != 0x58848240:
        raise AssertionError("ID-panel state-setup vtable slot changed")
    if u32(0x5899E780) != 0x588497E0:
        raise AssertionError("ID-panel destructor vtable slot changed")
    print("5899E788: FUN_58848B90 (ID-panel reset slot +0x08)")
    print("5899E78C: FUN_58848E60 (ID-panel periodic slot +0x0C)")
    print("5899E784: FUN_58848240 (ID-panel state-setup slot +0x04)")
    print("5899E780: FUN_588497E0 (ID-panel destructor slot +0x00)")
    print("5899E790: FUN_5884AB90 (ID-panel input slot +0x10)")
    print("5899E798: FUN_58848BC0 (ID-panel event slot +0x18)")


if __name__ == "__main__":
    main()
