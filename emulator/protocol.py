"""NavyFIELD server transport framing recovered from the 2.062 login server."""

from __future__ import annotations

from dataclasses import dataclass
from enum import Enum
import struct


MAGIC = 0x01020304
HEADER = struct.Struct("<IIIII")
HEADER_SIZE = HEADER.size
DEFAULT_LOGIN_PORT = 0x1F4A  # 8010 in the recovered login-server constructor.
DEFAULT_MAX_PAYLOAD = 8 * 1024 * 1024
INITIAL_PROBE_MESSAGE = 0x8001000F
INITIAL_PROBE_REPLY = 0x8002000F
STATELESS_CHECKSUM_XOR = 0xF3A91CD0
STATELESS_RECEIVE_CHECKSUM_XOR = 0x7C8BA106
PROTECTION_TABLE_SIZE = 0x800
UINT32_MASK = 0xFFFFFFFF
PROTECTION_REQUEST = 0x8002030D
PROTECTION_RESPONSE = 0x8002030E
CONNECTION_ANNOUNCEMENT = 0x80010109
LOGIN_SERVER_ROLE = 0x8002
CONNECTION_REJECTED = 0x80000003


class ProtocolError(ValueError):
    """Raised when a byte stream cannot be a NavyFIELD transport frame."""


class AdmissionResult(Enum):
    """Observable outcomes of login-server accept routine 0x0040f560."""

    ACCEPT = "accept"
    CAPACITY_CLOSE = "capacity_close"
    SETUP_CLOSE = "setup_close"
    DISABLED_REJECT = "disabled_reject"
    CALLBACK_REJECT = "callback_reject"


@dataclass(frozen=True, slots=True)
class ConnectionAdmissionDecision:
    """A reconstructed admission result, before accepted-connection bootstrap."""

    result: AdmissionResult

    @property
    def accepted(self) -> bool:
        return self.result is AdmissionResult.ACCEPT

    @property
    def increments_active_count(self) -> bool:
        return self.accepted

    def rejection_frame(self) -> Frame | None:
        if self.result in (
            AdmissionResult.DISABLED_REJECT,
            AdmissionResult.CALLBACK_REJECT,
        ):
            return Frame(CONNECTION_REJECTED, 0, LOGIN_SERVER_ROLE)
        return None


def decide_connection_admission(
    *,
    accept_enabled: bool,
    active_count: int,
    maximum_count: int,
    socket_setup_succeeded: bool = True,
    connection_allocated: bool = True,
    callback_result: int = 1,
) -> ConnectionAdmissionDecision:
    """Reproduce the proven gates and failure classes in routine 0x0040f560.

    ``callback_result`` is explicit because the concrete virtual policy target is
    unresolved. The caller reaches it only after capacity, socket setup,
    allocation, and the server's accept-enabled flag have passed.
    """
    if (active_count & UINT32_MASK) > (maximum_count & UINT32_MASK):
        return ConnectionAdmissionDecision(AdmissionResult.CAPACITY_CLOSE)
    if not socket_setup_succeeded or not connection_allocated:
        return ConnectionAdmissionDecision(AdmissionResult.SETUP_CLOSE)
    if not accept_enabled:
        return ConnectionAdmissionDecision(AdmissionResult.DISABLED_REJECT)
    if callback_result != 1:
        return ConnectionAdmissionDecision(AdmissionResult.CALLBACK_REJECT)
    return ConnectionAdmissionDecision(AdmissionResult.ACCEPT)


@dataclass(frozen=True, slots=True)
class ConnectionTeardownState:
    """Connection fields reset by native close routine 0x0040fef0."""

    socket_handle: int
    window_slot: int = -1
    registry_attached: bool = False
    pending_io_allocated: bool = False
    pending_io_count: int = 0
    connection_nonce: int = -1
    send_cursor: int = 0
    receive_cursor: int = 0
    receive_table_active: int = 0

    def closed(self) -> "ConnectionTeardownState":
        """Return the post-close field values written by 0x0040fef0."""
        if self.socket_handle == -1:
            return self
        return ConnectionTeardownState(
            socket_handle=-1,
            window_slot=-1,
            registry_attached=self.registry_attached,
            pending_io_allocated=False,
            pending_io_count=0,
            connection_nonce=-1,
            send_cursor=0,
            receive_cursor=0,
            receive_table_active=0,
        )


