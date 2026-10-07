# Main.dll `CSantaAircraft` vtable slot +0x58

Fresh Ghidra body exports `58758ee0` and `587cef70` agree on one contiguous
range, `[0x588D2EE0, 0x588D31A1)`: 705 bytes and 222 instructions. A separate
read-only Ghidra run confirms the same full extent and six direct calls. Both
edge exports reference the function from cell `0x589A0F90`, slot `+0x58` in the
RTTI-identified `.?AVCSantaAircraft@@` vtable at `0x589A0F38`. The mapped cell
contains `0x588D2EE0`, and matched constructor `FUN_588D2480` installs this
table. No direct code caller was found.

The method gates on bit `0x01` at `this+0x24` and a nonzero field at `this+0x80`.
Ghidra shows it calling byte-matched `FUN_5897CC90` and `FUN_5897CCA0` twice
each, then using the returned value with `DAT_58A244BC` to derive a frame
count. It combines the supplied position with receiver fields `+0x04`, `+0x08`,
`+0x0C`, and `+0x10` to form a drawing origin. For short value 3 at `this+0x1D8`,
it advances `this+0x220` modulo 10 and, under a global modulo-3 condition,
updates `this+0x1F8` and `this+0x264`. For short value 5, it writes `0x96` to
`this+0x28`.

It calls byte-matched `FUN_5873A5D0` with flag `0x101`, then loops over the
derived frame count and calls the same helper with calculated positions and
widths. The matched helper selects a frame from its receiver's frame table,
adjusts the supplied coordinates, and calls `FUN_58903D60`. The method finishes
by calling virtual slot `+0x14` on the object at `this+0x4C`, forwarding the
three supplied drawing arguments.

All six direct callees are byte-verified. The meaning and units of the receiver
fields, global values, frame-count helper's floating-point contract, short
values 3 and 5, draw flag `0x101`, and final virtual callback remain unresolved.
No runtime or emulator rendering test was performed. The emitted source
preserves the exact x86 instruction stream; it is not recovered high-level C++.
