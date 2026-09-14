from pathlib import Path
import struct
import tempfile
import unittest

from tools.sprite_index import index_sprite, UnsupportedSprite


def fixture():
    header = bytearray(136)
    header[:40] = b"Sangduck Sprite File".ljust(40, b" ")
    header[84:86] = bytes([3, 3])
    struct.pack_into("<I", header, 92, 1)
    record = bytearray(116)
    record[4:12] = b"test.bmp"
    struct.pack_into("<III", record, 48, 4, 2, 1)
    return header + record + b"\0\0\xff\xff" + b"tail"


class SpriteTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.path = Path(self.temp.name) / "test.spr"

    def test_index_preserves_offsets_and_tail(self):
        self.path.write_bytes(fixture())
        result = index_sprite(self.path)
        frame = result["frames"][0]
        self.assertEqual((136, 252, 4, 2, 1), tuple(frame[k] for k in ("record_offset", "payload_offset", "payload_size", "width", "height")))
        self.assertEqual("test.bmp", frame["source_name"])
        self.assertEqual(4, result["unparsed_tail_bytes"])

    def test_corruption_is_rejected(self):
        data = fixture()
        struct.pack_into("<I", data, 136 + 48, 1000000)
        self.path.write_bytes(data)
        with self.assertRaises(ValueError):
            index_sprite(self.path)
        self.path.write_bytes(b"not a sprite")
        with self.assertRaises(ValueError):
            index_sprite(self.path)

    def test_unsupported_audio_is_explicit(self):
        data = fixture()
        struct.pack_into("<I", data, 104, 1)
        self.path.write_bytes(data)
        with self.assertRaises(UnsupportedSprite):
            index_sprite(self.path)
