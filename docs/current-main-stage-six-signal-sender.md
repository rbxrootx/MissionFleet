# Current Main stage-six signal sender

Verified `FUN_5875CD10` tail-jumps to `FUN_587BA550` when the active global
object pointer matches the conditional forwarder's receiver fields. The
forwarding conditions and the stage-6 callers are recorded in
[the conditional-forwarder notes](current-main-ship-map-conditional-forwarder.md).

`FUN_587BA550` pushes five zero values and literal `0x80011000`, then calls
verified outbound record sender `FUN_58970C70` with ECX still holding the
context loaded by `FUN_5875CD10`. The sender's `ret 0x18` cleans those six
arguments, after which the thunk returns. The sender contract makes these
zeros the two extra values, null payload pointer, payload length, and flags.
The local [login-protocol notes](login-protocol.md) record that message
`0x80011000` requires payload length to equal its first supplied value times
`0x38`; here both are zero, so this call sends no payload. The protocol purpose
and visible effect remain unknown. The sender's behavior and transport
evidence are documented in
[the network-sender notes](current-main-network-sender.md).

The indexed body is 21 bytes, from `0x587BA550` through the `ret` at
`0x587BA564`; the next indexed function starts at `0x587BA570`. ObjDiff 3.8.0
verifies the body and its single call target at 100.0%. No client, emulator, or
server round-trip test was performed. The emitted instruction stream is in
[`FUN_587ba550.cpp`](../src/client-current/Main/FUN_587ba550.cpp).
