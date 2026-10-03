# Current Main factory-help parameter event method

`FUN_58853c20` is the `+0x50` virtual method in the `CPannelFactoryHelp`
vtable at `0x5899E8E0` (pointer at `0x5899E930`). The 763-byte body is
contiguous and ends with `ret 0x0C`.

## Evidence from the original code

The method processes the case where its second stack argument is `2`. It sets
fields at `0x58A2459C+0x104E0/+0x104E4`, compares the first argument with the
object field at `+0xA8`, and branches on `+0xAC`. It calls `FUN_587B6020` and
dispatches through child virtual slots `+0x04/+0x08` while processing control
entries. ObjDiff 3.8.0 matches all 763 bytes at 100.0% and checks 34 mapped
operands.

## Uncertainties

The event, global-field, and object-field meanings and the resulting screen
behavior remain unknown. No emulator test was performed.
