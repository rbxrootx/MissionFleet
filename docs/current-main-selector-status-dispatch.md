# Current Main.dll selector status dispatch: FUN_587EBCB0

Verified `FUN_587A75E0` calls `FUN_587EBCB0` with a word index and a second
byte-sized subentry selector. The complete 237-byte body matches the
installed `Main.dll` byte for byte, with 14 mapped operand targets checked.

If global `0x58A2459C` field `+0x21C34` is nonzero, the function dispatches
value `0x12C` through `FUN_588C0DA0` and returns one. Otherwise it reads an
indexed pointer from the active object at global `0x58A247F8`, offset
`+0xE8C`. A non-null pointer whose first byte is six dispatches `0x3EF`.
For first byte five, the second argument selects a subentry at `+0xF0C`:
the subentry's `+0x9B` low nibble chooses `0x3E9` when one, or `0x3EC`
otherwise. A missing subentry dispatches `0x12C` and returns zero. Other
pointer states dispatch `0x12C` and return one. This match closes the
remaining direct callees of verified `FUN_587A75E0` in the callgraph.

The object types, index bounds, numeric dispatch values, and user-visible
meaning remain unresolved. No runtime client test was performed.
