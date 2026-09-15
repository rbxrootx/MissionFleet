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

This layout comes directly from the send routine at `0x00410000`. Its normal
path passes two buffers to `WSASend`: the 20-byte header followed by the payload.
Once the connection enables protected mode, a four-byte checksum follows the
payload.

The stateless protected checksum is now reconstructed from `0x00410000`. Header
bytes use signed-byte arithmetic `(byte + 7) * index * 0x1d`; payload bytes use
`(byte + 0xb) * index * 0xd`. The 32-bit sum is XORed with `0xf3a91cd0`.
Message `0x8001000f` is explicitly exempt and carries checksum zero. The server
later substitutes a connection-specific table value and advances an index by
13; the table construction, receive-side validation, and exact mode transition
are separate from this send path.

The receive routine at `0x00410340` waits for `20 + payload_length + 4` bytes in
protected mode. Its stateless checksum uses signed header bytes with
`(byte + 0xd) * index * 0xb`, signed payload bytes with
`(byte + 0x1d) * index * 7`, and XOR seed `0x7c8ba106`. A
`0x8002000f` probe reply bypasses checksum comparison. Accepted frames are
dispatched and removed from the front of the receive buffer; complete following
frames are processed in the same pass.

## Connection checksum table

`0x00410e40` allocates a 2,048-entry table and calls its generator at
`0x00411720` with a connection-derived seed. The generator uses the Microsoft C
runtime sequence `state = state * 0x343fd + 0x269ec3`, returning
`(state >> 16) & 0x7fff`. Four consecutive results are multiplied modulo 32
bits for every entry. That value is XORed with `0x7c8ba106`; the stored entry is
then `value + 481 * (0xf3a91cd0 / value)`, also modulo 32 bits.

Both checksum directions use the table, but keep independent cursors. Their
initial values are `(seed % 2048) * 13` for sending and
`(seed % 2048) * 17` for receiving. A checksum uses table slot
`(cursor * base_checksum) % 2048`, XORs that entry with the base checksum, and
then advances its cursor by 13 or 17 respectively.

## Protected-mode negotiation

The accept path immediately before `0x00411010` stores
`timeGetTime() * accepted_connection_count` in the connection field at offset
`0xd4`; this is the connection nonce. `0x00411010` obtains the peer address with
Winsock `getpeername`, formats its IPv4 address with `inet_ntoa`, and converts
the peer port with `ntohs`. It computes:

```text
peer_component = sum(signed_ipv4_text_byte * 29) + peer_port * 31
table_seed     = peer_component + connection_nonce * 17
```

All arithmetic wraps to 32 bits. The server sends message `0x8002030d` with
parameter 1 `peer_component ^ 0x7c8ba106`, parameter 2
`connection_nonce ^ 0xf3a91cd0`, and no payload. It then builds the checksum
table from `table_seed`. The receive routine recognizes `0x8002030e` as the
only response allowed to activate receive table mode after its table checksum
matches. A wrong message ID, absent checksum, or mismatched checksum does not
activate the mode.

## Accepted-connection bootstrap

The accept routine at `0x0040f560` configures 64 KiB send and 32 KiB receive
socket buffers, allocates a connection object, and invokes the configured
accept-policy callback. Only when that callback returns `1` does it continue.
It increments the accepted-connection count and sends `0x80010109` with
parameters `0` and `0x8002`, then marks the connection active and starts its
receive operation. If protection is enabled at connection offset `0xe0`, it
computes the nonce, sends `0x8002030d`, and initializes protection state.

The exact successful outbound order is therefore:

1. `0x80010109` server-role announcement.
2. Start asynchronous receive.
3. If configured, `0x8002030d` protection negotiation.

Before table initialization, protected sends use the stateless checksum path,
so both outbound frames carry stateless checksums when protection is enabled.
If the accept-policy callback rejects the connection, the routine follows its
`0x80000003` rejection/close path instead; the policy itself is outside this
transport subsystem.

## Connection admission policy

