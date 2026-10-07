"""Verify RTTI, vtable dispatch, and constructor linkage for battle-result controls."""

from pathlib import Path
import json
import struct


ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
BASE = 0x58730000
VTABLE = 0x5899D5F4
EXPECTED_SLOTS = (
    0x58809890,
    0x5880C1B0,
    0x5880C4E0,
    0x5880FC50,
    0x5880C0B0,
    0x5880AF30,
    0x5880F950,
    0x5880B450,
)
MATCHED_METHODS = {
    0x58809890: 27,
    0x5880C1B0: 815,
    0x5880C4E0: 551,
    0x5880FC50: 1084,
    0x5880C0B0: 243,
    0x5880F950: 713,
    0x5880AF30: 91,
    0x5880B450: 649,
}
MATCHED_HELPERS = {
    0x58809AF0: 1893,
    0x5880A260: 1740,
    0x5880B0D0: 876,
    0x5880A940: 122,
    0x58870130: 60,
    0x588C6510: 405,
    0x588C6AA0: 1183,
    0x588C66C0: 361,
    0x588C6830: 323,
    0x588D6C40: 68,
    0x588EB2D0: 15,
    0x588C6470: 151,
    0x5875F310: 6,
}
MATCHED_DIRECT_EDGES = (
    # Existing RTTI-backed page methods entering this result-row subsystem.
    (0x5880A260, 0x5880B4C9, 0x5880B450),
    (0x5880B0D0, 0x5880B5C9, 0x5880B450),
    (0x58809AF0, 0x5880B5D0, 0x5880B450),
    (0x58870130, 0x5880B579, 0x5880B450),
    (0x5880A260, 0x5880C229, 0x5880C1B0),
    (0x58870130, 0x5880C4BC, 0x5880C1B0),
    (0x5880A940, 0x5880C132, 0x5880C0B0),
    (0x5880A940, 0x5880C147, 0x5880C0B0),
    (0x5880A940, 0x5880F975, 0x5880F950),
    (0x5880A940, 0x5880F98F, 0x5880F950),
    (0x5880B0D0, 0x5880FA91, 0x5880F950),
    (0x58809AF0, 0x5880FA9F, 0x5880F950),
    (0x5880B0D0, 0x5880FB97, 0x5880F950),
    (0x58809AF0, 0x5880FB9E, 0x5880F950),
    # Exact Ghidra callsites among the row builder and its shared controls.
    (0x588C6510, 0x58809FCA, 0x58809AF0),
    (0x588C6510, 0x58809FEB, 0x58809AF0),
    (0x588D6C40, 0x5880A177, 0x58809AF0),
    (0x588D6C40, 0x5880A186, 0x58809AF0),
    (0x588D6C40, 0x5880A196, 0x58809AF0),
    (0x588C66C0, 0x5880A203, 0x58809AF0),
    (0x588C6830, 0x5880A214, 0x58809AF0),
    (0x588C6AA0, 0x5880A815, 0x5880A260),
    (0x588C6510, 0x5880A852, 0x5880A260),
    (0x588C6AA0, 0x5880A8C7, 0x5880A260),
    (0x588C6510, 0x5880A905, 0x5880A260),
    (0x588C6510, 0x5880B243, 0x5880B0D0),
    (0x588C6510, 0x5880B263, 0x5880B0D0),
    (0x588C66C0, 0x5880B3E2, 0x5880B0D0),
    (0x588C6830, 0x5880B3EF, 0x5880B0D0),
    (0x588C6830, 0x5880A983, 0x5880A940),
    (0x588EB2D0, 0x588C6532, 0x588C6510),
    (0x588C6470, 0x588C688A, 0x588C6830),
    (0x5875F310, 0x588C64F5, 0x588C6470),
    (0x5875F310, 0x588C6502, 0x588C6470),
)


def main():
    image = IMAGE.read_bytes()

    def offset(address, size=1):
        result = address - BASE
        if result < 0 or result + size > len(image):
            raise ValueError(f"Address outside mapped image: {address:08X}")
        return result

    def bytes_at(address, size):
        return image[offset(address, size):offset(address, size) + size]

    def u32(address):
        return struct.unpack_from("<I", image, offset(address, 4))[0]

    def call_target(site):
        instruction = bytes_at(site, 5)
        if instruction[0] != 0xE8:
            raise AssertionError(f"Expected direct call at {site:08X}")
        return site + 5 + struct.unpack_from("<i", instruction, 1)[0]

    def direct_control_target(site):
        instruction = bytes_at(site, 5)
        if instruction[0] not in (0xE8, 0xE9):
            raise AssertionError(f"Expected direct CALL/JMP at {site:08X}")
        return site + 5 + struct.unpack_from("<i", instruction, 1)[0]

    locator = u32(VTABLE - 4)
    if locator != 0x589A7DD8:
        raise AssertionError(f"Unexpected complete object locator: {locator:08X}")
    type_descriptor = u32(locator + 12)
    if type_descriptor != 0x589CC2E8:
        raise AssertionError(f"Unexpected TypeDescriptor: {type_descriptor:08X}")
    name_start = offset(type_descriptor + 8)
    name_end = image.find(b"\0", name_start)
    name = image[name_start:name_end].decode("ascii")
    expected_name = ".?AVCPageResultOfBattle_ControlMenuScreen@@"
    if name != expected_name:
        raise AssertionError(f"Unexpected RTTI name: {name!r}")

    slots = tuple(u32(VTABLE + 4 * index) for index in range(len(EXPECTED_SLOTS)))
    if slots != EXPECTED_SLOTS:
        raise AssertionError(f"Unexpected battle-result vtable: {slots!r}")

    if call_target(0x5878C75A) != 0x5880DD80:
        raise AssertionError("Global UI initializer no longer calls the page constructor")
    if bytes_at(0x5880DDE8, 6) != bytes.fromhex("C7 06 F4 D5 99 58"):
        raise AssertionError("Page constructor no longer installs the RTTI-backed vtable")

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
            raise AssertionError(f"Matched method is absent from the RTTI-backed vtable: {address:08X}")

    for address, size in MATCHED_HELPERS.items():
        record = records.get(address)
        if record is None or record.get("verified_by") != "objdiff-3.8.0-byte-identical":
            raise AssertionError(f"ObjDiff byte-match record is missing for {address:08X}")
        if record.get("size") != size:
            raise AssertionError(f"Unexpected matched helper extent for {address:08X}")

    for target, callsite, caller in MATCHED_DIRECT_EDGES:
        if caller not in records or target not in records:
            raise AssertionError(f"Call edge lacks a verified endpoint: {caller:08X}->{target:08X}")
        if direct_control_target(callsite) != target:
            raise AssertionError(f"Unexpected direct CALL/JMP target at {callsite:08X}")

    print(f"{VTABLE:08X}: {name}; {len(slots)} RTTI-backed slots verified")
    print(
        f"Global initializer, constructor vtable write, {len(MATCHED_METHODS)} matched methods, "
        f"{len(MATCHED_HELPERS)} matched row helpers, and "
        f"{len(MATCHED_DIRECT_EDGES)} direct CALL/JMP edges verified"
    )


if __name__ == "__main__":
    main()
