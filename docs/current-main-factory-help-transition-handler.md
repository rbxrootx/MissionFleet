# Current Main factory-help transition handler

`FUN_58853870` is the `+0x40` virtual method in the `CPannelFactoryHelp`
vtable at `0x5899E8E0` (pointer at `0x5899E920`). The captured function body
is one contiguous 262-byte range and ends with `ret`.

## Evidence from the original code

The method masks the state word at `+0x24`, sets transition bits, and updates
target fields. It dispatches the `+0x08` method on multiple child objects,
iterates paired controls at indexed offsets, and calls `FUN_587B6020` for two
values per iteration. It also clears state bits on child objects at `+0x74`
and `+0x78`. A global byte at `0x58A2459C+0x74` controls a final change to the
child at `+0xB0` and a tail dispatch through that child's vtable.

ObjDiff 3.8.0 verifies all 262 bytes at 100.0% and checks three mapped
operands.

## Uncertainties

The transition name, indexed-control meanings, helper semantics, global flag,
and visible result remain unknown. No emulator test was performed.
