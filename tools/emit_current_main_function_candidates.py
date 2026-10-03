"""Emit reviewable instruction-level candidates from the installed Main.dll capture."""
import argparse
import csv
import json
import re
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM, X86_OP_MEM, X86_REG_INVALID

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--address", action="append", required=True,
                        help="Ghidra function entry address (repeatable, hexadecimal)")
    parser.add_argument("--raw-extent", action="append", default=[],
                        help="emit a function's complete indexed byte extent literally when decoding is incomplete")
    args = parser.parse_args()

    rows = {row["address"].upper(): row for row in csv.DictReader(
        (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8"),
        delimiter="\t")}
    image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
    relocation_path = ROOT / "var/current-main-relocations.json"
    relocations_by_function = json.loads(relocation_path.read_text(encoding="utf-8"))
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True

    raw_extents = {f"{int(value, 16):08X}" for value in args.raw_extent}
    seen = set()
    for supplied in args.address:
        address = f"{int(supplied, 16):08X}"
        if address in seen:
            raise ValueError(f"Duplicate function address: {address}")
        seen.add(address)
        row = rows[address]
        start = int(address, 16)
        size = int(row["size"])
        code = image[start - BASE:start - BASE + size]
        instructions = list(decoder.disasm(code, start))
        fully_decoded = bool(instructions) and instructions[-1].address + instructions[-1].size == start + size
        if not fully_decoded and address not in raw_extents:
            raise ValueError(f"Ghidra extent is not fully decoded: {address}")

        source_name = row["name"]
        if source_name.startswith("`") and source_name.endswith("'"):
            source_name = source_name[1:-1]
        if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", source_name):
            raise ValueError(f"Function label is not a C identifier: {row['name']!r}")

        evidence = []
        lines = [
            "// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.",
            f"// Ghidra extent: 0x{start:08X} .. +0x{size:X} bytes.",
            f"// Source symbol alias: {source_name}.",
            f"extern \"C\" __declspec(naked) void {source_name}() {{",
            "    __asm {",
        ]
        if fully_decoded:
            for insn in instructions:
                lines.append(f"        // 0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}".rstrip())
                for byte in insn.bytes:
                    lines.append(f"        __asm _emit 0x{byte:02X}")

                for operand in insn.operands:
                    if (operand.type == X86_OP_IMM
                            and (insn.id == X86_INS_CALL or insn.group(CS_GRP_JUMP))):
                        if insn.size >= 5 and insn.encoding.imm_size == 4:
                            evidence.append({
                                "offset": insn.address - start + insn.encoding.imm_offset,
                                "target_address": f"{operand.imm & 0xFFFFFFFF:08X}",
                                "kind": "relative",
                            })
                    elif operand.type == X86_OP_MEM:
                        mem = operand.mem
                        if (mem.base == X86_REG_INVALID and mem.index == X86_REG_INVALID
                                and insn.encoding.disp_size == 4
                                and BASE <= mem.disp < BASE + len(image)):
                            evidence.append({
                                "offset": insn.address - start + insn.encoding.disp_offset,
                                "target_address": f"{mem.disp & 0xFFFFFFFF:08X}",
                                "kind": "absolute",
                            })
                    elif (operand.type == X86_OP_IMM and insn.encoding.imm_size == 4
                          and BASE <= operand.imm < BASE + len(image)):
                        evidence.append({
                            "offset": insn.address - start + insn.encoding.imm_offset,
                            "target_address": f"{operand.imm & 0xFFFFFFFF:08X}",
                            "kind": "immediate",
                        })
        else:
            lines.append(f"        // Raw indexed extent: 0x{start:08X} .. +0x{size:X}; decoding incomplete.")
            for byte in code:
                lines.append(f"        __asm _emit 0x{byte:02X}")

        lines.extend(["    }", "}", ""])
        source = ROOT / "src/client-current/Main" / f"{source_name}.cpp"
        source.write_text("\n".join(lines), encoding="utf-8", newline="\n")
        relocations_by_function[address] = evidence
        print(f"{address}: emitted {size} bytes, {len(evidence)} operand targets")

    relocation_path.write_text(json.dumps(relocations_by_function, indent=2) + "\n",
                                encoding="utf-8", newline="\n")


if __name__ == "__main__":
    main()
