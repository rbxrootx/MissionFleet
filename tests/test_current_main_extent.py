import csv
import unittest
from pathlib import Path

import capstone


ROOT = Path(__file__).resolve().parents[1]
MAIN_BASE = 0x58730000


class CurrentMainFunctionExtentTests(unittest.TestCase):
    def test_child_selector_extent_includes_shared_epilogue(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        by_address = {row["address"]: row for row in rows}
        function = by_address["587a5a70"]
        next_function = by_address["587a6190"]
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0x71C)
        self.assertEqual(int(next_function["address"], 16), start + size + 4)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        code = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(code, start))
        self.assertEqual(instructions[-1].address, 0x587A6189)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 8)
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)
        branch = next(item for item in instructions if item.address == 0x587A5B12)
        self.assertEqual(branch.operands[0].imm, 0x587A6181)
        self.assertEqual(image[start - MAIN_BASE + size:start - MAIN_BASE + size + 4],
                         b"\xCC" * 4)

    def test_two_key_record_upsert_helper_extents_end_before_padding(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        by_address = {row["address"]: row for row in rows}
        cases = (
            ("58754c00", "58754cd0", 0xCE, 0x58754CCB, 0x18, 2),
            ("58754a30", "58754ad0", 0x9E, 0x58754ACB, 4, 2),
            ("58754890", "58754960", 0xCB, 0x58754958, 0x10, 5),
            ("58753660", "58753690", 0x2E, 0x5875368D, None, 2),
        )
        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        for address, next_address, expected_size, ret_address, cleanup, padding_size in cases:
            with self.subTest(address=address):
                function = by_address[address]
                start = int(function["address"], 16)
                size = int(function["size"])
                self.assertEqual(size, expected_size)
                self.assertEqual(int(by_address[next_address]["address"], 16),
                                 start + expected_size + padding_size)
                function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
                instructions = list(decoder.disasm(function_bytes, start))
                ret = instructions[-1]
                self.assertEqual((ret.address, ret.mnemonic), (ret_address, "ret"))
                self.assertEqual(ret.address + ret.size, start + size)
                if cleanup is None:
                    self.assertEqual(len(ret.operands), 0)
                else:
                    self.assertEqual(ret.operands[0].imm, cleanup)
                padding = image[start - MAIN_BASE + size:
                                start - MAIN_BASE + size + padding_size]
                self.assertEqual(padding, b"\xCC" * padding_size)

    def test_48_byte_record_container_extent_includes_cookie_epilogue(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "587540c0")
        catch_all = next(row for row in rows if row["address"] == "5875424f")
        next_function = next(row for row in rows if row["address"] == "58754360")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0x295)
        self.assertEqual(int(next_function["address"], 16), start + 0x2A0)
        self.assertGreaterEqual(int(catch_all["address"], 16), start)
        self.assertLess(int(catch_all["address"], 16), start + size)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x58754352)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 0x10)
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0x2A0]
        self.assertEqual(padding, b"\xCC" * 11)

    def test_bounded_linked_record_formatter_extent_stops_before_padding(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "58752340")
        next_function = next(row for row in rows if row["address"] == "58752410")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0xCE)
        self.assertEqual(int(next_function["address"], 16), start + 0xD0)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x5875240D)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0xD0]
        self.assertEqual(padding, b"\xCC" * 2)

    def test_cforce_child_factory_extent_includes_both_return_paths(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "588f43f0")
        next_function = next(row for row in rows if row["address"] == "588f44d0")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0xD2)
        self.assertEqual(int(next_function["address"], 16), start + 0xE0)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x588F44C0)
        self.assertEqual((instructions[-1].mnemonic, instructions[-1].operands[0].imm),
                         ("jmp", 0x588F4485))
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0xE0]
        self.assertEqual(padding, b"\xCC" * 14)

    def test_shared_record_list_update_extent_includes_truncated_branch_and_return(self):
        with (ROOT / "config/NF2_2026/client-functions.tsv").open(encoding="utf-8") as stream:
            rows = list(csv.DictReader(stream, delimiter="\t"))
        function = next(row for row in rows if row["address"] == "588486e0")
        next_function = next(row for row in rows if row["address"] == "58848870")
        start = int(function["address"], 16)
        size = int(function["size"])
        self.assertEqual(size, 0x186)
        self.assertEqual(int(next_function["address"], 16), start + 0x190)

        image = (ROOT / "reports/unpacked-current-main/Main.mapped.bin").read_bytes()
        function_bytes = image[start - MAIN_BASE:start - MAIN_BASE + size]
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        decoder.detail = True
        instructions = list(decoder.disasm(function_bytes, start))
        self.assertEqual(instructions[-1].address, 0x58848863)
        self.assertEqual(instructions[-1].mnemonic, "ret")
        self.assertEqual(instructions[-1].operands[0].imm, 4)
        self.assertEqual(instructions[-1].address + instructions[-1].size, start + size)
        branch = next(item for item in instructions if item.address == 0x5884885E)
        self.assertEqual((branch.mnemonic, branch.operands[0].imm), ("jne", 0x58848850))

        padding = image[start - MAIN_BASE + size:start - MAIN_BASE + 0x190]
        self.assertEqual(padding, b"\xCC" * 10)

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
