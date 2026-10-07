# Main.dll CRoomTypeOccupation construction

Fresh Ghidra references show byte-matched `FUN_588C9280` calling
`FUN_588D0710` at `0x588CACF5`. The installed vtable in the matched caller
identifies it as `CRoomSettingManager`; the focused verifier confirms the
mapped call instruction and that the caller is in the byte-verified catalog.
Ghidra labels the child constructor's installed vtable
`CRoomTypeOccupation::vftable`.

The 960-byte body contains 287 completely decoded instructions in one exact
Ghidra range, `[588D0710, 588D0AD0)`. It calls `FUN_588D02E0` for base
initialization, installs its vtable, and consults fields at
`DAT_58A24640+0x164` and `DAT_58A24640+0x18C` to select records. It copies six
DWORDs from each selected record into child objects at receiver indices
`0x18` and `0x19`; the code then writes another value through the child at
index `0x17`.

Two loops build sprite-data controls through `FUN_5875DDA0`: three iterations
each create three controls, then two iterations each create one more. Each
control-construction path checks resource `0xAC` through `FUN_5897CC4E`, then
creates and stores its child pointer through `FUN_5875DDA0`. Four static call
sites invoke `FUN_58902D20(0x101)` inside those loops. The outgoing call set
contains 13 call instructions; all targets, including the base
initializer, are byte-verified. The focused verifier checks every instruction,
the exact body extent, the matched caller callsite, and all 13 outgoing
transfers.

The emitted source preserves the mapped instruction stream and matches under
objdiff 3.8.0 at 100.0%; it is not a recovered high-level C++ implementation.
The selected-record and global-table schemas, state/bounds meanings, resource
`0xAC`, control value `0x101`, and control appearance or actions are unresolved.
The fallback around the third child's value read also needs runtime evidence to
establish its validity conditions. This is static installed-client evidence;
no original-client visual or emulator runtime test was performed.
