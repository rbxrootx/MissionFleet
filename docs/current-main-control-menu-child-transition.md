# Current Main control-menu child transition

`FUN_587da7f0` is the `+0x08` virtual method in the
`CPageFactory_ControlMenuScreen` vtable at `0x5899B824`. Its 417-byte body
ends with an indirect tail jump.

## Evidence from the original code

The method masks the state word at `+0x24`, sets transition bits, and invokes
child virtual slot `+0x08` on controls at `+0x1044`, `+0x1048`, `+0x104C`, and
other child fields. It calls `FUN_587d7820` and `FUN_587d7ad0`, updates child
flags, then tail-jumps through a target loaded from a global object. ObjDiff
3.8.0 matches all 417 bytes at 100.0% and checks three mapped operands.

## Uncertainties

The state meaning, child identities, helper semantics, and tail-call target
remain unknown. No emulator test was performed.