@dataclass(frozen=True, slots=True)
class ConnectionTeardownPlan:
    """Observable callbacks and ownership outcome for 0x0040fef0."""

    call_pre_close_hook: bool
    notify_window_slot: bool
    unregister_socket_mapping: bool
    decrement_active_count: bool
    close_socket: bool
    destroy_pending_io: bool
    call_owner_remove_hook: bool
    destroy_connection: bool


def plan_connection_teardown(
    state: ConnectionTeardownState,
    *,
    has_pre_close_hook: bool,
    has_owner_remove_hook: bool,
    active_count: int = 0,
) -> ConnectionTeardownPlan:
    """Reproduce close sequencing and the owner-managed destruction branch."""
    socket_open = state.socket_handle != -1
    return ConnectionTeardownPlan(
        call_pre_close_hook=has_pre_close_hook,
        notify_window_slot=socket_open and state.window_slot != -1,
        unregister_socket_mapping=socket_open and state.registry_attached,
        decrement_active_count=(
            socket_open and state.registry_attached and active_count != 0
        ),
        close_socket=socket_open,
        destroy_pending_io=socket_open and state.pending_io_allocated,
        call_owner_remove_hook=has_owner_remove_hook,
        destroy_connection=not has_owner_remove_hook,
    )


@dataclass(frozen=True, slots=True)
class Frame:
    message_id: int
    parameter_1: int
    parameter_2: int
    payload: bytes = b""
    checksum: int | None = None

    def encode(self) -> bytes:
        header = HEADER.pack(
            MAGIC,
            self.message_id,
            self.parameter_1,
            self.parameter_2,
            len(self.payload),
        )
        trailer = b"" if self.checksum is None else struct.pack("<I", self.checksum)
        return header + self.payload + trailer

    def encode_stateless_protected(self) -> bytes:
        """Encode the protected wire form used before table state is enabled."""
        checksum = stateless_protected_checksum(
            self.message_id,
            self.parameter_1,
            self.parameter_2,
            self.payload,
        )
        return Frame(
            self.message_id,
            self.parameter_1,
            self.parameter_2,
            self.payload,
            checksum,
        ).encode()


def _signed_byte(value: int) -> int:
    return value if value < 0x80 else value - 0x100


def stateless_protected_checksum(
    message_id: int,
    parameter_1: int,
    parameter_2: int,
    payload: bytes = b"",
) -> int:
    """Reproduce login-server send routine 0x00410000's pre-table checksum."""
    if message_id == INITIAL_PROBE_MESSAGE:
        return 0

    header = HEADER.pack(
        MAGIC,
        message_id,
        parameter_1,
        parameter_2,
        len(payload),
    )
    checksum = sum(
        (_signed_byte(value) + 7) * index * 0x1D
        for index, value in enumerate(header)
    )
    checksum += sum(
        (_signed_byte(value) + 0x0B) * index * 0x0D
        for index, value in enumerate(payload)
    )
    return (checksum & 0xFFFFFFFF) ^ STATELESS_CHECKSUM_XOR


def stateless_receive_checksum(
    message_id: int,
    parameter_1: int,
    parameter_2: int,
    payload: bytes = b"",
) -> int:
    """Reproduce login-server receive routine 0x00410340's stateless checksum."""
    return receive_checksum_base(message_id, parameter_1, parameter_2, payload) ^ STATELESS_RECEIVE_CHECKSUM_XOR


def receive_checksum_base(
    message_id: int,
    parameter_1: int,
    parameter_2: int,
    payload: bytes = b"",
) -> int:
    """Calculate the receive checksum sum before stateless or table XOR mixing."""
    header = HEADER.pack(
        MAGIC,
        message_id,
        parameter_1,
        parameter_2,
        len(payload),
    )
    checksum = sum(
        (_signed_byte(value) + 0x0D) * index * 0x0B
        for index, value in enumerate(header)
    )
    checksum += sum(
        (_signed_byte(value) + 0x1D) * index * 0x07
        for index, value in enumerate(payload)
    )
    return checksum & UINT32_MASK


