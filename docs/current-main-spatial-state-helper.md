# Current Main spatial-object state helper

`FUN_5873f020` is a 3,571-byte `__fastcall` function with one contiguous Ghidra
body range:

| Range | Bytes |
| --- | ---: |
| `0x5873F020..0x5873FE12` | 3,571 |

Ghidra records one direct call from `FUN_5873fe80` at `0x5873FFB8`. That
function is independently identified as a virtual spatial-update method: its
pointer occurs at vtable slot `+0x0C`, stored at `0x5898CE58`. The table's
owning C++ class is not identified.

The helper reads an object state at `+0x4C8`, with branches for `-1`, `0`, `1`,
`2`, `4`, `5`, `6`, and `10`. Those branches update timer-like, coordinate,
and state fields, though their names and units are unknown. In one state-5
path, Ghidra shows conditional creation of effect/object records followed by
a call to the matched combat hit resolver `FUN_587efd60`; the arguments include
coordinates from the receiver, linked records, state code `0x0D`, and other
values. This links spatial-object processing to the hit resolver without
claiming that all state or damage rules are understood.

The generated source matches the single Ghidra body range byte-for-byte under
the recorded Visual C++ 6.0 SP5 profile. ObjDiff 3.8.0 checked 116 mapped
operand targets. No original-client or emulator runtime test was performed.
