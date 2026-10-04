"""Check original Main.dll list-control vtable links and corrected extents."""

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

    # Three original vtables reuse these drawing, event, and callback bodies.
    slots = {
        0x589A29CC: {0x10: 0x58908520, 0x14: 0x58908340, 0x38: 0x58908310},
        0x589A1430: {0x04: 0x58908520, 0x08: 0x58908340, 0x2C: 0x58908310},
        0x589A2B70: {0x0C: 0x58908520, 0x10: 0x58908340, 0x34: 0x58908310},
    }
    for table, offsets in slots.items():
        for offset, expected in offsets.items():
            if pointer_at(table + offset) != expected:
                raise ValueError(f"Unexpected vtable slot {table:08X}+{offset:02X}")

    # This body installs the first vtable, then finishes beyond its old extent.
    if data_at(0x5890807A, 6) != bytes.fromhex("c703cc299a58"):
        raise ValueError("Lifecycle body does not install observed vtable")
    if data_at(0x589080D0, 16) != b"\xC3" + b"\xCC" * 15:
        raise ValueError("Incorrect lifecycle return/padding boundary")
    if data_at(0x5890850E, 18) != b"\xC2\x0C\x00" + b"\xCC" * 15:
        raise ValueError("Incorrect draw return/padding boundary")
    return {"vtable_slots": sum(len(values) for values in slots.values()),
            "corrected_function_extents": {"58908050": 129, "58908340": 465}}


if __name__ == "__main__":
    print(json.dumps(verify(), sort_keys=True))
