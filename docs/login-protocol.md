# Login transport protocol

The recovered 2.062 login server uses a 20-byte little-endian transport header:

| Offset | Size | Meaning |
| ---: | ---: | --- |
| 0 | 4 | Magic `0x01020304` |
| 4 | 4 | Message ID |
| 8 | 4 | Message parameter 1 |
| 12 | 4 | Message parameter 2 |
| 16 | 4 | Payload length |
| 20 | variable | Payload |

This layout comes directly from the send routine at `0x00410000` and receive
loop at `0x00410340`. The normal receive path advances by 20 bytes plus the
payload length. Once the connection enables its protected mode, a four-byte
checksum follows the payload. The checksum algorithm and mode transition are
still being reconstructed, so the capture server starts in the normal mode.

The login server constructor initializes its TCP port to hexadecimal `0x1f4a`,
or decimal **8010**. Its bind/listen path is at `0x0040f800`.

Run the local capture endpoint with:

```powershell
python -m emulator.login_server
```

It binds to `127.0.0.1:8010`, prints connection and decoded frame events, and
appends the raw exchange to `captures/login-handshake.jsonl`.

The dispatcher at `0x0040b4f3` proves the first request/response pair. An
incoming `0x8001000f` frame receives `0x8002000f` with zero parameters and no
payload. The capture endpoint implements that exchange and leaves later
messages unanswered until their payload layouts are verified.
