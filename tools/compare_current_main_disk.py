"""Compare current Main.dll raw-section bytes with the mapped runtime capture."""
import argparse
import hashlib
import json
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2026/client-verifications.json"


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def section_table(image):
    pe = struct.unpack_from("<I", image, 0x3C)[0]
    if image[pe:pe + 4] != b"PE\0\0":
        raise ValueError("Invalid PE signature")
    coff = pe + 4
    count = struct.unpack_from("<H", image, coff + 2)[0]
    optional_size = struct.unpack_from("<H", image, coff + 16)[0]
    optional = coff + 20
    if struct.unpack_from("<H", image, optional)[0] != 0x10B:
        raise ValueError("Expected a PE32 image")
    base = struct.unpack_from("<I", image, optional + 28)[0]
    table = optional + optional_size
    sections = []
    for index in range(count):
        offset = table + index * 40
        name = image[offset:offset + 8].split(b"\0", 1)[0].decode("ascii")
        virtual_size, rva, raw_size, raw_offset = struct.unpack_from("<IIII", image, offset + 8)
        sections.append({"name": name, "rva": rva, "virtual_size": virtual_size,
                         "raw_size": raw_size, "raw_offset": raw_offset})
    return base, sections


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--disk", required=True, type=Path,
                        help="path to the locally installed Main.dll")
    parser.add_argument("--only", action="append", default=[], metavar="ADDRESS",
                        help="limit comparison to one address (repeatable)")
    args = parser.parse_args()

    config = json.loads(CONFIG.read_text(encoding="utf-8"))
    disk = args.disk.read_bytes()
    if sha256(disk) != config["original_sha256"]:
        raise ValueError("Installed Main.dll hash differs from the captured build")
    capture = (ROOT / config["mapped_image"]).read_bytes()
    if sha256(capture) != config["mapped_sha256"]:
        raise ValueError("Mapped capture hash differs from the verification inventory")
    manifest = json.loads((ROOT / config["manifest"]).read_text(encoding="utf-8"))
    module = next(item for item in manifest["modules"] if item["name"] == "Main.dll")
    loaded_base = int(module["loaded_image_base"])
    preferred_base, sections = section_table(disk)
    requested = {address.upper() for address in args.only}
    matches = [item for item in config["matches"]
               if not requested or item["address"].upper() in requested]
    if requested and requested - {item["address"].upper() for item in matches}:
        raise ValueError("Unknown address(es): " + ", ".join(sorted(requested - {item['address'].upper() for item in matches})))

    unavailable = 0
    for item in matches:
        address = int(item["address"], 16)
        size = int(item["size"])
        rva = address - loaded_base
        section = next((entry for entry in sections
                        if entry["rva"] <= rva
                        and rva + size <= entry["rva"] + entry["raw_size"]), None)
        if section is None:
            virtual_section = next((entry for entry in sections
                                    if entry["rva"] <= rva
                                    and rva + size <= entry["rva"] + entry["virtual_size"]), None)
            if virtual_section and rva >= virtual_section["rva"] + virtual_section["raw_size"]:
                unavailable += 1
                print(f"{item['address']} {virtual_section['name']} {size} bytes: "
                      "not present in the on-disk raw section")
                continue
            raise ValueError(f"No raw section covers {item['address']}+{size:#x}")
        raw_offset = section["raw_offset"] + rva - section["rva"]
        disk_body = disk[raw_offset:raw_offset + size]
        mapped_body = capture[rva:rva + size]
        if len(disk_body) != size or len(mapped_body) != size:
            raise ValueError(f"Truncated extent at {item['address']}")
        differences = [(offset, disk_body[offset], mapped_body[offset])
                       for offset in range(size) if disk_body[offset] != mapped_body[offset]]
        offsets = ",".join(f"+{offset:X}" for offset, _, _ in differences) or "none"
        print(f"{item['address']} {section['name']} {size} bytes: "
              f"{len(differences)} disk/mapped byte differences ({offsets})")
    print(f"verified disk sha256 {config['original_sha256']} at preferred base 0x{preferred_base:08X}; "
          f"runtime base 0x{loaded_base:08X}; {unavailable} extents have no on-disk raw bytes")


if __name__ == "__main__":
    main()
