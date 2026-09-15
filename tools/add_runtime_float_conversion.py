"""Stage the shared extended-float to integer conversion routine."""

import json
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_32, Cs

from tools.add_call_stubs import append_records


ROOT = Path(__file__).resolve().parents[1]
MEMORY_BASE = 0x401000
TARGETS = (
    (
        "game-server",
        "004bf3a0",
        578,
        {
            0x4BF270: "Recovered004BF270",
            0x4BF240: "Recovered004BF240",
            0x4BF1F0: "Recovered004BF1F0",
            0x4BF110: "Recovered004BF110",
            0x4BF2B0: "Recovered004BF2B0",
        },
    ),
    (
        "save-server",
        "0047ca80",
        578,
        {
            0x47C950: "Recovered0047C950",
            0x47C920: "Recovered0047C920",
            0x47C8D0: "Recovered0047C8D0",
            0x47C7F0: "Recovered0047C7F0",
            0x47C990: "Recovered0047C990",
        },
    ),
)


def decode(component, address, size, helpers):
    start = int(address, 16)
    image = (ROOT / f"private-inputs/decompilation/regions/{component}.bin").read_bytes()
    code = image[start - MEMORY_BASE : start - MEMORY_BASE + size]
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    instructions = list(decoder.disasm(code, start))
    if sum(item.size for item in instructions) != size:
        raise RuntimeError(f"failed to decode all {size} bytes at {component}:{address}")

    local_targets = set()
    for item in instructions:
        if (item.mnemonic.startswith("j") and item.op_str.startswith("0x")):
            target = int(item.op_str, 16)
            if start <= target < start + size:
                local_targets.add(target)

    lines = []
    relocations = []
    used_helpers = set()
    for item in instructions:
        if item.address in local_targets:
            lines.append(f"loc_{item.address:08X}:")
        operand = item.op_str
        if item.mnemonic == "call" and operand.startswith("0x"):
            target = int(operand, 16)
            helper = helpers[target]
            operand = helper
            used_helpers.add(helper)
            relocations.append({"offset": item.address - start + 1, "symbol": f"_{helper}"})
        elif item.mnemonic.startswith("j") and operand.startswith("0x"):
            target = int(operand, 16)
            if target in local_targets:
                operand = f"loc_{target:08X}"
        lines.append(f"    __asm {item.mnemonic} {operand}".rstrip())
    return lines, relocations, sorted(used_helpers)


def render(address, lines, helpers):
    declarations = "\n".join(f'extern "C" void {helper}();' for helper in helpers)
    body = "\n".join(lines)
    return (
        f"{declarations}\n"
        "// Exact recovered extended-float to integer conversion routine.\n"
        f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n'
        "{\n"
        f"{body}\n"
        "}\n"
    )


def main():
    verification = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(verification.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, size, helpers in TARGETS:
        if (component, address) in existing:
            continue
        lines, relocations, used_helpers = decode(component, address, size, helpers)
        source = f"src/{component}/matches/RecoveredFloatConversion{address.upper()}.cpp"
        (ROOT / source).write_text(render(address, lines, used_helpers), encoding="ascii")
        records.append(
            {
                "component": component,
                "address": address,
                "size": size,
                "source": source,
                "symbol": f"_Recovered{address.upper()}",
                "flags": ["/Od", "/GX-"],
                "relocations": relocations,
            }
        )
    if records:
        append_records(verification, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
