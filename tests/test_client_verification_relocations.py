import hashlib
import struct
import tempfile
import unittest
from pathlib import Path

from tools.verify_client_matches import (
    audit_relocations,
    audit_source_dependencies,
    resolve_segments,
    source_hashes,
)


class ClientRelocationAuditTests(unittest.TestCase):
    def test_relative_absolute_and_immediate_operands_are_checked(self):
        address = 0x1000
        code = bytearray(16)
        struct.pack_into("<i", code, 1, 0x1010 - (address + 1 + 4))
        struct.pack_into("<I", code, 8, 0xDEADBEEF)
        struct.pack_into("<I", code, 12, 0x48730000)
        relocations = [
            {"offset": 1, "target_address": "00001010", "kind": "relative"},
            {"offset": 8, "target_address": "DEADBEEF", "kind": "absolute"},
            {"offset": 12, "target_address": "48730000", "kind": "immediate"},
        ]

        self.assertEqual(audit_relocations({}, {"address": "00001000",
                                                 "relocations": relocations}, code), 3)

    def test_source_hash_accepts_git_line_ending_conversion(self):
        with tempfile.TemporaryDirectory() as temporary_directory:
            source = Path(temporary_directory) / "source.cpp"
            source.write_bytes(b"one\r\ntwo\r\n")

            hashes = source_hashes(source)
            self.assertIn(hashlib.sha256(b"one\ntwo\n").hexdigest(), hashes)
            self.assertEqual(len(hashes), 2)

    def test_source_dependency_hash_is_enforced(self):
        with tempfile.TemporaryDirectory() as temporary_directory:
            root = Path(temporary_directory)
            dependency = root / "layout.h"
            dependency.write_bytes(b"struct Control {};\n")
            match = {"source_dependencies": [{
                "path": "layout.h",
                "sha256": hashlib.sha256(dependency.read_bytes()).hexdigest(),
            }]}

            self.assertEqual(audit_source_dependencies(match, root), 1)
            dependency.write_bytes(b"struct Other {};\n")
            with self.assertRaisesRegex(ValueError, "layout.h"):
                audit_source_dependencies(match, root)


class SegmentedClientMatchTests(unittest.TestCase):
    def setUp(self):
        self.document = {"image_base": "00001000"}
        self.image = bytes(range(32))
        self.match = {
            "address": "00001002",
            "size": 5,
            "segments": [
                {"address": "00001002", "size": 2, "symbol": "part_0"},
                {"address": "00001008", "size": 3, "symbol": "part_1"},
            ],
        }

    def test_resolves_discontiguous_segments_to_exact_image_slices(self):
        segments = resolve_segments(self.document, self.match, self.image)

        self.assertEqual([(item["address"], item["size"], item["symbol"], item["code"])
                          for item in segments], [
            ("00001002", 2, "part_0", b"\x02\x03"),
            ("00001008", 3, "part_1", b"\x08\x09\x0a"),
        ])

    def test_rejects_unsorted_or_overlapping_segments(self):
        self.match["segments"] = [
            {"address": "00001002", "size": 1, "symbol": "part_0"},
            {"address": "00001008", "size": 1, "symbol": "part_1"},
            {"address": "00001005", "size": 3, "symbol": "part_2"},
        ]
        with self.assertRaisesRegex(ValueError, "unsorted"):
            resolve_segments(self.document, self.match, self.image)

        self.match["segments"] = [
            {"address": "00001002", "size": 4, "symbol": "part_0"},
            {"address": "00001005", "size": 1, "symbol": "part_1"},
        ]
        with self.assertRaisesRegex(ValueError, "Overlapping"):
            resolve_segments(self.document, self.match, self.image)

    def test_rejects_segment_map_that_does_not_start_at_function_entry(self):
        self.match["segments"][0]["address"] = "00001004"
        with self.assertRaisesRegex(ValueError, "function entry"):
            resolve_segments(self.document, self.match, self.image)

    def test_rejects_out_of_image_extent_and_wrong_total_size(self):
        self.match["segments"][1]["address"] = "00002000"
        with self.assertRaisesRegex(ValueError, "extent"):
            resolve_segments(self.document, self.match, self.image)

        self.setUp()
        self.match["size"] = 6
        with self.assertRaisesRegex(ValueError, "total 5, expected 6"):
            resolve_segments(self.document, self.match, self.image)

    def test_rejects_reused_symbols_and_parent_relocations(self):
        self.match["segments"][1]["symbol"] = "part_0"
        with self.assertRaisesRegex(ValueError, "repeated source symbol"):
            resolve_segments(self.document, self.match, self.image)

        self.setUp()
        self.match["relocations"] = [{"offset": 0}]
        with self.assertRaisesRegex(ValueError, "put relocations on each segment"):
            resolve_segments(self.document, self.match, self.image)


if __name__ == "__main__":
    unittest.main()
