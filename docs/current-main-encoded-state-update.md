# Current Main.dll encoded state update helper

`FUN_588E0260` is a 420-byte routine in the hash-pinned installed-client
`Main.dll`. Verified callers `FUN_587EFD60` and `FUN_588E5150` invoke it in
entity/update paths. `FUN_588E5150` uses special selector 5 with three related
values when receiver word `+0x164` is 6, and selector 4 with three ones on a
separate receiver `+0x60C4`-gated path.

The helper adjusts receiver fields `+0x1438`, `+0x143C`, `+0xDAC`, `+0xDD4`,
and `+0x398`; the first two are stored and recovered through XOR with
`0xAAAAAAAA`. It calls `FUN_5884D630` with the new `+0x398` value. If this is
the active object, it passes the decoded `+0x1438` and `+0x143C` values through
`FUN_58895860`, then forwards `+0xDAC` through `FUN_58895560`, before calling
`FUN_588DFFB0`. `FUN_58895860` now matches its full 94-byte body, including both
calls to `FUN_589032E0`. It clamps negative input values to zero, stores the
selected value in
receiver field `+0x94` or `+0x98` (the observed selectors are 0 and 1), then
recalculates both fields as signed `(value * 0x373) / receiver[+0xA8] + 0x7E`
and forwards them to objects at `+0x68` and `+0x6C`. The verified caller sites
are `0x588E0328`, `0x588E0344`, and `0x588E5516`. For selectors other than 4
and 5, a receiver with nonzero
`+0x60B0` gets `+0x60B4 = 0x40000000`; a further global gate enables coordinate
scaling from display dimensions and object offsets before a call to
`FUN_587B7400`.

ObjDiff verifies the complete body, `ret 0x14`, and all 15 mapped operand
targets. The encoded field meanings, numeric units, selector roles, scaled
values' meaning, receiver/child types, and final visual/gameplay effect remain
unresolved. No emulator test was performed.
