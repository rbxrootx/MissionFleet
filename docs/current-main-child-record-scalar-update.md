# Current Main record-backed child scalar setup

Three helpers form a shared scalar-setup sequence in the two verified child
builders `FUN_587A6220` and `FUN_588D84D0`. Their complete instruction streams
are preserved in [`FUN_587b0830.cpp`](../src/client-current/Main/FUN_587b0830.cpp),
[`FUN_587b0860.cpp`](../src/client-current/Main/FUN_587b0860.cpp), and
[`FUN_587b0910.cpp`](../src/client-current/Main/FUN_587b0910.cpp).

Both paths first call `FUN_587B0830` (`FUN_587A6220` at `0x587A6AC1`,
`FUN_588D84D0` at `0x588D8C21`). It multiplies its two sign-extended signed-short
inputs by 10 and stores them at receiver `+0xC0` and `+0xBC`.

They then call `FUN_587B0860` (`0x587A6AF3` and `0x588D8C4B`) with three
sign-extended signed-short record values. This helper multiplies all three by
10 and stores them at receiver `+0xB4`, `+0xB0`, and `+0xC4`. If the first
product is nonzero, it also writes `0x40000000` to `+0xFC` and `100` to `+0xD4`;
the zero case leaves those fields unchanged. It stores `1` at `+0xC8` when the
third product is signed-greater than the first, and `0` otherwise.

Finally, each builder calls `FUN_587B0910` (`0x587A6B36` and `0x588D8C7D`). It
stores its argument at receiver `+0x80`. Both caller decompilations show the
argument extracted as a two-bit selector from the packed table at `+0x274`,
using the current entry index. The Ghidra caller output and matched source
streams establish these paths and input origins.

All three functions end in `ret` instructions matching their argument counts
(`ret 8`, `ret 0xC`, and `ret 4`) and have no mapped address operands. Their
source fields, units, receiver-field meanings, conditional state transition,
selector meaning, and visible/gameplay effects remain unresolved. Each
instruction stream is checked independently against the mapped client; no
emulator runtime comparison has been performed.
