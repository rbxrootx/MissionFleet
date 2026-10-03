# Current Main `CHCB_LandingTank` vtable method

`FUN_58782cf0` occupies two Ghidra body ranges totaling 3,796 bytes:

| Range | Bytes |
| --- | ---: |
| `0x58782CF0..0x587830D4` | 997 |
| `0x587830E0..0x58783BCE` | 2,799 |

The 11-byte gap between these ranges is excluded because Ghidra assigns no body
instructions there. The generated source follows both reported ranges. ObjDiff
3.8.0 confirms a byte-identical match and checks 130 mapped operand targets.

The vtable address point at `0x58996A68` references this function at slot `+0x0C`.
Its preceding Complete Object Locator at `0x58996A64` points to
`0x589A5EF4`; that record's TypeDescriptor names `.?AVCHCB_LandingTank@@`.
Thus the receiver class is supported by mapped RTTI, not inferred from the
function's behavior. Ghidra found no direct callsite; virtual-dispatch callers
remain unknown.

The body returns when receiver flag `+0x24` lacks bit 2. Otherwise it calls
`FUN_587e5e10` with coordinates at `+4` and `+8`, and sets or clears flag bit 0
from that result. Other branches update receiver state/countdown fields, call
battle/effect helpers, and walk the circular child list at `+0x3C`, invoking
each child's vtable slot `+0x0C`. These are direct control-flow and field
observations; the semantic names of fields/helpers and the exact visible effect
remain unresolved. No emulator runtime test was performed.
