# `CWarfogOnFight` byte-match slice

This slice reconstructs the mapped x86 bodies for the RTTI-backed
`.?AVCWarfogOnFight@@` class in the installed `Main.dll`. Its constructor,
deleting-destructor wrapper, and virtual method at vtable offset `+0x14` are
emitted as literal instructions so registers, flags, control flow, and mapped
operands stay byte-identical.

## Binary evidence

- The vtable address point is `0x589A24A8`; its complete-object locator at
  `0x589A24A4` is `0x589AAE68`. The locator resolves to TypeDescriptor
  `0x589CDED4`, whose mapped name is `.?AVCWarfogOnFight@@`.
- The six mapped vtable entries are `0x58900E50`, `0x58731770`, `0x588A9ED0`,
  `0x58903040`, `0x5873B360`, and `0x58900E80`.
- Matched caller code at `0x587EF639` calls the constructor at `0x58900E20`.
  The constructor installs the vtable and stores its third argument at receiver
  offset `+0x50`.
- The wrapper at `0x58900E50` reinstalls the vtable, calls
  `0x58902D60`, tests its scalar-deletion flag, and conditionally calls the
  deletion thunk at `0x5897CC42`. Ghidra's 33-byte split extent omits the
  reachable `add esp,4`; the mapped body continues through `ret 4` at
  `0x58900E71`, for 36 bytes total.
- The 1,888-byte method at `0x58900E80` gates on bit 0 of receiver word
  `+0x24`. It derives grid dimensions and indexes from the object referenced by
  `DAT_58A2459C+0x10524`, scans bytes rooted at `DAT_58A2459C+0x10548`, and
  forms a mask from eight neighboring values below 2. The mapped paths call
  `0x5873A5D0` or `0x58903D60` to update map tiles, then `0x58906EA0` before
  restoring exception state. The method returns at `0x589015DD`; jump-table
  data begins immediately afterward at `0x589015E0`.

`tools/verify_current_warfog_on_fight.py` checks the RTTI chain, complete vtable,
constructor and wrapper call targets, vtable store, and function boundaries
against `reports/unpacked-current-main/Main.mapped.bin`. The normal objdiff
verification checks every emitted instruction byte against the mapped image.

## Unresolved behavior

The field at `+0x50`, the grid value meanings, mask-bit semantics, coordinate
units, helper contracts, and identity of `DAT_58A2459C` are not established.
Ghidra reports unsettled type propagation in the large method. No emulator
render comparison or runtime deletion test has been performed, so the code
match demonstrates binary fidelity, not yet correct standalone emulator
behavior.
