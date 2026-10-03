# Current Main factory-help epilogue boundaries

The `CPannelFactoryHelp` vtable points to four methods whose original
inventory sizes stopped before their return epilogues:

| Entry | Vtable slot | Previous body | Correct body | Epilogue |
| --- | ---: | ---: | ---: | --- |
| `FUN_588504a0` | `+0x00` | 27 bytes | 30 bytes | `ret 4` |
| `FUN_588536a0` | `+0x38` | 27 bytes | 30 bytes | `ret 4` |
| `FUN_58854440` | `+0x4C` | 370 bytes | 378 bytes | `ret 0x0C` |
| `FUN_58857850` | `+0x44` | 1,516 bytes | 1,519 bytes | conditional tail jump |

The captured instructions continue from each old body endpoint through the
remainder of a return epilogue or tail-dispatch path. Padding follows before the
next function entry in the current function inventory. For `FUN_58857850`,
the branch at `0x58857E2E` targets the split epilogue at `0x58857E3B`, which
restores the remaining register and tail-jumps through `eax`; the next function
begins after an `int3` alignment byte. The `CPannelFactoryHelp` vtable points to
each function start. The corrected ranges now match ObjDiff 3.8.0 at 100.0%;
the four corrections add 17 identified code bytes.

The exact parameter meanings, state semantics, and destructor-helper behavior
are not established by these boundaries alone.
