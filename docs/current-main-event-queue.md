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
`0x587fef80` and `0x587fefcb`. Its 2,378 bytes verify at 100.0% across the
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

The owning constructor `FUN_588011c0` identifies its vtable as
`CPageFightOn_ControlMenuScreen` and its embedded queue at `+0x104a0` as
`CFDCSingleQueue<_QueueBlock>`. It sets the capacity to `0x200`, allocates
`0x2000` bytes for the slots, and zeros the count and both indices. The mapped
vtable at `0x5899d180` contains `FUN_587ef910` at `+8` and `FUN_587fd890` at
`+0xC`, consistent with cleanup and update roles. `FUN_587ef910` drains
pending slots and passes each nonnull fourth field to `FUN_5897ce26`; the
allocator's ownership contract is not fully recovered.

The producer, reader, constructor, and cleanup evidence is static. No live
client queue traffic has been captured, and the callback contract, event
schema, drop behavior when the ring is full, payload ownership, and final UI
effects remain uncertain.
