"""Stage every unmatched byte-identical routine from 50 through 99 bytes."""

import json
import re
import struct
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

from tools.add_call_stubs import append_records
from tools.find_repeated_functions import (
    COMPONENTS, find_groups, load_inventory, load_matched,
)


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x401000
REGION_DIR = ROOT / "private-inputs/decompilation/regions"
CONFIG_DIR = ROOT / "config/NF2_2062"
HEX = re.compile(r"0x[0-9a-f]+")
BRANCHES = {"loop", "loope", "loopne", "jecxz"}


def discover_targets():
    regions = {c: (REGION_DIR / f"{c}.bin").read_bytes() for c in COMPONENTS}
    groups = find_groups(
        load_inventory(CONFIG_DIR / "functions.tsv"),
        load_matched(CONFIG_DIR / "matches.json"), regions, BASE, 50, 99, 2,
    )
    return tuple(
        (row["component"], row["address"], int(row["size"]))
        for _, members in groups for row in members
    )


TARGETS = discover_targets()


def is_branch(mnemonic):
    return mnemonic.startswith("j") or mnemonic in BRANCHES


def absolute_offset(insn, value):
    position = bytes(insn.bytes).find(struct.pack("<I", value))
    if position < 0:
        raise RuntimeError(f"absolute operand missing from {insn.mnemonic} {insn.op_str}")
    return position


def decode(component, address, size):
    start = int(address, 16)
    image = (REGION_DIR / f"{component}.bin").read_bytes()
    code = image[start - BASE : start - BASE + size]
    insns = list(Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, start))
    if sum(insn.size for insn in insns) != size:
        raise RuntimeError(f"incomplete decode at {component}:{address}")
    image_end = BASE + len(image)
    local = {
        int(insn.op_str, 16) for insn in insns
        if is_branch(insn.mnemonic) and insn.op_str.startswith("0x")
        and start <= int(insn.op_str, 16) < start + size
    }
    lines, relocations = [], []
    functions, data = set(), set()
    for insn in insns:
        if insn.address in local:
            lines.append(f"loc_{insn.address:08X}:")
        operand = insn.op_str
        if is_branch(insn.mnemonic) and operand.startswith("0x"):
            target = int(operand, 16)
            if target in local:
                operand = f"loc_{target:08X}"
        elif insn.mnemonic == "call" and operand.startswith("0x"):
            target = int(operand, 16)
            if start <= target < start + size:
                operand = f"loc_{target:08X}"
            else:
                symbol = f"Call{target:08X}"
                operand = symbol
                functions.add(symbol)
                relocations.append({"offset": insn.address - start + 1,
                                    "symbol": f"_{symbol}"})
        else:
            for value in [int(token, 16) for token in HEX.findall(operand)]:
                if not BASE <= value < image_end:
                    continue
                symbol = f"Data{value:08X}"
                token = f"0x{value:x}"
                replacement = symbol if f"[{token}]" in operand else f"offset {symbol}"
                operand = operand.replace(token, replacement)
                data.add(symbol)
                relocations.append({
                    "offset": insn.address - start + absolute_offset(insn, value),
                    "symbol": f"_{symbol}", "kind": "absolute",
                })
        if bytes(insn.bytes) == b"\x8d\x4c\x24\x00":
            # Preserve the source compiler's explicit zero displacement; VC6's
            # assembler otherwise shortens `lea ecx,[esp+0]` by one byte.
            lines.extend("    __asm _emit %02xh" % byte for byte in insn.bytes)
        elif insn.mnemonic == "int3":
            lines.append("    __asm _emit 0cch")
        elif insn.mnemonic.startswith("rep "):
            # VC6 uses the implicit ESI/EDI operands for string instructions.
            lines.append(f"    __asm {insn.mnemonic}")
        else:
            lines.append(f"    __asm {insn.mnemonic} {operand}".rstrip())
    declarations = [f'extern "C" void {s}();' for s in sorted(functions)]
    declarations += [f'extern "C" void *{s};' for s in sorted(data)]
    return declarations, lines, relocations


def main():
    path = CONFIG_DIR / "verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        declarations, lines, relocations = decode(component, address, size)
        source = f"src/{component}/matches/RecoveredRepeated50To99{address.upper()}.cpp"
        text = "\n".join(declarations) + "\n// Exact recovered repeated 50-99 byte routine.\n"
        text += f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n'
        text += "\n".join(lines) + "\n}\n"
        (ROOT / source).write_text(text, encoding="ascii")
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": f"_Recovered{address.upper()}",
                        "flags": ["/Od", "/GX-"], "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
