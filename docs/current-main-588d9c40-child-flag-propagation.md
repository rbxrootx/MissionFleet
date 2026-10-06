# `FUN_588d9c40`: child flag-bit propagation

Fresh Ghidra evidence records two direct callers, both matched byte-for-byte:
`FUN_588DB610` at `0x588DBA88` and `FUN_588DEB30` at `0x588DED80`. Both pass
the receiver in ECX and one DWORD argument. `FUN_588DB610` passes 0 on its
state-`0x80000` path; `FUN_588DEB30` passes 1 with ECX=ESI. The target's
`ret 4` confirms the thiscall ABI.

Ghidra confirms a single contiguous 210-byte body,
`[0x588D9C40,0x588D9D12)`. It sets or clears only bit 0 in child flag words at
child `+0x24`, preserving the remaining bits. It first updates up to
`(*(ushort*)(this+0x100C+0x0A) & 7)` child pointers beginning at `this+0x60DC`,
then always updates children at `this+0x1470` and `this+0x1474`. Unless the
argument is 1 and this equals the global current object, it also walks the
pointer list at `this+0x17C` for the count at `this+0x141C`, skips null
entries, and applies the same bit update.

The meaning of bit 0 and the child roles remain unknown, so visibility or
enabled-state labels would be hypotheses. The first pointer array has no
visible null checks; its population invariant is not established. No emulator
runtime test has been performed.
