"""Stage byte-identical map and framework lookup helpers."""

import json
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

from tools.add_call_stubs import append_records


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x401000

# target address -> (inline-assembler spelling, COFF symbol, declaration)
CALLS = {
    ("game-server", 0x4EB9F0): ("Call004EB9F0", "_Call004EB9F0", 'extern "C" void Call004EB9F0();'),
    ("save-server", 0x4C7F30): ("Call004C7F30", "_Call004C7F30", 'extern "C" void Call004C7F30();'),
    ("game-server", 0x4EB0E0): ("Call004EB0E0", "_Call004EB0E0", 'extern "C" void Call004EB0E0();'),
    ("save-server", 0x4C7620): ("Call004C7620", "_Call004C7620", 'extern "C" void Call004C7620();'),
    ("game-server", 0x4E92E0): ("Call004E92E0", "_Call004E92E0", 'extern "C" void Call004E92E0();'),
    ("save-server", 0x4C6D80): ("Call004C6D80", "_Call004C6D80", 'extern "C" void Call004C6D80();'),
    ("game-server", 0x4EA840): ("Call004EA840", "_Call004EA840", 'extern "C" void Call004EA840();'),
    ("save-server", 0x4C8920): ("Call004C8920", "_Call004C8920", 'extern "C" void Call004C8920();'),
}

TARGETS = (
    ("game-server", "004931f2", 103), ("save-server", "0044f817", 103),
    ("game-server", "004eb547", 105), ("save-server", "004c7a87", 105),
    ("game-server", "004eac3c", 106), ("save-server", "004c717c", 106),
    ("game-server", "004eb4dd", 106), ("save-server", "004c7a1d", 106),
    ("game-server", "004e8e1c", 118), ("save-server", "004c68bc", 118),
    ("game-server", "004ea24c", 118), ("save-server", "004c832c", 118),
    ("game-server", "0048f5b1", 182), ("save-server", "0044bbe1", 182),
    ("game-server", "00493311", 184), ("save-server", "0044f936", 184),
)


def decode(component, address, size):
    start = int(address, 16)
    image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
    code = image[start - BASE : start - BASE + size]
    insns = list(Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, start))
    if sum(insn.size for insn in insns) != size:
        raise RuntimeError(f"incomplete decode at {component}:{address}")
    local = {
        int(insn.op_str, 16) for insn in insns
        if insn.mnemonic.startswith("j") and insn.op_str.startswith("0x")
        and start <= int(insn.op_str, 16) < start + size
    }
    declarations = set()
    relocations = []
    lines = []
    for insn in insns:
        if insn.address in local:
            lines.append(f"loc_{insn.address:08X}:")
        operand = insn.op_str
        if insn.mnemonic.startswith("j") and operand.startswith("0x"):
            target = int(operand, 16)
            if target in local:
                operand = f"loc_{target:08X}"
        elif insn.mnemonic == "call" and operand.startswith("0x"):
            spelling, symbol, declaration = CALLS[(component, int(operand, 16))]
            operand = spelling
            declarations.add(declaration)
            relocations.append({"offset": insn.address - start + 1, "symbol": symbol})
        lines.append(f"    __asm {insn.mnemonic} {operand}".rstrip())
    return sorted(declarations), lines, relocations


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size in TARGETS:
        if (component, address) in existing:
            continue
        declarations, lines, relocations = decode(component, address, size)
        source = f"src/{component}/matches/RecoveredSharedMapLookup{address.upper()}.cpp"
        text = "\n".join(declarations) + "\n// Exact recovered shared map/framework lookup.\n"
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
