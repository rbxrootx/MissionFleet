# Current Main `CWarehouseItemFactory` deleting wrapper

`FUN_588F8620` is the deleting wrapper for `CWarehouseItemFactory`. Ghidra's
data-reference audit places it in the sole address-point slot at `0x589A2104`.
The complete-object locator at `0x589A2100` resolves to
`.?AVCWarehouseItemFactory@@`. The matched constructor `FUN_588F84E0` stores
that same vtable address at `0x588F8507` and is called by `FUN_588FFE10` at
`0x588FFEED`. Ghidra finds no direct code callers.

Ghidra indexes 28 bytes in two ranges, `[0x588F8620, 0x588F8636)` and
`[0x588F8639, 0x588F863F)`. The mapped x86 stream fills the three-byte gap
with the three-byte `add esp, 4` continuation after the helper call, so the
complete function is 31 contiguous bytes at `[0x588F8620, 0x588F863F)`. It
tests bit 0 of its stack flag, installs the factory vtable, optionally calls
`FUN_5897CC42` with `this`, then returns `this` with `ret 4` at `0x588F863C`.
The `INT3` at `0x588F863F` is a boundary byte; the next function starts at
`0x588F8640`. The cleanup path executes if the helper returns.

The complete 31-byte mapped stream matches the installed `Main.dll` exactly.
The stack flag's caller-level meaning and `FUN_5897CC42`'s behavior and return
contract remain unknown. The helper is a thunk through pointer slot
`0x5898C1F8`, and Ghidra marks it non-returning. The cleanup path and wrapper
have not been exercised in the emulator.
