# `CPannelArmorControl` interaction and state path

This slice follows the installed `Main.dll` implementation of the armor
configuration panel from its RTTI-backed event methods through the state it
refreshes. The panel constructor and display refresh were matched in earlier
slices; this adds the event/update path and its direct helpers. Behavior below
is limited to the captured Ghidra decompilation, mapped instructions, and
call-site evidence.

## Class and data path

The constructor `FUN_58817900` installs the `CPannelArmorControl` vtable at
`0x5899D7AC` and loads `spr\\ITPNAMR.spr`; its `FUN_587DBA00` caller allocates
`0xAC` bytes. The complete-object locator references RTTI type
`.?AVCPannelArmorControl@@`.

Vtable slot `+0x10` points to `FUN_588172D0` (1,327 bytes), and slot `+0x18`
points to `FUN_58816EE0` (1,003 bytes). Both reach the previously verified
3,988-byte display refresh `FUN_58815E10`. That routine reads a referenced
record through panel offset `+0x198`, including four pointers at `+0xCD0`,
`+0xCD4`, `+0xCD8`, and `+0xCDC`, plus four associated short values at
`+0x88`, `+0x8A`, `+0x8C`, and `+0x8E`.

`FUN_58816EE0` accepts command 2 and handles four pairs of increment/decrement
controls. It updates the associated short values within the observed
0-to-255 range, calls the display refresh, and on its selection branch builds a
four-value record for helper `FUN_587B9970`. `FUN_588172D0` routes event records,
hit-tests four controls using `FUN_58731540`, changes those same values, and
dispatches observed event-code branches to `FUN_587DAC20` and `FUN_587DAD80`.
The exact user-facing meaning of the controls and event codes is not established
by these methods.

The state setter `FUN_588193B0` selects one of four slots with a 16-bit
selector, stores the supplied pointer/value pair, clears the associated count
when its pointer is null, and refreshes when the observed child flag is set.
Ghidra shows four calls from this method to `FUN_58815E10`, but the setter's
caller and callback registration remain unresolved. `FUN_58816DB0` copies
`0x3C3` dwords from the observed global record at `0x58A24598 + 0xD78` into a
snapshot area at `+0x198`, copies the four associated pointers and short values,
refreshes the panel, and clears bit 1 on a child flag. Its owner and caller are
also unresolved.

The remaining matched helpers in this slice are `FUN_58815C80` (panel short
state updates), `FUN_58819A70` (nested-control update from the four-way event
path), `FUN_587315F0` (control-state update), and `FUN_587BABC0` (called with
selector 4 after the snapshot update). The selector and helper dispatch in
`FUN_587B9970` are recorded without assigning names to their destination
contracts.

## Match validation and extent correction

All 11 functions added here pass `verify_client_matches.py`: 4,248 bytes at
100.0% objdiff match, with 139 mapped relocation targets checked. The source
uses the pinned clang-cl 19.1.4 instruction emitter and each record binds to
the captured mapped image and compiler hash.

The original inventory gave `FUN_587DAC20` a 338-byte extent, ending two bytes
into the five-byte call at `0x587DAD70`. The mapped bytes show that call ends at
`0x587DAD75`, followed by `add esp, 0x84` and `ret` at `0x587DAD7B`; four
`int3` bytes then precede `FUN_587DAD80`. The corrected function size is 348
bytes. This adds 10 identified code bytes to the inventory.

The panel's child labels, all field meanings, callback owner, and event action
semantics remain unknown. No emulator runtime or visual test was performed.
