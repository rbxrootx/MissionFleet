# Current Main.dll communicator-configuration tab constructor

`FUN_5882A730` covers the complete mapped extent `0x5882A730–0x5882B030` (2,305 bytes). Ghidra identifies the final vtable assignment as `CPannelCommunicatorConfigFormTab::vftable`; it initially installs `CMenuScreen::vftable`. The source preserves the full instruction stream, including the SEH frame and stack-cookie path.

The only direct caller is byte-matched `FUN_58843380`, at `0x5884425C`. It allocates a 0xB8-byte block, places that block in ECX, pushes six constructor values, calls this function, and stores the returned pointer at its own `+0x15C` (member slot `+0x57`). Its other nearby calls construct sibling panels, grounding this target as one child of the larger screen.

The constructor calls `FUN_589031A0`, initializes receiver fields and flags, and stores `[DAT_58A245B4+0x50]` at `+0x64`. It allocates two 0x5C child objects and initializes/attaches them through `FUN_58759F60` and `FUN_58759F20`. Each child receives two resource-indexed `CSpriteDataScreen` entries. Further child controls are built through `FUN_58761090`, `FUN_5890A5B0`, and `FUN_5875DDA0`; the constructor finishes by allocating and clearing an 0x800-byte buffer and restoring the previous exception list. These operations are visible in both the mapped bytes and Ghidra output.

The exact purpose of each child, resource index, text field, coordinate, and helper call remains unknown. The recovered vtable name is direct Ghidra type evidence, while the displayed content and visual layout have not been checked at runtime. Validation is a byte comparison against the captured installed `Main.dll`; no emulator visual/runtime test has been performed.
