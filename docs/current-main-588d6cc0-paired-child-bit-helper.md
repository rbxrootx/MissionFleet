# Current Main paired child-bit helper

`FUN_588d6cc0` is a 66-byte `__thiscall` helper. The byte-matched
`FUN_58806F60` calls it three times at `0x5880719D`, `0x588071D0`, and
`0x58807207`, with ECX=ESI and stack arguments `0`, `1`, and `1`. The
byte-matched `FUN_58807910` calls it at `0x58807C81` and `0x58807CA1` with
ECX equal to `[0x58A247F8]+4`; the first passes a derived boolean and the
second passes `1`. Byte-matched `FUN_58805940` also calls it at `0x58805988`
with ECX=the return from `FUN_5878A160` and argument `1`. Ghidra also records
calls from `FUN_58805880` and `FUN_588058D0`; those callers are not yet
byte-matched.

## Behavior supported by the original code

The helper stores its stack argument at receiver `+0x6074`. If the argument is
nonzero, it sets bit 0 in the 16-bit word at `+0x24` of each object referenced
by receiver fields `+0x12B8` and `+0x12BC`. If the argument is zero, it clears
bit 0 in both words while preserving the other bits. Both paths return with
`ret 4`, consuming the one stack argument.

The source at
[`FUN_588d6cc0.cpp`](../src/client-current/Main/FUN_588d6cc0.cpp) matches all
66 indexed bytes from `0x588D6CC0` through the `ret 4` at `0x588D6CFF`.

## Unresolved details

The receiver fields, referenced child-object types, and meaning of the stored
value and flags are unknown. The callsites establish usage and passed values,
but not the visible effect. No emulator runtime test has been performed.
