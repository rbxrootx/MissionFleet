# Current Main `CPannelHelpScreen` constructor

`FUN_58875ac0` is a 3,152-byte `__thiscall` constructor in the locally captured
current-client `Main.dll`. Ghidra identifies it assigning
`CPannelHelpScreen::vftable` after initializing the `CMenuScreen` base. Its
body is the contiguous range `0x58875AC0..0x5887670F`. ObjDiff 3.8.0 matches all
3,152 bytes and checks 84 mapped operand targets.

Ghidra records one direct caller: `FUN_588011c0`, the constructor for
`CPageFightOn_ControlMenuScreen`. That parent checks a 0xD4-byte allocation,
calls `FUN_58875ac0` with coordinate arguments, and stores its result in
`param_1[0x838E]`. The decompilation does not resolve the allocation's relation
to that returned pointer. The global UI initializer `FUN_5878af40` constructs
the parent.

The constructor repeatedly allocates 0x54-byte `CSpriteDataScreen` children,
selects shared records through the table at `DAT_58A24720+0x18C` subject to its
count at `+0x164`, copies six record words into child fields, stores each child
pointer in the receiver, and updates child state through `FUN_58902D20`. These
are observed allocation sizes, offsets, calls, and bounds. Sprite identities,
child roles, layout meaning, and the resulting appearance remain unknown. No
emulator runtime or visual test was performed.
