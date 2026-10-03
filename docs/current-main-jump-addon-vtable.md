# Current Main.dll `CPannelJump_AddOn` vtable

## Evidence source

This analysis uses the captured mapped client image at
`reports/unpacked-current-main/Main.mapped.bin` and its Ghidra function
inventory. The mapped RTTI name `.?AVCPannelJump_AddOn@@` is at `0x589CD03C`.
The type descriptor is at `0x589CD034`; the Complete Object Locator at
`0x589A9034` refers to that descriptor. The vtable address point is
`0x5899F9BC`, preceded by the locator pointer at `0x5899F9B8`. Seven code
pointers follow before the next bytes decode as `MESS`.

The verified parent initializer `FUN_58889640` assigns this class vtable
through its `CPannelJump_AddOn` constructor call at `0x5888A134` and again at
`0x5888A1B8`. Its constructor has its own evidence record in
[`current-main-jump-addon-constructor.md`](current-main-jump-addon-constructor.md).

## Slots and verification

| Slot | Function | Bytes | Evidence from captured body |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_58886ED0` | 30 | Calls `FUN_58886CD0`, conditionally calls cleanup `0x5897CC42`, and returns the receiver. The body ends with the byte at `0x58886EED`; two following `int3` bytes at `0x58886EEE` and `0x58886EEF` precede the next function. |
| `+0x04` | `FUN_58886EF0` | 379 | Handles state mode `0x500`, updates receiver and child fields, calls `0x58907990` and `0x58903360`, and dispatches through a child vtable. |
| `+0x08` | `FUN_58887070` | 205 | Handles state mode `0x200`, transitions to `0x400`, writes `-0xC8` at receiver `+0x54`, and dispatches through a child vtable. |
| `+0x0C` | `FUN_58887140` | 624 | Updates mode-dependent transition values, uses `0x58902E10`, and walks a child list rooted at receiver `+0x3C`. |
| `+0x10` | `FUN_5873B360` | 69 | Already byte-matched before this vtable slice. |
| `+0x14` | `FUN_58902FE0` | 94 | Already byte-matched before this vtable slice. |
| `+0x18` | `FUN_58888270` | 519 | Dispatches selector branches through child pointers and helpers including `0x58887510`, `0x588876B0`, and `0x58886E90`. |

The five newly checked methods match all 1,757 bytes and 71 mapped operands
with objdiff 3.8.0. Along with the two previously matched entries, all seven
identified vtable methods now have byte-identical matches, covering 1,920
bytes total. The vtable and slot mapping are grounded in the captured RTTI and
pointer array; no unrelated nearby methods were included.

## Limits

The receiver's full field layout, child identities, selector meanings,
callback contracts, and visible transitions remain unresolved. The method
notes describe observed state tests, offsets, helper calls, and dispatches;
they do not claim recovered source-level intent. No emulator runtime or visual
test was performed.
