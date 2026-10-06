# `FUN_588958c0`: encoded counter and threshold-driven child refresh

Fresh Ghidra evidence records exactly two direct callers, both byte-matched:
`FUN_588DEB30` at `0x588DF0CA` and `FUN_588E5150` at `0x588E62D0`. Both load
ECX from `[0x58A245C4+0xC4]` and pass one value, `[ESI+0x398] ^ 0xAAAAAAAA`.
The function ends in `ret 4`, matching that one-argument call pattern.

Ghidra confirms one contiguous 432-byte body,
`[0x588958C0,0x58895A70)`. It clamps a negative signed input to zero, stores
the counter at receiver `+0x90`, updates child controls through
`FUN_5877E740`, and sets a number child through `FUN_58907360`. It compares
the counter with receiver thresholds `+0xB8`, `+0xBC`, and `+0xC0`, selects
checked global resource entries `0x870` or `0x9B1`–`0x9B3` for a child at
`+0x70`, copies resource fields, and calls `FUN_587316C0` to update a
secondary display. One branch calls `FUN_588EC100(0x21,0x82,0)`; zero or a
value greater than `+0xC0` tail-dispatches to `FUN_588EC080`.

Both matched callers decode the same field before invoking this routine in
their ship-map update path. The counter's gameplay meaning, child roles,
resource labels, helper contracts, and tail-dispatch visual effect remain
uncertain. No runtime capture or emulator test has been performed.
