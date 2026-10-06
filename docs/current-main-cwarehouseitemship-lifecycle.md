# Current Main `CWarehouseItemShip` lifecycle and vtable

The complete-object locator pointer at `0x589A21D0` leads to the locator at
`0x589AAB60`, whose TypeDescriptor at `0x589CDD94` names
`.?AVCWarehouseItemShip@@`. The address point is `0x589A21D4`; its eleven
entries end at `0x589A21FC`, followed by the `CWarehouseManager` locator at
`0x589A2200`. All eleven table entries now have byte-verified bodies.

`FUN_588FB0E0` is a 260-byte constructor at `[0x588FB0E0, 0x588FB1E4)`. It
calls base initializer `FUN_588F8100`, installs the `CWarehouseItemShip`
vtable, initializes the child pointer at `+0xC0`, and calls `FUN_589031A0`
and `FUN_58903360` for child setup using values derived from its six stack
arguments. It returns with `ret 0x18`. Ghidra records a direct call from
`FUN_588F8520` at `0x588F85E9`.

`FUN_588FAFB0` is the 114-byte destructor body at
`[0x588FAFB0, 0x588FB022)`. It reinstalls the class vtable, conditionally
releases the child at `+0xC0` through virtual slot 0 with flag 1, clears that
field, calls `FUN_588F7C00`, and restores the saved exception-list state.
`FUN_588FB0C0` is its 30-byte deleting wrapper at
`[0x588FB0C0, 0x588FB0DE)`. Ghidra indexes 27 bytes through `pop esi` and omits
the mapped `ret 4`; the wrapper tests bit 0 of its stack flag, conditionally
calls `FUN_5897CC42(this)`, then returns `this` with `ret 4`. Two INT3 bytes
follow the function.

The table's last three entries are `FUN_588A5380` at `+0x20`, `FUN_588FB030`
at `+0x24`, and `FUN_588FB070` at `+0x28`. The first was already matched;
the latter two are now covered. `FUN_588FB030` returns a flag derived from
its integer parameter's remainder by 6 and its upper bound `0x12`. Ghidra
indexes 49 bytes, fully covered through `ret 4`. `FUN_588FB070` first compares
its first argument with byte `this+0x6A`, then searches the second argument
among six bytes in two groups of three starting at `this+0x6B`. Its indexed
67 bytes are split around a three-byte LEA; the contiguous mapped stream is
70 bytes and includes the `ret 8` at `0x588FB0B3`.

The `+0x1C` method, `FUN_588FB1F0`, is a fully decoded 633-byte body at
`[0x588FB1F0, 0x588FB469)`. It checks and updates child state bits, formats a
resource name, calls resource helpers, and copies metadata into child records
before its stack-cookie epilogue. The class and table identify its owner, but
not the user-visible purpose of this operation.

All six audited functions match the installed `Main.dll` byte-for-byte
(1,156 bytes). Corrected deleting-wrapper extents add six bytes to the
indexed-function total. The receiver-field roles, constructor argument
meanings, helper contracts, globals, and virtual-operation meanings remain
uncertain. No emulator runtime test has been performed.
