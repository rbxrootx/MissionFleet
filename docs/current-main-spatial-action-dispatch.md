# Current Main spatial action dispatch helper

`FUN_5873C2E0` is called by verified spatial-state handler `FUN_5873F020` at
two sites and by verified virtual spatial-update method `FUN_5873FE80`. The
virtual update passes literal mode `1`; the state handler passes a held mode
value at one site and literal `1` at another.

The helper passes receiver fields `+0x74/+0x7C` and the mode to
`FUN_588E04F0`, then invokes `FUN_5873BCF0` with a computed offset. It can clear
receiver flag `+0x474`, check an indexed record under `+0x1398`, and set bit 0
in a child word at `+0x24`, including setting the child's `+0x474` field. It
then compares the receiver's `+0x74` pointer with the active-object pointer at
`0x58A247F8+4`, extracts the active object's low five-bit value from
`+0x100C+4`, and selects helpers according to that value and the mode. When
receiver word `+0x2D6` is nonzero, it also calls a virtual method with word
`+0x2CC` minus one.

The function's 385-byte body and all 20 mapped operand targets match the pinned
original. The receiver and child types, mode and subtype meanings, indexed
record layout, flags, and dispatched helper contracts remain unresolved. No
client runtime or emulator test was performed.
