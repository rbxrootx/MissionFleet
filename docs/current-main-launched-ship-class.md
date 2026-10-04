# Current Main.dll `CPannelLaunchedShip` class

## RTTI and ownership evidence

The vtable address point is `0x5899FBD8`. Its Complete Object Locator is at
`0x589A90DC`; the type descriptor at `0x589CD0F4` names
`.?AVCPannelLaunchedShip@@`. The verified
`CPannelJump_ControlMenuScreen` constructor `FUN_58889640` directly calls the
constructor `FUN_5888B010` for a child object. That constructor writes the same
vtable address. The vtable contains seven code pointers and ends before the
following `MESS` marker.

## Constructor, cleanup, and virtual methods

`FUN_5888B010` is a 1,581-byte constructor. It initializes the base through
`0x587B62B0`, installs the class vtable, allocates child screens using shared
resource state, builds repeated child groups with a `0x10` stride up to a
`0x200` boundary, creates a final `0xAC`-sized child, and initializes receiver
fields `+0x224`, `+0x228`, and `+0x22C`.

The RTTI-backed vtable entries are:

| Slot | Function | Bytes | Captured behavior |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_5888A9A0` | 30 | Calls cleanup body `FUN_5888A840`, conditionally calls `0x5897CC42` from stack flag bit 0, returns the receiver, and uses `ret 4`. Two following `int3` bytes precede `FUN_5888A9C0`. |
| `+0x04` | `FUN_5888AFC0` | 66 | Checks global `0x58A247F4+0x30`, may call `0x5888AAC0`, dispatches `0x587B6020`, and updates receiver state bits at `+0x24`. |
| `+0x08` | `FUN_5888AA70` | 69 | Forms a value from global `0x58A245BC+8` and receiver `+0x04`, calls `0x587B6020`, then updates receiver state bits at `+0x24`. |
| `+0x0C` | `FUN_587B6360` | 52 | Under receiver flag bit 2, calls `0x587B60A0` and dispatches vtable slot `+0x0C` across the child list rooted at receiver `+0x3C`. |
| `+0x10` | `FUN_5873B360` | 69 | Previously byte-verified shared method. |
| `+0x14` | `FUN_58902FE0` | 94 | Previously byte-verified shared method. |
| `+0x18` | `FUN_5888A9C0` | 167 | Handles event value 2 for receiver field `+0x224` and state at `+0x22C`, updates flag `0x40000000`, and dispatches `0x587B6020` and receiver vtable slot `+0x04`. |

The scalar deleting destructor calls `FUN_5888A840`, the 347-byte cleanup
body. It installs the class vtable, visits individual child pointer fields,
loops over three 32-entry pointer ranges, calls each non-null child's first
vtable method with argument 1, clears the field, then calls the now matched
[panel-base teardown](current-main-panel-base-teardown.md) at `0x587B5F50`.

The five previously open vtable entries, constructor, and cleanup body now
match **2,312 bytes across seven functions**, with 71 mapped operands checked
by objdiff 3.8.0. Including the two previously matched shared vtable entries,
all seven identified slots match.

## Limits

Resource entry identities, child layouts and purposes, state names, stack-flag
meaning, child ownership, and rendered behavior remain unresolved. The slot
zero function inventory was corrected from 27 to 30 bytes to include its
observed `ret 4`; the two following `int3` bytes are padding and excluded. No
emulator runtime or visual test was performed.
