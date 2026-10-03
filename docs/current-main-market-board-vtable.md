# Current Main `CMarketBoard` vtable

The class identity comes from the mapped RTTI chain: TypeDescriptor at
`0x589C9694` names `.?AVCMarketBoard@@`, Complete Object Locator at
`0x589A6550`, and the constructor `FUN_58799EB0` installs vtable address point
`0x58998080`. The verified constructor initializes a `0x304`-byte object;
one traced factory stores it at parent offset `+0xDB0`. A second traced caller
is `CPannelCommunicatorConfigFort`.

The primary vtable has seven entries. Its six class-specific functions now
match the captured `Main.dll` bytes, alongside their directly matched cleanup
body; the `+0x10` entry is the already verified shared helper
`FUN_58902FE0`.

| Slot | Function | Bytes | Observed behavior |
|---|---:|---:|---|
| `+0x00` | `FUN_58797680` | 27 | Calls the cleanup body and follows a conditional release path. |
| `+0x04` | `FUN_587976A0` | 262 | Updates child state and dispatches table entry `0x32`. |
| `+0x08` | `FUN_587977B0` | 427 | Selects fields by observed modes and updates a 40-control group. |
| `+0x0C` | `FUN_58797AB0` | 652 | Handles input modes and adjusts repeated child geometry. |
| `+0x10` | `FUN_58902FE0` | 94 | Previously verified shared drawing/helper slot. |
| `+0x14` | `FUN_5879FA60` | 1,512 | Routes observed event selectors through board handlers. |
| `+0x18` | `FUN_5879F810` | 585 | Handles child-event selectors and selected-state dispatch. |

Together with the 858-byte cleanup body `FUN_58797100`, this pass adds 4,323
verified code bytes across seven new functions. ObjDiff 3.8.0 checked all six
vtable-function bodies at 100% and checked 142 mapped relocation targets; the
cleanup body's five operands were verified separately. The cleanup releases
child objects through virtual deleting destructors, clears a repeated group
of 40 pointers and groups of three and seven pointers, releases an observed
allocation at `+0x2D4`, and calls verified base cleanup `FUN_58902C10`.

The event payload schema, labels for control groups and mode values, field
meanings, coordinate units, and helper semantics remain unresolved. A byte
match does not establish correct runtime rendering or input behavior; no
emulator runtime test was performed.
