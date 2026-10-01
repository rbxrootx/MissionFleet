import hashlib
import json
import unittest

from tools import generate_progress


class ProgressReportTests(unittest.TestCase):
    def setUp(self):
        self.report = generate_progress.build_report()

    def test_public_inventory_and_verified_progress_are_complete_and_honest(self):
        self.assertEqual(self.report["version"], 2)
        self.assertEqual(self.report["measures"]["total_functions"], 42_459)
        self.assertEqual(self.report["measures"]["total_code"], "10468726")
        self.assertEqual(self.report["measures"]["matched_functions"], 5_788)
        self.assertEqual(self.report["measures"]["matched_code"], "886908")
        self.assertEqual(len(self.report["units"]), 6)
        client = next(unit for unit in self.report["units"] if unit["name"] == "client-main")
        self.assertEqual(client["measures"]["total_functions"], 2_030)
        self.assertEqual(client["measures"]["total_code"], "1253985")
        self.assertEqual(client["measures"]["matched_functions"], 151)
        self.assertEqual(client["measures"]["matched_code"], "453111")
        current = next(unit for unit in self.report["units"]
                       if unit["name"] == "client-main-current")
        self.assertEqual(current["measures"]["total_functions"], 8_474)
        self.assertEqual(current["measures"]["total_code"], "2353108")
        self.assertEqual(current["measures"]["matched_functions"], 83)
        self.assertEqual(current["measures"]["matched_code"], "172752")
        core = next(unit for unit in self.report["units"]
                    if unit["name"] == "client-core-current")
        self.assertEqual(core["measures"]["total_functions"], 13_030)
        self.assertEqual(core["measures"]["total_code"], "3996277")
        self.assertEqual(core["measures"]["matched_functions"], 3)
        self.assertEqual(core["measures"]["matched_code"], "74159")

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

    def test_source_paths_keep_exact_case_on_case_insensitive_hosts(self):
        exact = "src/client-2062/Main/FUN_1008f9c0.cpp"
        mis_cased = "src/client-2062/Main/FUN_1008F9C0.cpp"
        self.assertTrue(generate_progress.exact_case_path_exists(exact))
        self.assertFalse(generate_progress.exact_case_path_exists(mis_cased))


if __name__ == "__main__":
    unittest.main()
