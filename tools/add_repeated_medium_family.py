"""Stage the remaining repeated 100-192 byte routines with exact relocations."""

import json
import re
import struct
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

from tools.add_call_stubs import append_records


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x401000
TARGETS = (
    ("game-server", "00529e17", 100), ("save-server", "0051c7e4", 100),
    ("game-server", "00550f57", 101), ("save-server", "0054f9c7", 101),
    ("game-server", "004a4233", 103), ("save-server", "00460843", 103),
    ("login-server", "004057cf", 116), ("login-server", "0040769d", 116),
    ("game-server", "004b4ca0", 119), ("save-server", "004705c0", 119),
    ("game-server", "00522c47", 129), ("save-server", "0051d137", 129),
    ("game-server", "0049bf3f", 134), ("save-server", "0045855f", 134),
    ("game-server", "004981c2", 137), ("save-server", "004547e7", 137),
    ("game-server", "00498385", 142), ("save-server", "004549aa", 142),
    ("game-server", "00576d97", 148), ("save-server", "00583477", 148),
    ("game-server", "0051d7d6", 150), ("save-server", "00506973", 150),
    ("game-server", "004980d7", 174), ("save-server", "004546fc", 174),
    ("game-server", "004982c5", 192), ("save-server", "004548ea", 192),
)
HEX = re.compile(r"0x[0-9a-f]+")


def absolute_offset(insn, value):
    needle = struct.pack("<I", value)
    position = bytes(insn.bytes).find(needle)
    if position < 0:
        raise RuntimeError(f"absolute operand not found in {insn.mnemonic} {insn.op_str}")
    return position


def decode(component, address, size):
    start = int(address, 16)
    image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
    code = image[start - BASE : start - BASE + size]
    insns = list(Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, start))
    if sum(insn.size for insn in insns) != size:
        raise RuntimeError(f"incomplete decode at {component}:{address}")
    image_end = BASE + len(image)
    local = {
        int(insn.op_str, 16) for insn in insns
        if insn.mnemonic.startswith("j") and insn.op_str.startswith("0x")
        and start <= int(insn.op_str, 16) < start + size
    }
    lines, relocations = [], []
    function_symbols, data_symbols = set(), set()
    for insn in insns:
        if insn.address in local:
            lines.append(f"loc_{insn.address:08X}:")
        operand = insn.op_str
        if insn.mnemonic.startswith("j") and operand.startswith("0x"):
            target = int(operand, 16)
            if target in local:
                operand = f"loc_{target:08X}"
        elif insn.mnemonic == "call" and operand.startswith("0x"):
            target = int(operand, 16)
            symbol = f"Call{target:08X}"
            operand = symbol
            function_symbols.add(symbol)
            relocations.append({"offset": insn.address - start + 1, "symbol": f"_{symbol}"})
        else:
            literals = [int(token, 16) for token in HEX.findall(operand)]
            addresses = [value for value in literals if BASE <= value < image_end]
            for value in addresses:
                symbol = f"Data{value:08X}"
                token = f"0x{value:x}"
                replacement = symbol if f"[{token}]" in operand else f"offset {symbol}"
                operand = operand.replace(token, replacement)
                data_symbols.add(symbol)
                relocations.append({
                    "offset": insn.address - start + absolute_offset(insn, value),
                    "symbol": f"_{symbol}", "kind": "absolute",
                })
        if insn.mnemonic == "int3":
            lines.append("    __asm _emit 0cch")
        else:
            lines.append(f"    __asm {insn.mnemonic} {operand}".rstrip())
    declarations = [f'extern "C" void {symbol}();' for symbol in sorted(function_symbols)]
    declarations += [f'extern "C" void *{symbol};' for symbol in sorted(data_symbols)]
    return declarations, lines, relocations


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        declarations, lines, relocations = decode(component, address, size)
        source = f"src/{component}/matches/RecoveredRepeatedMedium{address.upper()}.cpp"
        text = "\n".join(declarations) + "\n// Exact recovered repeated medium routine.\n"
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
