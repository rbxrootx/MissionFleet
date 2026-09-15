import unittest

from emulator.socket_events import (
    CONNECTED_EVENT_MASK,
    FD_CLOSE,
    FD_CONNECT,
    FD_READ,
    SOCKET_MESSAGE,
    SocketEventState,
    SocketEventStatistics,
    dispatch_socket_event,
)


class SocketEventDispatchTests(unittest.TestCase):
    def test_read_dispatch_returns_callback_value_unchanged(self):
        outcome = dispatch_socket_event(
            SocketEventState(active=True), FD_READ, read_callback_result=0x81234567
        )
        self.assertTrue(outcome.invoke_read_callback)
        self.assertEqual(outcome.return_value, 0x81234567)
        self.assertFalse(outcome.register_async_select)

    def test_connect_success_registers_exact_message_and_mask_then_activates(self):
        outcome = dispatch_socket_event(
            SocketEventState(active=False), FD_CONNECT, async_select_result=0
        )
        self.assertTrue(outcome.register_async_select)
        self.assertEqual(outcome.async_message, SOCKET_MESSAGE)
        self.assertEqual(outcome.async_event_mask, CONNECTED_EVENT_MASK)
        self.assertTrue(outcome.state.active)
        self.assertTrue(outcome.invoke_connected_callback)
        self.assertEqual(outcome.return_value, 0)

    def test_only_minus_one_is_connect_registration_failure(self):
        outcome = dispatch_socket_event(
            SocketEventState(active=False), FD_CONNECT, async_select_result=-2
        )
        self.assertTrue(outcome.state.active)
        self.assertTrue(outcome.invoke_connected_callback)

    def test_connect_failure_requests_close_only_for_attached_active_connection(self):
        outcome = dispatch_socket_event(
            SocketEventState(active=True, registry_attached=True),
            FD_CONNECT,
            async_select_result=-1,
        )
        self.assertFalse(outcome.state.active)
        self.assertTrue(outcome.shutdown_receive)
        self.assertTrue(outcome.queue_close_event)
        self.assertFalse(outcome.invoke_connected_callback)

        for state in (
            SocketEventState(active=False, registry_attached=True),
            SocketEventState(active=True, registry_attached=False),
        ):
            ignored = dispatch_socket_event(state, FD_CONNECT, async_select_result=-1)
            self.assertEqual(ignored.state, state)
            self.assertFalse(ignored.shutdown_receive)
            self.assertFalse(ignored.queue_close_event)

    def test_close_calls_callback_then_increments_both_64_bit_counters(self):
        outcome = dispatch_socket_event(
            SocketEventState(active=True),
            FD_CLOSE,
            statistics=SocketEventStatistics(7, 11),
        )
        self.assertTrue(outcome.invoke_close_callback)
        self.assertEqual(outcome.statistics, SocketEventStatistics(8, 12))
        self.assertEqual(outcome.return_value, -1)

    def test_close_statistics_wrap_at_64_bits(self):
        maximum = 0xFFFFFFFFFFFFFFFF
        outcome = dispatch_socket_event(
            SocketEventState(),
            FD_CLOSE,
            statistics=SocketEventStatistics(maximum, maximum),
        )
        self.assertEqual(outcome.statistics, SocketEventStatistics(0, 0))

    def test_close_requires_the_owner_that_native_code_dereferences(self):
        with self.assertRaisesRegex(ValueError, "statistics owner"):
            dispatch_socket_event(SocketEventState(), FD_CLOSE)

    def test_unknown_event_is_ignored(self):
        state = SocketEventState(active=True)
        outcome = dispatch_socket_event(state, 2)
        self.assertEqual(outcome.state, state)
        self.assertEqual(outcome.return_value, 0)
        self.assertFalse(outcome.invoke_read_callback)
        self.assertFalse(outcome.invoke_connected_callback)
        self.assertFalse(outcome.invoke_close_callback)


if __name__ == "__main__":
    unittest.main()
