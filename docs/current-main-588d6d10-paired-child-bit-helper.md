# Current Main sibling child-bit helper

`FUN_588d6d10` is a 59-byte `__thiscall` helper adjacent to
`FUN_588d6cc0`. Byte-matched `FUN_58806F60` calls it at `0x588071A6` and
`0x58807242`, with ECX=ESI and stack arguments `0` and `1`. Byte-matched
`FUN_58807910` calls it at `0x58807CC5` with ECX=`[0x58A247F8]+4` and argument
`1`. Byte-matched `FUN_58805940` also calls it at `0x58805969` with
ECX=`[0x58A247F8]+4` and argument `1`.

## Behavior supported by the original code

The helper tests its stack argument. If nonzero, it sets bit 0 in the 16-bit
word at `+0x24` of each object referenced by receiver fields `+0x12C0` and
`+0x12C4`. If zero, it clears bit 0 in both words while preserving all other
bits. Both branches return with `ret 4`, consuming the one stack argument.

The source at
[`FUN_588d6d10.cpp`](../src/client-current/Main/FUN_588d6d10.cpp) matches all
59 indexed bytes from `0x588D6D10` through `ret 4` at `0x588D6D48`.

## Unresolved details

The receiver fields, referenced child-object types, and semantic meaning of
these flags are unknown. The callsites establish usage and passed values, but
not the visible effect. No emulator runtime test has been performed.
