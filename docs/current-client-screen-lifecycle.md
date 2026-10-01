# Installed client screen lifecycle

This reconstruction targets the installed FleetMission client build, whose
`Main.dll` SHA-256 is
`74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd`.
Its locally captured mapped image is hash-pinned in
`config/NF2_2026/client-verifications.json`; the capture itself remains local.
The image base is `0x58730000`, as recorded by the capture manifest.

The exported `AllocScreen` at `0x587962C0` calls the 1,704-byte constructor
`FUN_587C35A0`. Its Ghidra decompilation shows a `0x84`-byte allocation, a
screen pointer stored at `0x58A24584`, and an optional callback at vtable
offset `+0x20`. The constructor installs `CMenuScreen` and then
`CNavyFIELDScreen` vtables, initializes screen state, creates repeated `0x70`-
byte child controls, and reads the FleetMission registry version value. Those
calls and fields tie the match to actual screen construction rather than to an
unrelated code fragment.

Both functions match their captured mapped extents byte-for-byte under objdiff
3.8.0: 66 bytes for `AllocScreen` and 1,704 bytes for `FUN_587C35A0`. The
verifier separately checks the direct-call and absolute data-reference
destinations (5 operands and 92 operands). The source emits the captured
instructions; Ghidra pseudocode supplies the behavioral interpretation. The
optional callback contract and exact meaning of several child controls remain
unknown.

The installed build remains separate from the archived 2062 client. Its
entrypoint at `0x58F76B6B` remains inside `.vmp1` and still reaches an indirect
`JMP ESI`; matching this native screen lifecycle does not devirtualize that
protected path. See [the capture and VM boundary evidence](client-unpacking.md#current-build-vm-dispatch-boundary).
