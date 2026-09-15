"""Login connection socket-event dispatch recovered at 0x00410700."""

from __future__ import annotations

from dataclasses import dataclass


FD_READ = 0x01
FD_CONNECT = 0x10
FD_CLOSE = 0x20
SOCKET_MESSAGE = 0x464
CONNECTED_EVENT_MASK = 0x23
UINT64_MASK = 0xFFFFFFFFFFFFFFFF


@dataclass(frozen=True, slots=True)
class SocketEventState:
    active: bool = False
    registry_attached: bool = True


@dataclass(frozen=True, slots=True)
class SocketEventStatistics:
    connection_closes: int = 0
    total_socket_closes: int = 0

    def incremented(self) -> "SocketEventStatistics":
        return SocketEventStatistics(
            (self.connection_closes + 1) & UINT64_MASK,
            (self.total_socket_closes + 1) & UINT64_MASK,
        )


@dataclass(frozen=True, slots=True)
class SocketEventOutcome:
    state: SocketEventState
    return_value: int
    invoke_read_callback: bool = False
    invoke_connected_callback: bool = False
    invoke_close_callback: bool = False
    register_async_select: bool = False
    async_message: int = 0
    async_event_mask: int = 0
    shutdown_receive: bool = False
    queue_close_event: bool = False
    statistics: SocketEventStatistics | None = None


def dispatch_socket_event(
    state: SocketEventState,
    event: int,
    *,
    read_callback_result: int = 0,
    async_select_result: int = 0,
    statistics: SocketEventStatistics | None = None,
) -> SocketEventOutcome:
    """Apply the native event switch and its state transitions."""
    if event == FD_READ:
        return SocketEventOutcome(
            state,
            read_callback_result,
            invoke_read_callback=True,
            statistics=statistics,
        )

    if event == FD_CONNECT:
        if async_select_result != -1:
            return SocketEventOutcome(
                SocketEventState(True, state.registry_attached),
                0,
                invoke_connected_callback=True,
                register_async_select=True,
                async_message=SOCKET_MESSAGE,
                async_event_mask=CONNECTED_EVENT_MASK,
                statistics=statistics,
            )

        request_close = state.registry_attached and state.active
        return SocketEventOutcome(
            SocketEventState(False if request_close else state.active, state.registry_attached),
            0,
            register_async_select=True,
            async_message=SOCKET_MESSAGE,
            async_event_mask=CONNECTED_EVENT_MASK,
            shutdown_receive=request_close,
            queue_close_event=request_close,
            statistics=statistics,
        )

    if event == FD_CLOSE:
        if statistics is None:
            raise ValueError("FD_CLOSE requires the native statistics owner")
        return SocketEventOutcome(
            state,
            -1,
            invoke_close_callback=True,
            statistics=statistics.incremented(),
        )

    return SocketEventOutcome(state, 0, statistics=statistics)
