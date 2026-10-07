# Main.dll `CShell_MapObjectScreen` vtable slot +0x14

The mapped address point at `0x589A0F7C` is preceded by Complete Object Locator
`0x589AA258`. Its RTTI names `.?AVCShell_MapObjectScreen@@` and lists
`CNavyMapObjectScreen`, `CMapObjectScreen`, and `CScreen` as bases. Both fresh
Ghidra edge exports reference `FUN_588D2EE0` from cell `0x589A0F90`, exactly
slot `+0x14` from that address point. No direct code caller was found.

Fresh Ghidra body exports agree on one contiguous range
`[0x588D2EE0, 0x588D31A1)`: 705 bytes and 222 instructions. The method gates on
bit `0x01` at `this+0x24` and a nonzero field at `this+0x80`. It calls matched
helpers `FUN_5897CC90` and `FUN_5897CCA0` to derive a frame count, then builds a
drawing origin from receiver fields and the supplied position. For short value
3 at `this+0x1D8`, it advances `this+0x220` modulo 10 and under a global modulo-3
condition updates `this+0x1F8` and `this+0x264`; value 5 writes `0x96` to
`this+0x28`.

It calls matched frame helper `FUN_5873A5D0` with flag `0x101`, then loops over
derived positions and calls that helper with calculated coordinates and
widths. Finally it dispatches through the object at `this+0x4C`, vtable slot
`+0x14`, forwarding the three supplied drawing arguments.

All six direct callees are byte-verified. The receiver fields, global values,
frame-count helper's floating-point contract, short values 3 and 5, draw flag,
and final virtual callback contract remain unresolved. No emulator rendering
test was performed. The emitted source preserves the exact x86 instruction
stream and is not recovered high-level C++.
