# Current Main factory-help child-chain dispatch

`FUN_58857850` is the `+0x44` virtual method in the `CPannelFactoryHelp`
vtable at `0x5899E8E0` (pointer at `0x5899E924`). Its corrected contiguous
body is 1,519 bytes and includes both a normal return and a conditional
tail-dispatch path.

## Evidence from the original code

Near the end of the body, the method follows the child link at `+0x38` and
compares it to the owner link at `+0x3C`. A match branches to `0x58857E3B`,
restores registers, and tail-jumps through `eax`. Otherwise, it calls each
child's virtual method at vtable offset `+0x0C` while walking the links, then
returns through the alternate path. ObjDiff 3.8.0 verifies all 1,519 bytes at
100.0% and checks 38 mapped operands.

## Uncertainties

The sentinel meaning, event purpose, and target of the tail call remain
unresolved. No emulator test was performed.
