# `FUN_587a6fb0`: ship-map summary aggregation refresh

Fresh Ghidra evidence records exactly two direct callers, both matched
byte-for-byte: `FUN_588DEB30` at `0x588DF125` and `FUN_588E5150` at
`0x588E6369`. Both load ECX from `[0x58A2459C+0x20C9C]`, pass no stack
arguments, and reach the routine in their ship-map update path.

Ghidra confirms one contiguous 339-byte body,
`[0x587A6FB0,0x587A7103)`, ending in `ret`. It reads the current object from
`[0x58A247F8+4]` and scans the count at object `+0x141C`. It processes
non-null entries at `+0xE8C+i*4` whose first byte is 5 or 6. For each, it reads
the corresponding child at receiver `+8+i*4`; when child `+0xF8` equals
`0x40000000`, it calls `FUN_58853A00(i, child+0x9C-child+0x98)`. It then
aggregates the maximum child `+0xAC` values into six local values, with bucket
selection based on the current object's byte arrays at `+0x21C` and `+0x1FC`.
For entries whose `+0x1FC` byte is zero, it also stores child `+0xA8` into one
of the first two values. Finally, it passes all six values to
`FUN_58853A30`.

Calling this a summary aggregation is inferred from the six collected values
and the final helper call. The byte-array categories, bucket meanings, entry
and child field semantics, and effects of the two helpers remain unknown.
Ghidra shows no null check before using the selected child; the invariant that
keeps that pointer populated is not established. No runtime/emulator test has
been performed.
