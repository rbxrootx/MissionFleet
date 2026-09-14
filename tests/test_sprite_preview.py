import struct
import unittest

from tools.sprite_preview import decode
from tools.sprite_index import UnsupportedSprite


def run(skip, *colors):
    return struct.pack("<HBH", skip, 0, len(colors) * 2) + struct.pack("<" + "H" * len(colors), *colors)


class PreviewTests(unittest.TestCase):
    def test_rgb565_relative_skips_rows_and_transparency(self):
        data = run(0, 0xf800) + run(2, 0x07e0) + b"\xff\xff" + run(2, 0x001f) + b"\xfe\xff"
        pixels = decode(data, 3, 2)
        self.assertEqual(bytes([255, 0, 0, 255, 0, 0, 0, 0, 0, 255, 0, 255,
                                0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0]), pixels)

    def test_invalid_bounds_and_terminators(self):
        for data in [run(4, 0xffff) + b"\xfe\xff", b"\xff\xff\xfe\xff", b"\xfe\xfftrailing", run(0, 0), b"\x01\x00"]:
            with self.assertRaises(ValueError):
                decode(data, 2, 1)
        with self.assertRaises(UnsupportedSprite):
            decode(struct.pack("<HBH", 0, 1, 2) + b"\0\0\xfe\xff", 2, 1)
