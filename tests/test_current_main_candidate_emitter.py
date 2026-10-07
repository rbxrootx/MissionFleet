import tempfile
import unittest
from pathlib import Path

from tools.emit_current_main_function_candidates import load_exact_body_ranges


class ExactBodyRangeLoaderTests(unittest.TestCase):
    def write_manifest(self, contents):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        path = Path(temporary.name) / "bodies.tsv"
        path.write_text(contents, encoding="utf-8", newline="\n")
        return path

    def test_loads_discontiguous_ranges_in_address_order(self):
        path = self.write_manifest(
            "function\tstart\tlength\tinstruction_bytes\tinstruction_count\n"
            "587CDD60\t587CDE10\t1216\t1216\t358\n"
            "587CDD60\t587CDD60\t173\t173\t47\n"
        )

        self.assertEqual(load_exact_body_ranges(path), {
            "587CDD60": [(0x587CDD60, 173), (0x587CDE10, 1216)],
        })

    def test_rejects_body_range_without_full_instruction_coverage(self):
        path = self.write_manifest(
            "function\tstart\tlength\tinstruction_bytes\tinstruction_count\n"
            "587CDD60\t587CDD60\t173\t172\t46\n"
        )

        with self.assertRaisesRegex(ValueError, "incomplete instruction coverage"):
            load_exact_body_ranges(path)

    def test_rejects_overlapping_function_body_ranges(self):
        path = self.write_manifest(
            "function\tstart\tlength\tinstruction_bytes\tinstruction_count\n"
            "587CDD60\t587CDD60\t173\t173\t47\n"
            "587CDD60\t587CDE0C\t10\t10\t3\n"
        )

        with self.assertRaisesRegex(ValueError, "Overlapping"):
            load_exact_body_ranges(path)


if __name__ == "__main__":
    unittest.main()
