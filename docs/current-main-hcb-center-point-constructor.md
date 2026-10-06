# Current Main `CHCB_CenterPoint` constructor

`FUN_587808a0` is a constructor for `CHCB_CenterPoint`: Ghidra's decompilation
stores `CHCB_CenterPoint::vftable` at the start of the object, and its direct
caller, `FUN_58787400`, allocates `0xDC` bytes before calling it. The caller
references this constructor at `0x5878785D` and `0x58787AFB`.
The caller's full resource-selection and child-initialization path is recorded
in [the `FUN_58787400` evidence](current-main-58787400-hcb-child-initializer.md).

The caller loads `.\\SPR\\HCB.spr`, `.\\SPR\\HCBEFF.spr`, and
`.\\SPR\\HCBSND.spr`. It builds a pointer list at receiver offset `+0x910`
and stores the constructed objects there. The constructor selects indexed
sprite-bundle and sprite-data entries according to numeric mode values,
initializes their child flags and coordinates, then allocates and clears a
20-by-20 buffer and calls `FUN_5876c7e0` with dimensions `20`, `20`, and mode
`2`. These are direct observations from the decompiled body; the meaning of
the asset prefix and mode values is not established.

The matched Ghidra body consists of `587808A0..58780A7C` (477 bytes) and
`58780A80..58782465` (6,630 bytes), totaling 7,107 bytes. The three bytes
between the ranges are not instructions or owned by a function. The
unconditional jump at `58780A7B` targets `58780A80`, where the second range
begins. The local MSVC/ObjDiff verifier reports an exact match for all 7,107
bytes and checks 222 mapped operands.

The constructor's exact resource-table semantics, mode taxonomy, list
consumers, and runtime appearance remain unresolved. This validates the
compiled bytes against the captured installed `Main.dll`; it does not validate
the effect visually in the emulator.
