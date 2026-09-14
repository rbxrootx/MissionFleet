"""Local capture endpoint for the first stock-client login handshake test."""

from __future__ import annotations

import argparse
import asyncio
from datetime import datetime, timezone
import json
from pathlib import Path
from typing import Any

from emulator.protocol import DEFAULT_LOGIN_PORT, Frame, FrameDecoder, ProtocolError


INITIAL_PROBE = 0x8001000F
INITIAL_PROBE_REPLY = 0x8002000F


def response_for_frame(frame: Frame) -> Frame | None:
    """Return only responses whose dispatch behavior is verified in the binary."""
    if frame.message_id == INITIAL_PROBE:
        return Frame(INITIAL_PROBE_REPLY, 0, 0)
    return None


def _event(kind: str, **values: Any) -> dict[str, Any]:
    return {
        "time": datetime.now(timezone.utc).isoformat(),
        "event": kind,
        **values,
    }


class CaptureLog:
    def __init__(self, path: Path | None):
        self.path = path

    def write(self, event: dict[str, Any]) -> None:
        line = json.dumps(event, ensure_ascii=True, separators=(",", ":"))
        print(line, flush=True)
        if self.path is not None:
            self.path.parent.mkdir(parents=True, exist_ok=True)
            with self.path.open("a", encoding="utf-8", newline="\n") as output:
                output.write(line + "\n")


async def _capture_client(
    reader: asyncio.StreamReader,
    writer: asyncio.StreamWriter,
    log: CaptureLog,
) -> None:
    peer = writer.get_extra_info("peername")
    peer_text = f"{peer[0]}:{peer[1]}" if peer else "unknown"
    decoder = FrameDecoder()
    log.write(_event("connected", peer=peer_text))
    try:
        while data := await reader.read(32768):
            log.write(_event("bytes", peer=peer_text, count=len(data), hex=data.hex()))
            try:
                frames = decoder.feed(data)
            except ProtocolError as error:
                log.write(_event("protocol_error", peer=peer_text, error=str(error)))
                break
            for frame in frames:
                log.write(
                    _event(
                        "frame",
                        peer=peer_text,
                        message_id=f"0x{frame.message_id:08x}",
                        parameter_1=f"0x{frame.parameter_1:08x}",
                        parameter_2=f"0x{frame.parameter_2:08x}",
                        payload_length=len(frame.payload),
                        payload_hex=frame.payload.hex(),
                    )
                )
                response = response_for_frame(frame)
                if response is not None:
                    encoded = response.encode()
                    writer.write(encoded)
                    await writer.drain()
                    log.write(
                        _event(
                            "sent_frame",
                            peer=peer_text,
                            message_id=f"0x{response.message_id:08x}",
                            parameter_1="0x00000000",
                            parameter_2="0x00000000",
                            payload_length=0,
                            hex=encoded.hex(),
                        )
                    )
    finally:
        log.write(_event("disconnected", peer=peer_text, buffered=decoder.buffered_bytes))
        writer.close()
        await writer.wait_closed()


async def create_server(
    host: str, port: int, log: CaptureLog
) -> asyncio.AbstractServer:
    return await asyncio.start_server(
        lambda reader, writer: _capture_client(reader, writer, log), host, port
    )


async def serve(host: str, port: int, capture: Path | None) -> None:
    log = CaptureLog(capture)
    server = await create_server(host, port, log)
    addresses = ", ".join(str(sock.getsockname()) for sock in server.sockets or ())
    log.write(_event("listening", addresses=addresses))
    async with server:
        await server.serve_forever()


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Capture and decode the stock client's first login-server frames."
    )
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=DEFAULT_LOGIN_PORT)
    parser.add_argument(
        "--capture",
        type=Path,
        default=Path("captures/login-handshake.jsonl"),
        help="append JSON Lines events here; pass an empty value to disable",
    )
    args = parser.parse_args()
    try:
        asyncio.run(serve(args.host, args.port, args.capture))
    except KeyboardInterrupt:
        pass


if __name__ == "__main__":
    main()
