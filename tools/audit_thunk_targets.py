"""Validate address-named thunk targets against original image operands.

This complements objdiff: it checks the addresses that symbolic relocation
normalization removes. It does not prove a complete executable links or runs.
"""
import json
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCES = {"RecoveredJumpThunks.cpp", "RecoveredImportThunks.cpp", "RecoveredCallStubs.cpp"}


def operand_target(code, address, relocation):
    offset = int(relocation["offset"])
    if offset < 0 or offset + 4 > len(code):
        raise ValueError("relocation operand outside function")
    kind = relocation.get("kind", "relative")
    if kind == "absolute":
        return struct.unpack_from("<I", code, offset)[0]
    if kind != "relative":
        raise ValueError(f"unknown relocation kind: {kind}")
    return (address + offset + 4 + struct.unpack_from("<i", code, offset)[0]) & 0xFFFFFFFF


def audit(document, regions):
    checked = 0
    failures = []
    base = int(document["image_base"], 16)
    for match in document["matches"]:
        if Path(match["source"]).name not in SOURCES:
            continue
        address = int(match["address"], 16)
        start = address - base
        image = regions[match["component"]]
        size = int(match["size"])
        if start < 0 or start + size > len(image):
            raise ValueError("function outside recovered region")
        code = image[start:start + size]
        for relocation in match["relocations"]:
            symbol = relocation["symbol"]
            token = re.fullmatch(r"_Target([0-9A-Fa-f]{8})", symbol)
            if token is None:
                raise ValueError(f"target lacks address: {symbol}")
            expected = int(token.group(1), 16)
            actual = operand_target(code, address, relocation)
            checked += 1
            if actual != expected:
                failures.append(f"{match['component']}:{match['address']} {symbol}: original target {actual:08X}")
    return checked, failures


def main():
    document = json.loads((ROOT / "config/NF2_2062/verifications.json").read_text())
    regions = {component: (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
               for component in ("login-server", "game-server", "save-server")}
    checked, failures = audit(document, regions)
    for failure in failures:
        print(failure)
    print(f"audited {checked} thunk targets; {len(failures)} mismatches")
    return bool(failures)


if __name__ == "__main__":
    raise SystemExit(main())