def build_protection_table(seed: int, size: int = PROTECTION_TABLE_SIZE) -> tuple[int, ...]:
    """Build the deterministic checksum table generated at 0x00411720."""
    rand_state = seed & UINT32_MASK

    def next_rand() -> int:
        nonlocal rand_state
        rand_state = (rand_state * 0x343FD + 0x269EC3) & UINT32_MASK
        return (rand_state >> 16) & 0x7FFF

    values: list[int] = []
    for _ in range(size):
        value = next_rand()
        value = (value * next_rand()) & UINT32_MASK
        value = (value * next_rand()) & UINT32_MASK
        value = (value * next_rand()) & UINT32_MASK
        value ^= STATELESS_RECEIVE_CHECKSUM_XOR
        quotient = STATELESS_CHECKSUM_XOR // value
        values.append((value + quotient * 481) & UINT32_MASK)
    return tuple(values)


@dataclass(slots=True)
class ProtectionTableState:
    """Connection checksum table and the native send/receive cursor state."""

    table: tuple[int, ...]
    send_index: int
    receive_index: int

    @classmethod
    def from_seed(cls, seed: int) -> "ProtectionTableState":
        table = build_protection_table(seed)
        remainder = (seed & UINT32_MASK) % len(table)
        return cls(table, remainder * 0x0D, remainder * 0x11)

    def send_checksum(self, base_checksum: int) -> int:
        product = (self.send_index * (base_checksum & UINT32_MASK)) & UINT32_MASK
        slot = product % len(self.table)
        checksum = (base_checksum & UINT32_MASK) ^ self.table[slot]
        self.send_index = (self.send_index + 0x0D) & UINT32_MASK
        return checksum

    def receive_checksum(self, base_checksum: int) -> int:
        product = (self.receive_index * (base_checksum & UINT32_MASK)) & UINT32_MASK
        slot = product % len(self.table)
        checksum = (base_checksum & UINT32_MASK) ^ self.table[slot]
        self.receive_index = (self.receive_index + 0x11) & UINT32_MASK
        return checksum


@dataclass(frozen=True, slots=True)
class ProtectionNegotiation:
    """Values sent and consumed by the native protection-table handshake."""

    peer_ipv4: str
    peer_port: int
    connection_nonce: int

    @property
    def peer_component(self) -> int:
        address_sum = sum(_signed_byte(value) * 0x1D for value in self.peer_ipv4.encode("ascii"))
        return (address_sum + (self.peer_port & 0xFFFF) * 0x1F) & UINT32_MASK

    @property
    def table_seed(self) -> int:
        return (self.peer_component + (self.connection_nonce & UINT32_MASK) * 0x11) & UINT32_MASK

    def request_frame(self) -> Frame:
        return Frame(
            PROTECTION_REQUEST,
            self.peer_component ^ STATELESS_RECEIVE_CHECKSUM_XOR,
            (self.connection_nonce & UINT32_MASK) ^ STATELESS_CHECKSUM_XOR,
        )

    def table_state(self) -> ProtectionTableState:
        return ProtectionTableState.from_seed(self.table_seed)

    def accept_response(self, frame: Frame) -> ProtectionTableState:
        """Validate the 0x8002030e table-mode transition and return active state."""
        if frame.message_id != PROTECTION_RESPONSE:
            raise ProtocolError(
                f"expected protection response 0x{PROTECTION_RESPONSE:08x}; "
                f"received 0x{frame.message_id:08x}"
            )
        if frame.checksum is None:
            raise ProtocolError("protection response has no checksum")
        state = self.table_state()
        base = receive_checksum_base(
            frame.message_id,
            frame.parameter_1,
            frame.parameter_2,
            frame.payload,
        )
        expected = state.receive_checksum(base)
        if frame.checksum != expected:
            raise ProtocolError(
                f"invalid protection response checksum 0x{frame.checksum:08x}; "
                f"expected 0x{expected:08x}"
            )
        return state


