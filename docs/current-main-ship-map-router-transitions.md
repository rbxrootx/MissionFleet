# Current Main ship-map router transition callers

This slice byte-matches the five remaining direct callers of
`FUN_58860070`, closing its Ghidra-recorded seven-call incoming set together
with already matched `FUN_58861F40` and `FUN_5873FE80`. The matched callsites
into the router are `0x58862737`, `0x58862856`, `0x58860403`, `0x588609D8`,
and `0x58862DF6`. Each caller's complete body is contiguous and has full
Ghidra instruction coverage; ObjDiff 3.8.0 verifies all five instruction
streams at 100%, with 81 relocation operands checked.

| Function | Half-open body range | Router call | Observed transition |
| --- | --- | --- | --- |
| `FUN_588626B0` | `[0x588626B0, 0x588627B3)` (259 bytes) | `0x58862737` | Decrements a row countdown; when it reaches zero, sets state 1, routes state/resource updates, invokes `FUN_587E5F80(row)`, and refreshes selected child `+0x72C` from table offset `+0x5C0`. |
| `FUN_588627C0` | `[0x588627C0, 0x588628C5)` (261 bytes) | `0x58862856` | Decrements the row countdown and an indexed encoded value; at zero, sets state 1, invokes `FUN_587E5F80(row)`, routes state/resource updates, and refreshes the selected child from `+0x5C0`. |
| `FUN_588603C0` | `[0x588603C0, 0x58860532)` (370 bytes) | `0x58860403` | If observed counters differ and state bits `0x08/0x10` are clear, sets state 2, routes resources, records the absolute counter difference, and conditionally derives an interval from a child resource. |
| `FUN_588607A0` | `[0x588607A0, 0x588609E1)` (577 bytes) | `0x588609D8` | After an observed six-second threshold, sets state 1, clears row counters/timers/flags, calls `FUN_58793E00`, and routes state/resource updates. |
| `FUN_58862D50` | `[0x58862D50, 0x58862E8F)` (319 bytes) | `0x58862DF6` | Decrements row values; when the countdown reaches zero, sets state `0x10`, routes resources, and for the selected row refreshes child `+0x72C` from table offset `+0x680` and sets global entry `+0x478` to 1. |

Ghidra records incoming dispatch calls to these helpers from
`FUN_5873C2E0`, `FUN_58861CE0`, `FUN_58862FA0`, and `FUN_588DB050`; all four
dispatchers now have exact-match records. The stateful event paths and periodic
row-list update are documented in the
[transition dispatcher notes](current-main-ship-map-transition-dispatchers.md).
[Their downstream action and message handlers are documented in the
action-helper graph](current-main-ship-map-action-helper-graph.md).
Several encoded counters, state codes, resource-table roles, and child flags
remain unnamed. Static byte identity and call edges are verified, but runtime
state changes and visuals have not been tested in the emulator.
