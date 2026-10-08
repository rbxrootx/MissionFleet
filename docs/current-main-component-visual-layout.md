# Current Main.dll component visual-layout helper

`FUN_588BA330` is a 742-byte, 216-instruction function from the installed
2026 `Main.dll`. Its reconstructed instruction stream matches the mapped image
with ObjDiff 3.8.0 at 100%, including all 20 relocation checks. The recorded
body range is `0x588BA330..0x588BA615`; the body and call edges agree in the
independent fresh Ghidra exports `58758ee0` and `587cef70`, and a separate
targeted Ghidra run fully decoded all 742 bytes.

The byte-matched caller `FUN_587E3080` reaches this function at
`0x587E3981` and `0x587E3A3B`. The first call is under its `param_3 == 2` path:
the event parameter matches one of the caller's component pointers, the object
at receiver `+0xD78` passes the observed non-null and `+0x4C` sentinel checks,
receiver state `+0xCC4` is nonzero, the flags at `+0xCC0 + 4` do not equal
`0x40` under mask `0x3E0`, and `+0xCCC` is non-null. The caller then invokes
`FUN_5873A2E0` and calls this helper.

The second call sits in a scan of up to `0x1C` pointers beginning at receiver
`+0x504`. It requires the event parameter to match a child whose flag bit 0 is
set, a nonzero receiver-state field, and the same screen-flag exclusion. The
caller computes another bit from a value at screen `+0x268`, looks up an
optional per-child record, and calls the helper when the remaining state checks
allow the path. These are observed machine conditions; their product meanings
are not known.

Inside `FUN_588BA330`, the function copies two stored coordinates, clears the
low four bits on eight child-control flags, stores a global-backed pointer and
two arguments, and switches on the low byte of one argument. Cases `0`, `3`,
`5`, `6`, and `0xD` reposition selected children through `FUN_58903290` and
set their low flag bits. The other observed cases leave the children in the
cleared state. All fourteen direct calls reach the already byte-matched
`FUN_58903290`; the function ends by updating parent flags and setting bit
`0x100`.

The class identity, child-control names, stored field meanings, selector
meanings, and rendered result remain uncertain. This slice validates the
original bytes, static call boundaries, and control-state operations; it has
not yet been exercised in the live client or emulator.

The focused verifier is
[`tools/verify_current_main_component_visual_layout.py`](../tools/verify_current_main_component_visual_layout.py).
