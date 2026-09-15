"""Login receive-buffer policy recovered from the pump at 0x004102c0."""

from __future__ import annotations

from dataclasses import dataclass


UINT32_MASK = 0xFFFFFFFF
SHRINK_CAPACITY = 0x8000
SHRINK_REQUIRED_LIMIT = 0x4000


@dataclass(frozen=True, slots=True)
class ReceiveBufferState:
    buffered_bytes: int = 0
    capacity: int = 0

    def after_receive(self, received_bytes: int) -> "ReceiveBufferState":
        return ReceiveBufferState(
            (self.buffered_bytes + received_bytes) & UINT32_MASK,
            self.capacity,
        )


@dataclass(frozen=True, slots=True)
class ReceivePostPlan:
    state: ReceiveBufferState
    issue_receive: bool
    write_offset: int = 0
    writable_bytes: int = 0
    reallocate: bool = False


@dataclass(frozen=True, slots=True)
class ReceiveErrorStatistics:
    receive_failures: int = 0
    total_socket_failures: int = 0

    def incremented(self) -> "ReceiveErrorStatistics":
        return ReceiveErrorStatistics(
            (self.receive_failures + 1) & 0xFFFFFFFFFFFFFFFF,
            (self.total_socket_failures + 1) & 0xFFFFFFFFFFFFFFFF,
        )


@dataclass(frozen=True, slots=True)
class ReceiveCallOutcome:
    state: ReceiveBufferState
    return_value: int
    parse_buffer: bool
    statistics: ReceiveErrorStatistics | None
    notify_error_window: bool = False


def plan_receive_buffer(
    state: ReceiveBufferState,
    available_bytes: int,
) -> ReceivePostPlan:
    """Apply the exact grow/shrink thresholds before native ``WSARecv``."""
    available = available_bytes & UINT32_MASK
    if available == 0:
        return ReceivePostPlan(state, False)

    buffered = state.buffered_bytes & UINT32_MASK
    capacity = state.capacity & UINT32_MASK
    required = (buffered + available) & UINT32_MASK
    reallocate = False
    if required > capacity:
        capacity = required
        reallocate = True
    elif capacity > SHRINK_CAPACITY and required < SHRINK_REQUIRED_LIMIT:
        capacity = SHRINK_CAPACITY
        reallocate = True

    updated = ReceiveBufferState(buffered, capacity)
    return ReceivePostPlan(
        updated,
        True,
        write_offset=buffered,
        writable_bytes=(capacity - buffered) & UINT32_MASK,
        reallocate=reallocate,
    )


def apply_wsarecv_result(
    state: ReceiveBufferState,
    *,
    wsa_result: int,
    received_bytes: int,
    statistics: ReceiveErrorStatistics | None = None,
    error_window_configured: bool = False,
) -> ReceiveCallOutcome:
    """Apply the success/failure split at 0x004103da and 0x00410691."""
    if wsa_result == -1:
        return ReceiveCallOutcome(
            state,
            -1,
            False,
            None if statistics is None else statistics.incremented(),
            error_window_configured,
        )

    received = received_bytes & UINT32_MASK
    updated = state.after_receive(received)
    return ReceiveCallOutcome(
        updated,
        received,
        updated.buffered_bytes != 0,
        statistics,
    )
