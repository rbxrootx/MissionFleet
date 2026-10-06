# `CShip_MapObjectScreen` vtable

The eight-slot vtable address point is `0x589A10EC`. The preceding word points
to the Complete Object Locator at `0x589AA384`, whose TypeDescriptor at
`0x589B92E0` names `.?AVCShip_MapObjectScreen@@`. The byte-matched constructor
`FUN_588E05C0` installs this vtable at `0x588E064D`. Ghidra records constructor
calls from `FUN_587374B0` and `FUN_58789FE0`.

| Slot | Target | Exact matched bytes | Evidence-backed role |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_588E0240` | 27 | Deleting-wrapper-shaped method; calls `FUN_588DF9B0` and optional external free thunk |
| `+0x04` | `FUN_58731770` | 30 | Shared base method |
| `+0x08` | `FUN_588A9ED0` | 39 | Shared base method |
| `+0x0C` | `FUN_588E5150` | 5,014 | Existing screen update; state-driven ship-map and child-control work |
| `+0x10` | `FUN_5873B360` | 69 | Shared method |
| `+0x14` | `FUN_588DF6B0` | 745 | State-gated update and child-list virtual dispatch |
| `+0x18` | `FUN_588D81D0` | 93 | Flag-gated bounded payload copy and state update |
| `+0x1C` | `FUN_5874DDD0` | 1 | Shared one-byte `ret` implementation |

The four newly matched bodies total **866 bytes**. Ghidra reports these owned
ranges:

- `FUN_588E0240`: `0x588E0240..0x588E0255` (21 bytes) and
  `0x588E0258..0x588E025E` (6 bytes)
- `FUN_588DF6B0`: `0x588DF6B0..0x588DF868` (440 bytes) and
  `0x588DF870..0x588DF9A1` (305 bytes)
- `FUN_588D81D0`: `0x588D81D0..0x588D822D` (93 bytes)
- `FUN_5874DDD0`: `0x5874DDD0..0x5874DDD1` (1 byte)

ObjDiff verified the new methods at 100%, checking 28 mapped relocation
operands. Together with existing exact-match records, every target in the
RTTI-backed eight-slot table is now byte-matched. The update and constructor
analysis remains in the [ship-map method notes](current-main-ship-map-object-update.md)
and [constructor notes](current-main-ship-map-screen-constructor.md).

## Limits

`FUN_588E0240` has the shape of a scalar-deleting wrapper. Ghidra marks
`FUN_5897CC42` non-returning; it is an indirect jump through an external
callback, so the delete path's return behavior and the three bytes between the
wrapper's owned ranges remain uncertain.

`FUN_588DF6B0` uses state values `0x40000` and `0x50000`, writes sentinel
values to fields `+0x6078` and `+0x6084`, emits geometry through
`FUN_58903D60`, and dispatches child slot `+0x14`. The meaning of those states,
fields, and geometry is not recovered. `FUN_588D81D0` accepts a bounded payload
of at most `0x1FF` bytes, but the payload schema and field roles are unknown.
`FUN_5874DDD0` appears in multiple vtables and unrelated callsites, so its
match proves the shared no-op slot implementation rather than class-exclusive
ownership. No emulator or original-client visual test was performed.