The server-level gates surrounding that callback are reconstructed from
`0x0040f560`. Counts are compared as unsigned 32-bit values. Socket setup is
attempted while `active_count <= maximum_count`; consequently, equality is an
accepted boundary and a successful connection can increment the count to one
above the configured maximum. A count already greater than the maximum closes
the accepted socket without sending a protocol frame. Socket-configuration and
connection-allocation failures use the same silent-close class.

After setup and allocation, the routine checks the server accept-enabled flag
(initialized to `1` by `0x0040f050`) and invokes a virtual policy callback. A
successful admission requires the callback to return exactly `1`. A disabled
server or any other callback result sends `0x80000003` with parameters `0` and
`0x8002`, then shuts down and removes the connection. Only success increments
the active count and enters the accepted-connection bootstrap.

The concrete callback implementation remains unresolved. The sentinel object
stored at server offset `0xc28` is constructed through a virtual allocator, and
the apparent vtable target recovered at `0x0043d45c` has an incompatible
three-argument return convention. This may indicate a secondary vtable or a
later vptr replacement. The emulator therefore accepts the callback result as
an explicit policy input; it does not invent account, address, or rate-limit
rules absent from the original-code evidence.

## Connection teardown and count semantics

Routine `0x0040fef0` calls an optional pre-close hook before inspecting the
socket. For an open socket it optionally posts window message `0x46a`, clears
the window slot, removes the socket from its registry when attached,
calls `closesocket`, writes the `-1` socket sentinel, destroys pending I/O state,
and resets the pending count, connection nonce, checksum cursors, and receive
table state. Calling it again skips that socket-specific block, making the field
transition idempotent.

An optional owner-removal hook runs after transport cleanup and assumes
responsibility for object lifetime. Without that hook, the routine decrements
the global allocated-object count and invokes the connection destructor. The
owner hook's list mutation is described below.

### Connection manager membership

The owner hook is the intrusive list manager implemented by `0x00411320` and
`0x004113e0`. Its fields are a maximum count at manager offset `0x10c`, current
count at `0x110`, head at `0x114`, and tail at `0x118`. Connections store their
owner at `0x4c`, previous link at `0x54`, next link at `0x58`, and last-activity
tick at `0x64`.

Insertion rejects a null connection, a full manager, or a connection already
owned by that manager. Maximum `-1` means unlimited. A connection owned by a
different manager is first removed through that manager's virtual removal hook,
then appended at the new tail. The routine writes `timeGetTime()` to the activity
field, increments the count, optionally posts window message `0x46b`, and
returns `1`.

Because transfer invokes the old manager's complete removal routine first, a
configured old manager posts its removal notification before the new manager
posts its insertion notification.

Removal succeeds only when the connection names that manager as owner. It
repairs the head, tail, and adjacent links for every list position, decrements
the manager count, clears all three connection membership pointers, optionally
posts the same `0x46b` notification, and returns `1`. Null, foreign, duplicate,
and capacity failures return `0` without mutation.

## Idle probe and timeout state machine

`0x00411520` samples `timeGetTime()` once per manager pass and computes each
active connection's elapsed time with wrapping unsigned 32-bit subtraction from
its activity tick at offset `0x64`. Both comparisons are strict. When elapsed
time exceeds the manager timeout at `0xc74`, timeout processing takes priority:
two 64-bit statistics counters are incremented when a statistics owner exists,
window message `0x4cc` is posted when configured, and `0x0040ffc0` requests the
connection shutdown.

Otherwise, when the one-shot flag at connection offset `0x0c` is nonzero and
elapsed time exceeds half the timeout, the routine clears that flag and sends
`0x8001000f` with zero parameters and no payload. Equality at either threshold
does nothing. Tick wraparound is intentional. The half-timeout calculation uses
signed division truncated toward zero before its result is compared as unsigned.

`0x0040ffc0` acts only when both the registry-owner field at `0x48` and active
field at `0xac` are nonzero. It clears the active field, calls `shutdown(socket,
1)`, and queues socket event `0x20`; final destruction remains deferred to the
normal event/teardown path. `0x004114f0` applies that guarded close request to
every member in the manager.

