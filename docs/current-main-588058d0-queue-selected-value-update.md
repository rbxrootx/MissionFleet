# Current Main queue ID 0x20 selected-value update

`FUN_588058d0` is a 102-byte `__thiscall` handler. Byte-matched dispatcher
`FUN_588075E0` calls it at `0x58807730` for queue ID `0x20`, on the branch
where receiver `+0x114` is zero and the nested receiver/global-state checks
select this handler. The dispatcher passes two record-derived 16-bit values.

## Behavior supported by the original code

The handler compares the word at `+0x350` of the selected object
`[0x58A247F8]+4` with its second stack argument. If they match, it sets bit 0
in receiver dword `+0x78`, calls byte-matched `FUN_588D6CC0(1)` with ECX set to
the selected object, then calls `FUN_588A6720` with ECX set to the object at
receiver `+0x174` and the first stack argument. If they differ, it calls
byte-matched `FUN_5878A160` with the compared value and passes that return value
in ECX to `FUN_588D6CC0(1)`.

Both branches set bit 1 in the word at `+0x24` of the object referenced by
receiver `+0x174`, write `400` to receiver `+0x300`, and return with `ret 8`.
The literal x86 source at
[`FUN_588058d0.cpp`](../src/client-current/Main/FUN_588058d0.cpp) matches the
complete indexed body from `0x588058D0` through `0x58805935`.

## Unresolved details

The meaning of the selected object's `+0x350` value, receiver flags, and child
object are unknown. `FUN_588A6720` remains unmatched, so its contract and any
visible effect are not inferred. No emulator runtime test has been performed.
