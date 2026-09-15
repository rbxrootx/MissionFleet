"""Create a local-endpoint copy of the supplied NavyFIELD 2.062 ITNTL.dll."""

from __future__ import annotations

import argparse
import hashlib
from pathlib import Path


SOURCE_SHA256 = "2e7b2363b348198282511a1851b542d9ca087c499b82aa847c201b7af094f037"
ORIGINAL_HOST = b"shgame3.nf2.com.cn"
ORIGINAL_PORT = 8001
PUSH_PORT = bytes.fromhex("68411f0000")
STORE_PORT = bytes.fromhex("66c7855c040000411f")


def patch_endpoint(data: bytes, hostname: str = "127.0.0.1") -> tuple[bytes, int]:
    encoded = hostname.encode("ascii")
    if not encoded or b"\0" in encoded or len(encoded) > len(ORIGINAL_HOST):
        raise ValueError(f"hostname must be 1..{len(ORIGINAL_HOST)} ASCII bytes")
    if data.count(ORIGINAL_HOST) != 1:
        raise ValueError("expected exactly one original client hostname")
    if data.count(PUSH_PORT) != 1 or data.count(STORE_PORT) != 1:
        raise ValueError("client port-8001 instruction evidence is missing or ambiguous")
    offset = data.index(ORIGINAL_HOST)
    replacement = encoded + bytes(len(ORIGINAL_HOST) - len(encoded))
    return data[:offset] + replacement + data[offset + len(ORIGINAL_HOST) :], offset


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("source", type=Path)
    parser.add_argument("output", type=Path)
    parser.add_argument("--hostname", default="127.0.0.1")
    args = parser.parse_args()

    source = args.source.resolve(strict=True)
    output = args.output.resolve()
    if source == output:
        raise ValueError("output must not overwrite the evidence binary")
    data = source.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != SOURCE_SHA256:
        raise ValueError(f"unsupported ITNTL.dll SHA-256: {digest}")
    patched, offset = patch_endpoint(data, args.hostname)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(patched)
    print(
        f"wrote {output}; hostname={args.hostname}; port={ORIGINAL_PORT}; "
        f"patched file offset=0x{offset:x}"
    )


if __name__ == "__main__":
    main()
