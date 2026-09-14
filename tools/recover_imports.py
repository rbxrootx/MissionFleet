"""Recover import labels from the supplied server loader metadata, statically."""
import json
from pathlib import Path
import re
import struct
import pefile

ROOT = Path(__file__).resolve().parents[1]


def recover(metadata_file):
    metadata = json.loads(metadata_file.read_text())
    packed = (ROOT / metadata["source"]).read_bytes()
    raw = metadata_file.with_suffix(".bin").read_bytes()
    pe = pefile.PE(data=packed)
    entry_rva = pe.OPTIONAL_HEADER.AddressOfEntryPoint
    entry_offset = pe.get_offset_from_rva(entry_rva)
    stub = pe.get_data(entry_rva, 0x500)
    table_match = re.search(rb"\x8b\xb5(.{4})\x0b\xf6", stub, re.DOTALL)
    pool_match = re.search(rb"\x8d\xbd(.{4})\x03\x7e\x04", stub, re.DOTALL)
    if table_match is None or pool_match is None:
        raise ValueError("Unsupported import-loader layout")
    table_displacement = struct.unpack("<i", table_match[1])[0]
    pool_displacement = struct.unpack("<i", pool_match[1])[0]
    image_base = pe.OPTIONAL_HEADER.ImageBase
    memory_rva = int(metadata["memory_base"], 16) - image_base
    position = struct.unpack_from("<I", packed, entry_offset + table_displacement)[0] - memory_rva
    pool = entry_offset + pool_displacement
    imports = []
    modules = []
    incomplete_reason = None
    for _ in range(128):
        if not 0 <= position <= len(raw) - 16:
            raise ValueError("Import table extends beyond recovered data")
        marker, name_offset, iat = struct.unpack_from("<III", raw, position)
        if not (marker or name_offset or iat):
            break
        dll_start = pool + name_offset
        dll_end = packed.index(0, dll_start, min(dll_start + 128, len(packed)))
        dll = packed[dll_start:dll_end].decode("ascii")
        name_position = position + struct.unpack_from("<I", raw, position + 12)[0]
        position += 16
        modules.append(dll)
        while position < len(raw) and raw[position]:
            length = raw[position]
            if not 0 <= name_position <= len(raw) - length:
                incomplete_reason = f"Import name at region offset {name_position:#x} extends beyond recovered data"
                break
            encoded = raw[name_position:name_position + length]
            name = ("ordinal_" + str(struct.unpack_from("<I", encoded, 1)[0] & 0x7fffffff)
                    if encoded[0] == 255 else encoded.decode("ascii"))
            address = image_base + iat
            if not int(metadata["memory_base"], 16) <= address <= int(metadata["memory_base"], 16) + len(raw) - 4:
                raise ValueError("Import address outside recovered region")
            imports.append({"iat": hex(address), "dll": dll, "name": name})
            if len(imports) > 4096:
                raise ValueError("Too many imports")
            name_position += length
            position += 1
            iat += 4
        position += 1
        if incomplete_reason:
            break
    else:
        raise ValueError("Too many import modules")
    result = {"modules": modules, "imports": imports, "complete": incomplete_reason is None,
              "incomplete_reason": incomplete_reason, "method": "static loader metadata; no API calls performed"}
    metadata_file.with_suffix(".imports.json").write_text(json.dumps(result, indent=2), encoding="utf-8")
    metadata_file.with_suffix(".imports.tsv").write_text("".join(f"{i['iat']}\t{i['dll']}\t{i['name']}\n" for i in imports), encoding="utf-8")
    return {"region": metadata_file.stem, "modules": len(modules), "imports": len(imports), "complete": incomplete_reason is None}


if __name__ == "__main__":
    for name in ["login-server", "game-server", "save-server"]:
        print(json.dumps(recover(ROOT / f"private-inputs/decompilation/regions/{name}.json")))
