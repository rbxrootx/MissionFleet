"""Check CShipSpriteFileManager RTTI, deleting wrapper, and destructor extent."""

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

    table = 0x589A1468
    if pointer_at(table) != 0x588EA530:
        raise ValueError("Unexpected CShipSpriteFileManager slot +0")
    descriptor = pointer_at(pointer_at(table - 4) + 12)
    class_name = b".?AVCShipSpriteFileManager@@\x00"
    if data_at(descriptor + 8, len(class_name)) != class_name:
        raise ValueError("Unexpected RTTI name for sprite file manager")

    if data_at(0x588EA44B, 6) != bytes.fromhex("C70768149A58"):
        raise ValueError("Destructor does not install the observed vtable")
    if data_at(0x588EA529, 7) != b"\xC3" + b"\xCC" * 6:
        raise ValueError("Incorrect destructor return/padding boundary")
    if data_at(0x588EA54B, 5) != b"\xC2\x04\x00\xCC\xCC":
        raise ValueError("Incorrect deleting-wrapper return/padding boundary")
    return {"class_name": "CShipSpriteFileManager",
            "vtable_slots_checked": 1,
            "destructor_extent": 266,
            "deleting_wrapper_extent": 27}


if __name__ == "__main__":
    print(json.dumps(verify(), sort_keys=True))
