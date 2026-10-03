# Current Main factory-help display-state method

`FUN_588561f0` is the `+0x3C` virtual method in the `CPannelFactoryHelp`
vtable at `0x5899E8E0` (pointer at `0x5899E91C`). The contiguous 880-byte body
ends with `ret`.

## Evidence from the original code

The method sets state bits at object offset `+0x24`, clears `+0x2D8`, and
calculates target coordinates at `+0x50/+0x54` from fields at
`0x58A2459C+0x20` and `+0x18`. It traverses paired child-control groups
beginning at `+0x80` and `+0xF8`, performs virtual calls on those controls, and
invokes layout and state helpers. A final branch calls `FUN_58903290` with
`0x0205` based on the field at `+0x2E4`. ObjDiff 3.8.0 matches all 880 bytes
at 100.0% and checks 26 mapped operands.

## Uncertainties

The display mode, units of the calculated values, child roles, helper
semantics, and the condition at `+0x2E4` remain unknown. No emulator test was
performed.
