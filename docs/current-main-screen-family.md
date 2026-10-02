# Current Main screen hierarchy and child dispatch

This slice covers the mapped screen-tree child dispatcher and remaining screen
teardown/vtable methods around the already matched CScreen base helper
`FUN_58902d60`.

`FUN_58902fe0` checks its state argument and receiver flag mask `0x0001`, then
walks the child list at receiver `+0x4C` through child links at `+0x48`. It
dispatches child virtual slot `+0x14`, visiting children whose signed 16-bit
field at `+0x26` is negative first, then dispatching the remaining nodes. Ghidra
records 176 data references to this 94-byte method and no direct call
references. Indirect use through function-pointer tables is consistent with
the method shape, but the table owners remain unresolved. The list fields and
sort key connect this path to the [child-order evidence](current-main-child-order.md).

The remaining lifecycle methods form a screen class chain. `FUN_58902c10`
installs the `CControlMenuScreen` vtable and calls `FUN_589033e0`, which installs
`CMenuScreen` and calls the matched CScreen teardown. `FUN_589038a0` and
`FUN_589038b0` install the `CSpriteBundleScreen` and `CSpriteDataScreen`
vtables, respectively, before using the same base teardown. `FUN_58903270`
wraps that base teardown and conditionally releases the receiver. The
five-byte `FUN_589033f0` method returns zero; its virtual contract is unknown.

All seven functions match at 100% under ObjDiff 3.8.0, covering 173 bytes and
10 relocation operands. Capstone confirmed the three-byte stack cleanup after
the release call in `FUN_58903270`, which Ghidra omitted when it marked the
release thunk non-returning; the corrected function extent is 30 bytes.

The screen subclasses' fields, virtual callback contracts, and the exact
runtime conditions that trigger these paths remain unresolved. No original
screen teardown or child-render pass was exercised at runtime.
