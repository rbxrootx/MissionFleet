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
`FUN_588DFFB0`. For selectors other than 4 and 5, a receiver with nonzero
`+0x60B0` gets `+0x60B4 = 0x40000000`; a further global gate enables coordinate
scaling from display dimensions and object offsets before a call to
`FUN_587B7400`.

ObjDiff verifies the complete body, `ret 0x14`, and all 15 mapped operand
targets. The encoded field meanings, numeric units, selector roles, and final
visual/gameplay effect remain unresolved. No emulator test was performed.
