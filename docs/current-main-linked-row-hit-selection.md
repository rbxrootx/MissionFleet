# Current Main.dll linked-row hit selection

`FUN_58908750` is a 156-byte routine in the hash-pinned mapped installed-client
`Main.dll`. It is called by verified functions `0x5879D550`, `0x588450B0`, and
`0x58890110`; `0x588450B0` contains two callsites. Its complete extent matches
at 100% under objdiff, including its one mapped operand target.

The routine takes two stack coordinates and returns an item index or `-1` with
`ret 8`. It checks the first coordinate against horizontal bounds built from
receiver offsets `+4`, `+0x14`, and `+0x1C`, then checks the second against
vertical bounds at `+8`, `+0x18`, and `+0x20`. For an in-bounds point it divides
the vertical offset by the row size at `+0x5C` and traverses links from `+0x80`
until it reaches the selected row or the boundary at `+0x84`. A changed node is
stored at `+0x84` and triggers virtual slot `+0x3C`; an unchanged node triggers
slot `+0x38`. Callers check for `-1` before using the index.

The receiver and linked-node types, callback meanings, and exact control remain
unknown. The caller evidence supports coordinate-based row selection, but does
not identify a particular list or tree widget. Byte identity verifies the
captured instruction stream, not the complete runtime contract.
