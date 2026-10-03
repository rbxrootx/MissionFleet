# Current Main.dll `CBundleButton` class

## RTTI and construction evidence

The vtable address point is `0x5898D5C8`. Its Complete Object Locator at
`0x589A4C50` refers to type descriptor `0x589B96F4`, named
`.?AVCBundleButton@@`. The verified `CPannelJump_ControlMenuScreen`
constructor `FUN_58889640` constructs five objects with `FUN_58750010`, then
calls `FUN_587501A0` on each new object. `FUN_58750010` writes the RTTI-backed
vtable pointer.

## Constructor, helper methods, and vtable

The 398-byte constructor initializes its base through `0x589031A0`, installs
the class vtable, allocates two `0x58`-byte child controls, initializes them,
and stores their pointers at receiver `+0x54` and `+0x58`. It initializes
additional receiver fields through `+0xB4`. The 60-byte configuration method
stores two non-null arguments at `+0x5C` and `+0x60`, calls
`FUN_5874FBD0` with its other arguments, and dispatches vtable slot `+0x08`.

| Slot | Function | Bytes | Captured behavior |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_5874FA40` | 30 | Calls cleanup body `FUN_5874F990`, conditionally calls `0x5897CC42` from stack flag bit 0, returns the receiver with `ret 4`; two following `int3` bytes are padding. |
| `+0x04` | `FUN_58731770` | 30 | Selects state mode `0x100` in receiver `+0x24` and sets low state bits 0 through 2. |
| `+0x08` | `FUN_588A9ED0` | 39 | Previously byte-verified shared state method. |
| `+0x0C` | `FUN_5874FA60` | 364 | Updates modes `0x100`, `0x200`, `0x400`, and `0x500`; tests geometry through `0x58731540`, calls `0x5873A540` on children, checks progress with `FUN_5874FA20`, then dispatches child slot `+0x0C` from the list rooted at `+0x3C`. |
| `+0x10` | `FUN_587501E0` | 281 | Searches the child list when receiver flag bit 1 is set and handles observed event values `0x200`, `0x201`, `0x202`, `0x100`, and `0x20A` through helpers `FUN_5874FDD0`, `FUN_5874FEF0`, and `FUN_5874FCD0`. |
| `+0x14` | `FUN_58902FE0` | 94 | Previously byte-verified shared method. |

The 130-byte cleanup body `FUN_5874F990` writes the CBundleButton vtable,
calls the first virtual method with argument 1 for non-null children at
`+0x54` and `+0x58`, clears those fields, and calls base cleanup helper
`0x58902D60`.

The directly connected helpers update the two child records from bounded
`0x40`-byte resource entries. `FUN_5874FBD0` copies two seven-dword blocks and
resolves record pointers using receiver selector `+0x9C`. The three event
helpers select receiver index pairs `(+0x68, +0x84)`, `(+0x74, +0x90)`, and
`(+0x6C, +0x88)`, update child records, and set selector values 1, 4, and 2
respectively. `FUN_5874FA20` computes an observed threshold comparison using
child fields `+0x08` and `+0x0C` and receiver progress field `+0x50`.

Objdiff 3.8.0 verifies the 12 newly matched functions: **2,371 bytes and 45
mapped operands**. Along with two previously matched shared methods, all six
identified vtable entries match.

## Limits

Child roles, resource table layout, selector labels, progress units, state
names, and visible behavior are unresolved. The slot-zero extent was corrected
from 27 to 30 bytes to include its observed `ret 4`; the following two `int3`
bytes are padding and excluded. No emulator runtime or visual test was
performed.
