# Current Main.dll `CPannelRule` class

## RTTI and ownership evidence

The vtable address point is `0x589A0750`. Its Complete Object Locator at
`0x589A95C8` refers to a type descriptor at `0x589CD434`, whose name is
`.?AVCPannelRule@@`. The verified `CPannelJump_ControlMenuScreen` constructor
`FUN_58889640` directly calls `FUN_588AA180` for an allocated child. That
constructor writes `0x589A0750` to the child vtable field. The RTTI-backed
scalar deleting destructor in slot `+0x00` calls cleanup body
`FUN_588A9DA0`.

## Constructor, cleanup, and vtable

The 1,165-byte constructor initializes the base through `0x587B62B0`, installs
the class vtable, allocates child controls through `0x5897CC4E`, and initializes
data-backed controls through helpers including `0x58731C60`, `0x58733280`, and
`0x588F3D70`. It stores child pointers in receiver fields and applies state
masks through `0x58902D20` and `0x58902CE0`.

| Slot | Function | Bytes | Captured behavior |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_588A9F00` | 30 | Calls `FUN_588A9DA0`, conditionally calls `0x5897CC42` from stack flag bit 0, returns the receiver with `ret 4`; two following `int3` bytes are padding. |
| `+0x04` | `FUN_588A9EA0` | 39 | Updates receiver state bits at `+0x24` to mode `0x100`, sets low bits 0 through 2, then clears bit 1. |
| `+0x08` | `FUN_588A9ED0` | 39 | Updates receiver state bits at `+0x24` to mode `0x400`, sets low bits 0 through 2, then clears bit 1. |
| `+0x0C` | `FUN_588A9F20` | 430 | When receiver flag bit 2 is set, processes modes `0x100`, `0x200`, `0x400`, and `0x500`; interpolates target coordinates through `0x58902E10`, changes state at settled positions, then dispatches child slot `+0x0C` from the list at receiver `+0x3C`. |
| `+0x10` | `FUN_588AA640` | 173 | With receiver flag bit 1 set, searches the child list and dispatches slot `+0x10`; in mode `0x200`, branches on observed event values `0x100`, `0x201`, `0x202`, and `0x20A`. |
| `+0x14` | `FUN_58902FE0` | 94 | Previously byte-verified shared method. |
| `+0x18` | `FUN_588AA610` | 47 | For event value 2, compares the supplied child pointer with receiver fields `+0x98` and `+0x9C`, calls the [backward or forward text-window helper](current-main-rule-text-window.md), and returns with `ret 0x0C`. |

The 245-byte cleanup body writes the class vtable, visits fields `+0x84`,
`+0x88`, `+0x90`, `+0x8C`, `+0x94`, `+0x98`, `+0x9C`, and `+0xA8`, calls the
first vtable entry of each non-null child with argument 1, clears each field,
then calls the now matched [panel-base teardown](current-main-panel-base-teardown.md)
at `0x587B5F50` on the receiver.

The six newly matched virtual methods, constructor, and cleanup body account
for **2,168 bytes across eight functions**, with 61 mapped operands checked by
objdiff 3.8.0. Together with the previously matched shared slot `+0x14`, all
seven identified vtable entries match.

## Limits

Resource identities, child layouts, state names, event meanings, ownership, and
visible behavior remain unresolved. The slot-zero function extent was corrected
from 27 to 30 bytes to include its observed `ret 4`; two following `int3` bytes
are padding and excluded. No emulator runtime or visual test was performed.
