# `CPageChannelBattle_ControlMenuScreen` constructor evidence

`FUN_587d26c0` is identified from the current `Main.unpacked.dll` Ghidra
project. Ghidra assigns `CMenuScreen::vftable` during base setup, then
`CPageChannelBattle_ControlMenuScreen::vftable`. The verified machine-code body
contains two ranges: `0x587D26C0..0x587D2816` (343 bytes) and
`0x587D2820..0x587D383B` (4,124 bytes), totaling 4,467 bytes. The 9 bytes
between them are outside the reported function body and are not claimed as
owned by this function.

The constructor initializes screen coordinates and state, writes five repeated
coordinate records, and allocates or initializes sprite-backed child objects.
The Ghidra output includes `CSpriteDataScreen` and
`LFDCListManager<CSpriteDataScreen*>` vtable stores. Child indices, table
semantics, resource identities, and user-visible control behavior remain
unresolved.

## Caller evidence

Ghidra's direct-reference report lists one call from `FUN_5878af40`. In that
caller, `FUN_5897cc4e` is called with allocation size `0xAE4`; the successful
path invokes `FUN_587d26c0(0, 0, 0, 0, 0, 0x40)` and stores the result in
`DAT_58A245A0`. The caller then clears bits in a child flag word, writes
`0x44C` to a field at `+0x26`, and invokes `FUN_58902f50` and `FUN_58902ee0`
when the corresponding child fields are nonzero. Those actions are direct
decompiler observations; their runtime meaning is not established.

## Validation and limits

`tools/generate_mapped_client_asm.py` emits the source from the locally captured
mapped client image, restricted to the two Ghidra-reported ranges. ObjDiff
verified all 4,467 bytes and 97 mapped operand records. This proves an exact
machine-code match for those extents, not a recovered high-level implementation.
The 9-byte gap, exact child ownership, visible screen behavior, and emulator
runtime behavior remain unverified.
