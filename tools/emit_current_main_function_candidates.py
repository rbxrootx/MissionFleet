"""Emit reviewable instruction-level candidates from the installed Main.dll capture."""
import argparse
import csv
import json
import re
from collections import defaultdict
from pathlib import Path

import capstone
from capstone import CS_GRP_JUMP
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM, X86_OP_MEM, X86_REG_INVALID

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000


def load_exact_body_ranges(path):
    """Load complete, non-overlapping Ghidra body ranges from the exporter TSV."""
    ranges_by_function = defaultdict(list)
    with path.open(encoding="utf-8", newline="") as stream:
        for row in csv.DictReader(stream, delimiter="\t"):
            address = row["function"].upper()
            start = int(row["start"], 16)
            size = int(row["length"])
            instruction_bytes = int(row["instruction_bytes"])
            instruction_count = int(row["instruction_count"])
            if size <= 0 or instruction_bytes != size or instruction_count <= 0:
                raise ValueError(f"Ghidra range has incomplete instruction coverage: {address} {row}")
            ranges_by_function[address].append((start, size))
    for address, ranges in ranges_by_function.items():
        ranges.sort()
        previous_end = None
        for start, size in ranges:
            if previous_end is not None and start < previous_end:
                raise ValueError(f"Overlapping Ghidra body ranges for {address}")
            previous_end = start + size
    return dict(ranges_by_function)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--address", action="append", default=[],
                        help="Ghidra function entry address (repeatable, hexadecimal)")
    parser.add_argument("--raw-extent", action="append", default=[],
                        help="emit a function's complete indexed byte extent literally when decoding is incomplete")
    parser.add_argument("--segment", action="append", default=[], metavar="ADDRESS:SIZE",
                        help="emit one exact Ghidra body segment for the sole --address; repeat in address order")
    parser.add_argument("--ranges-tsv", type=Path,
                        help="emit all functions and exact body ranges from a Ghidra body-export TSV")
    args = parser.parse_args()

    if args.ranges_tsv and args.segment:
        parser.error("--ranges-tsv and --segment cannot be combined")
    ranges_by_function = {}
    if args.ranges_tsv:
        ranges_by_function = load_exact_body_ranges(args.ranges_tsv)
        manifest_addresses = set(ranges_by_function)
        requested_addresses = {f"{int(value, 16):08X}" for value in args.address}
        if args.address and requested_addresses != manifest_addresses:
            raise ValueError("--address set must exactly match functions in --ranges-tsv")
        if not manifest_addresses:
            parser.error("--ranges-tsv contains no functions")
        args.address = sorted(manifest_addresses)
    elif not args.address:
        parser.error("provide --address or --ranges-tsv")

    rows = {row["address"].upper(): row for row in csv.DictReader(
        (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8"),
        delimiter="\t")}
    image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
    relocation_path = ROOT / "var/current-main-relocations.json"
    relocations_by_function = json.loads(relocation_path.read_text(encoding="utf-8"))
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True

    raw_extents = {f"{int(value, 16):08X}" for value in args.raw_extent}
    segment_specs = []
    if args.segment:
        if len(args.address) != 1:
            parser.error("--segment requires exactly one --address")
        for value in args.segment:
            try:
                segment_address, segment_size = value.split(":", 1)
                segment_specs.append((int(segment_address, 16), int(segment_size, 0)))
            except (ValueError, TypeError):
                parser.error(f"invalid --segment {value!r}; expected ADDRESS:SIZE")
        previous_end = None
        for segment_start, segment_size in segment_specs:
            segment_end = segment_start + segment_size
            if (segment_size <= 0 or segment_start < BASE
                    or segment_end > BASE + len(image)
                    or (previous_end is not None and segment_start < previous_end)):
                parser.error("--segment ranges must be positive, ordered, non-overlapping, and inside Main.dll")
            previous_end = segment_end
    seen = set()
    for supplied in args.address:
        address = f"{int(supplied, 16):08X}"
        if address in seen:
            raise ValueError(f"Duplicate function address: {address}")
        seen.add(address)
        row = rows[address]
        start = int(address, 16)
        size = int(row["size"])
        source_name = row["name"]
        if source_name.startswith("`") and source_name.endswith("'"):
            source_name = source_name[1:-1]
        if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", source_name):
            raise ValueError(f"Function label is not a C identifier: {row['name']!r}")

        exact_segments = ranges_by_function.get(address, segment_specs)
        if exact_segments:
            # A reachable basic block can precede the entry address in memory
            # when the function jumps backward into shared/out-of-order code.
            # Keep every Ghidra range, but require the actual entry to be one
            # of those ranges so the emitted body still anchors the right function.
            if start not in {segment_start for segment_start, _ in exact_segments}:
                raise ValueError(f"No exact body segment starts at function entry {address}")
            if sum(segment_size for _, segment_size in exact_segments) != size:
                raise ValueError(f"Segment byte total does not match indexed extent for {address}")
            segments = []
            lines = [
                "// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.",
                f"// Ghidra body size: {size} bytes in {len(exact_segments)} exact ranges.",
                f"// Source symbol alias: {source_name}.",
            ]
            for index, (segment_start, segment_size) in enumerate(exact_segments):
                segment_address = f"{segment_start:08X}"
                segment_end = segment_start + segment_size
                code = image[segment_start - BASE:segment_end - BASE]
                instructions = list(decoder.disasm(code, segment_start))
                fully_decoded = bool(instructions) and instructions[-1].address + instructions[-1].size == segment_end
                if not fully_decoded:
                    raise ValueError(f"Ghidra body segment is not fully decoded: {segment_address} +0x{segment_size:X}")
                segment_name = f"{source_name}_segment_{index:02d}"
                segment_relocations = []
                lines.extend([
                    "",
                    f"// Ghidra body range 0x{segment_start:08X}..0x{segment_end:08X}; {segment_size} mapped bytes.",
                    f'extern "C" __declspec(naked) void {segment_name}() {{',
                    "    __asm {",
                ])
                for insn in instructions:
                    lines.append(f"        // 0x{insn.address:08X}: {insn.mnemonic} {insn.op_str}".rstrip())
                    for byte in insn.bytes:
                        lines.append(f"        __asm _emit 0x{byte:02X}")
                    for operand in insn.operands:
                        if (operand.type == X86_OP_IMM
                                and (insn.id == X86_INS_CALL or insn.group(CS_GRP_JUMP))):
                            if insn.size >= 5 and insn.encoding.imm_size == 4:
                                segment_relocations.append({
                                    "offset": insn.address - segment_start + insn.encoding.imm_offset,
                                    "target_address": f"{operand.imm & 0xFFFFFFFF:08X}",
                                    "kind": "relative",
                                })
                        elif operand.type == X86_OP_MEM:
                            mem = operand.mem
                            if (mem.base == X86_REG_INVALID and mem.index == X86_REG_INVALID
                                    and insn.encoding.disp_size == 4
                                    and BASE <= mem.disp < BASE + len(image)):
                                segment_relocations.append({
                                    "offset": insn.address - segment_start + insn.encoding.disp_offset,
                                    "target_address": f"{mem.disp & 0xFFFFFFFF:08X}",
                                    "kind": "absolute",
                                })
                        elif (operand.type == X86_OP_IMM and insn.encoding.imm_size == 4
                              and BASE <= operand.imm < BASE + len(image)):
                            segment_relocations.append({
                                "offset": insn.address - segment_start + insn.encoding.imm_offset,
                                "target_address": f"{operand.imm & 0xFFFFFFFF:08X}",
                                "kind": "immediate",
                            })
                lines.extend(["    }", "}"])
                segments.append({
                    "address": segment_address,
                    "size": segment_size,
                    "symbol": f"_{segment_name}",
                    "relocations": segment_relocations,
                })
            source = ROOT / "src/client-current/Main" / f"{source_name}.cpp"
            source.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
            relocations_by_function[address] = {"size": size, "segments": segments}
            print(f"{address}: emitted {size} bytes in {len(segments)} exact body ranges")
            continue

        code = image[start - BASE:start - BASE + size]
        instructions = list(decoder.disasm(code, start))
        fully_decoded = bool(instructions) and instructions[-1].address + instructions[-1].size == start + size
        if not fully_decoded and address not in raw_extents:
            raise ValueError(f"Ghidra extent is not fully decoded: {address}")

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
