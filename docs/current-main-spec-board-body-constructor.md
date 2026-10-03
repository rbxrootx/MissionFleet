# Current Main spec-board body constructor

Ghidra decompilation shows `FUN_588edc50` initialize its `CMenuScreen` base and
install `CSpecBoard_Body::vftable`. Its body is one contiguous range,
`588EDC50..588EF25A`, totaling 5,643 bytes. ObjDiff 3.8.0 verifies the emitted
source against the captured mapped client image at 100%, with 205 relocation
operands checked.

The direct caller is `FUN_587dba00` at `0x587DBB75`. That caller allocates
`0x140` bytes for the child, invokes this constructor, and stores the returned
pointer at its `+0xDAC` field. The caller is identified as
`CPageFactory_ControlMenuScreen` in the existing control-menu evidence.

The constructor sets screen flags and layout fields, then creates and stores a
series of child controls. Its branches check resource-table bounds and
availability before passing entries to helper routines; repeated control
creation and field writes are visible in the original body. Numeric resource
indices and offsets are left uninterpreted because their labels and user-facing
actions have not been recovered.

Exact member names, resource schema, visible labels, control actions, and runtime
appearance remain uncertain. No emulator runtime test was performed.
