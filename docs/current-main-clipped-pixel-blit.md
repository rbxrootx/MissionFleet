# Current Main clipped pixel blit and compositing routine

`FUN_5896f3e0` occupies 2,640 bytes in two discontiguous ranges in the captured
current-client `Main.dll`. The source preserves both Ghidra-owned ranges and
excludes the gap. ObjDiff 3.8.0 matches the ranges and checks 113 mapped
operands.

## Evidence from the original code

Ghidra's pseudocode clips a source rectangle against dimensions at
`param_1 + 0x1C` and `param_1 + 0x20`, adjusting destination coordinates when
the source origin is negative. For `param_9 == 0x100` and `param_10 == 0`, it
dispatches a rectangle operation through a backend object's virtual function
at `+0x14`. Other cases obtain source and destination row pitches and pixel
buffers, then process rows in packed channel-sized groups using masks at
`DAT_58A284DC` and `DAT_58A284E4` and per-channel arithmetic. This identifies
both a backend copy route and a software pixel-composition route in the same
function.

Ghidra records a data reference at `0x589A2C48`; the captured mapped image
stores `0x5896F3E0` at that address, followed by other executable addresses.
That supports a dispatch-table entry, but does not establish the owning class.

## Uncertainties

The dispatch table and class, pixel format, coordinate parameter names,
`param_9`/`param_10` meanings, alternative blend modes, and runtime callers have
not been identified. The source is an exact machine-code representation, not a
readable high-level renderer port. No emulator visual test was performed.
