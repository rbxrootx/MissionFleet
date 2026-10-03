# Current Main AllocScreen constructor helper

The installed `Main.dll` `AllocScreen` export at `0x587962C0` allocates a
`0x84`-byte screen object and calls the matched constructor `FUN_587C35A0`.
That constructor directly calls `FUN_588EADE0` after a condition check; the
call's mapped bytes resolve to the indexed function entry at `0x588EADE0`.

`FUN_588EADE0` has a 316-byte function extent in the Ghidra-exported current
Main inventory. Capstone does not decode the entire indexed span contiguously,
so its exact bytes are emitted literally and pass ObjDiff 3.8.0 at 100% against
the pinned mapped image, with the call destination audited at the parent.
This proves the indexed byte span only. Instruction boundaries, helper behavior,
and the effect on the screen object remain unknown. The `AllocScreen` path has
no unmatched callees through call-graph depth five.

No emulator runtime or visual test was performed; this is byte-match evidence,
not proof that the client boots or renders this screen correctly.
