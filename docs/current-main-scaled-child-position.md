# Current Main.dll scaled child-position updater: FUN_587B70A0

`FUN_587B70A0` is a 136-byte native x86 function called by the verified child
constructors `FUN_587B7130` and `FUN_587B7260`. The complete instruction body
rebuilds byte for byte against the installed `Main.dll`; objdiff 3.8.0 reports
100%, with all five mapped relocation targets checked.

When global value `0x589C8EDC` is nonzero, the function reads horizontal and
vertical spans from fields `+0x14/+0x1C` and `+0x18/+0x20` of the object at
`0x58A24580`. Each span is halved, multiplied by 1000, and divided by a value
read at `+0x10524` through the object referenced by `0x58A2459C`. It subtracts
the results and values at `+0x50/+0x54` from receiver coordinates `+4/+8`.
If receiver `+0x58` is non-null, the function calls `0x587B7400` with the
computed values and receiver `+0x5C`; it substitutes global `0x58A248F8` when
`+0x5C` equals -1. On all paths it writes `0x101` to receiver `+0x2C` and
returns.

Static evidence establishes the operations, fields, and constructor callers.
It does not identify the coordinate units, the role of the gate or divisor,
the meaning of `0x101`, or the callback's rendering contract. No runtime
rendering test was performed.
