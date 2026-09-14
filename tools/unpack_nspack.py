"""Recover static code bytes from the supplied NsPack-compressed server files.

Outputs are raw analysis regions, not runnable executables. An incomplete tail
is recorded and never filled with guessed bytes. Nothing is executed or patched.
Header identification follows publicly documented ClamAV NsPack format evidence:
https://github.com/Cisco-Talos/clamav/blob/main/libclamav/pe.c
The decompressor is Python's standard-library LZMA implementation.
"""
import hashlib
import json
import lzma
from pathlib import Path
import struct
import pefile

ROOT = Path(__file__).resolve().parents[1]


def recover(source, output, name):
    packed = source.read_bytes()
    pe = pefile.PE(data=packed)
    entry_rva = pe.OPTIONAL_HEADER.AddressOfEntryPoint
    entry_offset = pe.get_offset_from_rva(entry_rva)
    expected = bytes.fromhex("9c60e8000000005db807000000")
    if packed[entry_offset:entry_offset + len(expected)] != expected:
        raise ValueError("Unsupported NsPack loader signature")
    delta = 0x54 - struct.unpack_from("<i", packed, entry_offset + 17)[0]
    pointer = entry_offset - delta
    if not 0 <= pointer <= len(packed) - 4:
        raise ValueError("Invalid compressed-data pointer")
    start = entry_offset + struct.unpack_from("<i", packed, pointer)[0]
    if not 0 <= start <= len(packed) - 17:
        raise ValueError("Invalid compressed-data offset")
    if struct.unpack_from("<I", packed, start)[0] == 0:
        start += 4
    prop, dictionary, compressed_size, virtual_size = struct.unpack_from("<BIII", packed, start)
    if prop >= 225 or dictionary > 64 * 1024 * 1024 or not 13 <= compressed_size <= len(packed) - start:
        raise ValueError("Unsupported compression parameters")
    if not 0 < virtual_size <= 64 * 1024 * 1024:
        raise ValueError("Invalid decompressed size")
    # These supplied loaders store the compressed payload size separately from
    # the 13-byte header. Clamp to actual file bytes: the login sample is one
    # byte shorter than header + declared payload. Never synthesize missing data.
    decoder = lzma.LZMADecompressor(format=lzma.FORMAT_RAW, filters=[{
        "id": lzma.FILTER_LZMA1, "dict_size": max(dictionary, 4096),
        "lc": prop % 9, "lp": prop // 9 % 5, "pb": prop // 45}])
    payload_end = min(start + 13 + compressed_size, len(packed))
    raw = bytearray(decoder.decompress(packed[start + 13:payload_end], max_length=virtual_size))
    base = pe.OPTIONAL_HEADER.ImageBase + pe.sections[0].VirtualAddress
    # NsPack also normalizes E8/E9 operands before LZMA compression. Recover
    # the format parameters from the loader's own static constants; without
    # this step decompilers see invalid branch targets despite readable strings.
    stub = pe.get_data(entry_rva, 0x500)
    filter_pattern = bytes.fromhex("8b4e088d56108b368bfe")
    filter_at = stub.find(filter_pattern)
    if filter_at < 6 or stub[filter_at - 6:filter_at - 4] != b"\x8d\xb5":
        raise ValueError("Unsupported branch-filter descriptor")
    filter_delta = struct.unpack_from("<i", stub, filter_at - 4)[0]
    descriptor = entry_offset + filter_delta
    filter_rva = struct.unpack_from("<I", packed, descriptor)[0]
    branch_count = struct.unpack_from("<I", packed, descriptor + 8)[0]
    tag, tagged = packed[descriptor + 16:descriptor + 18]
    cursor = filter_rva - pe.sections[0].VirtualAddress
    filter_start = cursor
    if branch_count and not 0 <= cursor < len(raw):
        raise ValueError("Branch-filter base outside recovered region")
    converted = 0
    while converted < branch_count:
        if cursor + 5 > len(raw):
            raise ValueError("Truncated normalized branch stream")
        if raw[cursor] not in (0xe8, 0xe9) or (tagged and raw[cursor + 1] != tag):
            cursor += 1
            continue
        target = int.from_bytes(raw[cursor + (2 if tagged else 1):cursor + 5], "big")
        relative = (target - (cursor + 1 - filter_start)) & 0xffffffff
        struct.pack_into("<I", raw, cursor + 1, relative)
        cursor += 5
        converted += 1
    # Find the loader's register-restore/jump handoff without running the stub.
    candidates = []
    for i in range(len(stub) - 7):
        if stub[i:i + 3] == bytes.fromhex("619de9"):
            target = pe.OPTIONAL_HEADER.ImageBase + entry_rva + i + 7 + struct.unpack_from("<i", stub, i + 3)[0]
            if base <= target < base + len(raw):
                candidates.append(target)
    if len(candidates) != 1:
        raise ValueError("Cannot identify a unique original entry point")
    output.mkdir(parents=True, exist_ok=True)
    (output / f"{name}.bin").write_bytes(raw)
    report = {"source": str(source.relative_to(ROOT)), "source_sha256": hashlib.sha256(packed).hexdigest(),
              "output_sha256": hashlib.sha256(raw).hexdigest(), "memory_base": hex(base),
              "original_entry": hex(candidates[0]), "compressed_offset": start,
              "declared_compressed_size": compressed_size, "declared_virtual_size": virtual_size,
              "available_payload_bytes": payload_end - start - 13,
              "recovered_bytes": len(raw), "unrecovered_tail_bytes": virtual_size - len(raw),
              "decoder_eof": decoder.eof, "complete_virtual_region": len(raw) == virtual_size,
              "restored_branch_operands": converted, "branch_filter_descriptor_offset": descriptor,
              "execution": "none", "scope": "static analysis only; no loader, imports or executable reconstruction"}
    (output / f"{name}.json").write_text(json.dumps(report, indent=2), encoding="utf-8")
    return report


if __name__ == "__main__":
    server = ROOT / "private-inputs/server-package/nf2"
    output = ROOT / "private-inputs/decompilation/regions"
    targets = [(server / "Login/登陆服务器.exe", "login-server"),
               (server / "游戏服务器.exe", "game-server"),
               (server / "储存服务器.exe", "save-server")]
    for source, name in targets:
        print(json.dumps({"name": name, **recover(source, output, name)}, ensure_ascii=True))
