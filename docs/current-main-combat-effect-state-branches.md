# Current Main combat resolver branch state updates

The byte-matched combat hit resolver `FUN_587EFD60` dispatches two parameter
branches when bit `0x40` is set in the byte at `this+0x378`. Its Ghidra
decompilation calls `FUN_587ED730` for parameter 9 equal to `0x0B` and
`FUN_587EDB80` for parameter 9 equal to `0x0C`. The resolver's optional
diagnostic string labels `0x0C` as `Torpe` and the other path as `Shell`. That
is evidence about the logged selector, not proof of the branches' full gameplay
effects. The internal members are still unnamed.

Fresh Ghidra exports from projects `58758ee0` and `587cef70` agree on the
complete extents: `FUN_587ED730` is 1,069 bytes / 313 instructions and
`FUN_587EDB80` is 960 bytes / 266 instructions. Each function reads
caller-supplied records and state, performs integer and floating-point
calculations, and follows table-driven paths. For eligible state types, each
adds `10*ESI` to an XOR-encoded indexed DWORD at the first stack argument's
`+0x10A8C`; state/substate `0x0B/2` suppresses that update.

`FUN_587ED730` routes four computed deltas through `FUN_588D6E10` and calls
`FUN_588DCDD0` with selectors 0 and 1 on separate branches. The matched
`FUN_588DCDD0` body subtracts those deltas from the first stack argument's
`+0x128C` and `+0x1290` fields. `FUN_587EDB80` routes three computed deltas
through the accumulator helper, conditionally updates the encoded DWORD at the
first stack argument's `+0x1278` from its decoded `+0xD98` value, and has a
selector-0 fallback through `FUN_588DCDD0`.

`FUN_588D6E10` is a 29-byte / 6-instruction leaf. It reads the encoded DWORD at
helper-receiver `+0x6504`, XOR-decodes it with `0xAAAAAAAA`, adds its stack
argument, re-encodes with the same XOR mask, stores it back, and returns with
`ret 4`. At each sibling call, ECX points to the function's first stack
argument and the sibling passes a computed delta. This helper receiver is
distinct from the larger functions' own ECX receiver. The field's gameplay
meaning, units, and overflow invariants remain unknown.

Every direct callee of the two larger functions is byte-matched, including the
shared accumulator leaf. Both resolver call sites lie inside the already
byte-matched 9,247-byte `FUN_587EFD60` body. The three emitted sources match the
mapped `Main.dll` at ObjDiff 100%; a focused verifier checks the two-project
extents, instruction coverage, dependency edges, branch context, and encoded
leaf operations.

The candidate sources preserve the mapped x86 instructions for byte matching;
they do not recover the original high-level C++ source. The receiver fields,
table schemas, arithmetic units and valid ranges, and precise effect represented
by parameter values `0x0B` and `0x0C` remain unresolved. No original-client or
emulator battle test has been run.