The receive completion routine starts at `0x004102c0`. At entry it calls
`timeGetTime()`, stores the result at `+0x64`, and writes `1` to the one-shot
field at `+0x0c`. Only afterward does it query the overlapped receive result and
branch on transferred bytes or errors. Thus every receive completion refreshes
activity and rearms the halfway probe before later success or failure handling;
this ordering is preserved by `record_receive_completion`.

### Receive-buffer sizing

The same routine at `0x004102c0` is the receive pump rather than an overlapped
completion callback. After refreshing activity it calls Winsock `ioctlsocket`
with `FIONREAD` (`0x4004667f`). Zero available bytes returns without issuing a
receive. Otherwise it calculates `required = buffered + available` with 32-bit
arithmetic. When required exceeds capacity, it reallocates to exactly required
bytes and preserves the buffered prefix.

When capacity is strictly greater than 32 KiB while required is strictly below
16 KiB, it instead reallocates to exactly 32 KiB and preserves the prefix.
Equality at either threshold does not shrink. `WSARecv` receives into the tail
beginning at `buffer + buffered`, with length `capacity - buffered`. Bytes
reported immediately are added to the buffered count before parsing.

The subsequent protected parse loop and the `WSARecv == -1` error accounting
remain separate from this buffer-sizing subsystem.

### Protected frame parsing

The protected loop at `0x0041040b` requires `20 + payload_length + 4` bytes.
Invalid magic follows the same `0x4c9` notification and whole-frame consumption
rule as unprotected parsing. Message `0x8002000f` bypasses all checksum work and
does not advance the receive-table cursor.

Before table mode is active, the parser first compares the stateless receive
checksum. On mismatch it retries against the current table cursor without
advancing it. A matching table checksum activates table mode only when the
message is `0x8002030e`; activation then advances the cursor by 17 and dispatches
the frame. A table match on any other message is still rejected and leaves the
cursor unchanged.

Once table mode is active, every non-exempt complete frame computes its expected
table checksum and advances the cursor by 17 before comparison, including a
frame whose checksum ultimately fails. Checksum failures invoke the native
error hook, consume the frame, and continue parsing later buffered frames.
`NativeProtectedFrameDecoder` preserves these transition and consumption rules.

### `WSARecv` result and failure accounting

After posting `WSARecv`, `0x004102c0` treats only the exact return value `-1` as
failure. Every other return enters parsing after adding the returned byte count
to the buffered count, and the function ultimately returns that byte count.

The failure branch at `0x00410691` does not call `WSAGetLastError`, so it does
not exempt `WSA_IO_PENDING` or classify any other Winsock status. When a server
statistics owner exists, it increments two separate 64-bit counters at offsets
`0xbe0` and `0xc18`, with normal carry into `0xbe4` and `0xc1c`. When an error
window slot is configured it posts message `0x4ca`. It leaves buffered bytes
unchanged, skips parsing, and returns `-1`. `apply_wsarecv_result` reproduces
this exact success/failure split and counter wrapping.

### Connection socket-event dispatch

Routine `0x00410700` recognizes exactly three socket-event values. Event `1`
calls the virtual read callback at vtable offset `+8` and returns its result
unchanged. Event `0x10` calls `WSAAsyncSelect(socket, window, 0x464, 0x23)`.
Any result except exact `-1` sets the active field at connection offset `0xac`
to one, calls the virtual connected callback at `+0x0c`, and returns zero.

On exact `-1`, the connect path requests shutdown only when the registry owner
at `+0x48` and active field are both nonzero. It clears active, calls
`shutdown(socket, 1)`, and queues socket event `0x20`; otherwise it returns zero
without those mutations. Event `0x20` first calls the virtual close callback at
`+0x10`, then increments the two 64-bit owner counters at `+0xbd0` and `+0xc08`
with carry, and returns `-1`. Other event values return zero without dispatch.
`dispatch_socket_event` records these callback and state effects while leaving
the virtual callback bodies to their own subsystems. The close-counter owner is
a native precondition: the original routine dereferences it unconditionally
after the callback, so the model rejects a missing statistics owner rather than
inventing a null-safe path.

