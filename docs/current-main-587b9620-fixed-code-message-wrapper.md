# Current Main fixed-code message wrapper at `0x587B9620`

`FUN_587b9620` is a contiguous 29-byte helper in the captured `Main.dll`, from
`0x587B9620` through `0x587B963C`. Ghidra's decompilation and instruction
extent agree: it forwards two stack values, a fixed code, and three zero
fields to `FUN_58970C70`, then returns with `ret 8`.

The exact forwarded argument list is `(0x80010021, arg1, arg2, 0, 0, 0)`.
The target `FUN_58970C70` is already byte-matched. Ghidra records direct calls
from the byte-matched state updater `FUN_588A6720` at `0x588A68FE` and
`0x588A693F`; that caller supplies its receiver words at `+0x96` and `+0x94`,
in that order. Ghidra also records calls from unmatched `FUN_588A6A30` at
`0x588A6C37` and unmatched `FUN_588A8A70` at `0x588A8C6E`. The first
unmatched call site passes the same receiver words; the second call site's
argument setup has not been inspected.

The fixed code's application meaning and the values' units are unresolved.
This match establishes the wrapper's bytes and forwarding behavior only; no
emulator runtime test has been performed.
