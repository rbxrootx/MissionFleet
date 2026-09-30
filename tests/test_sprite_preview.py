import struct
import unittest

from tools.sprite_preview import decode
from tools.sprite_gallery import composite, ocean


def run(skip, *colors):
    return struct.pack("<HBH", skip, 0, len(colors) * 2) + struct.pack("<" + "H" * len(colors), *colors)


def run_with_ignored_byte(skip, ignored, *colors):
    return struct.pack("<HBH", skip, ignored, len(colors) * 2) + struct.pack("<" + "H" * len(colors), *colors)


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
        self.assertEqual(
            decode(run_with_ignored_byte(0, 0xff, 0xf800) + b"\xfe\xff", 1, 1),
            bytes([255, 0, 0, 255]),
        )

    def test_gallery_composite_preserves_transparency_and_source_color(self):
        target = ocean(3, 2)
        before = bytes(target)
        source = bytes([0, 0, 0, 0, 255, 0, 0, 255])
        composite(target, 3, 2, source, 2, 1, 1, 1)
        self.assertEqual(before[(1 * 3 + 1) * 4:(1 * 3 + 2) * 4], target[(1 * 3 + 1) * 4:(1 * 3 + 2) * 4])
        self.assertEqual(bytes([255, 0, 0, 255]), target[(1 * 3 + 2) * 4:(1 * 3 + 3) * 4])
