# Current Main selected-value paired update

`FUN_58805940` is a 102-byte `__thiscall` helper. Ghidra records one direct
caller, `FUN_588075E0` at `0x588077F9`; that caller is not yet byte-matched.
This helper connects the two byte-matched paired-child helpers:
`FUN_588D6D10` at `0x58805969` and `FUN_588D6CC0` at `0x58805988`.

## Behavior supported by the original code

The helper compares the selected object's word at `+0x350` with its second
stack argument. If they match, it sets bit 1 in receiver dword `+0x78`, calls
`FUN_588D6D10(1)` with ECX=`[0x58A247F8]+4`, and passes the first stack
argument to `FUN_588A69F0`. If they differ, it calls `FUN_5878A160` with the
compared value, then passes that call's return value in ECX to
`FUN_588D6CC0(1)`.

After either branch, it sets bit 1 in the word at `+0x24` of the object
referenced by receiver `+0x174`, writes `400` to receiver `+0x300`, and returns
with `ret 8`. The source at
[`FUN_58805940.cpp`](../src/client-current/Main/FUN_58805940.cpp) matches the
complete indexed extent through `0x588059A5`.

## Unresolved details

The meaning of the compared `+0x350` word, receiver flags, and referenced
objects is unknown. The effects of `FUN_588A69F0` and `FUN_5878A160` are also
unresolved. Its only recorded direct caller, `FUN_588075E0`, remains
unmatched, so the wider dispatch path is not established. No emulator runtime
test has been performed.
