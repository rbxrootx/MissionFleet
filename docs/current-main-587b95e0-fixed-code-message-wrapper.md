# Current Main fixed-code message wrapper

`FUN_587b95e0` is a 26-byte wrapper. The byte-matched
[`FUN_588a6720`](current-main-588a6720-mode-dependent-selected-object-child-update.md)
calls it at `0x588A6885` and `0x588A68BB`, passing `1` from two mode-dependent
paths. Ghidra also records two calls from unmatched `FUN_588A6A30` and three
from unmatched `FUN_588A8A70`.

## Behavior supported by the original code

The wrapper loads its one stack argument and calls byte-matched
`FUN_58970C70` with arguments `(0x80010034, stack_argument, 0, 0, 0, 0)`. It
returns with `ret 4`. The literal x86 source at
[`FUN_587b95e0.cpp`](../src/client-current/Main/FUN_587b95e0.cpp) matches the
complete contiguous extent from `0x587B95E0` through `0x587B95F9`.

## Unresolved details

The meaning of code `0x80010034`, the forwarded argument, and the four zero
fields are not established. The broader context of the calls from
`FUN_588A6A30` and `FUN_588A8A70` remains unverified. No emulator runtime test
has been performed.
