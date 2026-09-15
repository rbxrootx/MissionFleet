"""Rank unmatched functions with identical instruction structure after address normalization."""

from __future__ import annotations

import argparse
import re
from collections import defaultdict
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

from tools.find_repeated_functions import COMPONENTS, load_inventory, load_matched


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x401000
HEX = re.compile(r"0x[0-9a-f]+")
BRANCHES = {"loop", "loope", "loopne", "jecxz"}


def is_branch(mnemonic: str) -> bool:
    return mnemonic.startswith("j") or mnemonic in BRANCHES


def signature(row, region):
    start = int(row["address"], 16)
    size = int(row["size"])
    code = region[start - BASE : start - BASE + size]
    insns = list(Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, start))
    if sum(insn.size for insn in insns) != size:
        return None
    end = BASE + len(region)
    calls, data, external_branches = {}, {}, {}

    def token(table, value, prefix):
        if value not in table:
            table[value] = f"{prefix}{len(table)}"
        return table[value]

    result = []
    for insn in insns:
        operand = insn.op_str
        if is_branch(insn.mnemonic) and operand.startswith("0x"):
            target = int(operand, 16)
            if start <= target < start + size:
                operand = f"LOCAL{target - start:+d}"
            else:
                operand = token(external_branches, target, "BRANCH")
        elif insn.mnemonic == "call" and operand.startswith("0x"):
            operand = token(calls, int(operand, 16), "CALL")
        else:
            for literal in HEX.findall(operand):
                value = int(literal, 16)
                if BASE <= value < end:
                    operand = operand.replace(literal, token(data, value, "DATA"))
        result.append((insn.size, insn.mnemonic, operand))
    return tuple(result)


def find_normalized(inventory, matched, regions, min_size, max_size, min_count):
    groups = defaultdict(list)
    raw_bodies = {}
    for row in inventory:
        key = (row["component"], row["address"].lower())
        size = int(row["size"])
        if key in matched or not min_size <= size <= max_size:
            continue
        sig = signature(row, regions[row["component"]])
        if sig is not None:
            groups[(size, sig)].append(row)
            start = int(row["address"], 16) - BASE
            raw_bodies[key] = regions[row["component"]][start:start + size]
    output = []
    for (_, sig), members in groups.items():
        if len(members) < min_count:
            continue
        bodies = {raw_bodies[(row["component"], row["address"].lower())] for row in members}
        if len(bodies) < 2:
            continue
        output.append((sig, members))
    return sorted(output, key=lambda item: (-len(item[1]), -int(item[1][0]["size"]),
                                             item[1][0]["address"]))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--min-size", type=int, default=10)
    parser.add_argument("--max-size", type=int, default=2000)
    parser.add_argument("--min-count", type=int, default=2)
    parser.add_argument("--limit", type=int, default=50)
    args = parser.parse_args()
    config = ROOT / "config/NF2_2062"
    region_dir = ROOT / "private-inputs/decompilation/regions"
    regions = {c: (region_dir / f"{c}.bin").read_bytes() for c in COMPONENTS}
    groups = find_normalized(load_inventory(config / "functions.tsv"),
                             load_matched(config / "matches.json"), regions,
                             args.min_size, args.max_size, args.min_count)
    for index, (_, members) in enumerate(groups[:args.limit], 1):
        print(f"group {index}: {len(members)} functions, {members[0]['size']} bytes")
        for row in members:
            print(f"  {row['component']} {row['address']} {row['name']}")
    print(f"listed {min(len(groups), args.limit)} of {len(groups)} normalized groups")
    print(f"candidates: {sum(len(m) for _, m in groups)} functions / "
          f"{sum(int(m[0]['size']) * len(m) for _, m in groups)} bytes")


if __name__ == "__main__":
    main()
