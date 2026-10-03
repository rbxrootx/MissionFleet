# `CPannelJump_ControlMenuScreen` initializer

`FUN_58889640` is a 4,605-byte `__thiscall` initializer in the installed 2026
`Main.dll` mapping. Ghidra shows it initializing the `CMenuScreen` base and
then assigning `CPannelJump_ControlMenuScreen::vftable`. Its one direct caller
is the global UI initializer `FUN_5878af40` at `0x5878C823`; that code checks a
`0x140`-byte allocation, calls this initializer, stores the returned pointer in
`DAT_58A245BC`, and clears child flag bits.

The body creates many sprite-backed controls using shared tables and helper
routines, stores child pointers in receiver slots, initializes temporary
control-record groups, and creates a final child through `FUN_58733280` using
the data address `0x5898C922`. The identities of the indexed assets, the text
at that address, the screen's user-visible actions, and the full object layout
remain unresolved. No emulator runtime test was performed.

Ghidra identifies one contiguous body range, `0x58889640..0x5888A83C`, totaling
4,605 bytes. The generated source matches the mapped original byte-for-byte
under the recorded Visual C++ 6.0 SP5 profile and ObjDiff 3.8.0; verification
checked 104 relocation operands.
