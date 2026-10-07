# Current Main ship-map action helper graph

This slice follows the selected-row event paths from `FUN_58861CE0` and
`FUN_58862FA0` into their packet, notice, state-transition, and row-count
helpers. It adds 16 exact Main.dll matches totaling 2,037 bytes. ObjDiff 3.8.0
verifies all bytes and 78 mapped operand targets. Ghidra's body ranges are
contiguous and fully instruction-covered for every function.

| Function | Bytes | Behavior observed in Ghidra |
| --- | ---: | --- |
| `FUN_5885ECC0` | 79 | Resets the selected indexed child, builds a four-byte payload using the selected index and a row byte, and routes message code `0x16` through `FUN_587E5A70`. |
| `FUN_5885F8C0` | 77 | Applies an observed 2,000-unit time gate before routing helper code `0x9F`; the timestamp is stored at `0x58A28380`. |
| `FUN_5885FDC0` | 198 | Checks receiver/global modes and either routes the observed `MESSAGESTRING__SS_CANNOTCONTROL_ONSURFACE` key or enters another action state. |
| `FUN_5885FE90` | 162 | Branches on observed mode values 3 and 6, advances a value at receiver `+0xB4`, routes an insufficient-oxygen message below threshold 300, or enters state 4/5 after the associated helper calls. |
| `FUN_58860540` | 257 | Under a global bit gate, updates one indexed row and child, toggles an encoded value, stages message code `0x16`, then enters a global/indirect callback path. |
| `FUN_58860650` | 335 | Adjusts paired values for the selected row when its observed state and guard fields permit, then recalculates aggregate validation state. |
| `FUN_587E5A70` | 53 | Stages a message byte, length, and payload only while receiver byte `+0x10484` is clear. |
| `FUN_5885FA60` | 287 | Sums per-row values, compares total and selected-row values with resource limits, groups values by an observed record word, and writes validation flags. |
| `FUN_587E5F80` | 48 | Selects a child by index, invokes `FUN_58902F50`, and clears bit 0 of the child's word at `+0x24`. |
| `FUN_5885F3A0` | 100 | Queries a mode helper and conditionally stores state 1 before dispatching observed argument 1 or 2 through `FUN_587ED5B0`. |
| `FUN_5885EA90` | 48 | Returns 0 when receiver state `+0xA8` is already 1; otherwise sets it, forwards the argument to `FUN_587ED5B0`, and returns 1. |
| `FUN_587A1640` | 38 | Compares a supplied value with `FUN_587A1550`; on change it calls `FUN_58970AE0` and invokes a global function pointer. |
| `FUN_587ED5B0` | 74 | Maps arguments 1, 2, 4, and 5 to event codes `0x5B`–`0x5E` through matched `FUN_587E9A10`. |
| `FUN_587A1550` | 23 | Returns zero when receiver `+0x90` is zero; otherwise its conditional branch transfers to the adjacent, separately bounded `FUN_587A1567`. |
| `FUN_58743AF0` | 138 | Walks ordered nodes from a header rooted at receiver `+0x18`, compares node dword `+0x0C` with a key, and writes a node/header pair through an argument pointer. |
| `FUN_587A1567` | 120 | Continues the value lookup across the branch from `FUN_587A1550`, checks the observed node/header and key fields, and returns either zero or a node value XOR the result from `FUN_587A1330`. |

Fresh Ghidra references connect the event dispatchers to these helpers at the
call sites recorded in `tools/verify_current_ship_map_vtable.py`. The matched
helper bodies' direct calls also terminate in byte-matched targets. The
`FUN_587A1550`/`FUN_587A1567` boundary is a real control-flow split: Ghidra
reports a 23-byte guard followed by an adjacent 120-byte continuation, so the
decompiler's merged-looking pseudocode is not treated as a single function
boundary. The local source and Ghidra audit are in
`src/client-current/Main/FUN_*.cpp` and
`var/current-main-next/transition-action-helpers-ghidra.c` / `.log`.

The exact-byte and call-edge checks validate static reconstruction only. The
meanings of row fields, event/message codes, encoded values, time units,
resource limits, global modes, and indirect callbacks remain uncertain. No
emulator input, live-server packet, or visual test has been run; the broader
Main.dll graph still contains unmatched callers and functions.
