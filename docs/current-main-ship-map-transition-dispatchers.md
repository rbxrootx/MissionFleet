# Current Main ship-map transition dispatchers

These three matched functions connect the row transition routines to UI-event
paths and the periodic ship-map update. Together they add 1,594 bytes; ObjDiff
3.8.0 verifies all three at 100%, checking 93 mapped operands. The ship-map
graph checker now verifies 26 exact call edges, including the dispatcher calls
into the byte-matched countdown and state transition functions.

| Function | Ghidra body | Evidence-backed path |
| --- | --- | --- |
| `FUN_58861CE0` | `[0x58861CE0,0x58861F19)`; 569 bytes | Ghidra records a data reference at `0x5899EAEC`. With receiver flag bit 1 set, event code `0x102` / subtype `0x60` routes selected-row state 1 to `FUN_588603C0` and state 2 to `FUN_588607A0`; state 4 is child-flag gated and state `0x10` calls `FUN_5885ECC0`. The handler also has paths for event codes `0x201` and `0x20A`. |
| `FUN_58862FA0` | `[0x58862FA0,0x588632E6)`; 838 bytes | Ghidra records a data reference at `0x5899EAF4`. It handles `param_3 == 2`, checks selected-row state and child pointer values, and routes states 1/2 to `FUN_588603C0` / `FUN_588607A0`. Other observed branches route to `FUN_58861F40(row)`, `FUN_58860540`, or `FUN_5885ECC0`. |
| `FUN_588DB050` | `[0x588DB050,0x588DB07D)` and `[0x588DB080,0x588DB10E)`; 187 bytes | Byte-matched screen update `FUN_588E5150` calls it at `0x588E6082`. It uses receiver `+0x140C` as an observed 12-count throttle, scans eight row lists rooted at `+0x1390`, and for the current type-9 row calls `FUN_58862D50(index)` at `0x588DB0EE`; the non-type-9 path calls `FUN_58859AA0(index)`. |

All three body extents have full Ghidra instruction coverage. The first two
functions use event parameters and data-referenced dispatch tables whose roles
are not yet identified. `FUN_588DB050` has three bytes between its Ghidra body
ranges; those bytes are excluded from the match. State-code meanings, message
and callback contracts, row-list schema, and the non-type-9 helper remain
uncertain. The functions are statically byte-matched; no emulator input,
timing, or visual test has been run.
