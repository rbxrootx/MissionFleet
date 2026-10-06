# Current Main queue ID 0x20 conditional selected-value update

`FUN_58805880` is a 72-byte `__thiscall` helper. Byte-matched dispatcher
`FUN_588075E0` calls it at `0x58807715` for queue ID `0x20` when receiver
`+0x114` and `+0x110` are zero and the word at `[0x58A245A0 + 0xA06]` is 7
or 12. It passes the predicate `local_40 < 3` as the helper's stack argument.

## Behavior supported by the original code

The helper sets bit 0 in receiver dword `+0x78`. It calls byte-matched
`FUN_588D6CC0` with ECX=`[0x58A247F8]+4` and a boolean equal to whether its
stack argument is zero. It then calls `FUN_588A6720` with ECX set to the object
at receiver `+0x174` and the original argument.

After that call, it sets bit 1 in the word at `+0x24` of the object referenced
by receiver `+0x174`, writes `400` to receiver `+0x300`, and returns with
`ret 4`. The literal x86 source at
[`FUN_58805880.cpp`](../src/client-current/Main/FUN_58805880.cpp) matches all
72 indexed bytes through `0x588058C7`.

## Unresolved details

The predicate's meaning, selected-object and child types, and visible effect
are unknown. `FUN_588A6720` remains unmatched, so its contract is not inferred.
No emulator runtime test has been performed.
