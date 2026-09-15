"""Login socket-error shutdown behavior recovered at 0x00410d60."""

from __future__ import annotations

from dataclasses import dataclass


UINT64_MASK = 0xFFFFFFFFFFFFFFFF
SOCKET_ERROR_MESSAGE = 0x4CB
QUEUED_CLOSE_EVENT = 0x20


@dataclass(frozen=True, slots=True)
class SocketErrorState:
    active: bool = False
    registry_attached: bool = False
    window_slot: int = -1


@dataclass(frozen=True, slots=True)
class SocketErrorStatistics:
    socket_errors: int = 0
    total_transport_errors: int = 0

    def incremented(self) -> "SocketErrorStatistics":
        return SocketErrorStatistics(
            (self.socket_errors + 1) & UINT64_MASK,
            (self.total_transport_errors + 1) & UINT64_MASK,
        )


@dataclass(frozen=True, slots=True)
class SocketErrorOutcome:
    state: SocketErrorState
    return_value: int
    statistics: SocketErrorStatistics | None
    notify_window: bool = False
    notification_message: int = 0
    notification_value: int = 0
    shutdown_receive: bool = False
    queue_close_event: bool = False
    queued_event: int = 0
    action_order: tuple[str, ...] = ()


def handle_socket_error(
    state: SocketErrorState,
    error_code: int,
    *,
    statistics: SocketErrorStatistics | None = None,
) -> SocketErrorOutcome:
    """Apply the observable accounting, notification, and shutdown sequence."""
    # The native routine classifies several error codes but never consumes the
    # resulting value. Preserve the fact that every code reaches one common path.
    del error_code

    actions: list[str] = []
    updated_statistics = statistics
    if statistics is not None:
        updated_statistics = statistics.incremented()
        actions.append("increment_statistics")

    notify = state.window_slot != -1
    if notify:
        actions.append("notify_window")

    request_close = state.registry_attached and state.active
    updated_state = state
    if request_close:
        updated_state = SocketErrorState(False, state.registry_attached, state.window_slot)
        actions.extend(("clear_active", "shutdown_receive", "queue_close_event"))

    return SocketErrorOutcome(
        updated_state,
        0,
        updated_statistics,
        notify_window=notify,
        notification_message=SOCKET_ERROR_MESSAGE if notify else 0,
        notification_value=state.window_slot if notify else 0,
        shutdown_receive=request_close,
        queue_close_event=request_close,
        queued_event=QUEUED_CLOSE_EVENT if request_close else 0,
        action_order=tuple(actions),
    )
