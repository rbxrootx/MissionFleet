# Current Main factory-help state reset

`FUN_58852cd0` is the `+0x08` virtual method in the `CPannelFactoryHelp`
vtable at `0x5899E8E0` (pointer at `0x5899E8E8`). It occupies one contiguous
58-byte range in the captured current-client `Main.dll`.

## Evidence from the original code

The method reads the word at object offset `+0x24`. If bit `0x04` is set, it
keeps the bits selected by mask `0xE4FF`, sets bit `0x0400`, clears the dword
at `+0x58`, writes the new state word, and then clears its two low bits. When
the condition is false, it returns without changing the object. ObjDiff 3.8.0
matches all 58 bytes at 100.0%; the body has no mapped operands.

## Uncertainties

The lifecycle event, state-bit meanings, and the role of `+0x58` are not
established by this method. No emulator test was performed.
