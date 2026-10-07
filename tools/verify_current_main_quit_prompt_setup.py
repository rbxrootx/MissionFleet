"""Verify the quit-prompt setup helper against mapped Main.dll and Ghidra."""
import csv
import json
from pathlib import Path

import capstone
from capstone.x86_const import X86_INS_CALL, X86_OP_IMM, X86_OP_MEM, X86_OP_REG

try:
    from .build_current_main_verifications import MAIN_QUIT_PROMPT_SETUP_ADDRESSES
except ImportError:  # Also support direct execution as a tools/ script.
    from build_current_main_verifications import MAIN_QUIT_PROMPT_SETUP_ADDRESSES


ROOT = Path(__file__).resolve().parents[1]
BASE = 0x58730000
IMAGE_PATH = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
INVENTORY_PATH = ROOT / "config/NF2_2026/client-functions.tsv"
CATALOG_PATH = ROOT / "config/NF2_2026/client-verifications.json"
RANGE_PATH = ROOT / "config/NF2_2026/current-main-quit-prompt-setup-body-ranges.tsv"
MARKER = "objdiff-3.8.0-byte-identical"

ROOT_ADDRESS = 0x5876B9F0
EXPECTED_DIRECT_CALLS = (
    (0x5876B9FB, 0x5875F360),
    (0x5876BA08, 0x5875F360),
    (0x5876BA15, 0x5875F360),
    (0x5876BA30, 0x58762A60),
    (0x5876BA4B, 0x58903290),
    (0x5876BA69, 0x58903290),
    (0x5876BA88, 0x58903290),
    (0x5876BA93, 0x58762B60),
    (0x5876BA9E, 0x58762B60),
    (0x5876BAA9, 0x58762B60),
    (0x5876BACD, 0x587645F0),
)
EXPECTED_INDIRECT_CALLS = (
    (0x5876BAC1, "memory", 0x5898C030),
    (0x5876BAE0, "register", "edx"),
)
EXPECTED_CALLERS = (
    (0x587D51D0, 0x587D59D4, ROOT_ADDRESS),
    (0x587DEB30, 0x587DEDEE, ROOT_ADDRESS),
)
EXPECTED_UNVERIFIED_CALLER = (0x58894B40, 0x58894BA8, ROOT_ADDRESS)
PROMPT_KEY = b"MESSAGESTRING__ARE_YOU_SURE_TO_QUIT\0"
PROMPT_KEY_ADDRESS = 0x58995AD4


def read_tsv(path):
    with path.open(encoding="utf-8", newline="") as stream:
        return list(csv.DictReader(stream, delimiter="\t"))


def record_ranges(record):
    if record.get("segments"):
        return tuple(
            (int(segment["address"], 16), int(segment["size"]))
            for segment in record["segments"]
        )
    return ((int(record["address"], 16), int(record["size"])),)


def require_direct_call(image, decoder, site, target):
    code = image[site - BASE:site - BASE + 8]
    instruction = next(decoder.disasm(code, site), None)
    if (
        instruction is None
        or instruction.id != X86_INS_CALL
        or not instruction.operands
        or instruction.operands[0].type != X86_OP_IMM
        or (instruction.operands[0].imm & 0xFFFFFFFF) != target
    ):
        raise AssertionError(f"Expected matched direct call {site:08X}->{target:08X}")


