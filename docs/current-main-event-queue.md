# Current client event queue

`FUN_587e8590` is the concrete target of the `0x80000100` route in
[`FUN_587bb700`](current-main-event-dispatch.md). Ghidra reports a contiguous
245-byte body at `0x587e8590..0x587e8684`, and the locally captured mapped
`Main.dll` bytes are reproduced by
[`FUN_587e8590.cpp`](../src/client-current/Main/FUN_587e8590.cpp). The pinned
Visual C++ 6 SP5 object verifies at 100.0% with objdiff 3.8.0. Three address
operands are audited against the mapped capture. The source is an instruction-
level x86 reconstruction because VC6 cannot give a free C function the
`__thiscall` ABI observed here; semantic names remain comments rather than
invented declarations.

The caller at `0x587bc0c3` loads ECX from `0x58a2459c`, then pushes record
values from `+0x10`, `+0xC`, and `+0x8` around a saved caller value before
calling `FUN_587e8590` at `0x587bc0d6`. In callee order, the helper receives
four stack values: `+0x8`, `+0xC`, the caller-supplied pointer, and `+0x10`.
The last value is used as the copy length; the caller-supplied pointer is the
copy source. The helper never checks the event identifier itself; the caller
selects this route for `0x80000100`.

The helper's observable steps are:

1. If object field `+0x21c38` is nonzero, call the function pointer stored at
   `0x5898c1a0`, using object field `+0x21c3c`, a 16-byte local record, and a
   pointer to the size value. Increment object field `+0x21c30` before the
   callback.
2. If the size is nonzero, call `0x5897152e` with that size, then call
   `0x5897cd4c` with the returned pointer, caller-supplied source pointer, and
   size. If size is zero, the copied-payload pointer is set to null.
3. If the callback field remains enabled, call the callback again with the
   allocated payload pointer and size.
4. Advance the index at `+0x104ac`, wrapping to zero when the old index equals
   `(+0x104a4 - 1)`. If the next index differs from `+0x104b0`, write four
   DWORDs to the slot at `(+0x104b4 + old_index * 0x10)`: size, the original
   `+0x8` value, the original `+0xC` value, and the copied-payload pointer.
   Increment `+0x104a8` only when the slot is written.

Those offsets, argument order, branches, and call destinations are visible in
the caller and callee instructions and agree with Ghidra's decompilation. The
ring-buffer interpretation follows the increment, wrap, comparison, and
16-byte stride; the field names are provisional.

The matching queue reader is `FUN_587faec0`, called from `FUN_587fd890` at
`0x587fef80` and `0x587fefcb`. Its list helper `FUN_587898d0` and the verified
queue-reader/update call sites are documented in
[the event-queue list-helper notes](current-main-event-queue-list-helper.md).
The reader's 2,378 bytes verify at 100.0% across the
Ghidra ranges `0x587faec0..0x587fb7f0` and `0x587fb7f4..0x587fb80c`. The source
keeps those ranges as separate symbols and excludes the four intervening bytes.
Because Ghidra reports unsettled type propagation and the method combines the
queue read with a large event/UI dispatch, the source preserves the decoded
x86 instructions instead of inventing pointer and callback types.

On entry, the reader checks consumer index `+0x104b0` against producer index
`+0x104ac`. If they differ, it advances with wraparound using capacity
`+0x104a4` and decrements `+0x104a8`. It then loads four DWORDs from the
selected 16-byte slot at `+0x104b4`, copies the second field into active event
state at `+0x10490`, and continues through callback and event/UI routes. The
disassembly shows the reads and calls, but most event meanings remain unknown.
The reader still loads a slot when the indices match, so empty-queue behavior
cannot be inferred without confirming initial slot contents and runtime state.

The owning constructor `FUN_588011c0` now byte-matches its 12,934-byte Ghidra
body across three ranges and has a direct caller at `0x5878C650`. Ghidra
identifies its vtable as `CPageFightOn_ControlMenuScreen` and its embedded
queue at `+0x104a0` as `CFDCSingleQueue<_QueueBlock>`. It sets capacity to
`0x200`, allocates `0x2000` bytes for the slots, and zeros count and both
indices. The source preserves the three ranges and excludes gaps:
[`FUN_588011c0.cpp`](../src/client-current/Main/FUN_588011c0.cpp).

