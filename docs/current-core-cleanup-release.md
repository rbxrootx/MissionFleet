# Installed Core.dll callback and pointer cleanup

This slice follows cleanup callback `0x58859C70`, which appears as the third
non-null entry in the captured initializer range `[0x5889465C,0x5889466C)`. The
initializer path is documented in [the runtime state initializer notes](current-core-runtime-state-initializer.md).
Its function calls `0x5885A030` and `0x588701D2`, processes three pointer slots
at global `0x58969618`, and then releases the global array and clears its slot.

The first step, `0x5885A030`, calls `0x58859EC2(1)`. That helper constructs two
local records and delegates to `0x58859DB6`; with a nonzero byte argument, it
returns the local value written by that path. The exact record and helper
contracts are unknown.

`0x588701D2` was a direct-call target with no Ghidra function boundary. The
mapped call from `0x58859C70`, the preceding function ending at the target, and
the next known function at `0x5887027D` support a boundary at `0x588701D2`.
After seeding that entry, Ghidra decoded a 162-byte function ending at
`0x58870274`. It initializes a record using `0x58832760(&0x588ED5B0, 0x10)`,
calls `0x58863C1C(8)`, and walks pointer slots from index 3 to the bound stored
at `0x58969614`. Each non-null pointer is optionally counted through
`0x58851481` when its flag bit 13 is set, passed to callback slot `0x58894218`
as pointer + `0x20`, released through `0x5886CC10`, and removed from its slot.
The function returns the count of `0x58851481` results other than -1.

For the first three slots, `0x5886CE81` releases the object field at `+4` only
when bits 13 and 6 in the DWORD at `+0x0C` are both set. It then clears those
bits under a locked operation and zeros fields at `+0`, `+4`, and `+8`. The
shared release wrapper `0x5886CC10` calls callback slot `0x58894164` with
context `0x58969C70` and the pointer. If that callback returns zero, it maps
the value from callback slot `0x588941FC` through `0x588623B4` and writes the
result through state pointer `0x5886246F`.

The six newly verified functions are `0x5885A030` (9 bytes), `0x58859EC2` (76),
`0x588623B4` (95), `0x5886CE81` (64), `0x5886CC10` (58), and `0x588701D2`
(162). Together they account for 464 bytes, with 23 relocation operands
checked. Each function matches the hash-pinned installed Core image at 100%
with objdiff 3.8.0 and the configured VC6 SP5 toolchain.

This slice does not identify callback APIs, pointer-array element types, flag
meanings, table schemas, or the runtime ownership rules. Those labels remain
unresolved; the addresses, branches, call order, stores, and return conditions
come from the mapped image and Ghidra output.
