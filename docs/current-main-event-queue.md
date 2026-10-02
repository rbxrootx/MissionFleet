# Current client event payload queue insertion

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
16-byte stride; the field names are provisional. The callback contract, the
allocator and copy helper's broader contracts, whether the no-write path
transfers or releases an allocated pointer elsewhere, and the queue consumer
remain unknown. This is static evidence; this path has not been exercised in a
running client.
