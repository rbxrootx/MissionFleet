# Installed Core.dll client entry and window setup

`WinMain` (`0x5856E530`) selects one of two startup layouts using the result
of `0x584C55A0`, prepares a string and geometry through `0x58521FF0`, and calls
`0x5882DD60` from either branch. The call sites are `0x5856E783` and
`0x5856E816`. Ghidra shows the first layout centered around `0x400` by
`0x302` dimensions and the second at origin with `0x400` by `0x300` dimensions.
After successful setup, `WinMain` invokes registered callbacks on the returned
context and continues into `0x5882E060` and subsequent startup routines.

`0x5882DD60` coordinates registered window/context callbacks, optional setup
data, geometry adjustments for modes other than 10, and creation of three
helper objects. On success it stores the main context at `0x58965F1C`, saves a
large `0x40220`-byte object at `0x589660D0`, and calls `0x5856E240`.
`0x5856E240` initializes globals and callbacks, allocates a `0x74`-byte helper,
constructs the resource scene through `0x5857FE50`, stores that scene at
`0x58962228`, calls three setup helpers, then invokes its virtual slot `+0x04`.
The known constructor at `0x5857FE50` initializes the resource screen described
in [the resource-screen construction notes](current-core-resource-screen-construction.md).

This establishes a static startup-to-resource-screen path from `WinMain` through
the window/context setup into the resource-scene constructor. It does not prove
that the callbacks complete successfully or that a frame is drawn at runtime.
The callback implementations, allocated-object types, global meanings, and
virtual-slot behavior are not fully recovered. There is also a Ghidra signature
discrepancy: `WinMain` decompiles the calls to `0x5882DD60` with four apparent
arguments, while the callee decompiles with eleven parameters. The parameter and
register mapping is therefore left unresolved.

Both functions match the hash-pinned installed Core image at 100% under VC6 SP5
and objdiff 3.8.0: `0x5856E240` (353 bytes) and `0x5882DD60` (760 bytes), for
1,113 exact bytes. The verifier checked the recorded relative and absolute
operand targets in these spans.