### Peer identity extraction

Routine `0x00410820` zeroes a 16-byte `sockaddr_in`, initializes its length to
16, and calls `getpeername` on the connection socket at offset `+4`. Only exact
return value `-1` is failure. Failure returns false without writing either
caller output. Every other result passes the two-byte network-order port through
`ntohs`, masks it to 16 bits, stores it through the port output, passes the IPv4
address to `inet_ntoa`, assigns that text to the caller string, and returns true.
`resolve_peer_identity` reproduces the success boundary, output preservation,
network byte order, and dotted-decimal address conversion.

### Unprotected frame parsing

The unprotected loop at `0x004105d3` waits for at least the 20-byte header, then
waits until `20 + payload_length` bytes are buffered. It imposes no recovered
payload-size ceiling. A valid `0x01020304` frame is offered to the manager
dispatch hook; the connection dispatch hook runs only when that hook is absent
or returns nonzero.

An invalid magic value does not close the connection and does not raise a parser
error. Once its declared payload is complete, the loop optionally posts window
message `0x4c9`, consumes the entire invalid frame, and continues with the next
buffered frame. After every complete frame it subtracts exactly `20 + payload`
and parses another frame immediately. An incomplete tail is moved to the start
of the accumulation buffer. `NativeUnprotectedFrameDecoder` reproduces these
framing, consumption, and compaction rules; higher-level dispatch remains with
the server.

Socket-registry removal is implemented by `0x0040f8b0`. It unlinks and frees a
matching hash-chain node when present, but reaches the same counter update even
when no matching node is found. If server field `+0xbb4` is nonzero, it decrements
that field by one. This confirms `+0xbb4` is an active-count field, though the
ordering permits a native edge case: a mapped connection rejected before its
success increment can still decrement an already nonzero server count during
teardown. The emulator model preserves this guarded decrement instead of
silently repairing the original behavior.

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

## Evidence boundary

The current subsystem is validated against these original-code facts:

The recovered login code region used for these observations has SHA-256
`03f7d0ef46eab39f155f5b3da9cdddec70648f17f80d2eb815aa362440eb56b2`
and memory base `0x00401000`. Its source packed stream is recorded as SHA-256
`29cbfa88be6a64991da744ca7867373aeb103bfae64d9b415f72ac709d22574f`.

- `0x00410000` builds five little-endian 32-bit header fields beginning with
  `0x01020304`, sends 20 header bytes, then sends `payload_length` bytes.
- Its protected path appends one four-byte checksum after the payload and uses
  the arithmetic described above while the connection state at offset `0xcc`
  is zero. The original instructions use `movsx` for both header and payload
  bytes, which is why values `0x80` through `0xff` are treated as negative.
- `0x0040b4f3` dispatches `0x8001000f` directly to a zero-parameter
  `0x8002000f` response.
- `0x00411520` periodically sends `0x8001000f`, confirming that this message is
  a connection liveness probe rather than credential authentication.
- `0x00410340` calls `WSARecv`, waits for the complete normal or protected frame,
  verifies magic, checks the stateless checksum unless the message is
  `0x8002000f`, dispatches it, compacts the buffer, and continues parsing.
- `0x00410700` dispatches read, connect, and close socket events, registers
  message `0x464` with mask `0x23`, and maintains two close counters.
- `0x00410820` resolves the connection peer into a dotted IPv4 string and a
  host-order 16-bit port while preserving both outputs on failure.

Uncertainties are intentionally bounded: the mismatch path can retry with a
connection table and only enables receive table mode for message `0x8002030e`,
but the response's parameter meanings remain unresolved. No credential request
opcode, authentication payload schema, or database result mapping is claimed by
this transport subsystem.