@dataclass(frozen=True, slots=True)
class LoginConnectionBootstrap:
    """Ordered frames emitted after the native accept-policy callback succeeds."""

    peer_ipv4: str
    peer_port: int
    tick_milliseconds: int
    accepted_connection_count: int
    protection_enabled: bool

    @property
    def connection_nonce(self) -> int:
        return (
            (self.tick_milliseconds & UINT32_MASK)
            * (self.accepted_connection_count & UINT32_MASK)
        ) & UINT32_MASK

    @property
    def negotiation(self) -> ProtectionNegotiation:
        return ProtectionNegotiation(
            self.peer_ipv4,
            self.peer_port,
            self.connection_nonce,
        )

    def frames(self) -> tuple[Frame, ...]:
        frames = [Frame(CONNECTION_ANNOUNCEMENT, 0, LOGIN_SERVER_ROLE)]
        if self.protection_enabled:
            frames.append(self.negotiation.request_frame())
            frames = [self._stateless_protected(frame) for frame in frames]
        return tuple(frames)

    @staticmethod
    def _stateless_protected(frame: Frame) -> Frame:
        checksum = stateless_protected_checksum(
            frame.message_id,
            frame.parameter_1,
            frame.parameter_2,
            frame.payload,
        )
        return Frame(
            frame.message_id,
            frame.parameter_1,
            frame.parameter_2,
            frame.payload,
            checksum,
        )


class FrameDecoder:
    """Incrementally decode unprotected or protected transport frames."""

    def __init__(
        self,
        *,
        protected: bool = False,
        verify_stateless_checksum: bool = False,
        max_payload: int = DEFAULT_MAX_PAYLOAD,
    ):
        if verify_stateless_checksum and not protected:
            raise ValueError("checksum verification requires protected framing")
        self.protected = protected
        self.verify_stateless_checksum = verify_stateless_checksum
        self.max_payload = max_payload
        self._buffer = bytearray()

    @property
    def buffered_bytes(self) -> int:
        return len(self._buffer)

    def feed(self, data: bytes) -> list[Frame]:
        self._buffer.extend(data)
        frames: list[Frame] = []

        while len(self._buffer) >= HEADER_SIZE:
            magic, message_id, parameter_1, parameter_2, payload_size = HEADER.unpack_from(
                self._buffer
            )
            if magic != MAGIC:
                raise ProtocolError(
                    f"invalid frame magic 0x{magic:08x}; expected 0x{MAGIC:08x}"
                )
            if payload_size > self.max_payload:
                raise ProtocolError(
                    f"payload length {payload_size} exceeds limit {self.max_payload}"
                )

            checksum_size = 4 if self.protected else 0
            frame_size = HEADER_SIZE + payload_size + checksum_size
            if len(self._buffer) < frame_size:
                break

            payload_end = HEADER_SIZE + payload_size
            payload = bytes(self._buffer[HEADER_SIZE:payload_end])
            checksum = None
            if self.protected:
                checksum = struct.unpack_from("<I", self._buffer, payload_end)[0]
                if (
                    self.verify_stateless_checksum
                    and message_id != INITIAL_PROBE_REPLY
                ):
                    expected = stateless_receive_checksum(
                        message_id,
                        parameter_1,
                        parameter_2,
                        payload,
                    )
                    if checksum != expected:
                        raise ProtocolError(
                            f"invalid stateless checksum 0x{checksum:08x}; "
                            f"expected 0x{expected:08x}"
                        )
            frames.append(Frame(message_id, parameter_1, parameter_2, payload, checksum))
            del self._buffer[:frame_size]

        return frames


