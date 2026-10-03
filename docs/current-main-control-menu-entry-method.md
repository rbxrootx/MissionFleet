# Current Main control-menu entry method

`FUN_587e2e80` is the `+0x04` virtual method in the
`CPageFactory_ControlMenuScreen` vtable at `0x5899B824`. Its contiguous 502-byte
body ends with a tail jump.

## Evidence from the original code

The method stores the receiver in a global, sets receiver state `+0x58` to
`0x100`, and calls `FUN_587e0e40` at `0x587E2EA6`. That routine is the
verified 8,252-byte control-rebuild function. The method then invokes UI and
child-control helpers, clears low state bits on the children referenced at
`+0x4F4/+0x4F8/+0x4FC`, and tail-jumps to `FUN_587ba670`. ObjDiff 3.8.0
matches all 502 bytes at 100.0% and checks 23 mapped operands.

## Uncertainties

The state meaning, child roles, helper effects, and visible transition remain
unknown. No emulator test was performed.
