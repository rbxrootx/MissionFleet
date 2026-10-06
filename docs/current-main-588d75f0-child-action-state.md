# `FUN_588D75F0`: ship-map indexed child action and state handler

The candidate at [`src/client-current/Main/FUN_588d75f0.cpp`](../src/client-current/Main/FUN_588d75f0.cpp)
preserves 1,477 bytes across the three Ghidra body ranges
`[0x588D75F0, 0x588D76BA)`, `[0x588D76C0, 0x588D78E7)`, and
`[0x588D78F0, 0x588D7BC4)`. The first omitted 6-byte interval is
`lea ebx,[ebx]`; the second omitted 9-byte interval is
`lea esp,[esp]; mov edi,edi`. The preceding unconditional jumps skip both
alignment gaps. The final range includes `ret 8`.

All four direct calls come from byte-matched `FUN_588E4260`. Its cases 5 and
7 call this helper with the value at `[ESI+0x340]`, then save the returned
state bits at `+0x60B8`. Cases 0x23/0x24 call action 0x15 and toggle bit 1 at
that field; cases 0x25/0x26/0x29/0x2A call action 0x14 and toggle bit 0.
At three sites ECX is explicitly ESI. At the action-0x15 site `0x588E465F`,
the caller does not reload ECX immediately before the call; the receiver
value on that path remains unresolved.

The helper scans up to the count at `this+0x141C`, compares per-entry IDs at
`this+0x1FC` with its supplied value, and skips null child pointers from the
array at `this+0x17C`. Actions 4/5 update matching child `+0x128` by +/-1 and
mark `+0x10C`; actions 6/7 update `+0x124` and mark `+0x108`; actions 10/11
update `+0x124` with sign chosen by a per-entry byte and mark `+0x108`.
Actions 0x14/0x15 clear matching child state at `+0x108`/`+0x10C`, subject
to receiver filter bits and reset conditions.

The receiver/child types, item identities, filter meanings, and user-visible
effects remain uncertain. No emulator runtime test has been performed.
