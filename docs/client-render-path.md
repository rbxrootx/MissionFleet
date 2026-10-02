# Current client ship sprite render path

This subsystem is reconstructed from the unpacked mapped `Core.dll` whose
installed-file SHA-256 is
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.
Addresses below use the captured live image base `0x58480000`.

## Asset selection and attachment

`0x585B03F0` formats `ShipStructureF%d%d%d.spr`, caches the resulting sprite
object by numeric structure ID, and calls the current sprite constructor and
loader at `0x587803B0`. `0x58756CB0` performs the equivalent N/S pair load and
`0x58756670` registers those objects in parallel tables.

The sprite accessor at `0x58484AD0` checks a signed index against the record
count at `+0x160`, checks the table pointer at `+0x190`, and returns a record at
`table + index * 0x40`. The neighboring accessor at `0x58484B20` instead checks
the count at `+0x164` and returns one pointer from the table at `+0x18C`. The
first result is therefore a 64-byte animation record, not an image frame.

The render-node attachment routine at `0x58486C60` stores the animation-record
pointer at node offset `+0x54`, copies the record's two-DWORD anchor at `+0x18`
to node offsets `+0x0C..+0x10`, and copies its four-DWORD rectangle at `+0x20`
to node offsets `+0x14..+0x20`.

## Timed frame selection

The render node uses vtable `0x58894C94`; its draw slot is `0x587B5DB0`. A node
draws only when flag bit 0 at `+0x24` is set, elapsed time at `+0x50` is
nonnegative, and the animation-record pointer is usable. Its initial position
is:

```
x = node.x + record.anchor_x + parent.x
y = node.y + record.anchor_y + parent.y
```

It calls `0x5849C770` on the attached animation record. That routine requires a
nonzero `uint16` frame count at record offset `+0x0C` and a nonnull screen. It
selects:

```
frame_index = (elapsed / int32(record + 0x08)) % uint16(record + 0x0C)
frame       = *(record + 0x10) + frame_index * 0x24
sprite      = *(record + 0x14)[frame_index]
x          += int32(frame + 0x00)
y          += int32(frame + 0x04)
```

The original code assumes a positive frame period. `tools/ship_sprite_runtime.py`
enforces that invariant instead of reproducing the native divide fault on an
invalid record.

## Geometry clamp and screen call

`0x5849C770` passes the selected sprite as `this` and the target screen as the
first explicit argument to `0x587BA830`. The origin and rectangle accessors in
this wrapper are called on the screen object: origin at `+0x04/+0x08`, viewport
rectangle at `+0x14..+0x20`, and target pixel buffer at `+0x50`. The dispatcher:

1. clamps the requested rectangle to the screen viewport;
2. subtracts the screen origin from the draw position and clamped rectangle;
3. calls slot 1 on the selected sprite object with the target screen's pixel
   buffer, screen-local position and rectangle, node color at `+0x28`, and node
   effect value at `+0x2C`.

The `ITNTL.dll` comparison path independently confirms this object boundary at
`0x100EB530`: the screen is its first argument, and slot 1 is invoked on the
sprite object (`this`) with the screen buffer and screen-local geometry. Its
node draw at `0x100EA3D0` passes the parent-adjusted node position and inherited
clip rectangle into that wrapper. The full ITNTL loader trace is recorded in
[ITNTL sprite loader](itntl-sprite-loader.md).

`tools/ship_sprite_runtime.py` models the screen-owned origin and viewport
explicitly. Its `Screen` input carries the target pixel pointer, and the blit
command now includes both source sprite data and target pixels. The frame-path
check verifies viewport intersection and translation into screen-local
coordinates.

## Remaining uncertainty

The recovered code fixes the layout and arithmetic above. Field names are
descriptive names assigned by this project because original symbols are absent.
Other color/effect combinations and all non-ship render-node subclasses still
require separate traces.

## Opaque RGB16 compositor path

The slot-1 call belongs to the selected sprite object, with the render target
passed as its first stack argument. In `0x587BA830`, `param_1` is the sprite's
implicit `this` and `param_2` is the target screen. The dispatcher gets the
target pixel buffer from the screen at `+0x50`, then calls sprite vtable slot 1
(`sprite_vtable + 4`) with that buffer, screen-local position and clip, and the
node color/effect values. The readable `ITNTL.dll` has the same object boundary
in `0x100EB530`, where sprite vtable slot 1 receives the target pixel buffer
before the coordinates, clip and effect arguments.

For a 16-bit render target (`DAT_58905F98 == 2`) and compressed sprite format
byte `2`, the current loader selects constructor `0x588009C0` or `0x5880D370`
according to the display pixel masks. Their vtables are `0x588BE71C` and
`0x588BE72C`; their slot-1 compositors are `0x58800A60` and `0x5880D420`. These
methods consume the compressed pixel stream at `this + 0x0C` and write to the
passed screen buffer.

At `0x58800B56`, the first compositor tests color against `0x100`. At
`0x58800B63`, the color-`0x100`, effect-`0` case enters a direct-copy loop. That
loop reads a signed 16-bit control, advances the destination by nonnegative
skip bytes, reads the literal byte count at span offset `+3`, advances the
source by five header bytes, and copies the RGB16 words unchanged. `-1` starts
the next row and `-2` ends the image. The byte at span offset `+2` is ignored,
matching the loader evidence.

