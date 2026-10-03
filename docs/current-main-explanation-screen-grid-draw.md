# Current Main explanation-screen grid drawing method

`FUN_58761b20` occupies the contiguous Ghidra range
`0x58761B20..0x58762604`, totaling 2,788 bytes. ObjDiff verifies the emitted
instruction stream against the captured mapped `Main.dll`.

## Original-code evidence

The Complete Object Locator at `0x5898DBE8` references the MSVC TypeDescriptor
`0x589BA63C`, whose decorated class name is
`.?AVCExplanationControlMenuScreen@@`. The vtable slot at `0x5898DC00` contains
`0x58761B20`; Ghidra records this data reference but no direct code caller, so
the function is treated as a virtual callback with untraced dispatch sites.

When the receiver's flag bit 0 is set, the method walks its child list at
`+0x4C`, invoking eligible children through virtual slot `+0x14` before and
after its own work. It repeatedly calls `FUN_58903d60` with geometry derived
from receiver bounds and spacing values in a shared layout table. That helper
clips rectangle bounds to a child and dispatches its draw callback through
virtual slot `+4`. The method iterates positions across the receiver's
horizontal and vertical dimensions. These details support describing it as a
screen-grid drawing callback; the visible pattern is not identified.

ObjDiff checks all 2,788 bytes and 67 mapped operand targets.

## Uncertainties

The exact virtual method name, meaning of the pattern, colors/resources, and
runtime appearance remain unknown. No emulator visual test was performed.
