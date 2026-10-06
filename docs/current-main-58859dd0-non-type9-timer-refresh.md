# `FUN_58859dd0`: non-type-9 ship-map timer and child refresh

The byte-matched ship-map update functions select this handler when the
current record's low five type bits are not 9. Byte-matched
`FUN_588DEB30` calls it at `0x588DF1D4`; byte-matched `FUN_588E5150` calls it
at `0x588E6358`. Both callers load ECX from `[0x58A245C4+0x9C]` and pass no
stack arguments. When the type bits equal 9, both instead select
`FUN_588628d0` with ECX from `[0x58A245C4+0xA0]`.

Ghidra confirms the complete body is the contiguous range
`[0x58859DD0,0x5885A21B)`, 1,099 bytes ending in `ret`. It scans the count at
receiver `+0xF0` and processes entries whose state at `+0x40` is 2. It updates
timer and state fields, uses `FUN_587A1640` and `FUN_587A15E0` around XOR-0xAA
encoded values, and propagates a decoded value through `FUN_58907360`. On
completion it chooses observed entry states 1 or 4 and changes child flag bits.
The active path accumulates timers, computes a resource-relative value using a
ushort at resource `+0x0C`, updates the selected seconds display through
`FUN_5877E740`, and after the observed six-second threshold copies resource
fields from a global table entry at `+0x580` into a child at receiver `+0xA7C`.
The latch path polls `FUN_58793E10`; when it clears, the routine calls
`FUN_58858BD0(0)`, `FUN_588EBEB0(0x0F,0x54,0x57)`, and `FUN_58907990` before
an indirect child-vtable operation.

This is the non-type-9 sibling of the already matched
[`FUN_588628d0`](current-main-588628d0-type9-timer-refresh.md) branch. The
candidate emits the mapped instruction stream literally and the verifier
checks its mapped operand targets.

The receiver and entry layouts, timer units, encoded-value meaning,
resource-table identity, child-state and visibility semantics, helper
contracts, and visible UI effects remain unresolved. Ghidra shows a branch
that sets the resource divisor to zero before a modulo operation; the runtime
invariant that prevents division by zero is unknown. No emulator runtime test
has been performed.
