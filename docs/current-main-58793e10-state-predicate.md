# `FUN_58793E10`: state-field predicate

Fresh Ghidra analysis confirms one contiguous 10-byte body,
`[0x58793E10, 0x58793E1A)`. It clears EAX, compares the dword at `ECX+0x5C`
with 2, sets AL when equal, and returns. The C++ expression at
[`src/client-current/Main/FUN_58793e10.cpp`](../src/client-current/Main/FUN_58793e10.cpp)
recompiles to the exact mapped bytes with the pinned clang-cl compiler.

Ghidra finds six direct callers, all passing an object in ECX with no explicit
stack arguments: `FUN_58859DD0` at `0x5885A12F` uses `[EDI+0x8C8]`;
`FUN_588628D0` at `0x58862C56` uses `[EDI+0x58C]`; `FUN_5880FC50` at
`0x5880FFA7` uses `[ESI+0x398]`; byte-matched `FUN_588892D0` at
`0x5888953B` uses `[ESI+0x70]`; byte-matched `FUN_58893430` at
`0x5889366C` uses `[ESI+0x188]`; and `FUN_58894B40` at `0x58894BC4` uses
`[ESI+0x188]`. In `FUN_58893430`, the result gates child-state updates while
the callback is in its mode-`0x200` path.

The exact meaning of field `+0x5C` and state value 2 is not known. Four caller
functions are not yet byte-matched, and the predicate has not been exercised
in the emulator.
