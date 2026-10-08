# Installed Main `CForce` primary virtual table

The installed `Main.dll` maps a primary `CForce` vftable at `0x5899689C`.
Its complete-object locator pointer at `0x58996898` resolves to `0x589A5C34`,
whose type descriptor at `0x589BA9C0` names `.?AVCForce@@`. The primary table
contains seven slots. Slots `+0x00`, `+0x0C`, `+0x10`, and `+0x18` were open;
the intervening slots `+0x04`, `+0x08`, and `+0x14` already pointed to
byte-verified code. The adjacent class-hierarchy descriptor reports three
base-class entries.

Those four open virtual slots and their direct-call closures add **18
byte-identical functions / 7,441 bytes**. Fresh targeted Ghidra confirms full
instruction coverage across the 25 exact ranges recorded in
[`main-cforce-primary-body-ranges.tsv`](../config/NF2_2026/main-cforce-primary-body-ranges.tsv).
The targeted body and call-edge exports agree with the independent full-image
inventories. ObjDiff 3.8.0 verifies all 18 functions at 100%. Run the focused
check with `rtk python tools/verify_current_main_cforce_primary_vtable.py`.

## Observed behavior and caller evidence

The slot `+0x00` wrapper calls `FUN_58779D10`, then calls the matched thunk
`FUN_5897CC42` when bit 0 of its second argument is set. The cleanup helper
restores the `CForce` vftable, checks a manager-held back-reference, and clears
non-null child fields after calling each child's vtable slot zero with a
deletion flag.

The slot `+0x0C` method `FUN_5877C8F0` updates observed counters and indices
under receiver-flag and global-state checks. It traverses the linked list at
receiver `+0x3C` through slot `+0x0C` on each node. The helpers
`FUN_5877AC40` and `FUN_5877AD50` advance the observed collection indices with
wraparound.

The slot `+0x10` method `FUN_5877BE60` switches on the event value at its
second argument `+0x04`, including `0x200` through `0x204`. Those paths call
the included state helpers `FUN_5877A060`, `FUN_5877A290`, `FUN_5877A330`,
`FUN_58871FA0`, and `FUN_5877A5D0`; guarded paths also send message values
`0x80011035` and `0x8001020C`. The slot `+0x18` method
`FUN_5877A650` compares its supplied control pointer with receiver fields and
dispatches actions for observed event kinds 2, 3, 4, and 0xF. Recovered text
keys in its kind-3 path include `MESSAGESTRING__FORCE_CLASS_CHANGE` and
`MESSAGESTRING__DISMISS_THE_FORCE`.

The remaining included helpers show the supporting operations directly:
`FUN_58871FA0` tests child rectangles against global coordinates and stores
the matching index; `FUN_5877DE70` copies six geometry fields from a supplied
record; `FUN_58731650` replaces bits 8 through 12 of a word at receiver
`+0x24`; `FUN_58869CF0` copies 0x60 DWORDs from a source record into a child
object; `FUN_58874310` decodes a field at `+0x5E` and interpolates through a
14-entry constant table; and `FUN_588C08B0` forwards two values to matched
setters.

There are nine direct incoming callsites from outside the selected closure.
Eight enter shared helpers from open callers; byte-matched `FUN_587E3080`
calls `FUN_5881ED70` at `0x587E3D1D`. All nine sites are present in the fresh
Ghidra reference export and the independent edge inventory. Within the
selected functions, Ghidra reports 100 direct-call edges; the mapped-image
transfer audit resolves 86 direct calls or jumps to already verified code and
finds no unmatched direct target.

## Uncertainties

The RTTI type name, primary table, slot order, and instruction bodies are
established from the installed binary. The meanings of object fields, child
types, collection records, state values, event contracts, and visible effects
remain unresolved. Capstone identifies 49 indirect call instructions in the
closure, including 31 child cleanup dispatches in `FUN_58779D10`; their
runtime destinations and ownership contracts are not recovered. The global
callback pointers in several helpers are also unresolved.

This validates an exact static instruction match against the installed
client. It does not validate an emulator launch, server interaction, or live
client behavior.
