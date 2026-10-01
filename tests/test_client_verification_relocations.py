import struct
import unittest

from tools.verify_client_matches import audit_relocations


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


if __name__ == "__main__":
    unittest.main()
