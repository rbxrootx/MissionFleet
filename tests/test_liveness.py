import unittest

from emulator.liveness import (
    ConnectionLivenessState,
    LivenessAction,
    evaluate_liveness,
    record_receive_completion,
    request_close,
)
from emulator.protocol import Frame, INITIAL_PROBE_MESSAGE


class LivenessTests(unittest.TestCase):
    def test_inactive_connection_is_ignored(self):
        state = ConnectionLivenessState(False, True, 0)
        result = evaluate_liveness(state, now_tick=999, timeout_milliseconds=100)
        self.assertEqual(result.action, LivenessAction.NONE)
        self.assertIs(result.state, state)

    def test_half_timeout_boundary_is_strict_and_probe_is_one_shot(self):
        state = ConnectionLivenessState(True, True, 100)
        boundary = evaluate_liveness(state, now_tick=150, timeout_milliseconds=100)
        self.assertEqual(boundary.action, LivenessAction.NONE)
        probe = evaluate_liveness(state, now_tick=151, timeout_milliseconds=100)
        self.assertEqual(probe.action, LivenessAction.SEND_PROBE)
        self.assertEqual(probe.frame, Frame(INITIAL_PROBE_MESSAGE, 0, 0))
        self.assertFalse(probe.state.probe_armed)
        repeated = evaluate_liveness(probe.state, now_tick=175, timeout_milliseconds=100)
        self.assertEqual(repeated.action, LivenessAction.NONE)

    def test_timeout_boundary_is_strict_and_has_priority(self):
        state = ConnectionLivenessState(True, True, 10, True, 6)
        boundary = evaluate_liveness(state, now_tick=110, timeout_milliseconds=100)
        self.assertEqual(boundary.action, LivenessAction.SEND_PROBE)
        timed_out = evaluate_liveness(
            state,
            now_tick=111,
            timeout_milliseconds=100,
            statistics_owner_present=True,
        )
        self.assertEqual(timed_out.action, LivenessAction.TIMEOUT)
        self.assertFalse(timed_out.state.active)
        self.assertTrue(timed_out.shutdown_receive)
        self.assertTrue(timed_out.queue_close_event)
        self.assertTrue(timed_out.notify_timeout_window)
        self.assertTrue(timed_out.increment_timeout_statistics)
        self.assertIsNone(timed_out.frame)

    def test_tick_subtraction_wraps_as_native_uint32(self):
        state = ConnectionLivenessState(True, True, 0xFFFFFFF0)
        result = evaluate_liveness(state, now_tick=0x22, timeout_milliseconds=100)
        self.assertEqual(result.action, LivenessAction.NONE)
        probe = evaluate_liveness(state, now_tick=0x23, timeout_milliseconds=100)
        self.assertEqual(probe.action, LivenessAction.SEND_PROBE)

    def test_close_request_requires_registry_and_active_flag(self):
        open_state = ConnectionLivenessState(True, True, 0, True)
        result = request_close(open_state)
        self.assertEqual(result.action, LivenessAction.CLOSE_REQUEST)
        self.assertFalse(result.state.active)
        self.assertTrue(result.shutdown_receive)
        self.assertTrue(result.queue_close_event)
        for state in (
            ConnectionLivenessState(False, True, 0, True),
            ConnectionLivenessState(True, True, 0, False),
        ):
            with self.subTest(state=state):
                self.assertEqual(request_close(state).action, LivenessAction.NONE)

    def test_receive_completion_refreshes_activity_and_rearms_probe(self):
        state = ConnectionLivenessState(True, False, 10)
        refreshed = record_receive_completion(state, 0x100000007)
        self.assertTrue(refreshed.probe_armed)
        self.assertEqual(refreshed.last_activity_tick, 7)
        self.assertTrue(refreshed.active)

    def test_receive_completion_writes_activity_before_later_error_handling(self):
        inactive = ConnectionLivenessState(False, False, 10, False)
        refreshed = record_receive_completion(inactive, 20)
        self.assertFalse(refreshed.active)
        self.assertTrue(refreshed.probe_armed)
        self.assertEqual(refreshed.last_activity_tick, 20)


if __name__ == "__main__":
    unittest.main()
