import hashlib
import struct
import tempfile
import unittest
from pathlib import Path

from tools.verify_client_matches import (
    audit_relocations,
    audit_source_dependencies,
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


if __name__ == "__main__":
    unittest.main()
