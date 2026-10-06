# Current Main HCB resource and child initializer

`FUN_58787400` is the HCB resource and child initializer called by the
byte-matched `FUN_58800360` at `0x58800BB5` and `0x58800C2B`. The function is
three Ghidra body ranges: `0x58787400..0x58787819` (1,049 bytes),
`0x58787820..0x58787AAF` (655 bytes), and `0x58787AB0..0x58787B6D`
(189 bytes), totaling 1,893 instruction bytes. The 7-byte and 1-byte gaps
between those ranges are excluded alignment bytes. It calls the existing
`CHCB_CenterPoint` constructor
[`FUN_587808A0`](current-main-hcb-center-point-constructor.md) at
`0x5878785D` and `0x58787AFB`.

The function loads `.\\SPR\\HCB.spr`, `.\\SPR\\HCBEFF.spr`, and
`.\\SPR\\HCBSND.spr` using `FUN_588F3D70`. It then branches on the short
value at `[0x58A245A8+0x204]`. For value `0x0F`, it initializes receiver
fields, writes a set of fixed coordinate pairs, allocates a pointer list at
`+0x910`, and creates child objects of size `0xDC` through
`FUN_587808A0`. The loop also conditionally calls `FUN_58902F50` and
`FUN_58902EE0`, calls `FUN_58903290` with derived positions, and attaches
additional global-table entries to child fields. For other values, it scans
records at `0x589BAAB0` with stride `0x742` until `0x589C2D54`, selects the
record matching `0x58A0ADD0`, then reads a child count and coordinate pairs
from that record before constructing the children.

The local pinned clang-cl/ObjDiff pipeline compares each of the three emitted
body ranges separately with the captured installed `Main.dll`. All 1,893
instruction bytes match, and 47 mapped operand targets are checked. The
emitted source is an instruction-level byte stream, so this result validates
the code bytes and does not establish that the initializer runs correctly in
the emulator.

The asset roles, table schema, global field meanings, coordinate units, and
meaning of child value `499` remain unknown. There is also a count discrepancy
to resolve: the `0x0F` path allocates `0x18` bytes for the pointer list, while
the decompiled loop appears to write seven entries. No runtime test has been
performed.
