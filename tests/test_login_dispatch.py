import unittest

from emulator.login_dispatch import classify_login_frame
from emulator.protocol import Frame


class LoginDispatchTests(unittest.TestCase):
    def test_fixed_length_routes_accept_only_exact_payload_size(self):
        cases = {
            0x80011200: 0x10,
            0x80017000: 0x10,
            0x80017001: 0x24,
            0x80017002: 0x10,
            0x80017003: 0x10,
            0x80017004: 0x18,
            0x80017005: 0x24,
            0x8001E002: 0x18,
            0x8002D012: 0x1C,
        }
        for message_id, length in cases.items():
            with self.subTest(message_id=hex(message_id)):
                self.assertTrue(
                    classify_login_frame(Frame(message_id, 0, 0, bytes(length))).accepted
                )
                rejected = classify_login_frame(
                    Frame(message_id, 0, 0, bytes(length + 1))
                )
                self.assertFalse(rejected.accepted)
                self.assertIn(str(length), rejected.reason)

    def test_routes_without_recovered_length_gate(self):
        for message_id in (0x8001000F, 0x80011100, 0x80016001, 0x80016002):
            with self.subTest(message_id=hex(message_id)):
                decision = classify_login_frame(Frame(message_id, 0, 0, b"anything"))
                self.assertTrue(decision.accepted)
                self.assertIsNotNone(decision.handler)

    def test_batch_payload_is_parameter_one_times_56_with_uint32_wrap(self):
        accepted = classify_login_frame(Frame(0x80011000, 2, 0, bytes(112)))
        self.assertTrue(accepted.accepted)
        self.assertEqual(accepted.handler, "billing_record_batch")
        self.assertFalse(
            classify_login_frame(Frame(0x80011000, 2, 0, bytes(111))).accepted
        )

    def test_three_user_data_stages_require_parameter_and_96_bytes(self):
        for stage in (1, 2, 3):
            decision = classify_login_frame(Frame(0x8001E001, stage, 0, bytes(96)))
            self.assertEqual(decision.handler, f"user_data_stage_{stage}")
        self.assertFalse(
            classify_login_frame(Frame(0x8001E001, 4, 0, bytes(96))).accepted
        )
        self.assertFalse(
            classify_login_frame(Frame(0x8001E001, 1, 0, bytes(95))).accepted
        )

    def test_unknown_message_is_rejected_without_invented_handler(self):
        decision = classify_login_frame(Frame(0xDEADBEEF, 0, 0))
        self.assertFalse(decision.accepted)
        self.assertIsNone(decision.handler)
        self.assertEqual(decision.reason, "unknown message id")


if __name__ == "__main__":
    unittest.main()
