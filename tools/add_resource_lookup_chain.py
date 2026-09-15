"""Stage the shared resource-record lookup chain in game and save servers."""

import json
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

from tools.add_call_stubs import append_records


ROOT = Path(__file__).resolve().parents[1]
MEMORY_BASE = 0x401000
TARGETS = (
    ("game-server", "00573516", 156, {0x534A00: "Recovered00534A00"},
     {0x5CBCC4: "ResourceAssertFile005CBCC4"}, {}),
    ("save-server", "0057fbf6", 156, {0x528D40: "Recovered00528D40"},
     {0x67849C: "ResourceAssertFile0067849C"}, {}),
    ("game-server", "005735b2", 261,
     {0x573516: "Recovered00573516", 0x534A00: "Recovered00534A00"},
     {0x5CBCC4: "ResourceAssertFile005CBCC4"},
     {0x5E2208: "ResourceIAT005E2208"}),
    ("save-server", "0057fc92", 261,
     {0x57FBF6: "Recovered0057FBF6", 0x528D40: "Recovered00528D40"},
     {0x67849C: "ResourceAssertFile0067849C"},
     {0x68B7E4: "ResourceIAT0068B7E4"}),
    ("game-server", "005736b7", 377,
     {0x5735B2: "Recovered005735B2", 0x573516: "Recovered00573516"}, {}, {}),
    ("save-server", "0057fd97", 377,
     {0x57FC92: "Recovered0057FC92", 0x57FBF6: "Recovered0057FBF6"}, {}, {}),
)


def decode(component, address, size, calls, immediates, memory):
    start = int(address, 16)
    image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
    code = image[start - MEMORY_BASE : start - MEMORY_BASE + size]
    instructions = list(Cs(CS_ARCH_X86, CS_MODE_32).disasm(code, start))
    if sum(item.size for item in instructions) != size:
        raise RuntimeError(f"failed to decode all bytes at {component}:{address}")
    local_targets = {
        int(item.op_str, 16)
        for item in instructions
        if item.mnemonic.startswith("j") and item.op_str.startswith("0x")
        and start <= int(item.op_str, 16) < start + size
    }
    lines = []
    relocations = []
    referenced = set()
    for item in instructions:
        if item.address in local_targets:
            lines.append(f"loc_{item.address:08X}:")
        operand = item.op_str
        if item.mnemonic == "call" and operand.startswith("0x"):
            symbol = calls[int(operand, 16)]
            operand = symbol
            referenced.add(("function", symbol))
            relocations.append({"offset": item.address - start + 1, "symbol": f"_{symbol}"})
        elif item.mnemonic.startswith("j") and operand.startswith("0x"):
            target = int(operand, 16)
            if target in local_targets:
                operand = f"loc_{target:08X}"
        elif item.mnemonic == "push" and operand.startswith("0x") and int(operand, 16) in immediates:
            symbol = immediates[int(operand, 16)]
            operand = f"offset {symbol}"
            referenced.add(("data", symbol))
            relocations.append({"offset": item.address - start + 1, "symbol": f"_{symbol}", "kind": "absolute"})
        elif item.mnemonic == "call" and operand.startswith("dword ptr [0x"):
            target = int(operand[len("dword ptr ["):-1], 16)
            symbol = memory[target]
            operand = f"dword ptr [{symbol}]"
            referenced.add(("data", symbol))
            relocations.append({"offset": item.address - start + 2, "symbol": f"_{symbol}", "kind": "absolute"})
        if item.mnemonic == "int3":
            # VC6's inline assembler parses `int3` as an incomplete `int` when
            # a C label follows it. Emit the single-byte opcode explicitly.
            lines.append("    __asm _emit 0cch")
        else:
            lines.append(f"    __asm {item.mnemonic} {operand}".rstrip())
    return lines, relocations, sorted(referenced)


def render(address, lines, referenced):
    declarations = []
    for kind, symbol in referenced:
        if kind == "function":
            declarations.append(f'extern "C" void {symbol}();')
        else:
            declarations.append(f'extern "C" void *{symbol};')
    return (
        "\n".join(declarations) + "\n"
        "// Exact recovered resource-record lookup helper.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n'
        "{\n" + "\n".join(lines) + "\n}\n"
    )


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size, calls, immediates, memory in TARGETS:
        if (component, address) in existing:
            continue
        lines, relocations, referenced = decode(
            component, address, size, calls, immediates, memory
        )
        source = f"src/{component}/matches/RecoveredResourceLookup{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, lines, referenced), encoding="ascii")
        records.append({
            "component": component, "address": address, "size": size,
            "source": source, "symbol": f"_Recovered{address.upper()}",
            "flags": ["/Od", "/GX-"], "relocations": relocations,
        })
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
