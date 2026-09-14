"""Export one private target function as a local decomp.me scratch bundle."""
import argparse
import csv
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / "config" / "NF2_2062"
REGIONS = ROOT / "private-inputs" / "decompilation" / "regions"
IMAGE_BASE = 0x401000


def target_assembly(symbol, code):
    lines = [
        "        .text",
        f'        .def    "{symbol}";',
        "        .scl    2;",
        "        .type   32;",
        "        .endef",
        f'        .globl  "{symbol}"',
        f'"{symbol}":',
    ]
    for offset in range(0, len(code), 16):
        chunk = code[offset : offset + 16]
        lines.append("        .byte   " + ", ".join(f"0x{byte:02x}" for byte in chunk))
    return "\n".join(lines) + "\n"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("component", choices=("login-server", "game-server", "save-server"))
    parser.add_argument("address", help="function address, such as 00533743")
    parser.add_argument("--symbol", help="GAS/diff symbol; defaults to _func_ADDRESS")
    parser.add_argument("--output", type=Path, help="output directory")
    args = parser.parse_args()

    address = f"{int(args.address, 16):08x}"
    with (CONFIG / "functions.tsv").open(encoding="utf-8", newline="") as stream:
        row = next(
            (
                item for item in csv.DictReader(stream, delimiter="\t")
                if item["component"] == args.component and item["address"].lower() == address
            ),
            None,
        )
    if row is None:
        raise ValueError(f"Unknown function: {args.component}:{address}")

    size = int(row["size"])
    region = (REGIONS / f"{args.component}.bin").read_bytes()
    start = int(address, 16) - IMAGE_BASE
    code = region[start : start + size]
    if len(code) != size:
        raise ValueError("Function lies outside the recovered component region")

    symbol = args.symbol or f"_func_{address.upper()}"
    output = args.output or ROOT / "build" / "decompme" / f"{args.component}-{address}"
    output.mkdir(parents=True, exist_ok=True)
    (output / "target.s").write_text(target_assembly(symbol, code), encoding="ascii")
    (output / "context.cpp").write_text("", encoding="utf-8")
    (output / "source.cpp").write_text(
        f'extern "C" void func_{address.upper()}()\n{{\n}}\n', encoding="utf-8"
    )
    (output / "scratch.json").write_text(
        json.dumps(
            {
                "component": args.component,
                "address": address,
                "name": row["name"],
                "size": size,
                "platform": "Windows (9x/NT) x86 (32bit)",
                "compiler": "Microsoft Visual C/C++ 6.0 SP5",
                "flags": ["/Od", "/GX-", "/TP"],
                "diff_label": symbol,
            },
            indent=2,
        )
        + "\n",
        encoding="utf-8",
    )
    print(f"{args.component}:{address} ({size} bytes) -> {output}")


if __name__ == "__main__":
    main()
