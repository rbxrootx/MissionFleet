"""Verify the ID-panel key dispatch table against the pinned mapped client."""

import csv
import hashlib
import json
from pathlib import Path
import struct

import capstone


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000


def main():
    specification = json.loads((ROOT / "config/NF2_2026/communicator-id-input-table.json")
                               .read_text(encoding="utf-8"))
    if specification["schema_version"] != 1 or specification["component"] != "Main.dll":
        raise ValueError("Unsupported input table specification")
    image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
    verification = json.loads((ROOT / "config/NF2_2026/client-verifications.json")
                              .read_text(encoding="utf-8"))
    if hashlib.sha256(image).hexdigest() != verification["mapped_sha256"]:
        raise AssertionError("Mapped client image differs from the pinned verification")
    inventory = {row["address"].upper(): row for row in csv.DictReader(
        (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8"),
        delimiter="\t")}
    entry = int(specification["function_address"], 16)
    size = int(inventory[specification["function_address"]]["size"])
    end = entry + size
    if end != int(specification["table_address"], 16):
        raise AssertionError("Input function must end exactly at its jump table")
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    code = image[entry-BASE:end-BASE]
    instructions = list(decoder.disasm(code, entry))
    if not instructions or instructions[-1].address + instructions[-1].size != end:
        raise AssertionError("Input function does not decode through its indexed end")
    boundaries = {instruction.address for instruction in instructions}

    dispatch = int(specification["dispatch_address"], 16)
    table = int(specification["table_address"], 16)
    expected_jump = b"\xff\x24\x85" + struct.pack("<I", table)
    if image[dispatch-BASE:dispatch-BASE+7] != expected_jump:
        raise AssertionError("Indexed indirect jump changed")
    if specification["index_base"] != 0x21:
        raise AssertionError("Unexpected key index base")
    # At 0x5884AC38 the code subtracts 0x21 and bounds the result to 0..7.
    if image[0x5884AC38-BASE:0x5884AC41-BASE] != bytes.fromhex(
            "8d47df83f8070f87fa"):
        raise AssertionError("Key index or bound instruction changed")

    targets = specification["targets"]
    if len(targets) != 8:
        raise AssertionError("Expected eight key dispatch entries")
    for index, expected_text in enumerate(targets):
        actual = struct.unpack_from("<I", image, table - BASE + 4 * index)[0]
        expected = int(expected_text, 16)
        if actual != expected or actual not in boundaries:
            raise AssertionError(f"Key {0x21 + index:02X}: invalid target {actual:08X}")
        print(f"key 0x{0x21 + index:02X} -> 0x{actual:08X}")

    next_function = int(specification["next_function_address"], 16)
    if next_function != table + 40 or image[table-BASE+32:next_function-BASE] != b"\xcc" * 8:
        raise AssertionError("Jump table padding or next function boundary changed")
    if specification["next_function_address"].lower() not in {
            row["address"] for row in inventory.values()}:
        raise AssertionError("Next function is not in the installed-client inventory")


if __name__ == "__main__":
    main()