The mapped vtable at `0x5899d180` contains `FUN_587ef910` at `+8` and
`FUN_587fd890` at `+0xC`, consistent with cleanup and update roles.
`FUN_587ef910` drains pending slots and passes each nonnull fourth field to
`FUN_5897ce26`; the allocator's ownership contract is not fully recovered.

`FUN_587ef910` now byte-matches its 1,068-byte Ghidra body across three
discontiguous ranges. The function is referenced at vtable slot `0x5899D188`
(`+0x08` in the table at `0x5899D180`). During its drain loop, it advances the
consumer index at `+0x104B0`, wraps at capacity `+0x104A4`, decrements count
`+0x104A8`, and reads the fourth DWORD from the current 16-byte slot at
`+0x104B4`. It calls `FUN_5897ce26` only when that pointer is nonnull, then
continues its screen teardown sequence. The source preserves the three ranges
and excludes their gaps.

The update function `FUN_587fd890` is referenced by data from vtable slot
`0x5899D18C` (`+0x0C` in the table at `0x5899D180`). Its two Ghidra ranges,
`0x587FD890..0x587FE6D8` and `0x587FE6E0..0x587FF140`, account for 6,314
matched bytes. It runs its update path when bit 2 is set in the receiver's
`+0x24` word and calls the matched queue reader at `0x587FEF80` and
`0x587FEFCB`. After the first read it copies `+0x10C0C` to `+0x10488` and
repeats `FUN_587fb810` while that value remains positive, adding the helper's
result each time. Before the second read it checks queue count `+0x104A8` and
calls `FUN_587e95c0`. These are observed field accesses and call order; their
screen/update semantics remain unresolved.

The producer, reader, constructor, cleanup, and update evidence is static. The
vtable reference does not confirm a live call path. No live client queue traffic
has been captured, and the callback contract, event schema, drop behavior when
the ring is full, payload ownership, and final UI effects remain uncertain.

## Queue reset from event `0x80000500`

The `0x80000500` branch in `FUN_587bb700` reads a byte from the event payload
and passes it to `FUN_587e5fc0`. If the screen-state word at object offset
`+0x105f0` is not 6, it also passes the next payload byte to `FUN_587ea630`.
The branch then calls `FUN_587e8a40` with the current screen object.

`FUN_587e5fc0` stores its byte at `+0x378`. When bit `0x40` is clear, it
clears bit 0 in the 16-bit field at `+0x24` of the object referenced by
`+0x21cac`. It is 32 bytes and verifies byte-for-byte with its immediate
operand checked.

`FUN_587ea630` reads eight 16-bit values from the payload and iterates eight
global pointer slots from `0x58A0B1C4` through `0x58A0B1E0`. For slots whose
pointed-to object has bit 0 set at `+0x64`, it walks a linked list rooted at
`[0x58A247F8]+0x0C`, comparing each node's 16-bit value at `+0x350` with the
current input value. If a match also equals the value at `+0x350` in
`[0x58A247F8]+4`, it calls `0x588DB3A0(1, 2)` and sets the screen object's
`+0x380` field to 1. This 126-byte function has two Ghidra body ranges (45 and
81 bytes); the source and verifier preserve that gap and check both ranges plus
all six direct, absolute, and immediate operands.

`FUN_587e8a40` is reconstructed from the 443-byte mapped extent and verifies
at 100.0%, with all 13 direct-call targets checked. It conditionally invokes
resource and screen helpers based on paired fields at `+0x58/+0x5c` and
`+0x28/+0x2c`, clears the queue's producer index, consumer index, and count,
then changes several screen-state flags and selects additional helpers based
on offsets `+0x105a2` and `+0x105f0`. Its last operation transfers through a
virtual method. The compared values' meanings and the final callback contract
remain unknown; the original field accesses and call sequence are preserved in
[`FUN_587e8a40.cpp`](../src/client-current/Main/FUN_587e8a40.cpp).

The input handlers' field meanings, the eight IDs' schema and payload bounds,
the global list types, and the effects of `0x588DB3A0` remain unresolved. The
caller offsets and helper instructions are static Ghidra and mapped-image
evidence; this event path has not been exercised at runtime.
