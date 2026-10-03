# `CPannelCommunicatorConfigHarborInfoTab` initializer

`FUN_588304f0` is a 4,587-byte `__thiscall` initializer in the installed 2026
`Main.dll` mapping. Ghidra shows it initializing the `CMenuScreen` base and
then assigning `CPannelCommunicatorConfigHarborInfoTab::vftable`. It loads
`CHIP.spr` through `FUN_588F3D70`, selects entries from that sprite table, and
constructs `CSpriteDataScreen` and other child controls. The sprite-table
indices and resulting images have not been mapped to visible controls.

Ghidra's direct-reference audit records one caller, `FUN_58843380`, at
`0x58844364`. The caller checks a `0x25C`-byte allocation, invokes this
initializer, and stores the returned pointer in receiver slot `+0x170`. This
places the method in the communicator-configuration panel's child-construction
path. The complete receiver/base layouts, child labels/actions, and runtime
appearance remain unresolved. No emulator runtime test was performed.

Ghidra identifies one contiguous body range,
`0x588304F0..0x588316DA`, totaling 4,587 bytes. The generated source matches
the mapped original byte-for-byte under the recorded Visual C++ 6.0 SP5
profile and ObjDiff 3.8.0; verification checked 139 relocation operands.
