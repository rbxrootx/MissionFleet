"""Login message routing recovered from dispatcher 0x0040b4f3."""

from __future__ import annotations

from dataclasses import dataclass

from emulator.protocol import Frame


@dataclass(frozen=True, slots=True)
class DispatchDecision:
    accepted: bool
    handler: str | None = None
    reason: str = ""


_FIXED_LENGTH_HANDLERS = {
    0x80011200: (0x10, "billing_time_update"),
    0x80017000: (0x10, "billing_login_start"),
    0x80017001: (0x24, "billing_login_finish"),
    0x80017002: (0x10, "billing_ip_release"),
    0x80017003: (0x10, "billing_point_query"),
    0x80017004: (0x18, "billing_time_end"),
    0x80017005: (0x24, "billing_point_consume"),
    0x8001E002: (0x18, "user_state_update"),
    0x8002D012: (0x1C, "user_info_update"),
}

_UNCONDITIONAL_HANDLERS = {
    0x8001000F: "liveness_probe",
    0x80011100: "billing_time_direct_update",
    0x80016001: "broadcast_login",
    0x80016002: "broadcast_logout",
}


def classify_login_frame(frame: Frame) -> DispatchDecision:
    """Classify a complete frame using the native dispatcher's exact gates."""
    message_id = frame.message_id & 0xFFFFFFFF
    payload_length = len(frame.payload)

    handler = _UNCONDITIONAL_HANDLERS.get(message_id)
    if handler is not None:
        return DispatchDecision(True, handler)

    fixed = _FIXED_LENGTH_HANDLERS.get(message_id)
    if fixed is not None:
        expected, handler = fixed
        if payload_length == expected:
            return DispatchDecision(True, handler)
        return DispatchDecision(False, reason=f"expected payload length {expected}")

    if message_id == 0x80011000:
        expected = ((frame.parameter_1 & 0xFFFFFFFF) * 0x38) & 0xFFFFFFFF
        if payload_length == expected:
            return DispatchDecision(True, "billing_record_batch")
        return DispatchDecision(False, reason=f"expected payload length {expected}")

    if message_id == 0x8001E001:
        if (frame.parameter_1 & 0xFFFFFFFF) not in (1, 2, 3):
            return DispatchDecision(False, reason="expected parameter 1 in 1..3")
        if payload_length != 0x60:
            return DispatchDecision(False, reason="expected payload length 96")
        return DispatchDecision(True, f"user_data_stage_{frame.parameter_1}")

    return DispatchDecision(False, reason="unknown message id")