`blit_opaque_rgb16_spans` reconstructs this normal opaque path, including the
separate horizontal-clipping behavior, skipped-pixel transparency and target
pitch.

The ship scene constructor at `0x58525B10` calls color setter `0x587B5540`
(node `+0x28`) and effect setter `0x587B55B0` (node `+0x2C`) with values
including color `0x80` and effect `0x101`. The setters recursively propagate
values through children selected by different flag bits. The direct
constructor callsites load several child references, so the same-node pairing
of those exact values has not yet been established. If passed together, they
take the `color < 0x100`, nonzero-effect path in the `0x58800A60` compositor.
Its decompiled RGB565 arithmetic is:

```
source_scale      = color * ((effect + 0x100) >> 3) >> 5
destination_scale = 0x20 - (color >> 3)
dst_rb = (((dst & 0xF81F) >> 5) * destination_scale) & 0xF81F
dst_g  = (((dst & 0x07E0) * destination_scale) >> 5) & 0x07E0
src_rb = (((src & 0xF81F) >> 5) * source_scale) & 0xF81F
src_g  = (((src & 0x07E0) * source_scale) >> 5) & 0x07E0
out    = ((dst_rb | dst_g) + (src_rb | src_g)) & 0xFFFF
```

`blit_ship_rgb565_effect_spans` implements this caller-specific RGB565 span
path, including skipped pixels, clipping and target pitch. The formulas and
operation order come from the decompiled branch. The mask specialization is
RGB565 red/blue `0xF81F` and green `0x07E0`, matching the RGB565 target used by
the current visual pipeline. A runtime
pixel-for-pixel comparison against the original client has not been made, so
the output is not independently validated against a live client frame. The
same-node color/effect pairing also remains unresolved; see the
[ship node-effect setup evidence](current-core-ship-node-effects.md).

As an integration check, all 12 bottom/top layers used by the generated ship
board were rendered into RGB16 surfaces through this path and compared with the
independent RGBA preview decoder after round-tripping its colors to RGB565. All
209,806 literal pixels and every transparent skip matched.

The mapped protected `Main.dll` independently contains 24 byte-matched
span-render table members totaling 381,241 bytes:
`0x10109CF0`, `0x1010B0B0`, `0x1010C2E0`, `0x1010F390`, `0x101121F0`,
`0x101153F0`, `0x10118360`, `0x10119E00`, `0x1011B150`, `0x1011F370`,
`0x10122220`, `0x10126570`, `0x101294F0`, `0x1012D2B0`, `0x1012F130`,
`0x10137E90`, `0x1013B8A0`, `0x10144810`, `0x101481E0`, `0x1014C060`,
`0x1014DF30`, `0x10156E30`, `0x1015A8A0`, and `0x101639B0`. Their
pixel-buffer/pitch accesses, transparent-run traversal, and variant-specific
blend paths are byte-matched from the runtime image. The table also contains
13 matched deleting-destructor wrappers and their 13 matched bodies, plus two
shared matched cleanup helpers. The final three-slot group includes matched
zero-returning stubs at `0x10176B9C` and `0x10176BA0`; these complete the
13-group vtable run but do not render pixels. Nearby methods at `0x10176B00`
and `0x10176B04` belong to a separately anchored object vtable and are also
bounded and byte-matched. The renderer class owner and live dispatch paths
remain unknown. See the
[Main.dll span compositor notes](client-rgb16-span-compositor.md).

The installed `Core.dll` ship path now has 117 byte-matched functions totaling
275,989 bytes against its mapped runtime capture. These cover the screen
dispatcher, both RGB16 classes' constructors, destructors, and slot-1/slot-2
methods, three three-byte-target sprite classes, three four-byte-target classes,
plus ship scene/state setup, animation attachment, timed-frame wrapper,
render-node draw slot and constructors, ordered child lists, node property
setters, the signed-order child-render scheduler, animation tick updater and
derived animation-state updater with reset/start methods, scene trigger and
counter/effect helpers, and cache/loader/parser. The direct-dispatch,
loader, and capture limits are recorded in the
[RGB16 compositor evidence](current-core-rgb16-compositors.md) and
[ship sprite-loader evidence](current-core-ship-sprite-loader.md) and
[three-byte-target class evidence](current-core-three-byte-sprite-class.md) and
[its selector-1 sibling](current-core-three-byte-sprite-class1.md) and
[its selector-2 sibling](current-core-three-byte-sprite-class2.md) and
[four-byte-target selector-0 evidence](current-core-four-byte-sprite-class0.md)
and [selector-1 evidence](current-core-four-byte-sprite-class1.md) and
[selector-2 evidence](current-core-four-byte-sprite-class2.md) and
[ship animation attachment and draw evidence](current-core-ship-frame-renderer.md) and
[ship node effect setup](current-core-ship-node-effects.md) and
[ship render-node construction and child-list evidence](current-core-ship-node-construction.md) and
[ship-node property setter evidence](current-core-ship-node-properties.md) and
[ordered child-render scheduler evidence](current-core-child-render-scheduler.md) and
[animation-node update evidence](current-core-animation-tick-update.md) and
[derived ship-animation state evidence](current-core-ship-animation-state-update.md) and
[ship-scene update dispatcher evidence](current-core-ship-scene-update-dispatcher.md).
