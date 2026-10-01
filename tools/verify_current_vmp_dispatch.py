"""Validate a local VM-dispatch trace against the hash-pinned Main.dll capture."""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path
from capstone import CS_ARCH_X86, CS_GRP_CALL, CS_GRP_JUMP, CS_MODE_32, CS_OP_IMM, Cs
from capstone.x86_const import X86_INS_JMP

ROOT = Path(__file__).resolve().parents[1]
EXPECTED_MAIN_SHA256 = "74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd"
EXPECTED_MAPPED_SHA256 = "e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831"
DISPATCHER_RVA = 0x00554F0B


def fields(text):
    result = {}
    for line in text.splitlines():
        if "=" in line:
            key, value = line.split("=", 1)
            result[key] = value
    return result


def number(record, key):
    return int(record[key], 16)


def bytes_field(record, key):
    value = record[key].strip()
    return bytes.fromhex(value) if value else b""


def check_trace(path, mapped, base, vmp1):
    text = path.read_text(encoding="ascii")
    record = fields(text)
    if record.get("main_sha256") != EXPECTED_MAIN_SHA256:
        raise ValueError(f"{path}: trace is not tied to the installed Main.dll hash")
    if number(record, "module_base") != base:
        raise ValueError(f"{path}: loaded image base differs from the capture")
    if number(record, "dispatcher") != base + DISPATCHER_RVA:
        raise ValueError(f"{path}: dispatcher address does not match its pinned RVA")
    count = int(record["dispatch_count"])
    if count < 1:
        raise ValueError(f"{path}: trace contains no dispatches")

    handlers = []
    stream_cursors = []
    for index in range(count):
        prefix = f"dispatch[{index}]."
        if number(record, prefix + "after_eip") != number(record, prefix + "before_esi"):
            raise ValueError(f"{path}: dispatch {index} did not land at its ESI target")
        handler = number(record, prefix + "before_esi")
        cursor = number(record, prefix + "before_ebp")
        if not vmp1[0] <= handler < vmp1[1]:
            raise ValueError(f"{path}: dispatch {index} target is outside .vmp1")
        if not vmp1[0] <= cursor < vmp1[1]:
            raise ValueError(f"{path}: dispatch {index} stream cursor is outside .vmp1")
        target_code = bytes_field(record, prefix + "target_bytes")
        stream_code = bytes_field(record, prefix + "stream_bytes")
        if not target_code or mapped[handler - base:handler - base + len(target_code)] != target_code:
            raise ValueError(f"{path}: dispatch {index} handler sample differs from mapped capture")
        if not stream_code or mapped[cursor - base:cursor - base + len(stream_code)] != stream_code:
            raise ValueError(f"{path}: dispatch {index} stream sample differs from mapped capture")
        handlers.append(handler)
        stream_cursors.append(cursor)

    step_ips = [int(value, 16) for _, value in re.findall(
        r"^step_ip\[(\d+)\]=0x([0-9A-F]+)$", text, re.MULTILINE)]
    step_bytes = [bytes.fromhex(value.strip()) for _, value in re.findall(
        r"^step_bytes\[(\d+)\]=(.*)$", text, re.MULTILINE)]
    if step_ips and len(step_ips) != len(step_bytes):
        raise ValueError(f"{path}: each executed address must have a live opcode sample")
    for ip, code in zip(step_ips, step_bytes):
        if not base <= ip < base + len(mapped):
            raise ValueError(f"{path}: executed IP 0x{ip:08X} lies outside Main.dll")
        if not code or mapped[ip - base:ip - base + len(code)] != code:
            raise ValueError(f"{path}: live opcode sample at 0x{ip:08X} differs from mapped capture")
    return {
        "count": count,
        "handlers": handlers,
        "cursors": stream_cursors,
        "step_ips": step_ips,
        "record": record,
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--dispatch-trace", type=Path,
                        default=Path("var/current-vmp-runtime-dispatch.txt"))
    parser.add_argument("--instruction-trace", type=Path,
                        default=Path("var/current-vmp-first-handler-trace.txt"))
    parser.add_argument("--extended-trace", type=Path,
                        help="three-dispatch single-step trace covering the second handler")
    parser.add_argument("--repeat-extended-trace", type=Path,
                        help="independent rerun required with --extended-trace")
    parser.add_argument("--four-dispatch-trace", type=Path,
                        help="four-dispatch trace covering the third startup handler")
    parser.add_argument("--repeat-four-dispatch-trace", type=Path,
                        help="independent rerun required with --four-dispatch-trace")
    parser.add_argument("--five-dispatch-trace", type=Path,
                        help="five-dispatch trace covering the fourth startup handler")
    parser.add_argument("--repeat-five-dispatch-trace", type=Path,
                        help="independent rerun required with --five-dispatch-trace")
    parser.add_argument("--six-dispatch-trace", type=Path,
                        help="six-dispatch trace covering the fifth startup handler")
    parser.add_argument("--repeat-six-dispatch-trace", type=Path,
                        help="independent rerun required with --six-dispatch-trace")
    args = parser.parse_args()

    manifest = json.loads((ROOT / "reports/unpacked-current-main/manifest.json").read_text())
    module = next(item for item in manifest["modules"] if item["name"] == "Main.dll")
    if module["original_sha256"] != EXPECTED_MAIN_SHA256:
        raise ValueError("manifest Main.dll hash differs from this trace profile")
    image_path = ROOT / module["mapped_image"]
    mapped = image_path.read_bytes()
    mapped_sha = hashlib.sha256(mapped).hexdigest()
    if mapped_sha != EXPECTED_MAPPED_SHA256:
        raise ValueError(f"mapped capture hash mismatch: {mapped_sha}")
    base = int(module["loaded_image_base"])
    vmp1_section = next(section for section in module["sections"] if section["name"] == ".vmp1")
    vmp1_start = base + int(vmp1_section["virtual_address"])
    vmp1 = (vmp1_start, vmp1_start + int(vmp1_section["virtual_size"]))

    first = check_trace(ROOT / args.dispatch_trace, mapped, base, vmp1)
    path_trace = check_trace(ROOT / args.instruction_trace, mapped, base, vmp1)
    if len(first["handlers"]) < 2 or len(path_trace["handlers"]) != 2:
        raise ValueError("expected the 16-dispatch sample and a two-dispatch instruction trace")
    if first["handlers"][:2] != path_trace["handlers"]:
        raise ValueError("instruction-traced run did not reproduce the first two handler targets")
    if first["cursors"][:2] != path_trace["cursors"]:
        raise ValueError("instruction-traced run did not reproduce the first two stream cursors")
    if len(path_trace["step_ips"]) != 59:
        raise ValueError(f"expected 59 single-step instruction addresses, got {len(path_trace['step_ips'])}")
    dispatcher = base + DISPATCHER_RVA
    try:
        branch_index = path_trace["step_ips"].index(base + 0x0085160D)
    except ValueError as exc:
        raise ValueError("instruction trace did not reach the recorded conditional VM dispatch") from exc
    if path_trace["step_ips"][branch_index + 1] != dispatcher:
        raise ValueError("observed conditional branch did not enter the JMP ESI dispatcher")

    print(f"verified {first['count']} runtime JMP ESI dispatches / {len(set(first['handlers']))} unique targets")
    print(f"verified {len(path_trace['step_ips'])} executed instruction addresses against mapped capture {mapped_sha}")
    print("verified first two handler targets and VM stream cursors reproduce across both isolated runs")

    if bool(args.extended_trace) != bool(args.repeat_extended_trace):
        raise ValueError("provide both --extended-trace and --repeat-extended-trace")
    if args.extended_trace:
        extended = check_trace(ROOT / args.extended_trace, mapped, base, vmp1)
        repeated = check_trace(ROOT / args.repeat_extended_trace, mapped, base, vmp1)
        expected_handlers = [0x58BD01ED, 0x58BEB131, 0x58DAFF71]
        if extended["handlers"] != expected_handlers or repeated["handlers"] != expected_handlers:
            raise ValueError("extended trace did not reproduce the first three handler targets")
        if extended["cursors"] != repeated["cursors"]:
            raise ValueError("extended trace stream cursors were not repeatable")
        if extended["step_ips"] != repeated["step_ips"]:
            raise ValueError("extended instruction addresses were not repeatable")
        first_steps = [bytes_field(extended["record"], f"step_bytes[{i}]")
                       for i in range(len(extended["step_ips"]))]
        repeat_steps = [bytes_field(repeated["record"], f"step_bytes[{i}]")
                        for i in range(len(repeated["step_ips"]))]
        if first_steps != repeat_steps:
            raise ValueError("extended live instruction bytes differed between runs")
        try:
            block_start = extended["step_ips"].index(0x58BEB131)
        except ValueError as exc:
            raise ValueError("extended trace did not execute the second handler") from exc
        if extended["step_ips"][block_start:block_start + 3] != [
                0x58BEB131, 0x58BEB135, 0x58BCA099]:
            raise ValueError("second handler's MOV/JMP path differed from the trace evidence")
        block = mapped[0x58BEB131 - base:0x58BEB13A - base]
        if len(block) != 9 or block != first_steps[block_start][:4] + first_steps[block_start + 1][:5]:
            raise ValueError("second handler's live instructions differ from mapped block bytes")
        relative = struct.unpack_from("<i", block, 5)[0]
        if (0x58BEB13A + relative) & 0xFFFFFFFF != 0x58BCA099:
            raise ValueError("second handler's direct JMP does not resolve to the traced destination")
        print("verified repeated three-dispatch trace and 9-byte second-handler block to 0x58BCA099")

    if bool(args.four_dispatch_trace) != bool(args.repeat_four_dispatch_trace):
        raise ValueError("provide both --four-dispatch-trace and --repeat-four-dispatch-trace")
    if args.four_dispatch_trace:
        fourth = check_trace(ROOT / args.four_dispatch_trace, mapped, base, vmp1)
        repeat_fourth = check_trace(ROOT / args.repeat_four_dispatch_trace, mapped, base, vmp1)
        expected_handlers = [0x58BD01ED, 0x58BEB131, 0x58DAFF71, 0x58C85B6B]
        if fourth["handlers"] != expected_handlers or repeat_fourth["handlers"] != expected_handlers:
            raise ValueError("four-dispatch trace did not reproduce the first four handler targets")
        if fourth["cursors"] != repeat_fourth["cursors"]:
            raise ValueError("four-dispatch trace stream cursors were not repeatable")
        if fourth["step_ips"] != repeat_fourth["step_ips"]:
            raise ValueError("four-dispatch instruction addresses were not repeatable")
        step_codes = [bytes_field(fourth["record"], f"step_bytes[{i}]")
                      for i in range(len(fourth["step_ips"]))]
        repeat_codes = [bytes_field(repeat_fourth["record"], f"step_bytes[{i}]")
                        for i in range(len(repeat_fourth["step_ips"]))]
        if step_codes != repeat_codes:
            raise ValueError("four-dispatch live instruction bytes differed between runs")
        try:
            block_start = fourth["step_ips"].index(0x58DAFF71)
        except ValueError as exc:
            raise ValueError("four-dispatch trace did not execute the third handler") from exc
        expected_path = [0x58DAFF71, 0x58DAFF75, 0x58DAFF7B, 0x58D5FED9]
        if fourth["step_ips"][block_start:block_start + len(expected_path)] != expected_path:
            raise ValueError("third handler's MOV/ADD/JMP path differed from trace evidence")
        block = mapped[0x58DAFF71 - base:0x58DAFF80 - base]
        live = step_codes[block_start][:4] + step_codes[block_start + 1][:6] + step_codes[block_start + 2][:5]
        if len(block) != 15 or block != live:
            raise ValueError("third handler live instruction bytes differ from the mapped block")
        relative = struct.unpack_from("<i", block, 11)[0]
        if (0x58DAFF80 + relative) & 0xFFFFFFFF != 0x58D5FED9:
            raise ValueError("third handler direct JMP does not resolve to traced 0x58D5FED9")
        print("verified repeated four-dispatch trace and 15-byte third-handler block to 0x58D5FED9")

    if bool(args.five_dispatch_trace) != bool(args.repeat_five_dispatch_trace):
        raise ValueError("provide both --five-dispatch-trace and --repeat-five-dispatch-trace")
    if args.five_dispatch_trace:
        fifth = check_trace(ROOT / args.five_dispatch_trace, mapped, base, vmp1)
        repeat_fifth = check_trace(ROOT / args.repeat_five_dispatch_trace, mapped, base, vmp1)
        expected_handlers = [0x58BD01ED, 0x58BEB131, 0x58DAFF71, 0x58C85B6B, 0x58C0E4F5]
        if fifth["handlers"] != expected_handlers or repeat_fifth["handlers"] != expected_handlers:
            raise ValueError("five-dispatch trace did not reproduce the first five handler targets")
        if fifth["cursors"] != repeat_fifth["cursors"]:
            raise ValueError("five-dispatch trace stream cursors were not repeatable")
        if fifth["step_ips"] != repeat_fifth["step_ips"]:
            raise ValueError("five-dispatch instruction addresses were not repeatable")
        code_samples = [bytes_field(fifth["record"], f"step_bytes[{i}]")
                        for i in range(len(fifth["step_ips"]))]
        repeat_samples = [bytes_field(repeat_fifth["record"], f"step_bytes[{i}]")
                          for i in range(len(repeat_fifth["step_ips"]))]
        if code_samples != repeat_samples:
            raise ValueError("five-dispatch live instruction bytes differed between runs")
        try:
            block_start_index = fifth["step_ips"].index(0x58C85B6B)
        except ValueError as exc:
            raise ValueError("five-dispatch trace did not execute handler 0x58C85B6B") from exc
        block_start = 0x58C85B6B
        block_end = 0x58C85BFE
        block = mapped[block_start - base:block_end - base]
        decoder = Cs(CS_ARCH_X86, CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(block, block_start))
        if sum(item.size for item in instructions) != len(block):
            raise ValueError("Capstone could not decode the full traced 0x58C85B6B block")
        trace_block_ips = fifth["step_ips"][block_start_index:block_start_index + len(instructions)]
        decoded_ips = [item.address for item in instructions]
        if trace_block_ips != decoded_ips:
            raise ValueError("handler 0x58C85B6B execution did not follow the full linear block")
        if not instructions or instructions[-1].id != X86_INS_JMP:
            raise ValueError("handler 0x58C85B6B block does not end in a direct JMP")
        if any(item.group(CS_GRP_JUMP) or item.group(CS_GRP_CALL)
               for item in instructions[:-1]):
            raise ValueError("handler 0x58C85B6B contains an earlier control-flow transfer")
        destination = next((operand.imm for operand in instructions[-1].operands
                            if operand.type == CS_OP_IMM), None)
        if destination != 0x58C9884B:
            raise ValueError("handler 0x58C85B6B terminal JMP does not target 0x58C9884B")
        if fifth["step_ips"][block_start_index + len(instructions)] != destination:
            raise ValueError("runtime next IP differs from handler 0x58C85B6B terminal JMP")
        print(f"verified repeated five-dispatch trace and {len(block)}-byte fourth-handler block "
              f"to 0x{destination:08X} ({len(instructions)} sequential instructions)")

    if bool(args.six_dispatch_trace) != bool(args.repeat_six_dispatch_trace):
        raise ValueError("provide both --six-dispatch-trace and --repeat-six-dispatch-trace")
    if args.six_dispatch_trace:
        sixth = check_trace(ROOT / args.six_dispatch_trace, mapped, base, vmp1)
        repeat_sixth = check_trace(ROOT / args.repeat_six_dispatch_trace, mapped, base, vmp1)
        expected_handlers = [
            0x58BD01ED, 0x58BEB131, 0x58DAFF71,
            0x58C85B6B, 0x58C0E4F5, 0x58BDEB98,
        ]
        if sixth["handlers"] != expected_handlers or repeat_sixth["handlers"] != expected_handlers:
            raise ValueError("six-dispatch trace did not reproduce the first six handler targets")
        if sixth["cursors"] != repeat_sixth["cursors"]:
            raise ValueError("six-dispatch trace stream cursors were not repeatable")
        if sixth["step_ips"] != repeat_sixth["step_ips"]:
            raise ValueError("six-dispatch instruction addresses were not repeatable")
        code_samples = [bytes_field(sixth["record"], f"step_bytes[{i}]")
                        for i in range(len(sixth["step_ips"]))]
        repeat_samples = [bytes_field(repeat_sixth["record"], f"step_bytes[{i}]")
                          for i in range(len(repeat_sixth["step_ips"]))]
        if code_samples != repeat_samples:
            raise ValueError("six-dispatch live instruction bytes differed between runs")
        try:
            block_start_index = sixth["step_ips"].index(0x58C0E4F5)
        except ValueError as exc:
            raise ValueError("six-dispatch trace did not execute handler 0x58C0E4F5") from exc
        block_start = 0x58C0E4F5
        block_end = 0x58C0E53A
        block = mapped[block_start - base:block_end - base]
        decoder = Cs(CS_ARCH_X86, CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(block, block_start))
        if sum(item.size for item in instructions) != len(block):
            raise ValueError("Capstone could not decode the full traced 0x58C0E4F5 block")
        trace_block_ips = sixth["step_ips"][block_start_index:block_start_index + len(instructions)]
        if trace_block_ips != [item.address for item in instructions]:
            raise ValueError("handler 0x58C0E4F5 did not follow the decoded linear block")
        if not instructions or instructions[-1].id != X86_INS_JMP:
            raise ValueError("handler 0x58C0E4F5 block does not end in a direct JMP")
        if any(item.group(CS_GRP_JUMP) or item.group(CS_GRP_CALL)
               for item in instructions[:-1]):
            raise ValueError("handler 0x58C0E4F5 contains an earlier control-flow transfer")
        destination = next((operand.imm for operand in instructions[-1].operands
                            if operand.type == CS_OP_IMM), None)
        if destination != 0x58D8AF3E:
            raise ValueError("handler 0x58C0E4F5 terminal JMP does not target 0x58D8AF3E")
        if sixth["step_ips"][block_start_index + len(instructions)] != destination:
            raise ValueError("runtime next IP differs from handler 0x58C0E4F5 terminal JMP")
        print(f"verified repeated six-dispatch trace and {len(block)}-byte fifth-handler block "
              f"to 0x{destination:08X} ({len(instructions)} sequential instructions)")


if __name__ == "__main__":
    main()
