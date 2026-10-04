# Current Main.dll matching pointer-vector erase

`FUN_58835920` is a 236-byte helper in the hash-pinned installed-client
`Main.dll`. Verified callers are packet/message dispatcher `FUN_587BB700` and
event dispatcher `FUN_588C1650`. Both pass a pointer to a local text buffer and
set ECX to the same object reached through global `0x58A245B4`, offsets
`+0xDC` and `+0x160`.

The helper walks the receiver's active range from `+0x264` to `+0x268`, stepping
by four bytes. For each entry it calls comparator pointer `0x5898C1A4` with the
entry value and supplied pointer. On the first zero result it shifts the
remaining pointer entries left through `0x5897CC54`, subtracts four from the
end pointer at `+0x268`, and returns 1. An empty range or a full scan with no
match returns 0. The mapped function returns with `ret 4`.

All 236 bytes match at 100% under objdiff 3.8.0, with all 11 operand targets
checked. The container and element types, comparator contract, ownership rules,
and meaning of the removed text remain unknown. The callers' message branches
do not prove a user-visible operation. No runtime behavior test was performed.

The same two dispatchers call `FUN_5883B3B0` on an AX==3 path when the caller's
field at `+0x0C` is positive. This companion helper performs the same first
match erase against a different receiver range, `+0x228..+0x22C`; the helper
above uses `+0x264..+0x268`. Both receive local text buffers and use the same
comparator and shift callbacks. `FUN_5883B3B0` independently matches all 236
mapped bytes, including its 11 operand targets. The separate ranges' contents
and user-visible roles are unknown.
