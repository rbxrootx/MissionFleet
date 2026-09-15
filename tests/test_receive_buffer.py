import unittest

from emulator.receive_buffer import (
    ReceiveBufferState,
    ReceiveCallOutcome,
    ReceiveErrorStatistics,
    ReceivePostPlan,
    apply_wsarecv_result,
    plan_receive_buffer,
)


class ReceiveBufferTests(unittest.TestCase):
    def test_zero_fionread_result_returns_without_posting_receive(self):
        state = ReceiveBufferState(20, 100)
        self.assertEqual(plan_receive_buffer(state, 0), ReceivePostPlan(state, False))

    def test_growth_uses_exact_buffered_plus_available_size(self):
        state = ReceiveBufferState(20, 32)
        self.assertEqual(
            plan_receive_buffer(state, 40),
            ReceivePostPlan(ReceiveBufferState(20, 60), True, 20, 40, True),
        )

    def test_existing_capacity_is_reused_for_receive_tail(self):
        state = ReceiveBufferState(20, 100)
        self.assertEqual(
            plan_receive_buffer(state, 40),
            ReceivePostPlan(ReceiveBufferState(20, 100), True, 20, 80, False),
        )

    def test_oversized_buffer_shrinks_only_below_strict_low_water_mark(self):
        large = ReceiveBufferState(100, 0x9000)
        below = plan_receive_buffer(large, 0x4000 - 101)
        self.assertEqual(below.state.capacity, 0x8000)
        self.assertTrue(below.reallocate)

        equal = plan_receive_buffer(large, 0x4000 - 100)
        self.assertEqual(equal.state.capacity, 0x9000)
        self.assertFalse(equal.reallocate)

    def test_capacity_must_be_strictly_above_32k_to_shrink(self):
        state = ReceiveBufferState(10, 0x8000)
        plan = plan_receive_buffer(state, 1)
        self.assertEqual(plan.state.capacity, 0x8000)
        self.assertFalse(plan.reallocate)

    def test_receive_completion_adds_bytes_with_uint32_wrap(self):
        state = ReceiveBufferState(0xFFFFFFF0, 0xFFFFFFFF)
        self.assertEqual(state.after_receive(0x30).buffered_bytes, 0x20)

    def test_success_adds_received_bytes_and_returns_their_count(self):
        state = ReceiveBufferState(20, 100)
        self.assertEqual(
            apply_wsarecv_result(state, wsa_result=0, received_bytes=30),
            ReceiveCallOutcome(ReceiveBufferState(50, 100), 30, True, None),
        )

    def test_nonnegative_or_non_minus_one_result_uses_success_path(self):
        state = ReceiveBufferState(0, 100)
        outcome = apply_wsarecv_result(state, wsa_result=-2, received_bytes=0)
        self.assertEqual(outcome.return_value, 0)
        self.assertFalse(outcome.parse_buffer)
        self.assertEqual(outcome.state, state)

    def test_minus_one_preserves_buffer_and_increments_both_error_counters(self):
        state = ReceiveBufferState(20, 100)
        statistics = ReceiveErrorStatistics(7, 9)
        self.assertEqual(
            apply_wsarecv_result(
                state,
                wsa_result=-1,
                received_bytes=99,
                statistics=statistics,
                error_window_configured=True,
            ),
            ReceiveCallOutcome(
                state,
                -1,
                False,
                ReceiveErrorStatistics(8, 10),
                True,
            ),
        )

    def test_error_statistics_wrap_as_two_native_uint64_counters(self):
        maximum = 0xFFFFFFFFFFFFFFFF
        outcome = apply_wsarecv_result(
            ReceiveBufferState(),
            wsa_result=-1,
            received_bytes=0,
            statistics=ReceiveErrorStatistics(maximum, maximum),
        )
        self.assertEqual(outcome.statistics, ReceiveErrorStatistics(0, 0))

    def test_error_without_statistics_owner_still_returns_minus_one(self):
        outcome = apply_wsarecv_result(
            ReceiveBufferState(5, 10),
            wsa_result=-1,
            received_bytes=0,
        )
        self.assertEqual(outcome.return_value, -1)
        self.assertIsNone(outcome.statistics)
        self.assertFalse(outcome.notify_error_window)


if __name__ == "__main__":
    unittest.main()
