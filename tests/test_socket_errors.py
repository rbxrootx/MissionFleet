import unittest

from emulator.socket_errors import (
    QUEUED_CLOSE_EVENT,
    SOCKET_ERROR_MESSAGE,
    SocketErrorState,
    SocketErrorStatistics,
    handle_socket_error,
)


class SocketErrorTests(unittest.TestCase):
    def test_attached_active_error_accounts_notifies_then_requests_close(self):
        outcome = handle_socket_error(
            SocketErrorState(True, True, 77),
            10054,
            statistics=SocketErrorStatistics(4, 8),
        )
        self.assertEqual(outcome.statistics, SocketErrorStatistics(5, 9))
        self.assertTrue(outcome.notify_window)
        self.assertEqual(outcome.notification_message, SOCKET_ERROR_MESSAGE)
        self.assertEqual(outcome.notification_value, 77)
        self.assertFalse(outcome.state.active)
        self.assertTrue(outcome.shutdown_receive)
        self.assertTrue(outcome.queue_close_event)
        self.assertEqual(outcome.queued_event, QUEUED_CLOSE_EVENT)
        self.assertEqual(
            outcome.action_order,
            (
                "increment_statistics",
                "notify_window",
                "clear_active",
                "shutdown_receive",
                "queue_close_event",
            ),
        )
        self.assertEqual(outcome.return_value, 0)

    def test_window_sentinel_suppresses_only_notification(self):
        outcome = handle_socket_error(SocketErrorState(True, True, -1), 0)
        self.assertFalse(outcome.notify_window)
        self.assertTrue(outcome.shutdown_receive)

    def test_shutdown_requires_both_registry_and_active_state(self):
        for state in (
            SocketErrorState(False, True, -1),
            SocketErrorState(True, False, -1),
        ):
            outcome = handle_socket_error(state, 123)
            self.assertEqual(outcome.state, state)
            self.assertFalse(outcome.shutdown_receive)
            self.assertFalse(outcome.queue_close_event)

    def test_statistics_are_optional_and_wrap_at_64_bits(self):
        maximum = 0xFFFFFFFFFFFFFFFF
        wrapped = handle_socket_error(
            SocketErrorState(),
            -1,
            statistics=SocketErrorStatistics(maximum, maximum),
        )
        self.assertEqual(wrapped.statistics, SocketErrorStatistics(0, 0))
        absent = handle_socket_error(SocketErrorState(), -1)
        self.assertIsNone(absent.statistics)

    def test_native_error_code_classification_has_no_observable_effect(self):
        state = SocketErrorState(True, True, 3)
        codes = (995, 996, 10014, 10030, 10038, 10039, 10041, 123456)
        outcomes = [handle_socket_error(state, code) for code in codes]
        self.assertTrue(all(outcome == outcomes[0] for outcome in outcomes[1:]))


if __name__ == "__main__":
    unittest.main()
