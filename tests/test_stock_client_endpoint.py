import unittest

from tools.patch_stock_client_endpoint import (
    ORIGINAL_HOST,
    PUSH_PORT,
    STORE_PORT,
    patch_endpoint,
)


class StockClientEndpointTests(unittest.TestCase):
    def setUp(self):
        self.binary = b"prefix" + ORIGINAL_HOST + b"middle" + PUSH_PORT + STORE_PORT

    def test_patches_hostname_in_place_and_preserves_binary_size(self):
        patched, offset = patch_endpoint(self.binary)
        self.assertEqual(offset, 6)
        self.assertEqual(len(patched), len(self.binary))
        self.assertEqual(patched[offset : offset + 9], b"127.0.0.1")
        self.assertEqual(
            patched[offset + 9 : offset + len(ORIGINAL_HOST)],
            bytes(len(ORIGINAL_HOST) - 9),
        )
        self.assertIn(PUSH_PORT, patched)
        self.assertIn(STORE_PORT, patched)

    def test_supports_an_alternate_same_or_shorter_hostname(self):
        patched, offset = patch_endpoint(self.binary, "local.test")
        self.assertEqual(patched[offset : offset + 10], b"local.test")

    def test_rejects_oversized_or_non_ascii_hostname(self):
        with self.assertRaisesRegex(ValueError, "1.."):
            patch_endpoint(self.binary, "x" * (len(ORIGINAL_HOST) + 1))
        with self.assertRaises(UnicodeEncodeError):
            patch_endpoint(self.binary, "本机")

    def test_rejects_ambiguous_binary_evidence(self):
        with self.assertRaisesRegex(ValueError, "exactly one"):
            patch_endpoint(self.binary.replace(ORIGINAL_HOST, b"x" * len(ORIGINAL_HOST)))
        with self.assertRaisesRegex(ValueError, "ambiguous"):
            patch_endpoint(self.binary.replace(PUSH_PORT, b"xxxxx"))


if __name__ == "__main__":
    unittest.main()
