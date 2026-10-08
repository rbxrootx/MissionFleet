# Installed Main.dll scene-update object-state helper

`FUN_5873B6A0` is an object-state helper reached from the byte-matched update
function `FUN_588E3AE0` at `0x588E3DCF`. A fresh read-only Ghidra export locates
the complete half-open body `[0x5873B6A0, 0x5873B946)` (Ghidra's inclusive end
address is `0x5873B945`): one range, 678 instruction bytes, and 174
instructions. The incoming reference export names the same caller and call
site.

The helper selects a shared interface pointer from `0x58A245C4 + 0x9C` or
`+0xA0`. Its zero-state path clears fields at `this + 0xBE` and `this + 0x2D6`.
For the observed state-byte and `this + 0x2CC` combinations, it copies either
45 dwords from `FUN_58778E20` into `this + 0x16C` or 43 dwords from
`FUN_58778DC0` into `this + 0xC0`. Gated paths query interface slot `+0x2C`
and dispatch through slot `+0x34`; the tail calls `FUN_58907360` with data from
`this + 0x228` or `this + 0x2D6`.

Fresh Ghidra edges and the fixed mapped call operands agree on all nine direct
calls: two to `FUN_58778E20`, five to `FUN_58778DC0`, and two to
`FUN_58907360`. Each destination already has a byte-identical verification
record. The source in `src/client-current/Main/FUN_5873b6a0.cpp` emits the exact
mapped instruction stream; the pinned `clang-cl`/objdiff check reports 678 of
678 bytes identical.

The shared interface type, meaning of the state fields and copied blocks, and
contracts and runtime targets of the indirect callbacks remain unknown. The
exact-byte match confirms the ported machine code, while those semantic names
remain open.
