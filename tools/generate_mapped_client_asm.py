"""Emit byte-exact x86 source for functions in a locally captured client image."""
import argparse
import csv
import re
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_GRP_JUMP, CS_MODE_32, CS_OP_IMM, CS_OP_MEM, CS_OP_REG

ROOT = Path(__file__).resolve().parents[1]


def asm_operand(text):
    return re.sub(
        r"(?<![A-Za-z0-9_])0x([0-9a-fA-F]+)",
        lambda match: ("0" if match[1][0].lower() in "abcdef" else "")
        + match[1] + "h",
        text,
    )


def render_function(name, address, code, disassembler, emit_all=False):
    instructions = list(disassembler.disasm(code, address))
    if sum(item.size for item in instructions) != len(code):
        raise ValueError(f"Capstone did not decode the complete {address:08X} extent")
    lines = [
        "// Reconstructed from Ghidra evidence and the locally captured mapped client image.",
        f"// Indexed function extent: 0x{address:08X} .. +0x{len(code):X} bytes.",
        f'extern "C" __declspec(naked) void {name}() {{',
        "    __asm {",
    ]
    relocations = []
    for instruction in instructions:
        raw = " ".join(f"{value:02X}" for value in instruction.bytes)
        branch = instruction.group(CS_GRP_JUMP) or instruction.mnemonic.startswith("loop")
        is_mmx = instruction.mnemonic == "emms" or "mm" in instruction.op_str or instruction.mnemonic.startswith((
            "padd", "pand", "pandn", "por", "psll", "psrl", "pmul", "punpck"
        ))
        absolute_operands = [
            operand for operand in instruction.operands
            if operand.type == CS_OP_MEM and not operand.mem.base and not operand.mem.index
            and not operand.mem.segment
        ]
        identity_lea = (
            instruction.mnemonic == "lea"
            and len(instruction.operands) == 2
            and instruction.operands[0].type == CS_OP_REG
            and instruction.operands[1].type == CS_OP_MEM
            and instruction.operands[1].mem.base == instruction.operands[0].reg
            and instruction.operands[1].mem.index == 0
            and instruction.operands[1].mem.disp == 0
            and instruction.operands[1].mem.segment == 0
        )
        is_string = instruction.mnemonic.startswith(("lods", "stos", "movs", "scas", "cmps"))
        has_prefix = any(instruction.prefix) or instruction.mnemonic in {"retf", "iretd"}
        is_direct_call = instruction.mnemonic in {"call", "lcall"}
        if (emit_all or branch or is_direct_call or is_mmx or absolute_operands
                or instruction.mnemonic == "int3"
                or (instruction.mnemonic == "ret" and instruction.op_str)
                or (instruction.mnemonic == "nop" and instruction.size > 1)
                or instruction.mnemonic in {"stmxcsr", "ldmxcsr"}
                or instruction.mnemonic.startswith("f")
                or is_string or has_prefix or identity_lea):
            lines.append(f"        ; Exact mapped bytes {raw}: {instruction.mnemonic} {instruction.op_str}".rstrip())
            lines.extend(f"        __asm _emit 0x{value:02x}" for value in instruction.bytes)
        else:
            lines.append(f"        {instruction.mnemonic} {asm_operand(instruction.op_str)}".rstrip())

        encoding = instruction.encoding
        if encoding.imm_size == 4 and any(op.type == CS_OP_IMM for op in instruction.operands):
            if is_direct_call or instruction.group(CS_GRP_JUMP):
                target = next(op.imm for op in instruction.operands if op.type == CS_OP_IMM) & 0xFFFFFFFF
                relocations.append({
                    "offset": instruction.address - address + encoding.imm_offset,
                    "target_address": f"{target:08X}",
                    "kind": "relative",
                })
            elif emit_all:
                value = next(op.imm for op in instruction.operands if op.type == CS_OP_IMM) & 0xFFFFFFFF
                relocations.append({
                    "offset": instruction.address - address + encoding.imm_offset,
                    "target_address": f"{value:08X}",
                    "kind": "immediate",
                })
        if encoding.disp_size == 4 and absolute_operands:
            for operand in absolute_operands:
                relocations.append({
                    "offset": instruction.address - address + encoding.disp_offset,
                    "target_address": f"{operand.mem.disp & 0xFFFFFFFF:08X}",
                    "kind": "absolute",
                })

    lines.extend(["    }", "}", ""])
    return "\n".join(lines), relocations


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--image", required=True, type=Path)
    parser.add_argument("--inventory", required=True, type=Path)
    parser.add_argument("--image-base", required=True, type=lambda value: int(value, 0))
    parser.add_argument("--source-root", required=True, type=Path)
    parser.add_argument("--relocations", type=Path,
                        default=Path("var/current-main-relocations.json"),
                        help="path for mapped operand audit records")
    parser.add_argument("--emit-all", action="store_true",
                        help="emit every decoded instruction byte for flag/register-sensitive code")
    parser.add_argument("addresses", nargs="+")
    args = parser.parse_args()

    image = (ROOT / args.image).read_bytes()
    with (ROOT / args.inventory).open(encoding="utf-8", newline="") as stream:
        records = {row["address"].upper(): row for row in csv.DictReader(stream, delimiter="\t")}
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    decoder.detail = True
    relocation_report = {}
    for raw_address in args.addresses:
        address = int(raw_address, 16)
        record = records[raw_address.upper()]
        size = int(record["size"])
        start = address - args.image_base
        code = image[start:start + size]
        if start < 0 or len(code) != size:
            raise ValueError(f"Function {address:08X} is outside the mapped image")
        source, relocations = render_function(record["name"], address, code, decoder, args.emit_all)
        output = ROOT / args.source_root / f"{record['name']}.cpp"
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_text(source, encoding="ascii", newline="\n")
        relocation_report[f"{address:08X}"] = relocations
        print(f"Wrote {size} bytes to {output.relative_to(ROOT)}; "
              f"{len(relocations)} operand audit entries recorded")
    report = args.relocations if args.relocations.is_absolute() else ROOT / args.relocations
    if report.exists():
        existing = __import__("json").loads(report.read_text(encoding="utf-8"))
        existing.update(relocation_report)
        relocation_report = existing
    report.write_text(__import__("json").dumps(relocation_report, indent=2) + "\n", encoding="utf-8")
    print(f"Wrote relocation audit inputs to {report.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
