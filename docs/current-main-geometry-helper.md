# Current Main coordinate-array helper

`FUN_588d8d60` has three Ghidra body ranges totaling 3,789 bytes:

| Range | Bytes |
| --- | ---: |
| `0x588D8D60..0x588D91BC` | 1,117 |
| `0x588D91C0..0x588D9531` | 882 |
| `0x588D9540..0x588D9C3D` | 1,790 |

The two gaps are 3 and 14 bytes, respectively, and are excluded because Ghidra
assigns no body instructions there. The generated source follows all three
ranges. ObjDiff 3.8.0 confirms a byte-identical match and checks five mapped
operand targets.

Ghidra's only direct caller is `FUN_588e05c0`, at `0x588E0969`. No class identity
or higher-level owner was recovered. The function uses two global tables,
`DAT_58A0ED18` and `DAT_58A0B4D8`, and repeatedly writes coordinate-like pairs
using fixed-point arithmetic. Its loops run for 20 and 120 iterations,
followed by a loop whose count comes from an argument. The table index advances
by `0x1E` and wraps through `0xE10`. Interpreting these tables as trigonometric
coefficients is plausible from the arithmetic, but remains an inference; the
exact represented object, coordinate units, and rendered effect are unknown.
No emulator runtime test was performed.
