# Current Main.dll guarded chat-message dispatch

`FUN_587B8110` first calls `FUN_587A2D40` with the text at the third stack
argument `+0x30` and a length derived from the fourth argument minus `0x30`.
A nonzero filter result returns 0. Otherwise it calls `FUN_587B7BD0` with the
fifth argument; if that returns zero, the function skips the send and returns
1.

When the validator returns nonzero, the helper packs the low words of stack
arguments 1 and 2 into one DWORD. It derives an extra `0x10000` flag when
global pointer `0x58A24580` equals either `0x58A245A8` or `0x58A2459C`, then
sends message selector `0x80020A00` through `FUN_58970C70` with the observed
record and scalar arguments. Verified callers `FUN_587FC9C0` and
`FUN_58890110` use global object `0x58A2458C` as the receiver.

The input schemas, host filter policy, validator contract, extra flag meaning,
and protocol or user-visible semantics remain unresolved.

The complete 142-byte body matches mapped `Main.dll` under objdiff 3.8.0;
all seven mapped operand targets were checked. No runtime client or emulator
test was performed.
