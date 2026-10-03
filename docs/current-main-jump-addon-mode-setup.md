# Current Main.dll `CPannelJump_AddOn` child-state helper

## Evidence source

The verified `CPannelJump_ControlMenuScreen` constructor
`FUN_58889640` constructs two `CPannelJump_AddOn` children with
`FUN_58887760`, then calls `FUN_588873B0` on each returned child pointer with
different word arguments. This call sequence establishes the helper's
receiver as an AddOn child. The two parent classes and their evidence are
documented in [`current-main-jump-control-menu-screen.md`](current-main-jump-control-menu-screen.md)
and [`current-main-jump-addon-constructor.md`](current-main-jump-addon-constructor.md).

## Observed behavior

The 338-byte helper accepts word values 0 through 2, stores the selected value
at receiver `+0xE0`, and returns without changing that field for larger values.

For value 1, it checks the resource-state object at receiver `+0x60`, then
resolves two entries when its count-like field at `+0x164` exceeds `0x43` or
`0x44`. The resulting pointers are written through child fields `+0x6C` and
`+0x70`. When a pointer is present, the helper copies observed fields from
source offsets `+0x10`, `+0x14`, and `+0x18` through `+0x24` into the child
record beginning at `+0x0C` and `+0x14`.

For value 2, it checks thresholds `0x45` and `0x46`, reads corresponding
entries at resource offsets `+0x114` and `+0x118`, and calls `0x587316C0` for
the children at `+0x6C` and `+0x70`. For value 0, it clears each child's
`+0x50` field. The method uses `ret 4` for its word argument.

Objdiff 3.8.0 verifies all 338 bytes and six mapped operands.

## Limits

The selector labels, resource-table schema, threshold meanings, copied fields,
and visible purpose of the two configured states are unresolved. The notes
report observed memory accesses and calls without assigning guessed UI
semantics. No emulator runtime or visual test was performed.
