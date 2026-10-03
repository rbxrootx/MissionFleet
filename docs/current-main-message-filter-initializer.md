# Current Main `CMessageFilter` initializer

`FUN_587a1de0` has one contiguous Ghidra body at `0x587A1DE0..0x587A2D3A`
(3,931 bytes). The generated source uses this exact range from the captured
mapped Main image. ObjDiff 3.8.0 confirms every function byte matches and checks
the one mapped operand target in the body.

Ghidra identifies the `CMessageFilter::vftable` write at entry. The body loads a
callback pointer from `DAT_5898C034`, then calls it 543 times with addresses of
static `DAT_` records. This count and the argument-address sequence come from the
Ghidra decompilation; they do not establish the callback's higher-level meaning.

The direct caller `FUN_5878af40` allocates four bytes, sets `DAT_58A24578` to
null on allocation failure, and otherwise stores this initializer's result in
that global. Callback ABI and semantics, record meanings, and the runtime role of
the resulting object remain unresolved. No emulator runtime test was performed.
