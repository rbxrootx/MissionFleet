# Current Main control-menu setup caller

Ghidra identifies `FUN_5878AD50` as the direct caller of the
`CPannelMainControl_MenuScreen` constructor `FUN_5888E5E0`. The mapped body is
252 bytes. The reconstruction matches all bytes under ObjDiff 3.8.0 and checks
16 mapped operand targets, using the pinned `clang-cl` 19.1.4 source compiler.

The function reads the pointer at `0x58A245C0`. If it is null, it requests
`0x650` bytes and calls the constructor with `(0, 0, 0x258, 0, 0, 0x40)`, then
stores the result back to that global. It next calls `FUN_5888D110` with
`0x58A0B450`, writes `0xFA0` to the constructed object at `+0x26`, and makes
conditional calls through fields at `+0x40` and `+0x30`. The observed return
value is one when the stored pointer is nonnull and zero otherwise.

The allocation size, constructor arguments, direct calls, field offsets, and
branches come from the captured Ghidra body and mapped instruction stream. The
containing class, global ownership, purpose of the `0xFA0` field value, child
callback meanings, and caller above this routine remain unresolved. No emulator
or visual test was performed.
