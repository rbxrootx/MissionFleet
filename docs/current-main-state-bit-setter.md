# Current Main shared state-bit setter

`FUN_5873A540` is a 40-byte helper directly called by five verified functions:
`FUN_5874FA60`, `FUN_58782CF0`, `FUN_587BB700`, `FUN_587DEB30`, and
`FUN_587E3080`. Several callsites pass zero and one, including repeated calls
within `FUN_5874FA60` and `FUN_587DEB30`.

The helper reads the low bit of its stack argument, clears mask `0x4` from the
16-bit word at receiver offset `+0x24`, then ORs in the low-bit value shifted
left by two. This assigns that one flag from a Boolean-like argument while
preserving every other bit in the word. It returns with `ret 4`.

The bit's semantic name and visible effect remain unknown. The reconstruction
at `src/client-current/Main/FUN_5873a540.cpp` matches the complete indexed
extent; objdiff 3.8.0 confirms 40/40 bytes with zero relocations. No
original-client runtime test was performed.
