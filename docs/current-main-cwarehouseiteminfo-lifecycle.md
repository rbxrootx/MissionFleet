# Current Main `CWarehouseItemInfo` lifecycle and vtable

The RTTI complete-object locator at `0x589A2138` resolves to
`.?AVCWarehouseItemInfo@@`; its address point is `0x589A213C`. The table has
seven entries through `0x589A2157`, with ASCII data beginning at `0x589A2158`.
The first two methods were the remaining unmatched entries: the deleting
wrapper at slot `+0x00` and the state-bit method at `+0x04`. The other five
slots were already byte-verified.

`FUN_588F9B00` is a 30-byte deleting wrapper at
`[0x588F9B00, 0x588F9B1E)`. Ghidra indexes 27 bytes across
`[0x588F9B00, 0x588F9B15)` and `[0x588F9B18, 0x588F9B1E)`; the contiguous
mapped stream also includes the three-byte `add esp, 4` after the helper call.
It calls the destructor body `FUN_588F9900`, tests bit 0 of its stack flag,
optionally calls `FUN_5897CC42(this)`, and returns `this` with `ret 4`. The
wrapper is the `+0x00` table entry. Its cleanup continuation runs if the helper
returns; Ghidra marks that helper non-returning.

`FUN_588F9900` is a contiguous 312-byte destructor body at
`[0x588F9900, 0x588F9A38)`. It installs the `CWarehouseItemInfo` vtable,
conditionally releases child pointers at offsets `+0x70`, `+0x74`, `+0x98`,
`+0x9C`, `+0xA0`, and `+0xA4` through virtual slot 0 with flag 1, then clears
those fields. A three-iteration loop releases and clears the nine pointer
fields from `+0xA8` through `+0xC8`. If `+0x64` is nonzero it calls
`FUN_5897CE26` and clears `+0x64`; it then calls `FUN_58902C10` and restores
the saved exception-list state.

The `+0x04` slot, `FUN_588F9C90`, is a 24-byte method at
`[0x588F9C90, 0x588F9CA8)`. It reads the 16-bit field at offset `+0x24` from
the pointer stored in `DAT_58A24820`, clears bit 0 with mask `0xFFFE`,
preserves the other bits, and writes the word back.

All three methods match the installed `Main.dll` byte-for-byte. The meanings
and ownership of the receiver fields, the global state, the stack flag, and the
cleanup helpers remain unresolved. Ghidra marks `FUN_5897CC42` non-returning;
its thunk uses pointer slot `0x5898C1F8`. No emulator runtime test has been
performed.
