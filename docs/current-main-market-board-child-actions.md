# Current Main `CMarketBoard` child-action helpers

This pass follows direct calls observed in the already byte-matched
`CMarketBoard` child-event handler `FUN_58798850` and its repeated child update
paths. Seven previously unmatched helpers now contribute 1,101 exact bytes.
ObjDiff 3.8.0 verifies all seven bodies at 100% and checks 46 mapped operand
targets.

The verified event handler calls `FUN_58797610` for one child-cleanup/state
branch, `FUN_587986E0` for a comparison path over bytes at `+0x250/+0x251` and
a word at `+0x252`, and `FUN_587987B0` for a small helper call to `0x588AC1A0`.
`FUN_588804F0` and `FUN_58880630` are repeated child-update routines also
reached by `FUN_58797F10`; their mapped code checks child/collection fields
and repeatedly dispatches through `0x5897CC72`. `FUN_5890BC40` routes two
observed paths through `0x5874BA60`. The 81-byte `FUN_58778B20` is a shared
leaf reached by the event handler and `FUN_58797610`.

This evidence traces the implementations to call sites in matched native
functions rather than assigning product meanings from names or sample bytes.
The child collection schema, event contracts, callback purposes, field units,
and the relationship between the two repeated-update routines remain unknown.
These function matches do not prove correct runtime event behavior; no
emulator test was run.
