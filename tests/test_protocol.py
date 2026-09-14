import struct
import unittest

from emulator.protocol import Frame, FrameDecoder, MAGIC, ProtocolError
from emulator.login_server import response_for_frame


class FrameProtocolTests(unittest.TestCase):
    def test_round_trip_fragmented_frame(self):
        encoded = Frame(0x8001000F, 7, 9, b"login").encode()
        decoder = FrameDecoder()

        self.assertEqual(decoder.feed(encoded[:13]), [])
        self.assertEqual(decoder.feed(encoded[13:21]), [])
        self.assertEqual(
            decoder.feed(encoded[21:]),
            [Frame(0x8001000F, 7, 9, b"login")],
        )
        self.assertEqual(decoder.buffered_bytes, 0)

    def test_decodes_multiple_frames_from_one_receive(self):
        first = Frame(1, 2, 3).encode()
        second = Frame(4, 5, 6, b"abc").encode()
        self.assertEqual(
            FrameDecoder().feed(first + second),
            [Frame(1, 2, 3), Frame(4, 5, 6, b"abc")],
        )

    def test_protected_frame_has_checksum_after_payload(self):
        frame = Frame(1, 2, 3, b"abc", 0xAABBCCDD)
        self.assertEqual(FrameDecoder(protected=True).feed(frame.encode()), [frame])

    def test_rejects_wrong_magic(self):
        data = struct.pack("<IIIII", MAGIC ^ 1, 1, 2, 3, 0)
        with self.assertRaisesRegex(ProtocolError, "invalid frame magic"):
            FrameDecoder().feed(data)

    def test_rejects_unreasonable_payload_length(self):
        data = struct.pack("<IIIII", MAGIC, 1, 2, 3, 65)
        with self.assertRaisesRegex(ProtocolError, "exceeds limit"):
            FrameDecoder(max_payload=64).feed(data)

    def test_verified_initial_probe_response(self):
        self.assertEqual(
            response_for_frame(Frame(0x8001000F, 123, 456, b"ignored")),
            Frame(0x8002000F, 0, 0),
        )
        self.assertIsNone(response_for_frame(Frame(0xDEADBEEF, 0, 0)))


if __name__ == "__main__":
    unittest.main()