def main():
    if MAIN_QUIT_PROMPT_SETUP_ADDRESSES != ("5876B9F0",):
        raise AssertionError("The quit-prompt setup address set changed")

    ranges = read_tsv(RANGE_PATH)
    expected_range = {
        "function": "5876b9f0",
        "start": "5876b9f0",
        "length": "246",
        "instruction_bytes": "246",
        "instruction_count": "68",
    }
    if ranges != [expected_range]:
        raise AssertionError(f"Unexpected fresh Ghidra body range: {ranges}")

    with INVENTORY_PATH.open(encoding="utf-8", newline="") as stream:
        inventory = {
            int(row["address"], 16): row
            for row in csv.DictReader(stream, delimiter="\t")
            if row["component"] == "client-main-current"
        }
    catalog = json.loads(CATALOG_PATH.read_text(encoding="utf-8"))
    records = {int(item["address"], 16): item for item in catalog["matches"]}
    matched = {
        address for address, record in records.items()
        if record.get("verified_by") == MARKER
    }
    if ROOT_ADDRESS not in matched:
        raise AssertionError("The quit-prompt helper is not byte-verified")
    root_row = inventory.get(ROOT_ADDRESS)
    root_record = records.get(ROOT_ADDRESS)
    if root_row is None or root_record is None:
        raise AssertionError("The helper is missing from inventory or verification catalog")
    if (
        int(root_row["size"]) != 246
        or int(root_record["size"]) != 246
        or record_ranges(root_record) != ((ROOT_ADDRESS, 246),)
    ):
        raise AssertionError("The verified extent differs from the Ghidra body range")

    image = IMAGE_PATH.read_bytes()
    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    decoder.detail = True
    code = image[ROOT_ADDRESS - BASE:ROOT_ADDRESS - BASE + 246]
    instructions = list(decoder.disasm(code, ROOT_ADDRESS))
    if (
        len(code) != 246
        or len(instructions) != 68
        or sum(instruction.size for instruction in instructions) != 246
        or not instructions
        or instructions[0].address != ROOT_ADDRESS
        or instructions[-1].address + instructions[-1].size != ROOT_ADDRESS + 246
    ):
        raise AssertionError("Capstone does not cover the complete Ghidra body")

    direct_calls = []
    indirect_calls = []
    for instruction in instructions:
        if instruction.id != X86_INS_CALL or not instruction.operands:
            continue
        operand = instruction.operands[0]
        if operand.type == X86_OP_IMM:
            direct_calls.append((instruction.address, operand.imm & 0xFFFFFFFF))
        elif operand.type == X86_OP_MEM:
            indirect_calls.append((instruction.address, "memory", operand.mem.disp & 0xFFFFFFFF))
        elif operand.type == X86_OP_REG:
            indirect_calls.append((instruction.address, "register", decoder.reg_name(operand.reg)))
    if tuple(direct_calls) != EXPECTED_DIRECT_CALLS:
        raise AssertionError(f"Direct calls differ from fresh mapped code: {direct_calls}")
    if tuple(indirect_calls) != EXPECTED_INDIRECT_CALLS:
        raise AssertionError(f"Indirect calls differ from fresh mapped code: {indirect_calls}")
    if any(target not in matched for _, target in direct_calls):
        raise AssertionError("An outbound direct call reaches an unmatched Main.dll function")

    key_offset = PROMPT_KEY_ADDRESS - BASE
    if image[key_offset:key_offset + len(PROMPT_KEY)] != PROMPT_KEY:
        raise AssertionError("The mapped localization key differs from Ghidra's string reference")
    if bytes.fromhex("83 7C 24 08 00") not in code:
        raise AssertionError("The observed [esp+8] zero gate is missing")
    if bytes.fromhex("C7 46 7C 01 00 00 00") not in code:
        raise AssertionError("The observed receiver +0x7C update is missing")

    for caller, site, target in EXPECTED_CALLERS:
        record = records.get(caller)
        if record is None or caller not in matched:
            raise AssertionError(f"Caller {caller:08X} is not byte-verified")
        if not any(start <= site < start + size for start, size in record_ranges(record)):
            raise AssertionError(f"Call site {site:08X} is outside its matched caller")
        require_direct_call(image, decoder, site, target)

    caller, site, target = EXPECTED_UNVERIFIED_CALLER
    caller_row = inventory.get(caller)
    if caller_row is None or caller in matched or int(caller_row["size"]) != 1093:
        raise AssertionError("The third incoming caller's unmatched inventory state changed")
    if not caller <= site < caller + int(caller_row["size"]):
        raise AssertionError(f"Call site {site:08X} is outside its inventory body")
    require_direct_call(image, decoder, site, target)

    print(
        "Main.dll quit-prompt setup: 1 byte-identical function / 246 bytes "
        "across 68 instructions; 11 matched direct callees, two indirect calls, "
        "the mapped localization key, two matched callers, and one unmatched "
        "incoming caller verified"
    )


if __name__ == "__main__":
    main()
