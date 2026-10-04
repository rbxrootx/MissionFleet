import csv
import unittest
from pathlib import Path

import capstone


ROOT = Path(__file__).resolve().parents[1]
MAIN_BASE = 0x58730000


class CurrentMainFunctionExtentTests(unittest.TestCase):
    def test_shared_record_append_extent_stops_before_padding(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "588490f0")
        next_function = next(row for row in rows if row["address"] == "58849210")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0x11B)
        self.assertEqual(int(next_function["address"], 16), start + 0x120)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x58849208)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 4)
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0x120]
        self.assertEqual(padding, b"\xCC" * 5)

    def test_semicolon_batch_extent_includes_cookie_epilogue_and_return(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "58849360")
        next_function = next(row for row in rows if row["address"] == "58849440")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0xD8)
        self.assertEqual(int(next_function["address"], 16), start + 0xE0)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x58849435)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 0x0C)
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0xE0]
        self.assertEqual(padding, b"\xCC" * 8)

    def test_shared_resource_lifecycle_extent_includes_stack_restore_and_return(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "58756020")
        next_function = next(row for row in rows if row["address"] == "58756100")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0xDD)
        self.assertEqual(int(next_function["address"], 16), start + 0xE0)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x587560FA)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 4)
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0xE0]
        self.assertEqual(padding, b"\xCC" * 3)

    def test_tree_lookup_extent_contains_its_branch_tail_and_stops_before_padding(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        lookup = next(row for row in rows if row["address"] == "587a1330")
        next_function = next(row for row in rows if row["address"] == "587a13e0")
        start = int(lookup["address"], 16)
        size = int(lookup["size"])
        self.assertEqual(size, 0xA5)
        self.assertEqual(int(next_function["address"], 16), start + 0xB0)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)
        branch = next(item for item in instructions if item.address == 0x587A13B4)
        self.assertEqual(branch.mnemonic, "jne")
        self.assertEqual(branch.operands[0].imm, 0x587A13D1)
        self.assertIn((0x587A13D1, "mov", "esi, dword ptr [esi]"),
                      [(item.address, item.mnemonic, item.op_str) for item in instructions])

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0xB0]
        self.assertEqual(padding, b"\xCC" * 0x0B)

    def test_compound_dispatch_extent_includes_branch_and_return_before_padding(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "587c4450")
        next_function = next(row for row in rows if row["address"] == "587c45c0")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0x16C)
        self.assertEqual(int(next_function["address"], 16), start + 0x170)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x587C45B9)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 0x14)
        branch = next(item for item in instructions if item.address == 0x587C45AE)
        self.assertEqual((branch.mnemonic, branch.operands[0].imm), ("jne", 0x587C4480))

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0x170]
        self.assertEqual(padding, b"\xCC" * 4)

    def test_aggregate_refresh_extent_includes_truncated_store_and_return(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "587e7e00")
        next_function = next(row for row in rows if row["address"] == "587e7f20")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0x119)
        self.assertEqual(int(next_function["address"], 16), start + 0x120)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x587E7F18)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0x120]
        self.assertEqual(padding, b"\xCC" * 7)

    def test_record_removal_extent_includes_return_after_truncated_xor(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "58835a10")
        next_function = next(row for row in rows if row["address"] == "58835b30")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0x116)
        self.assertEqual(int(next_function["address"], 16), start + 0x120)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x58835B23)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 4)
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0x120]
        self.assertEqual(padding, b"\xCC" * 0x0A)


if __name__ == "__main__":
    unittest.main()
