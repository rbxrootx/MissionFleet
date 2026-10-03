# Current Main virtual spatial update

`FUN_5873fe80` is a single-range function at `0x5873FE80` with a 6,761-byte
Ghidra body. The imported `vftable` at `0x5898CE4C` contains a pointer to this
function at slot `+0x0C` (`0x5898CE58`), and Ghidra also identifies an
unconditional-jump thunk at `0x588D24E0`. This establishes virtual-table use;
the owning class name was not recovered.

The function advances a frame/index field, stores the receiver's current
coordinates in a history table, computes position-dependent values, checks a
spatial query through `FUN_587eabc0`, and updates sprite/control fields. Its
empty-state branch uses timing helpers, calls `FUN_588ebcd0`, synchronizes,
then dispatches a virtual operation. This supports describing it as an update
routine, while the exact callback cadence, field units, and helper contracts
remain unknown.

ObjDiff reports an exact match for all 6,761 bytes and checks 298 mapped
operands. This validates compiled bytes against the captured installed
`Main.dll`; it does not prove the recovered field names or runtime behavior,
and no emulator test was performed.
