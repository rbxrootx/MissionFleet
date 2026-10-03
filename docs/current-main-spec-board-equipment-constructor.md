# Current Main equipment spec-board constructor

Ghidra identifies `FUN_588f15f0` as the constructor that installs
`CSpecBoard_Equip::vftable` after `CMenuScreen` base initialization. Its two
body ranges total 5,868 bytes. ObjDiff 3.8.0 verifies the emitted source against
the captured mapped `Main.dll` bytes exactly, with 192 operands checked.

The only direct caller is `FUN_587dba00` at `0x587DBBE9`. That caller installs
the `CPageFactory_ControlMenuScreen` vtable, allocates `0x4D0` bytes for this
child, and stores its returned pointer at parent offset `+0xDBC`.

The constructor sets layout fields, calls shared equipment-board setup
helpers, and creates resource-table-driven sprite controls plus several
sprite-data and repeated-control children. It reads bounded entries through
`DAT_58A246B8` and `DAT_58A246A4`. These are structural observations; the
specific statistic labels and user-facing control actions are not recovered.

Ghidra excludes the nine-byte span `588F2367..588F236F`; the listing contains
no instructions there and shows an unconditional jump to the next range. The
span is omitted rather than classified as padding. Resource meanings, exact
screen appearance, and runtime behavior remain uncertain. No emulator test
was performed.
