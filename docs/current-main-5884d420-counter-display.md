# `FUN_5884d420`: two-counter child display initializer

Fresh Ghidra evidence records two direct callers, both already matched
byte-for-byte: `FUN_588D9E10` at `0x588D9F30` and `FUN_588DEB30` at
`0x588DEF38`. Both supply receiver ECX from the child at `[ESI+0x1448]` and
call with six stack arguments. The target's `ret 0x18` confirms that stack
shape. Both pass `[ESI+0x3A0]`, the current type's low five bits, lower and
decoded upper counter values, followed by two zeros. In the first caller, the
decoded upper counter is `[ESI+0xD98] ^ 0xAAAAAAAA`.

Ghidra confirms a single contiguous 441-byte body,
`[0x5884D420,0x5884D5D9)`. It stores supplied counter values at receiver
`+0x54/+0x58` and derives values at `+0x60/+0x64/+0x68` from the supplied
count divided by five, multiplied by three, two, or one. If receiver fields
`+0x5C` and `+0x50` are null, it creates two children using checked resource
table entries at offsets `0x81C` and `0x26A8`, with `FUN_5877E800` configuring
the children. It clears captured child flag bits, then calls `FUN_58907360`
with the supplied count value.

The name “two-counter child display” is an inference from the matched
callers' counter arguments, stored values, and derived thirds/fifths-like
fields. Its visual role, field meanings, resource identities, and helper
contracts remain unknown. Ghidra shows possible child accesses after resource
allocation returns zero; the invariant that prevents a null dereference is
not established. No emulator runtime test has been performed.
