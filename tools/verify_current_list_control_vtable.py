"""Check original Main.dll list-control vtable, key table, and extents."""

import hashlib
import json
from pathlib import Path
import struct


ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2026/client-verifications.json"


def verify():
    config = json.loads(CONFIG.read_text(encoding="utf-8"))
    image = (ROOT / config["mapped_image"]).read_bytes()
    if hashlib.sha256(image).hexdigest() != config["mapped_sha256"]:
        raise ValueError("Current Main.dll mapped image differs")
    base = int(config["image_base"], 16)

    def data_at(address, size):
        offset = address - base
        if offset < 0 or offset + size > len(image):
            raise ValueError(f"Address outside mapped image: {address:08X}")
        return image[offset:offset + size]

    def pointer_at(address):
        return struct.unpack("<I", data_at(address, 4))[0]

    # RTTI identifies three related tables with shared input, draw, and callback slots.
    slots = {
        0x589A29CC: {0x10: 0x58908520, 0x14: 0x58908340, 0x38: 0x58908310},
        0x589A1424: {0x10: 0x58908520, 0x14: 0x58908340, 0x38: 0x58908310},
        0x589A2B6C: {0x10: 0x58908520, 0x14: 0x58908340, 0x38: 0x58908310},
    }
    for table, offsets in slots.items():
        for offset, expected in offsets.items():
            if pointer_at(table + offset) != expected:
                raise ValueError(f"Unexpected vtable slot {table:08X}+{offset:02X}")

    rtti_names = {
        0x589A1424: b".?AVCListTextAutoLineScreen@@",
        0x589A29CC: b".?AVCListTextScreen@@",
        0x589A2B6C: b".?AVCRollListTextScreen@@",
    }
    for table, expected_name in rtti_names.items():
        descriptor = pointer_at(pointer_at(table - 4) + 12)
        if data_at(descriptor + 8, len(expected_name) + 1) != expected_name + b"\x00":
            raise ValueError(f"Unexpected RTTI name at {table:08X}")

    complete_table = [
        0x589088B0, 0x58731770, 0x588A9ED0, 0x58903040,
        0x58908520, 0x58908340, 0x58907F70, 0x58908AF0,
        0x58907F70, 0x58907F70, 0x58907F70, 0x58907F70,
        0x58908AA0, 0x58907F70, 0x58908310, 0x589082E0,
    ]
    verified = {int(item["address"], 16) for item in config["matches"]
                if item.get("verified_by") == "objdiff-3.8.0-byte-identical"}
    roll_table = list(complete_table)
    roll_table[0] = 0x5890BEA0
    roll_table[3] = 0x5890BE10
    auto_table = list(complete_table)
    auto_table[0] = 0x588EA100
    for table, entries in ((0x589A29CC, complete_table),
                           (0x589A2B6C, roll_table),
                           (0x589A1424, auto_table)):
        for slot, expected in enumerate(entries):
            if pointer_at(table + slot * 4) != expected:
                raise ValueError(f"Unexpected table {table:08X} slot +{slot * 4:02X}")
            if expected not in verified:
                raise ValueError(f"Unverified table {table:08X} target {expected:08X}")

    jump_targets = [pointer_at(0x58908B50 + index * 4) for index in range(6)]
    expected_keyboard = {
        0x0D: 0x58908B0D, 0x23: 0x58908B42, 0x24: 0x58908B2B,
        0x26: 0x58908B17, 0x28: 0x58908B21,
    }
    for index, selector in enumerate(data_at(0x58908B68, 28)):
        key = index + 0x0D
        expected = expected_keyboard.get(key, 0x58908B47)
        if selector >= len(jump_targets) or jump_targets[selector] != expected:
            raise ValueError(f"Unexpected keyboard jump-table route {key:02X}")

    # This body installs the first vtable, then finishes beyond its old extent.
    if data_at(0x5890807A, 6) != bytes.fromhex("c703cc299a58"):
        raise ValueError("Lifecycle body does not install observed vtable")
    if data_at(0x589080D0, 16) != b"\xC3" + b"\xCC" * 15:
        raise ValueError("Incorrect lifecycle return/padding boundary")
    if data_at(0x5890850E, 18) != b"\xC2\x0C\x00" + b"\xCC" * 15:
        raise ValueError("Incorrect draw return/padding boundary")
    if data_at(0x589088CB, 5) != b"\xC2\x04\x00" + b"\xCC" * 2:
        raise ValueError("Incorrect deleting-wrapper return/padding boundary")
    if data_at(0x5890BD65, 6) != b"\xC7\x06\x6C\x2B\x9A\x58":
        raise ValueError("Roll-list constructor does not install observed vtable")
    if data_at(0x5890BEA3, 6) != b"\xC7\x06\x6C\x2B\x9A\x58":
        raise ValueError("Roll-list wrapper does not install observed vtable")
    if data_at(0x5890BEC1, 15) != b"\xC2\x04\x00" + b"\xCC" * 12:
        raise ValueError("Incorrect roll-list wrapper return/padding boundary")
    if data_at(0x588EA0F1, 6) != b"\xC7\x06\x24\x14\x9A\x58":
        raise ValueError("Auto-line constructor does not install observed vtable")
    if data_at(0x588EA103, 6) != b"\xC7\x06\x24\x14\x9A\x58":
        raise ValueError("Auto-line wrapper does not install observed vtable")
    if data_at(0x588EA121, 15) != b"\xC2\x04\x00" + b"\xCC" * 12:
        raise ValueError("Incorrect auto-line wrapper return/padding boundary")
    return {"vtable_slots": sum(len(values) for values in slots.values()),
            "complete_vtable_slots": len(complete_table),
            "complete_vtables": 3,
            "rtti_names": len(rtti_names),
            "keyboard_routes": len(expected_keyboard),
            "corrected_function_extents": {"58908050": 129, "58908340": 465,
                                           "589088B0": 30, "5890BEA0": 36,
                                           "588EA100": 36}}


if __name__ == "__main__":
    print(json.dumps(verify(), sort_keys=True))
