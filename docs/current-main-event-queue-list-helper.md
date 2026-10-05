# Current Main event-queue list helper

Verified queue reader `FUN_587FAEC0` calls `FUN_587898D0` at `0x587FB0A3`
and `0x587FB2DA`. The verified queue update `FUN_587FD890` calls it at
`0x587FE0A4`. Each call selects a receiver through the global table beginning
at `0x58A0B1C4` and supplies one stack argument. The queue flow is documented
in [the event-queue notes](current-main-event-queue.md).

The helper searches the linked list rooted at receiver `+0x68`, comparing the
argument with each node's dword at `+0x18`. A matching node whose word at
`+0x2C` has bit 0 clear is marked by setting that bit. That transition enters
the count-update path: if bit 0 is set in the byte at `[0x58A2459C]+0x105A8`,
the helper calls `FUN_5878A160(argument)` and decrements receiver `+0x60` only
when the returned object's dword at `+0x438` is zero; otherwise it decrements
directly. It then sets bit 1 in receiver word `+0x64` if the count is zero.
If the node was already marked, it skips the count update but still performs
the zero-count check. A list miss returns without mutation.

The indexed extent is 100 bytes (`0x587898D0..0x58789934`), ending after
`ret 4` at `0x58789931`. The next indexed function begins at `0x58789940`.
ObjDiff 3.8.0 verifies the full body and all three mapped operand targets at
100.0%.

The node key and flag, counter, receiver state, global guard, helper contract,
and user-visible effect are not identified. The callers establish event-queue
context, but do not identify the protocol meaning. No runtime client or
emulator test was performed. The instruction stream is in
[`FUN_587898d0.cpp`](../src/client-current/Main/FUN_587898d0.cpp).
