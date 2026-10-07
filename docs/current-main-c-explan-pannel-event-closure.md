# Installed Main.dll `CExplanPannel` event/update closure

The installed image's RTTI names this class exactly `.?AVCExplanPannel@@`.
Its vtable begins at `0x5898DC10`; the CompleteObjectLocator is at
`0x589A55EC`, and its TypeDescriptor is at `0x589BA668`. Vtable entries
`+0x0C`, `+0x10`, and `+0x18` point to `FUN_5876B7F0`, `FUN_58763F70`, and
`FUN_587648F0`. The entry at `+0x14` is the already-matched shared
`0x58902FE0` method and is outside this slice.

These three event/update methods share `FUN_58762D30`, a 2,094-byte dispatcher.
Fresh Ghidra output shows it branches on receiver fields `+0x78` and `+0x7C`,
routes observed values through helper calls and virtual slots, writes receiver
field `+0xA4` in one branch, and clears a word at shared-state offset `+0x19C`
in another. The numeric states are preserved as observed; their gameplay or
visual labels are not inferred.

The slot `+0x10` method handles event type `0x101`, checks the word at its
second parameter's `+0x08` for `0x0D` or `0x1B`, and branches on receiver bytes
`+0x1E` and `+0x1F` before entering the shared dispatcher and updating observed
global panel/subscreen state. The slot `+0x18` method proceeds only when its
third parameter is 2 and its second parameter matches a receiver word at
`+0x23`, `+0x24`, or `+0x25`; its two receiver state bytes select the following
helper/dispatcher path. The slot `+0x0C` update method is gated by bit 2 of
receiver byte `+0x09`; Ghidra shows changes bounded to 0x20 per update, state
changes involving `0x100` and `0x400`, countdown fields `+0x2B` and `+0x2C`,
and iteration through linked children using child vtable slot `+0x0C`.

The audited direct-transfer closures for the three methods combine into 62
functions, 74 exact Ghidra body ranges, and 11,871 bytes. ObjDiff 3.8.0 verified
all 62 functions at 100%, with mapped relocations checked. The focused checker
also confirms the RTTI name and seven vtable slots, complete Capstone coverage
for every range, all 86 Ghidra transfers internal to the closure, and all 250
direct transfers in the selected bodies. Eighteen Ghidra call-graph edges are
encoded as tail `JMP` instructions in the mapped binary; the transfer manifest
records each actual opcode. Transfers leaving the selected functions resolve
to byte-matched functions. Three already-matched callers reach closure helpers:
`FUN_587BB700` calls `FUN_5878F920`, `FUN_587E3080` calls `FUN_587DAA30`, and
`FUN_588C4210` calls `FUN_587C2C90`.

The range manifest is
[`current-main-c-explan-pannel-event-closure-body-ranges.tsv`](../config/NF2_2026/current-main-c-explan-pannel-event-closure-body-ranges.tsv);
the decoded direct-transfer evidence is
[`current-main-c-explan-pannel-event-transfers.tsv`](../config/NF2_2026/current-main-c-explan-pannel-event-transfers.tsv).
The literal candidates are in `src/client-current/Main/FUN_*.cpp`, and every
function's caller, observed call behavior, and uncertainty are recorded in
`config/NF2_2026/client-verifications.json`.

Run the subsystem check with:

```powershell
rtk python tools/verify_current_main_c_explan_pannel.py
```

The static evidence does not establish the receiver or parameter types, child
ownership, the meaning of state values, the content rendered by the panel, or
its visible effect in the emulator. No emulator runtime test has been run for
this subsystem.
