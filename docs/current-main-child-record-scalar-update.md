# Current Main record-backed child scalar update

`FUN_587B0860` is an 85-byte helper in the pinned mapped `Main.dll`. Its full
instruction stream is preserved in
[`FUN_587b0860.cpp`](../src/client-current/Main/FUN_587b0860.cpp).

Both verified child-building paths call it between `FUN_587B0830` and
`FUN_587B0910`: the record-backed 32-slot builder `FUN_587A6220` and the
ship-map builder `FUN_588D84D0` at `0x588D8C4B`. Their Ghidra decompilations show
that all three values come from signed 16-bit fields in the selected record
tables; the compiled caller streams confirm the mapped helper calls.

The helper multiplies the three sign-extended inputs by 10. It stores the
first product at receiver `+0xB4`, the second at `+0xB0`, and the third at
`+0xC4`. When the first product is nonzero, it also writes `0x40000000` to
`+0xFC` and `100` to `+0xD4`; the zero case leaves those fields unchanged. It
stores `1` at `+0xC8` when the third product is signed-greater than the first,
and `0` otherwise. The helper ends with `ret 0xC` and has no mapped address
operands.

The three source record fields, receiver-field meanings, conditional state
transition, and visible/gameplay effect remain unresolved. This reconstruction
matches the mapped instruction stream and is tied to both callers; no emulator
runtime comparison has been performed.
