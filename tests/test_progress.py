import hashlib
import json
import unittest

from tools import generate_progress


class ProgressReportTests(unittest.TestCase):
    def setUp(self):
        self.report = generate_progress.build_report()

    def test_public_inventory_and_verified_progress_are_complete_and_honest(self):
        self.assertEqual(self.report["version"], 2)
        self.assertEqual(self.report["measures"]["total_functions"], 18_925)
        self.assertEqual(self.report["measures"]["total_code"], "2865356")
        self.assertEqual(self.report["measures"]["matched_functions"], 5_549)
        self.assertEqual(self.report["measures"]["matched_code"], "186541")
        self.assertEqual(len(self.report["units"]), 3)

    def test_function_identities_are_unique_per_unit(self):
        for unit in self.report["units"]:
            names = [item["name"] for item in unit["functions"]]
            self.assertEqual(len(names), len(set(names)), unit["name"])

    def test_report_does_not_disclose_private_paths(self):
        text = json.dumps(self.report)
        self.assertNotIn("private-inputs", text)
        self.assertNotIn("C:\\\\Users", text)
        self.assertNotIn("D:\\\\FleetMission", text)

    def test_source_hash_validation_accepts_only_line_ending_conversion(self):
        lf = b"one\ntwo\n"
        crlf = b"one\r\ntwo\r\n"
        expected = {
            hashlib.sha256(lf).hexdigest(),
            hashlib.sha256(crlf).hexdigest(),
        }
        self.assertEqual(generate_progress.source_hashes(lf), expected)
        self.assertEqual(generate_progress.source_hashes(crlf), expected)
        changed = generate_progress.source_hashes(b"one\nchanged\n")
        self.assertTrue(expected.isdisjoint(changed))


if __name__ == "__main__":
    unittest.main()
