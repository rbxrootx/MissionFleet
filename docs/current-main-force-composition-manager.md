# `CPannelForceCompositionManager` initializer

`FUN_58868b40` is a 4,527-byte `__thiscall` initializer in the installed 2026
`Main.dll` mapping. Ghidra shows it initializing the `CMenuScreen` base and
then assigning `CPannelForceCompositionManager::vftable`. It constructs
sprite-backed text and image children from the indexed data at
`DAT_58A246C4` and `DAT_58A246C8`, stores child pointers in receiver slots, and
changes child flag bits through helper calls. Table indices, resource names,
labels, and user-facing actions are not inferred.

Ghidra's direct-reference audit records one caller, `FUN_58872030`, at
`0x58872506`. The caller assigns `CPannelForceManager::vftable`, checks a
`0x2D4`-byte allocation, invokes this initializer, and stores the returned
pointer in receiver slot `+0xC4`. This establishes the parent-child
construction path; the complete object layout and runtime appearance remain
unresolved. No emulator runtime test was performed.

Ghidra identifies one contiguous body range, `0x58868B40..0x58869CEE`, totaling
4,527 bytes. The generated source matches the mapped original byte-for-byte
under the recorded Visual C++ 6.0 SP5 profile and ObjDiff 3.8.0; verification
checked 130 relocation operands.
