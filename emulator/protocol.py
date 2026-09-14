"""NavyFIELD server transport framing recovered from the 2.062 login server."""

from __future__ import annotations

from dataclasses import dataclass
import struct


MAGIC = 0x01020304
HEADER = struct.Struct("<IIIII")
HEADER_SIZE = HEADER.size
DEFAULT_LOGIN_PORT = 0x1F4A  # 8010 in the recovered login-server constructor.
DEFAULT_MAX_PAYLOAD = 8 * 1024 * 1024


class ProtocolError(ValueError):
    """Raised when a byte stream cannot be a NavyFIELD transport frame."""


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


class FrameDecoder:
    """Incrementally decode unprotected or protected transport frames."""

    def __init__(self, *, protected: bool = False, max_payload: int = DEFAULT_MAX_PAYLOAD):
        self.protected = protected
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
            frames.append(Frame(message_id, parameter_1, parameter_2, payload, checksum))
            del self._buffer[:frame_size]

        return frames
