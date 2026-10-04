# Current Main.dll field getter at `+0x6088`

`FUN_588d66d0` is a seven-byte, no-argument getter called four times across
three verified functions: once from `0x587EFD60`, twice from `0x587FAEC0`, and
once from `0x587FD890`. The first caller tests the returned value for null;
the last compares it with sentinel `0x40000000`.

The mapped instructions load the DWORD at receiver offset `+0x6088` and return
it unchanged. The complete extent matches with zero relocations. The available
evidence does not establish the receiver class, field type, or meaning of the
value; caller checks describe consumption only. No runtime behavior test was
performed.

The match source is now ordinary C++: a `thiscall` getter reading the unsigned
DWORD at `receiver + 0x6088`. Clang-cl recompiles it to the exact original
seven bytes without an emitted instruction stream.
