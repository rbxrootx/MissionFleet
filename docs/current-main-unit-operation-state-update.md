# Current Main unit-operation state updater

`FUN_58737e60` is a 2,748-byte function recovered from five discontiguous Ghidra
ranges in the installed current-client `Main.dll`. The source preserves those
ranges independently; unowned bytes between them are excluded. ObjDiff 3.8.0
matches all five ranges and checks 87 mapped operands.

## Evidence from the original code

Ghidra reports a direct call from `FUN_58738940` at `0x58738C51`. The caller
iterates the same record collection at `param_1 + 0x100` using a 0x14-byte
stride, reads record-kind bytes 3 and 4, handles state/timer fields, and
eventually dispatches to this updater. In this function, the original
pseudocode likewise iterates 0x14-byte records and branches on kind bytes 3 and
4, an enabled byte, a state byte, and an associated object pointer. The body
reads linked records, conditionally changes state and auxiliary bytes, and
calls helpers including `FUN_58736ff0`, `FUN_58735f30`, `FUN_58736f70`,
`FUN_58737400`, and `FUN_58736010`. These observations come from Ghidra's
decompilation and the original captured bytes, not from an inferred game-AI
label.

## Uncertainties

The semantic names of record kinds 3 and 4 and the state values are unknown.
The helper functions' gameplay effects and runtime conditions are only partly
established. This function has not been exercised in the emulator; byte
identity establishes the captured machine-code ranges, not gameplay correctness
or a complete native source reconstruction.
