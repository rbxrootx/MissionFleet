# `FUN_5873A7C0`: aircraft state and stat initializer

The candidate at [`src/client-current/Main/FUN_5873a7c0.cpp`](../src/client-current/Main/FUN_5873a7c0.cpp)
preserves the contiguous 2,176-byte body `[0x5873A7C0, 0x5873B040)`, including
the `ret 0x14` epilogue. Ghidra and Capstone find no internal gaps; the
literal instruction stream has 37 mapped operand targets for verification.

The only Ghidra-recorded caller is byte-matched `FUN_588E3AE0` at
`0x588E3D72`, following the aircraft allocation and constructor path. It
loads the `CAircraft` receiver into ECX and passes five stack arguments: a
time derived from receiver field `+0x6060`, a per-type record pointer, an
index, a boolean derived from the aircraft type's low five bits, and a
second indexed record pointer. The target's `ret 0x14` confirms the five
stack arguments.

Ghidra shows the function clearing receiver flags and counters, copying
`0xD4` bytes of type-specific record data into `this+0x234`, applying
state/type-dependent percentage scaling to several fields, and updating
sprite-child resource and visibility fields from bounded global tables. It
stores the supplied index and record pointer, copies coordinates from the
object at `this+0x74`, resets state fields, and initializes an effect-related
buffer using dimensions derived from `this+0x2E2`. The final state branch
selects a mapped global value for `this+0x558` and sets `this+0x55C` to 3.

The record layout, meanings and units of the scaled fields, resource tables,
child/effect roles, and visible gameplay result remain uncertain. No launch
packet replay or emulator runtime test has been performed; this byte match
confirms native code identity only.
