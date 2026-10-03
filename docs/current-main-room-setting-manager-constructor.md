# Current Main room setting manager constructor

`FUN_588c9280` is the constructor Ghidra identifies as
`CRoomSettingManager`; it installs the `CMenuScreen` base vtable before the
derived vtable. The five Ghidra body ranges total 7,746 bytes and match the
reconstructed source at 100.0% in objdiff 3.8.0, with 274 mapped operands
checked.

Ghidra records one direct call from `FUN_587cec30` at `0x587CECA0`. That parent
allocates `0x2AC` bytes and stores the returned pointer at its `+0xA00` field.
The constructor calls the shared screen initializer, sets layout and state
fields, and creates child controls from bounded global resource tables. The
observed helpers include `FUN_58731c60` for sprite controls,
`FUN_58907100` for repeated controls, `FUN_58761090` for a text control, and
`FUN_5875dda0` for sprite-data screens. The pseudocode does not recover most
resource labels or individual control purposes.

The four gaps between Ghidra's code ranges total 21 bytes. Capstone decodes
them completely as alignment instructions: `lea esp, [esp]` with an optional
`nop`, or `lea ecx, [ecx]`. Ghidra's preceding unconditional jumps skip each
gap, and no gap bytes were added to the function extent.

The resource schema, visible labels, child-control identities and actions,
receiver field meanings, and runtime appearance remain unresolved. This is a
byte match against the installed mapped `Main.dll`; no original-client visual
or interaction test was performed.
