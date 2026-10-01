# Archived 2062 client application-event dispatcher

`FUN_10048B60` is a 14,940-byte method in the mapped archived 2062
`Main.dll`. Its function boundary and instruction stream come from the local
runtime capture described in [client unpacking](client-unpacking.md#archived-2062-client-startup-capture).
The reconstructed source is byte-identical to that captured extent under
objdiff 3.8.0. This confirms instruction bytes, not the dispatcher’s complete
runtime contract.

Ghidra’s disassembly and decompilation show a high-level event dispatcher. It
checks a 16-bit `0x8000` class value at record offset `+0x6`, branches on the
event ID at `+0x4`, and consults a subcode at `+0xC` on relevant routes. Other
branches read payload and length-like values from fields beginning at `+0x8`
and `+0x10`; the function does not impose one uniform payload layout across
all event IDs. The code is downstream of message decoding and is not evidence
for the raw socket-frame parser.

Observed routes include `0x80000200` for active scene/window changes,
`0x80020112` and `0x80020113` for battle and room state transitions, and
`0x80020116` for result/statistics-like data. Several cases update shared state,
call scene/UI helpers, or forward internal event codes through
`FUN_1016BF50`. These labels describe the observed code paths; the semantic
meaning of most message IDs and the internal event queue contract remain
uncertain. The `0x80000003` case with subcode `0x8002` is consistent with the
rejection/close path in [the recovered login protocol](login-protocol.md), but
that server-side cross-reference is not proof that every client event meaning
matches.

The method has no direct code caller in the Ghidra reference listing. Its
address appears at `0x10175B44`, slot `+0x14` of the pointer table based at
`0x10175B30`. `FUN_10048A90` and `FUN_10048B10` install that table address as a
vptr, anchoring the method to a C++ virtual dispatch table. The constructor's
live instantiation path and class identity are not established. The method
usually returns `1` in the observed paths, but the host's interpretation of
that value is also unknown.

The byte match is recorded in
`config/NF2_2062/client-verifications.json`. It raises verified client
coverage by one function and 14,940 bytes; the behavioral notes above are
limited to evidence visible in the captured function and referenced table.
