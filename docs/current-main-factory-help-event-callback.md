# Current Main factory-help event callback

`FUN_58852d10` is a virtual callback in the `CPannelFactoryHelp` vtable at
`0x5899E8E0`, in slot `+0x18` (the pointer is at `0x5899E8F8`). The function
occupies one contiguous 80-byte range in the captured current-client
`Main.dll`.

## Evidence from the original code

The vtable places this callback beside `FUN_58853010`, the state-update method
in slot `+0x0C`. At entry, this method checks whether its second stack argument
is `2`. For that value, it scans 45 dword entries beginning at object offset
`+0x64`, in 15 groups of three. When an entry matches its first argument, it
calls `FUN_588504C0` with the group index and the word at `+0x276`, then clears
the dword at `+0x278`. It continues scanning and returns zero after the loop.
Other values skip the scan and also return zero.

ObjDiff 3.8.0 verifies all 80 bytes at 100.0% and resolves the function's call
to `FUN_588504C0`. Source compilation uses the pinned Clang-cl 19.1.4 compiler;
the body is emitted as explicit `_emit` machine bytes.

## Uncertainties

The event value, table keys, `FUN_588504C0` semantics, and fields at `+0x276`
and `+0x278` have no confirmed friendly names. No emulator test was performed.
