# Ship-map visual sprite-bundle render dispatch

`FUN_58789040` installs vtable address point `0x58996B40` on the secondary
ship-map object. The mapped vtable entries at `+0x0C` and `+0x14` resolve to
`FUN_58788F90` and `FUN_589038C0`, respectively. The latter is also an
independently byte-matched 189-byte method.

The method returns without dispatch when receiver flag bit 0 is clear or the
signed DWORD at `+0x50` is negative. Otherwise it walks the `+0x4C` child list
while signed word `+0x26` is negative, calling each child's virtual `+0x14`
method with the same three arguments. It retains the first nonnegative child
as a cursor, attempts the receiver's sprite call, then dispatches that cursor
and each remaining child. This matches the assembly's actual cursor behavior;
it depends on the list's signed-key ordering established by the constructor.

The receiver sprite call is skipped when `+0x54` is null or its 32-bit address
has no bits set by mask `0xFFFFFF00`. Otherwise the method reads the supplied
point and forms x from `+0x04`, `+0x0C`, and point.x, and y from `+0x08`,
`+0x10`, and point.y. It calls `FUN_5873A5D0` with the record in ECX and stack
arguments, in order: original argument 1, computed point address, original
argument 2, `+0x50`, `+0x28`, and `+0x2C`. Addition is 32-bit wrapping arithmetic.

The readable control-flow model is
[`ShipMapVisualSpriteBundleRender.cpp`](../src/client-current/semantic/ShipMapVisualSpriteBundleRender.cpp).
Its test verifies both gates, negative-prefix ordering, the post-sprite cursor,
coordinate wraparound, forwarded values, and the low-address record predicate.
The two indirect destinations remain hooks. `FUN_5873A5D0` and its clipping
helper `FUN_58903D60` have separate exact-byte matches, but their renderer
backend and actual visible output have not been recovered. The mapped call
chain shows how this vtable slot can be invoked; a live frame using this
secondary object has not yet been captured. Its animation/update path is
documented in
[`the secondary update note`](current-main-ship-map-visual-secondary-update.md).

Run `rtk python tools/verify_ship_map_visual_sprite_bundle_render.py` for the
focused native semantic tests. Run
`rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 589038c0 --only 5873a5d0 --only 58903d60`
to recheck the three instruction-level sources independently.
