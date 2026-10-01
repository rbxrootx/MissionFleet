"""Emit and pin byte-source for one mapped, runtime-traced VM block."""
import argparse
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config/NF2_2026/vm-block-matches.json"


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("address", help="VM block address in hex")
    args = parser.parse_args()
    document = json.loads(CONFIG.read_text(encoding="utf-8"))
    block = next(item for item in document["blocks"]
                 if item["address"].upper() == args.address.upper())
    image = ROOT / document["mapped_image"]
    image_bytes = image.read_bytes()
    if sha256(image_bytes) != document["mapped_sha256"]:
        raise ValueError("Mapped image differs from the pinned capture")
    start = int(block["address"], 16) - int(document["image_base"], 16)
    code = image_bytes[start:start + block["size"]]
    if len(code) != block["size"] or sha256(code) != block["block_sha256"]:
        raise ValueError("Mapped VM block differs from the block hash in the manifest")

    end = int(block["address"], 16) + block["size"]
    function = block["symbol"].lstrip("_")
    lines = [
        "// Byte-emitted source for a dynamically traced VM basic block.",
        f"// Executed extent: [0x{int(block['address'], 16):08X}, 0x{end:08X}), "
        f"{block['size']} bytes; not a function boundary.",
        f'extern "C" __declspec(naked) void {function}() {{',
        "    __asm {",
    ]
    lines.extend(f"        __asm _emit 0x{value:02x}" for value in code)
    lines.extend(["    }", "}", ""])
    source = ROOT / block["source"]
    source.parent.mkdir(parents=True, exist_ok=True)
    source.write_text("\n".join(lines), encoding="ascii", newline="\n")
    block["source_sha256"] = sha256(source.read_bytes())
    CONFIG.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"emitted {len(code)} bytes to {source.relative_to(ROOT)}")
    print(f"source sha256={block['source_sha256']}")


if __name__ == "__main__":
    main()
