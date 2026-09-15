import struct
import unittest

from emulator.protocol import (
    AdmissionResult,
    CONNECTION_REJECTED,
    ConnectionAdmissionDecision,
    ConnectionTeardownPlan,
    ConnectionTeardownState,
    Frame,
    FrameDecoder,
    LoginConnectionBootstrap,
    MAGIC,
    NativeProtectedFrameDecoder,
    NativeUnprotectedFrameDecoder,
    PROTECTION_RESPONSE,
    ProtectionNegotiation,
    ProtectionTableState,
    ProtocolError,
    build_protection_table,
    receive_checksum_base,
    stateless_receive_checksum,
    stateless_protected_checksum,
    decide_connection_admission,
    plan_connection_teardown,
)
from emulator.login_server import response_for_frame


class FrameProtocolTests(unittest.TestCase):
    def test_native_protected_parser_accepts_stateless_checksum(self):
        frame = Frame(0x12345678, 1, 2, b"wire")
        checksum = stateless_receive_checksum(
            frame.message_id, frame.parameter_1, frame.parameter_2, frame.payload
        )
        wire = Frame(frame.message_id, 1, 2, b"wire", checksum)
        self.assertEqual(NativeProtectedFrameDecoder().feed(wire.encode()), [wire])

    def test_native_protected_parser_probe_reply_bypasses_checksum(self):
        wire = Frame(0x8002000F, 1, 2, b"probe", 0xDEADBEEF)
        state = ProtectionTableState.from_seed(0x12345678)
        initial_index = state.receive_index
        decoder = NativeProtectedFrameDecoder(
            protection_state=state,
            table_mode_active=True,
        )
        self.assertEqual(decoder.feed(wire.encode()), [wire])
        self.assertEqual(decoder.checksum_mismatch_count, 0)
        self.assertEqual(state.receive_index, initial_index)

    def test_native_protected_parser_consumes_bad_magic_before_valid_frame(self):
        invalid = bytearray(Frame(1, 2, 3, b"bad", 4).encode())
        invalid[0] ^= 1
        valid = Frame(0x8002000F, 0, 0, b"", 9)
        decoder = NativeProtectedFrameDecoder(invalid_magic_window_configured=True)
        self.assertEqual(decoder.feed(bytes(invalid) + valid.encode()), [valid])
        self.assertEqual(decoder.invalid_magic_count, 1)
        self.assertEqual(decoder.invalid_magic_notifications, 1)
        self.assertEqual(decoder.checksum_mismatch_count, 0)

    def test_native_protected_parser_consumes_mismatch_and_continues(self):
        bad = Frame(0x12345678, 1, 2, b"bad", 0)
        good_base = Frame(0x11111111, 3, 4, b"good")
        good = Frame(
            good_base.message_id,
            good_base.parameter_1,
            good_base.parameter_2,
            good_base.payload,
            stateless_receive_checksum(
                good_base.message_id,
                good_base.parameter_1,
                good_base.parameter_2,
                good_base.payload,
            ),
        )
        decoder = NativeProtectedFrameDecoder()
        self.assertEqual(decoder.feed(bad.encode() + good.encode()), [good])
        self.assertEqual(decoder.checksum_mismatch_count, 1)
        self.assertEqual(decoder.buffered_bytes, 0)

    def test_native_protected_parser_activates_table_only_for_response(self):
        state = ProtectionTableState.from_seed(0x12345678)
        initial_index = state.receive_index
        base = receive_checksum_base(PROTECTION_RESPONSE, 0, 0)
        checksum = base ^ state.table[((initial_index * base) & 0xFFFFFFFF) % len(state.table)]
        wire = Frame(PROTECTION_RESPONSE, 0, 0, b"", checksum)
        decoder = NativeProtectedFrameDecoder(protection_state=state)
        self.assertEqual(decoder.feed(wire.encode()), [wire])
        self.assertTrue(decoder.table_mode_active)
        self.assertEqual(state.receive_index, initial_index + 17)

    def test_table_candidate_with_wrong_message_does_not_advance_or_activate(self):
        state = ProtectionTableState.from_seed(0x12345678)
        initial_index = state.receive_index
        message_id = 0x8002030D
        base = receive_checksum_base(message_id, 0, 0)
        checksum = base ^ state.table[((initial_index * base) & 0xFFFFFFFF) % len(state.table)]
        decoder = NativeProtectedFrameDecoder(protection_state=state)
        self.assertEqual(decoder.feed(Frame(message_id, 0, 0, b"", checksum).encode()), [])
        self.assertFalse(decoder.table_mode_active)
        self.assertEqual(state.receive_index, initial_index)
        self.assertEqual(decoder.checksum_mismatch_count, 1)

    def test_active_table_mode_advances_cursor_even_on_mismatch(self):
        state = ProtectionTableState.from_seed(0x12345678)
        initial_index = state.receive_index
        decoder = NativeProtectedFrameDecoder(
            protection_state=state,
            table_mode_active=True,
        )
        self.assertEqual(decoder.feed(Frame(0x12345678, 0, 0, b"", 0).encode()), [])
        self.assertEqual(state.receive_index, initial_index + 17)
        self.assertEqual(decoder.checksum_mismatch_count, 1)

    def test_native_protected_parser_compacts_incomplete_tail(self):
        wire = Frame(0x8002000F, 0, 0, b"tail", 7).encode()
        decoder = NativeProtectedFrameDecoder()
        self.assertEqual(decoder.feed(wire[:-2]), [])
        self.assertEqual(decoder.buffered_bytes, len(wire) - 2)
        self.assertEqual(
            decoder.feed(wire[-2:]),
            [Frame(0x8002000F, 0, 0, b"tail", 7)],
        )

    def test_native_unprotected_parser_compacts_fragmented_tail(self):
        decoder = NativeUnprotectedFrameDecoder()
        first = Frame(1, 2, 3, b"abc").encode()
        second = Frame(4, 5, 6, b"tail").encode()
        split = len(first) + 9
        self.assertEqual(decoder.feed((first + second)[:split]), [Frame(1, 2, 3, b"abc")])
        self.assertEqual(decoder.buffered_bytes, 9)
        self.assertEqual(decoder.feed((first + second)[split:]), [Frame(4, 5, 6, b"tail")])
        self.assertEqual(decoder.buffered_bytes, 0)

    def test_native_unprotected_parser_consumes_bad_magic_and_continues(self):
        decoder = NativeUnprotectedFrameDecoder(invalid_magic_window_configured=True)
        invalid = bytearray(Frame(7, 8, 9, b"bad").encode())
        invalid[0:4] = struct.pack("<I", MAGIC ^ 1)
        valid = Frame(10, 11, 12, b"good")
        self.assertEqual(decoder.feed(bytes(invalid) + valid.encode()), [valid])
        self.assertEqual(decoder.invalid_magic_count, 1)
        self.assertEqual(decoder.invalid_magic_notifications, 1)
        self.assertEqual(decoder.buffered_bytes, 0)

    def test_native_unprotected_parser_waits_for_bad_magic_payload_before_consuming(self):
        decoder = NativeUnprotectedFrameDecoder()
        invalid = bytearray(Frame(1, 2, 3, b"payload").encode())
        invalid[0:4] = b"BAD!"
        self.assertEqual(decoder.feed(invalid[:-1]), [])
        self.assertEqual(decoder.invalid_magic_count, 0)
        self.assertEqual(decoder.buffered_bytes, len(invalid) - 1)
        self.assertEqual(decoder.feed(invalid[-1:]), [])
        self.assertEqual(decoder.invalid_magic_count, 1)
        self.assertEqual(decoder.buffered_bytes, 0)

    def test_admission_accepts_at_exact_native_capacity_boundary(self):
        decision = decide_connection_admission(
            accept_enabled=True,
            active_count=1000,
            maximum_count=1000,
            callback_result=1,
        )
        self.assertEqual(decision, ConnectionAdmissionDecision(AdmissionResult.ACCEPT))
        self.assertTrue(decision.accepted)
        self.assertTrue(decision.increments_active_count)
        self.assertIsNone(decision.rejection_frame())

    def test_admission_over_capacity_closes_without_rejection_frame(self):
        decision = decide_connection_admission(
            accept_enabled=True,
            active_count=1001,
            maximum_count=1000,
        )
        self.assertEqual(decision.result, AdmissionResult.CAPACITY_CLOSE)
        self.assertIsNone(decision.rejection_frame())

    def test_admission_setup_failures_close_without_rejection_frame(self):
        for overrides in (
            {"socket_setup_succeeded": False},
            {"connection_allocated": False},
        ):
            with self.subTest(overrides=overrides):
                decision = decide_connection_admission(
                    accept_enabled=True,
                    active_count=0,
                    maximum_count=1000,
                    **overrides,
                )
                self.assertEqual(decision.result, AdmissionResult.SETUP_CLOSE)
                self.assertIsNone(decision.rejection_frame())

    def test_disabled_or_callback_rejection_sends_native_close_message(self):
        disabled = decide_connection_admission(
            accept_enabled=False,
            active_count=0,
            maximum_count=1000,
        )
        callback = decide_connection_admission(
            accept_enabled=True,
            active_count=0,
            maximum_count=1000,
            callback_result=0,
        )
        for decision, result in (
            (disabled, AdmissionResult.DISABLED_REJECT),
            (callback, AdmissionResult.CALLBACK_REJECT),
        ):
            with self.subTest(result=result):
                self.assertEqual(decision.result, result)
                self.assertEqual(
                    decision.rejection_frame(),
                    Frame(CONNECTION_REJECTED, 0, 0x8002),
                )
                self.assertFalse(decision.increments_active_count)

    def test_open_connection_teardown_resets_every_native_transport_field(self):
        state = ConnectionTeardownState(
            socket_handle=55,
            window_slot=7,
            registry_attached=True,
            pending_io_allocated=True,
            pending_io_count=3,
            connection_nonce=0x12345678,
            send_cursor=91,
            receive_cursor=119,
            receive_table_active=1,
        )
        self.assertEqual(
            plan_connection_teardown(
                state,
                has_pre_close_hook=True,
                has_owner_remove_hook=True,
                active_count=7,
            ),
            ConnectionTeardownPlan(True, True, True, True, True, True, True, False),
        )
        self.assertEqual(
            state.closed(),
            ConnectionTeardownState(socket_handle=-1, registry_attached=True),
        )

    def test_already_closed_connection_skips_socket_cleanup_but_runs_hooks(self):
        state = ConnectionTeardownState(socket_handle=-1, window_slot=9)
        self.assertEqual(
            plan_connection_teardown(
                state,
                has_pre_close_hook=True,
                has_owner_remove_hook=False,
            ),
            ConnectionTeardownPlan(True, False, False, False, False, False, False, True),
        )
        self.assertIs(state.closed(), state)

    def test_owner_remove_hook_takes_responsibility_for_connection_lifetime(self):
        state = ConnectionTeardownState(socket_handle=1)
        owner_managed = plan_connection_teardown(
            state,
            has_pre_close_hook=False,
            has_owner_remove_hook=True,
        )
        self.assertTrue(owner_managed.call_owner_remove_hook)
        self.assertFalse(owner_managed.destroy_connection)

        unowned = plan_connection_teardown(
            state,
            has_pre_close_hook=False,
            has_owner_remove_hook=False,
        )
        self.assertFalse(unowned.call_owner_remove_hook)
        self.assertTrue(unowned.destroy_connection)

    def test_registry_removal_decrements_nonzero_active_count_even_if_unmapped(self):
        state = ConnectionTeardownState(socket_handle=4, registry_attached=True)
        nonzero = plan_connection_teardown(
            state,
            has_pre_close_hook=False,
            has_owner_remove_hook=False,
            active_count=1,
        )
        zero = plan_connection_teardown(
            state,
            has_pre_close_hook=False,
            has_owner_remove_hook=False,
            active_count=0,
        )
        self.assertTrue(nonzero.unregister_socket_mapping)
        self.assertTrue(nonzero.decrement_active_count)
        self.assertFalse(zero.decrement_active_count)

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

    def test_stateless_protected_checksum_matches_recovered_send_routine(self):
        self.assertEqual(
            stateless_protected_checksum(0x8002030D, 0x7C8BA106, 0xF3A91CD0),
            0x0C562169,
        )
        self.assertEqual(
            stateless_protected_checksum(0x12345678, 0x90ABCDEF, 0x10203040, b"\x00\x7f\x80\xff"),
            0xF3A9EC15,
        )

    def test_initial_probe_is_exempt_from_checksum_arithmetic(self):
        frame = Frame(0x8001000F, 123, 456, b"ignored")
        encoded = frame.encode_stateless_protected()
        self.assertEqual(encoded[-4:], b"\x00\x00\x00\x00")
        self.assertEqual(
            FrameDecoder(protected=True).feed(encoded),
            [Frame(0x8001000F, 123, 456, b"ignored", 0)],
        )

    def test_stateless_receive_checksum_matches_recovered_receive_routine(self):
        self.assertEqual(
            stateless_receive_checksum(0x12345678, 0x90ABCDEF, 0x10203040, b"\x00\x7f\x80\xff"),
            0x7C8B2FBD,
        )

    def test_decoder_validates_stateless_receive_checksum(self):
        frame = Frame(0x12345678, 0x90ABCDEF, 0x10203040, b"wire")
        checksum = stateless_receive_checksum(
            frame.message_id,
            frame.parameter_1,
            frame.parameter_2,
            frame.payload,
        )
        encoded = Frame(
            frame.message_id,
            frame.parameter_1,
            frame.parameter_2,
            frame.payload,
            checksum,
        ).encode()
        decoder = FrameDecoder(protected=True, verify_stateless_checksum=True)
        self.assertEqual(
            decoder.feed(encoded),
            [
                Frame(
                    frame.message_id,
                    frame.parameter_1,
                    frame.parameter_2,
                    frame.payload,
                    checksum,
                )
            ],
        )

    def test_decoder_rejects_bad_stateless_receive_checksum(self):
        encoded = Frame(0x12345678, 1, 2, b"wire", 0).encode()
        decoder = FrameDecoder(protected=True, verify_stateless_checksum=True)
        with self.assertRaisesRegex(ProtocolError, "invalid stateless checksum"):
            decoder.feed(encoded)

    def test_initial_probe_reply_bypasses_receive_checksum_validation(self):
        encoded = Frame(0x8002000F, 0, 0, b"", 0xDEADBEEF).encode()
        decoder = FrameDecoder(protected=True, verify_stateless_checksum=True)
        self.assertEqual(
            decoder.feed(encoded),
            [Frame(0x8002000F, 0, 0, b"", 0xDEADBEEF)],
        )

    def test_protection_table_matches_recovered_msvc_generation(self):
        table = build_protection_table(0x12345678)
        self.assertEqual(len(table), 0x800)
        self.assertEqual(
            table[:6],
            (
                0x7D13832E,
                0x82923E9F,
                0xB6606891,
                0x2B48F642,
                0x80711C5F,
                0x37D7308A,
            ),
        )

    def test_protection_state_uses_independent_native_cursors(self):
        state = ProtectionTableState.from_seed(0x12345678)
        remainder = 0x12345678 % 0x800
        self.assertEqual(state.send_index, remainder * 13)
        self.assertEqual(state.receive_index, remainder * 17)
        first_send = state.send_checksum(0x10203041)
        first_receive = state.receive_checksum(0x10203041)
        self.assertEqual(first_send, 0x3D98BA2A)
        self.assertEqual(first_receive, 0xBB13DA52)
        self.assertEqual(state.send_index, remainder * 13 + 13)
        self.assertEqual(state.receive_index, remainder * 17 + 17)

    def test_protection_negotiation_matches_recovered_peer_seed_math(self):
        negotiation = ProtectionNegotiation("127.0.0.1", 8010, 0x12345678)
        self.assertEqual(negotiation.peer_component, 0x0003FB77)
        self.assertEqual(negotiation.table_seed, 0x357DB96F)
        self.assertEqual(
            negotiation.request_frame(),
            Frame(0x8002030D, 0x7C885A71, 0xE19D4AA8),
        )

    def test_negotiated_table_state_uses_derived_seed(self):
        negotiation = ProtectionNegotiation("10.20.30.40", 8010, 0x10203040)
        expected = ProtectionTableState.from_seed(negotiation.table_seed)
        actual = negotiation.table_state()
        self.assertEqual(actual.table[:8], expected.table[:8])
        self.assertEqual(actual.send_index, expected.send_index)
        self.assertEqual(actual.receive_index, expected.receive_index)

    def test_protection_response_activates_receive_table_state(self):
        negotiation = ProtectionNegotiation("127.0.0.1", 8010, 0x12345678)
        initial = negotiation.table_state()
        base = receive_checksum_base(0x8002030E, 0, 0)
        checksum = initial.receive_checksum(base)
        active = negotiation.accept_response(Frame(0x8002030E, 0, 0, b"", checksum))
        self.assertEqual(active.receive_index, initial.receive_index)

    def test_protection_response_rejects_wrong_id_or_checksum(self):
        negotiation = ProtectionNegotiation("127.0.0.1", 8010, 0x12345678)
        with self.assertRaisesRegex(ProtocolError, "expected protection response"):
            negotiation.accept_response(Frame(0x8002030D, 0, 0, b"", 0))
        with self.assertRaisesRegex(ProtocolError, "invalid protection response checksum"):
            negotiation.accept_response(Frame(0x8002030E, 0, 0, b"", 0))

    def test_unprotected_connection_bootstrap_has_one_announcement(self):
        bootstrap = LoginConnectionBootstrap("127.0.0.1", 8010, 1000, 3, False)
        self.assertEqual(bootstrap.frames(), (Frame(0x80010109, 0, 0x8002),))

    def test_protected_connection_bootstrap_preserves_native_order(self):
        bootstrap = LoginConnectionBootstrap("127.0.0.1", 8010, 1000, 3, True)
        frames = bootstrap.frames()
        self.assertEqual(bootstrap.connection_nonce, 3000)
        self.assertEqual([frame.message_id for frame in frames], [0x80010109, 0x8002030D])
        self.assertEqual((frames[0].parameter_1, frames[0].parameter_2), (0, 0x8002))
        self.assertEqual(frames[0].checksum, 0x0C566107)
        self.assertEqual(frames[1].checksum, 0xF3A803FB)

    def test_connection_nonce_wraps_like_native_uint32_multiply(self):
        bootstrap = LoginConnectionBootstrap("127.0.0.1", 8010, 0xFFFFFFF0, 3, True)
        self.assertEqual(bootstrap.connection_nonce, 0xFFFFFFD0)

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
