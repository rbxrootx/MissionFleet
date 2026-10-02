# Current Main outbound record sender

`FUN_58970c70` is a transport helper in the installed current `Main.dll`
capture. Ghidra assigns one contiguous body, `0x58970C70..0x58970F0E`, totaling
671 bytes. The body now matches the locally captured mapped image at 100.0%
under objdiff 3.8.0, with 29 operand targets audited.

## Evidence from the mapped client

Ghidra references show calls from the two `FUN_58871de0` sites at
`0x58871E9D` and `0x58871F29`, and four sites in `FUN_587bb700` at
`0x587BC8EE`, `0x587BC907`, `0x587BC920`, and `0x587C175D`. The first caller
passes literal `0x80011035` on two paths, connecting the prior input/control
trace to this sender.

The indirect function pointers have stronger identification than their Ghidra
`DAT_` labels suggest. The current Main PE import table names `WSASend`,
`WSAGetLastError`, `shutdown`, and `closesocket`. In the mapped capture, the
pointer values at `0x5898C444`, `0x5898C448`, `0x5898C454`, and `0x5898C458`
match the resolved IAT entries for those four imports at `0x58D69010`,
`0x58D69014`, `0x58D69020`, and `0x58D69024` respectively.

The function returns zero immediately when the context's DWORD at `+4` is
`-1`. It constructs a 20-byte header with five DWORDs: marker `0x01020304`,
the message value, two caller-supplied values, and the payload length. When
context DWORD `+0x44` is zero, it submits the header and optional payload as
two `WSABUF` entries. Otherwise it builds a checksum and submits the header,
optional payload, and checksum as two or three entries. It passes context
`+8` as the overlapped-operation pointer and the caller's flags to `WSASend`.

For the checksum path, message `0x8002000F` uses that message value directly.
Other messages use a weighted byte loop over the local header-building region
and then over each payload byte. The loop weights header-region bytes by
`(signed_byte + 0x0D) * index * 0x0B` and payload bytes by
`(signed_byte + 0x1D) * index * 7`. It then either XORs `0x7C8BA106` when
context DWORD `+0x4C` is zero, or mixes through the table addressed by context
`+0x40`, advancing the index at `+0x58` by `0x11`.

If `WSASend` returns `-1`, the function calls `WSAGetLastError`; value
`0x3E5` follows the accepted pending-I/O path. Other errors return zero. In the
checksum mode, when context `+0x30` is nonzero and the socket remains valid,
the error path calls a virtual method at `+0x10`, shuts down and closes the
socket, calls `FUN_58971480`, then sets the socket field to `-1` and clears
`+0x30`.

## Limits

The 20-byte header layout and import identities are supported by mapped
instructions and PE import data. Context fields, checksum purpose and
compatibility, individual message schemas, and overlapped-operation lifetime
remain unresolved. The local capture contains no live packet comparison, so
the observed wire construction has not yet been validated against a server.

The exact emitted x86 body is in
[`FUN_58970c70.cpp`](../src/client-current/Main/FUN_58970c70.cpp); source hash,
compiler flags, and operand checks are pinned in
`config/NF2_2026/client-verifications.json`.
