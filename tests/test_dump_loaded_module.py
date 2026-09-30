import struct
import unittest

from tools.dump_loaded_module import align, normalize_image_base, rebuild_pe


class DumpLoadedModuleTests(unittest.TestCase):
    def test_align(self):
        self.assertEqual(0x400, align(0x201, 0x200))
        self.assertEqual(0x400, align(0x400, 0x200))

    def test_rebuilds_zero_raw_section_from_mapped_bytes(self):
        image = bytearray(0x3000)
        image[:2] = b"MZ"
        struct.pack_into("<I", image, 0x3C, 0x80)
        image[0x80:0x84] = b"PE\0\0"
        struct.pack_into("<HHIIIHH", image, 0x84, 0x14C, 1, 0, 0, 0, 0xE0, 0x210E)
        optional = 0x98
        struct.pack_into("<H", image, optional, 0x10B)
        struct.pack_into("<I", image, optional + 36, 0x200)
        struct.pack_into("<I", image, optional + 60, 0x200)
        section = optional + 0xE0
        image[section:section + 8] = b".text\0\0\0"
        struct.pack_into("<IIII", image, section + 8, 3, 0x1000, 0, 0)
        image[0x1000:0x1003] = b"ABC"
        rebuilt, sections = rebuild_pe(bytes(image))
        self.assertEqual(b"ABC", rebuilt[0x200:0x203])
        self.assertEqual(0x200, sections[0]["raw_size"])
        self.assertEqual((0x200, 0x200), struct.unpack_from("<II", rebuilt, section + 16))

    def test_normalizes_highlow_relocation_and_image_base(self):
        image = bytearray(0x3000)
        image[:2] = b"MZ"
        struct.pack_into("<I", image, 0x3C, 0x80)
        image[0x80:0x84] = b"PE\0\0"
        optional = 0x98
        struct.pack_into("<H", image, optional, 0x10B)
        struct.pack_into("<I", image, optional + 28, 0x500000)
        struct.pack_into("<II", image, optional + 96 + 5 * 8, 0x2000, 12)
        struct.pack_into("<IIHH", image, 0x2000, 0x1000, 12, 0x3004, 0)
        struct.pack_into("<I", image, 0x1004, 0x501234)
        normalized, count, loaded = normalize_image_base(bytes(image), 0x400000)
        self.assertEqual((1, 0x500000), (count, loaded))
        self.assertEqual(0x400000, struct.unpack_from("<I", normalized, optional + 28)[0])
        self.assertEqual(0x401234, struct.unpack_from("<I", normalized, 0x1004)[0])


if __name__ == "__main__":
    unittest.main()
