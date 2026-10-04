"""Inspect instruction coverage for one indexed installed-Main function."""
import argparse
import csv
from pathlib import Path

import capstone

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("address", help="Ghidra function entry address, hexadecimal")
    args = parser.parse_args()
    address = f"{int(args.address, 16):08X}"

    with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
        rows = list(csv.DictReader(stream, delimiter="\t"))
    index = next(i for i, item in enumerate(rows)
                 if item["address"].upper() == address)
    row = rows[index]
    start = int(address, 16)
    size = int(row["size"])
    image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
    code = image[start - BASE:start - BASE + size]
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    instructions = list(decoder.disasm(code, start))

    print(f"{address} {row['name']} size={size} bytes")
    print("neighboring indexed extents:")
    for item in rows[max(0, index - 1):index + 2]:
        print(f"{item['address']} {item['name']} size={item['size']}")
    for insn in instructions:
        print(f"{insn.address:08X} {insn.bytes.hex():<16} {insn.mnemonic} {insn.op_str}")
    decoded_end = (instructions[-1].address + instructions[-1].size
                   if instructions else start)
    remainder = code[decoded_end - start:]
    print(f"decoded_end=0x{decoded_end:08X} extent_end=0x{start + size:08X}")
    if remainder:
        print(f"unparsed_tail=0x{decoded_end:08X} bytes={remainder.hex()}")
        context = image[decoded_end - BASE:decoded_end - BASE + 32]
        print("following instructions (context only):")
        for insn in decoder.disasm(context, decoded_end):
            print(f"{insn.address:08X} {insn.bytes.hex():<16} {insn.mnemonic} {insn.op_str}")


if __name__ == "__main__":
    main()
