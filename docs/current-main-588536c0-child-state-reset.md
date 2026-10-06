# Current Main.dll child-state reset helper

`FUN_588536C0` is a 414-byte ECX-receiver function in the installed Main.dll
capture. Ghidra assigns it three body ranges: `[0x588536C0,0x588537A9)`,
`[0x588537B0,0x588537DD)`, and `[0x588537E0,0x58853868)`. The 10 bytes between
those ranges are alignment NOPs and are excluded from the reconstructed body.

Ghidra references and an independent scan of the mapped `.text` inventory find
two direct callers, both byte-matched: `FUN_587FD890` at `0x587FE089` and
`FUN_58857020` at `0x5885703A`. Neither call passes stack arguments. The first
occurs after the caller's state and nonzero-result gates, with ECX loaded from
`0x58A245C4`; the second is the first helper call after `FUN_58857020` saves its
incoming ECX receiver.

The body initializes receiver fields `+0x2C4`, `+0x2CC`, `+0x2D0`, and `+0x2D4`.
It calls `FUN_588804F0(2, 6, 0)` using global object `0x58A245E4`, then sets or
clears the low four bits of child flag words reached through receiver fields
`+0x2F4` and `+0x2F8`, based on that result. It clears fields on objects reached
through `+0x2B8` and a 32-pointer array at `+0x108`, zeros `0x80` bytes at
`+0x1A8`, and traverses four child pairs at receiver offsets `+0x7C/+0x80`,
`+0x84/+0x88`, `+0x8C/+0x90`, and `+0x94/+0x98`. The loop clears observed
fields and invokes helpers, including each child's virtual slot `+0x20`. It
then calls `FUN_588587C0`. Although Ghidra renders the last transfer
as call-and-return, the mapped bytes end in a tail jump to `FUN_5885EE90`.

The source preserves the three mapped ranges independently, and the match
record requires objdiff byte identity. The receiver and child types, field and
flag meanings, the reset policy selected by `FUN_588804F0`, the virtual-slot
contract, and the effects of unmatched callees `FUN_587C7C80`, `FUN_5885C240`,
`FUN_58863460`, and `FUN_5885EE90` remain unknown. No emulator runtime test has
been performed.
