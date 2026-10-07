# Current Main ship-map selected-entry state/resource router

`FUN_58860070` is a shared ship-map helper called by the newly matched
`FUN_58861F40` at `0x58862445`. The caller loads its receiver in ECX, pushes
one explicit argument (`0`), and calls the helper; the callee returns with
`ret 4`. Another already byte-matched caller, `FUN_5873FE80`, passes its
loop-local `iVar11` at `0x5874116D`. Ghidra records five more callsites:
`0x58862737`, `0x58862856`, `0x58860403`, `0x588609D8`, and `0x58862DF6`.
Those callers have no exact-match records yet.

Ghidra confirms one contiguous 571-byte body,
`[0x58860070, 0x588602AB)`, containing 147 instructions with full body
coverage. At entry the helper clears bit 0 in child flags at receiver
`+0x74C` and `+0x750`. It switches on the selected row's state at
`+0x148 + selected_index * 4` and uses states 1, 2, 4, and `0x10` to choose
timer operations and resource indices. State `0x10` derives an index from its
argument; for argument zero, it also reads two values from the selected global
entry at `+0x4A0/+0x4A4` and sends derived values to observed timer helpers.

The selected resource index is bounds-checked against the table at receiver
`+0x73C`. The helper stores the resulting pointer in child `+0x740` and copies
six DWORDs from resource offsets `+0x10..+0x24` into that child. The function
also calls `FUN_5877E7A0`, `FUN_5877E770`, `FUN_58907360`, `FUN_58734920`, and
`FUN_587315F0`; their broader contracts remain unresolved. The candidate
emits the captured instruction stream, and ObjDiff 3.8.0 verifies all 571
bytes with 36 mapped operand checks.

This establishes exact bytes and direct-call ownership, not the meaning of the
state codes, argument values, resource rows, child flags, timer values, or
visible effects. Five callers and the helper contracts remain to be traced;
no emulator or runtime visual test has been run.
