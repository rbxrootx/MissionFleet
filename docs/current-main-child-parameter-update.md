# Current Main child-parameter update helper

`FUN_587B6020` is a 65-byte helper directly called by five verified functions:
`FUN_58853870`, `FUN_58853C20`, `FUN_5888A9C0`, `FUN_5888AA70`, and
`FUN_5888AFC0`. The first two contain repeated callsites. Callers pass two
values in addition to the receiver; those values vary across the captured
callsites, so their domain meaning is not assigned here.

The helper stores the first and second stack arguments at receiver offsets
`+0x6C` and `+0x70`, then writes `0x40000000` at `+0x5C`. When the pointer at
receiver `+0x74` is nonzero, it calls `FUN_587B7400` on that child with values
derived from receiver `+4` and `+8` (`+4 - 0x190` and `0x12C - +8`) and the
global value at `0x58A248F8`. It then returns with `ret 8`.

This records the observed stores and call contract. The receiver/child classes,
field units, purpose of the fixed value, and downstream visible behavior remain
unresolved. The source at `src/client-current/Main/FUN_587b6020.cpp` reproduces
the full extent; objdiff 3.8.0 confirms 65/65 bytes with two relocations
checked. No original-client runtime test was performed.
