# `FUN_588d9d20`: mounted-engine ratio-like progress calculation

Ghidra records one contiguous 62-byte body, `[0x588D9D20,0x588D9D5E)`, with
`ret 4` exits. The function uses ECX as the receiver and reads its sole signed
argument from `[ESP+4]`; it preserves ESI and has no callees.

The denominator is decoded from `[this+0xD98] ^ 0xAAAAAAAA`. A signed compare
returns 100 when the current value is at least that denominator, without
writing `[this+0x1444]`. Otherwise, a nonzero denominator produces signed
`(current * 100) / denominator` using `IMUL`, `CDQ`, and `IDIV`; the result is
stored at `[this+0x1444]` and returned. If the lower-than branch has a zero
denominator, the function stores and returns zero. This preserves the unusual
edge case: a nonnegative current value with a zero denominator takes the
100-return path, while a negative current value reaches the zero-return path.

The only direct caller is `FUN_587b04b0`, at `0x587B0577`. Ghidra identifies it
as a `CMountedEngine` initializer. The caller keeps its `param_2` receiver in
ECX, passes `(*(uint*)(param_2+0x398) ^ 0xAAAAAAAA)` as the argument, and sends
the returned value to `FUN_587b03a0`.

The exact offsets and arithmetic are supported by the Ghidra decompilation,
instruction listing, body-range dump, and direct-reference dump. The semantic
names of fields `+0x398`, `+0xD98`, and `+0x1444` remain unknown, and no emulator
runtime test has been performed.