class NativeUnprotectedFrameDecoder:
    """Reproduce the unprotected parse loop at 0x004105d3."""

    def __init__(self, *, invalid_magic_window_configured: bool = False):
        self.invalid_magic_window_configured = invalid_magic_window_configured
        self.invalid_magic_count = 0
        self.invalid_magic_notifications = 0
        self._buffer = bytearray()

    @property
    def buffered_bytes(self) -> int:
        return len(self._buffer)

    def feed(self, data: bytes) -> list[Frame]:
        self._buffer.extend(data)
        frames: list[Frame] = []
        consumed = 0

        while len(self._buffer) - consumed >= HEADER_SIZE:
            magic, message_id, parameter_1, parameter_2, payload_size = HEADER.unpack_from(
                self._buffer, consumed
            )
            frame_size = HEADER_SIZE + payload_size
            available = len(self._buffer) - consumed
            if available < frame_size:
                break

            payload_start = consumed + HEADER_SIZE
            payload_end = payload_start + payload_size
            if magic == MAGIC:
                frames.append(
                    Frame(
                        message_id,
                        parameter_1,
                        parameter_2,
                        bytes(self._buffer[payload_start:payload_end]),
                    )
                )
            else:
                self.invalid_magic_count += 1
                if self.invalid_magic_window_configured:
                    self.invalid_magic_notifications += 1
            consumed += frame_size

        if consumed:
            del self._buffer[:consumed]
        return frames


class NativeProtectedFrameDecoder:
    """Reproduce the protected parse loop at 0x0041040b."""

    def __init__(
        self,
        *,
        protection_state: ProtectionTableState | None = None,
        table_mode_active: bool = False,
        invalid_magic_window_configured: bool = False,
    ):
        if table_mode_active and protection_state is None:
            raise ValueError("active table mode requires protection state")
        self.protection_state = protection_state
        self.table_mode_active = table_mode_active
        self.invalid_magic_window_configured = invalid_magic_window_configured
        self.invalid_magic_count = 0
        self.invalid_magic_notifications = 0
        self.checksum_mismatch_count = 0
        self._buffer = bytearray()

    @property
    def buffered_bytes(self) -> int:
        return len(self._buffer)

    def _table_checksum_without_advance(self, base_checksum: int) -> int | None:
        state = self.protection_state
        if state is None:
            return None
        product = (state.receive_index * (base_checksum & UINT32_MASK)) & UINT32_MASK
        slot = product % len(state.table)
        return (base_checksum & UINT32_MASK) ^ state.table[slot]

    def feed(self, data: bytes) -> list[Frame]:
        self._buffer.extend(data)
        frames: list[Frame] = []
        consumed = 0

        while len(self._buffer) - consumed >= HEADER_SIZE:
            magic, message_id, parameter_1, parameter_2, payload_size = HEADER.unpack_from(
                self._buffer, consumed
            )
            frame_size = HEADER_SIZE + payload_size + 4
            if len(self._buffer) - consumed < frame_size:
                break

            payload_start = consumed + HEADER_SIZE
            payload_end = payload_start + payload_size
            payload = bytes(self._buffer[payload_start:payload_end])
            checksum = struct.unpack_from("<I", self._buffer, payload_end)[0]
            accepted = False

            if magic != MAGIC:
                self.invalid_magic_count += 1
                if self.invalid_magic_window_configured:
                    self.invalid_magic_notifications += 1
            elif message_id == INITIAL_PROBE_REPLY:
                accepted = True
            else:
                base = receive_checksum_base(message_id, parameter_1, parameter_2, payload)
                if self.table_mode_active:
                    state = self.protection_state
                    assert state is not None
                    expected = state.receive_checksum(base)
                    accepted = checksum == expected
                else:
                    expected = base ^ STATELESS_RECEIVE_CHECKSUM_XOR
                    if checksum == expected:
                        accepted = True
                    else:
                        table_expected = self._table_checksum_without_advance(base)
                        if (
                            table_expected is not None
                            and checksum == table_expected
                            and message_id == PROTECTION_RESPONSE
                        ):
                            self.table_mode_active = True
                            self.protection_state.receive_index = (
                                self.protection_state.receive_index + 0x11
                            ) & UINT32_MASK
                            accepted = True
                if not accepted:
                    self.checksum_mismatch_count += 1

            if accepted:
                frames.append(Frame(message_id, parameter_1, parameter_2, payload, checksum))
            consumed += frame_size

        if consumed:
            del self._buffer[:consumed]
        return frames
