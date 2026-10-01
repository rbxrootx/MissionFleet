"""Compare verified Core.dll function extents with their on-disk raw bytes."""
import argparse
import hashlib
import json
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2026/core-verifications.json"


def digest(data):
    return hashlib.sha256(data).hexdigest()


def raw_sections(data):
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise ValueError("Invalid PE signature in installed Core.dll")
    coff = pe + 4
    count = struct.unpack_from("<H", data, coff + 2)[0]
    optional_size = struct.unpack_from("<H", data, coff + 16)[0]
    optional = coff + 20
    if struct.unpack_from("<H", data, optional)[0] != 0x10B:
        raise ValueError("Expected PE32 Core.dll")
    preferred_base = struct.unpack_from("<I", data, optional + 28)[0]
    table = optional + optional_size
    sections = []
    for index in range(count):
        offset = table + index * 40
        name = data[offset:offset + 8].split(b"\0", 1)[0].decode("ascii")
        virtual_size, rva, raw_size, raw_offset = struct.unpack_from("<IIII", data, offset + 8)
        sections.append({"name": name, "rva": rva, "virtual_size": virtual_size,
                         "raw_size": raw_size, "raw_offset": raw_offset})
    return preferred_base, sections


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--only", action="append", default=[], metavar="ADDRESS",
                        help="limit comparison to one function address (repeatable)")
    args = parser.parse_args()

    config = json.loads(CONFIG.read_text(encoding="utf-8"))
    manifest = json.loads((ROOT / config["manifest"]).read_text(encoding="utf-8"))
    module = next(item for item in manifest["modules"] if item["name"] == "Core.dll")
    disk = Path(module["path"]).read_bytes()
    capture = (ROOT / config["mapped_image"]).read_bytes()
    if digest(disk) != config["original_sha256"]:
        raise ValueError("Installed Core.dll hash differs from this verification inventory")
    if digest(capture) != config["mapped_sha256"]:
        raise ValueError("Mapped Core.dll capture hash differs from this verification inventory")

    requested = {value.upper() for value in args.only}
    matches = [item for item in config["matches"]
               if not requested or item["address"].upper() in requested]
    found = {item["address"].upper() for item in matches}
    if requested - found:
        raise ValueError("Unknown address(es): " + ", ".join(sorted(requested - found)))

    loaded_base = int(module["loaded_image_base"])
    preferred_base, sections = raw_sections(disk)
    for match in matches:
        address = int(match["address"], 16)
        size = int(match["size"])
        rva = address - loaded_base
        section = next((entry for entry in sections
                        if entry["rva"] <= rva
                        and rva + size <= entry["rva"] + entry["raw_size"]), None)
        if section is None:
            virtual_section = next((entry for entry in sections
                                    if entry["rva"] <= rva
                                    and rva + size <= entry["rva"] + entry["virtual_size"]), None)
            if virtual_section and rva >= virtual_section["rva"] + virtual_section["raw_size"]:
                print(f"{match['address']} {virtual_section['name']} {size} bytes: "
                      "not present in the on-disk raw section; mapped capture is the byte source")
                continue
            raise ValueError(f"No raw section covers {match['address']}+{size:#x}")
        raw_offset = section["raw_offset"] + rva - section["rva"]
        raw_body = disk[raw_offset:raw_offset + size]
        mapped_body = capture[rva:rva + size]
        if len(raw_body) != size or len(mapped_body) != size:
            raise ValueError(f"Truncated function extent at {match['address']}")
        differences = [(offset, left, right) for offset, (left, right)
                       in enumerate(zip(raw_body, mapped_body)) if left != right]
        offsets = ",".join(f"+{offset:X}" for offset, _, _ in differences) or "none"
        print(f"{match['address']} {section['name']} {size} bytes: "
              f"{len(differences)} disk/mapped differences ({offsets})")
    print(f"verified Core.dll sha256 {config['original_sha256']} at preferred base "
          f"0x{preferred_base:08X}, runtime base 0x{loaded_base:08X}")


if __name__ == "__main__":
    main()
