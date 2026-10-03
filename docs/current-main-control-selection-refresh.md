# Current Main selection-driven control refresh

`FUN_587df580` is a 2,815-byte `__thiscall` function taking a selector. Ghidra
assigns two body ranges:

| Range | Bytes |
| --- | ---: |
| `0x587DF580..0x587DFE57` | 2,264 |
| `0x587DFE60..0x587E0086` | 551 |

The eight bytes between the ranges are not part of the Ghidra function body.
Ghidra records 20 calls from 13 functions, including four calls from
`FUN_587e44c0`, the RTTI-identified `CPageFactory_ControlMenuScreen` update,
and calls from `FUN_587e0e40` and `FUN_587e3080`. In the factory update, caller
arguments come from receiver fields and selected-record state; other callers
show the helper is shared beyond that one update path.

Selector zero clears the selected-record pointer at receiver offset `+0xD78`;
nonzero selectors are passed to `FUN_587d9070`, whose return value is stored
there. A null pointer takes a reset path that clears several child-control
flags and invokes reset helpers. A nonnull pointer refreshes child controls
from the selected record and indexed resource data, updates control callbacks,
and uses child state bits to choose indirect control operations. These effects
are visible in Ghidra; the selector contract, record type, child roles, and
resource meanings remain unknown.

The two reconstructed ranges match the mapped client at 100.0% under ObjDiff
3.8.0, with 64 mapped operand targets checked. No emulator runtime test was
performed.
