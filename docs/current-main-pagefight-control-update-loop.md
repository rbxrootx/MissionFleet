# PageFight `CPageFightOn_ControlMenuScreen` update loop

This batch closes the open direct-call update path rooted at `FUN_587FB810` in
the installed `Main.dll`. It contains 149 functions and 48,515 Ghidra body
bytes. All reconstructed functions compile to byte-identical output under
ObjDiff 3.8.0. This covers the update callback's direct-call closure; it does
not claim that every behavior of the screen, game, or server is reconstructed.

## Evidence from the installed client

The RTTI-backed `CPageFightOn_ControlMenuScreen` vtable at `0x5899D180` points
to matched update method `FUN_587FD890` at slot `+0x0C`. That method calls
`FUN_587FB810` at `0x587FEF97` and `0x587FF039`. The new verifier checks the
vtable slot and both caller instructions against the mapped image.

Ghidra's `FUN_587FB810` body first handles a conditional screen/resource path,
then enters a guarded update block when `DAT_58A247F8` is set. It checks and
updates entries in the linked object list rooted at `DAT_58A247F8 + 0x0C`,
including entries whose status helper returns `0x40000000`. During the object
scan it reads coordinates at `+4` and `+8`, performs scaled distance checks,
updates per-entry state at `+0x6080`, and can create a control through
`FUN_588F3930`. These describe observed operations; the game's semantic names
for the status, coordinates, and state fields remain unknown.

The screen update also has several distinct branches visible in the original
instructions:

- A nonzero receiver byte at `+0x20D64` calls the already matched 25-tick
  counter path `FUN_587F5470`.
- A positive value at `+0x218B0` or a nonzero value at `+0x218C4` calls
  `FUN_587779B0`; `FUN_587481F0` runs in the same update sequence.
- The callback increments receiver field `+0x104F4` during the guarded screen
  update.
- When receiver word `+0x105A2` equals 7, it calls the already matched
  OpConvoy state-update path `FUN_587CDD60`.

The timer and OpConvoy paths are prior verified subsystems, not additional
credit in this batch. Field meanings and the relation of these branches to
server messages are not established by the call sites alone.

## Closure and validation

The exact Ghidra body ranges are persisted in
[`config/NF2_2026/pagefight-update-body-ranges.tsv`](../config/NF2_2026/pagefight-update-body-ranges.tsv):
189 ranges covering all 149 functions and all 48,515 indexed bytes. Ghidra
instruction coverage is complete. ObjDiff reports 100% for all 149 functions.
The focused verifier confirms that all members are reachable from
`FUN_587FB810`, and that its 746 direct transfers leaving the closure resolve
to 77 already verified functions; there are no unmatched outgoing direct
transfers.

There are 99 external direct-control-flow sites into closure members from 36 other
functions; 10 callers are already matched and 26 remain open. Some helpers are
therefore shared beyond this update loop. The verifier bounds direct calls and
jumps only: indirect and virtual calls are not treated as closed by this
analysis. Numeric state values, object roles, coordinate units, helper side
effects, timing, and the server contract remain uncertain. No live-client or
emulator test was run.

Recheck with:

```text
python tools/verify_current_main_pagefight_control_update.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json
python tools/generate_progress.py --check
```
