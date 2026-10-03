# Current Main fleet/battle screen state updater

Ghidra assigns `FUN_587f8760` one 10,038-byte body split across eight ranges,
from `0x587F8760` through `0x587FAEBE`. It records a direct call from
`FUN_58807d50` at `0x58807E73`. The receiver class is not identified, so this
note describes the routine by its observed work rather than assigning it a
class name.

The routine copies `0x31` dwords (0xC4 bytes) from its second argument into the
receiver at `+0x1056C`, then reads and updates numerous sprite/control fields
according to the receiver state at `+0x105F0`. It consults global ship and
battle records, and walks the linked fleet list at `DAT_58A247F8 + 0x0C` to
refresh per-entry controls and counters. One conditional path constructs a
`SantaShip`-named resource from observed input fields. When `DAT_58A24574` is
nonzero, the function writes `TestInfo.txt`, including numeric tables and
diagnostic fields for fleet entries. Helper names and undocumented offset
semantics are intentionally left unresolved.

Ghidra reports these body extents: `587F8760..587F8D8C`,
`587F8D90..587F8DC8`, `587F8DD0..587F8E46`, `587F8E50..587F91C6`,
`587F91D0..587F94FC`, `587F9500..587F988C`, `587F9890..587FA758`, and
`587FA760..587FAEBE`. Their sizes sum to the inventory's 10,038 bytes.
Capstone decodes every byte in the seven intervening gaps as alignment
instructions (`lea ecx,[ecx]`, `lea esp,[esp]`, or `mov edi,edi`); none is
added to the function body.

The reconstructed eight source segments compile and match the mapped client
with ObjDiff 3.8.0 at 100.0%. The verifier checked 397 mapped operands. This
confirms function-level bytes only: the receiver class, meanings of its state
values and record fields, helper contracts, visible control labels, and
runtime output have not been established. No original-client runtime test was
performed.
