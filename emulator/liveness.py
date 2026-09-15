"""Login connection heartbeat state recovered from 0x004114f0/0x00411520."""

from __future__ import annotations

from dataclasses import dataclass, replace
from enum import Enum

from emulator.protocol import Frame, INITIAL_PROBE_MESSAGE, UINT32_MASK


class LivenessAction(Enum):
    NONE = "none"
    SEND_PROBE = "send_probe"
    TIMEOUT = "timeout"
    CLOSE_REQUEST = "close_request"


@dataclass(frozen=True, slots=True)
class ConnectionLivenessState:
    active: bool
    probe_armed: bool
    last_activity_tick: int
    registry_attached: bool = True
    timeout_window_slot: int = -1


@dataclass(frozen=True, slots=True)
class LivenessResult:
    action: LivenessAction
    state: ConnectionLivenessState
    frame: Frame | None = None
    shutdown_receive: bool = False
    queue_close_event: bool = False
    notify_timeout_window: bool = False
    increment_timeout_statistics: bool = False


def _signed32(value: int) -> int:
    value &= UINT32_MASK
    return value if value < 0x80000000 else value - 0x100000000


def _truncate_half_signed32(value: int) -> int:
    signed = _signed32(value)
    if signed >= 0:
        return signed // 2
    return -((-signed) // 2)


def evaluate_liveness(
    state: ConnectionLivenessState,
    *,
    now_tick: int,
    timeout_milliseconds: int,
    statistics_owner_present: bool = False,
) -> LivenessResult:
    """Evaluate one native heartbeat pass for one managed connection."""
    if not state.active:
        return LivenessResult(LivenessAction.NONE, state)

    elapsed = ((now_tick & UINT32_MASK) - (state.last_activity_tick & UINT32_MASK)) & UINT32_MASK
    timeout = timeout_milliseconds & UINT32_MASK
    if elapsed > timeout:
        closed = replace(state, active=False) if state.registry_attached else state
        return LivenessResult(
            LivenessAction.TIMEOUT,
            closed,
            shutdown_receive=state.registry_attached,
            queue_close_event=state.registry_attached,
            notify_timeout_window=state.timeout_window_slot != -1,
            increment_timeout_statistics=statistics_owner_present,
        )

    half_timeout = _truncate_half_signed32(timeout) & UINT32_MASK
    if state.probe_armed and elapsed > half_timeout:
        return LivenessResult(
            LivenessAction.SEND_PROBE,
            replace(state, probe_armed=False),
            frame=Frame(INITIAL_PROBE_MESSAGE, 0, 0),
        )
    return LivenessResult(LivenessAction.NONE, state)


def record_receive_completion(
    state: ConnectionLivenessState,
    tick_milliseconds: int,
) -> ConnectionLivenessState:
    """Apply the unconditional activity writes at entry to routine 0x004102c0."""
    return replace(
        state,
        probe_armed=True,
        last_activity_tick=tick_milliseconds & UINT32_MASK,
    )


def request_close(state: ConnectionLivenessState) -> LivenessResult:
    """Apply routine 0x0040ffc0's guarded shutdown/event transition."""
    if not state.registry_attached or not state.active:
        return LivenessResult(LivenessAction.NONE, state)
    return LivenessResult(
        LivenessAction.CLOSE_REQUEST,
        replace(state, active=False),
        shutdown_receive=True,
        queue_close_event=True,
    )
