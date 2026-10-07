# Current Main ship-map non-type-9 child reset

The byte-matched `FUN_588DEB30` refresh selects `FUN_5885A340` when the
current record's low five type bits are not 9. Ghidra records the direct call
at `0x588DF1C4`. The matched caller loads ECX from
`[0x58A245C4+0x9C]`, passes no stack arguments, then calls the already matched
non-type-9 handler `FUN_58859DD0` at `0x588DF1D4`.

Ghidra identifies one contiguous 288-byte body, `0x5885A340..0x5885A45F`.
ObjDiff 3.8.0 verifies the reconstructed instruction stream at 100%, with 10
relocation operands checked.

The routine performs an eight-row reset. For each row it calls
`FUN_58858BD0(0)`, clears observed row fields, resets one indexed value via
`FUN_587A15E0`, writes two sentinel DWORDs, clears child state and low flag
bits, and calls `FUN_58793E00`. After the loop, it checks that the global
resource table has at least `0x18` entries and a nonnull data pointer. If so,
it selects the entry at `+0x5C0` and copies six DWORDs into the child at
receiver `+0xA7C`.

The receiver and row layouts, sentinel meanings, resource identity, helper
contracts, and on-screen result remain unknown. This is static exact-byte
verification; no emulator runtime or visual test has been run.
