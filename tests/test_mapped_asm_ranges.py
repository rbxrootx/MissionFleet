import unittest

from tools.generate_mapped_client_asm import parse_ghidra_body_ranges


class GhidraBodyRangeParsingTests(unittest.TestCase):
    def test_reads_inclusive_discontiguous_ranges(self):
        dump = """ENTRY 00001000
NAME FUN_1000
BODY_BYTES 5
BODY_RANGES
  00001000..00001002
  00001008..00001009
SIGNATURE undefined FUN_1000(void)
"""

        self.assertEqual(parse_ghidra_body_ranges(dump, 0x1000), [
            (0x1000, 3), (0x1008, 2),
        ])

    def test_rejects_ranges_that_do_not_start_at_entry(self):
        dump = """ENTRY 00001000
BODY_RANGES
  00001001..00001002
SIGNATURE undefined FUN_1000(void)
"""

        with self.assertRaisesRegex(ValueError, "do not start"):
            parse_ghidra_body_ranges(dump, 0x1000)

    def test_rejects_overlapping_or_unsorted_ranges(self):
        dump = """ENTRY 00001000
BODY_RANGES
  00001000..00001002
  00001002..00001004
SIGNATURE undefined FUN_1000(void)
"""

        with self.assertRaisesRegex(ValueError, "overlapping"):
            parse_ghidra_body_ranges(dump, 0x1000)


if __name__ == "__main__":
    unittest.main()
