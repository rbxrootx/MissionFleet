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
The nondefault color/effect branches inside the pixel compositors and all
non-ship render-node subclasses still require separate traces.

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
pitch. The other compositor branches implement color/effect transforms and
remain a distinct reconstruction task.

As an integration check, all 12 bottom/top layers used by the generated ship
board were rendered into RGB16 surfaces through this path and compared with the
independent RGBA preview decoder after round-tripping its colors to RGB565. All
209,806 literal pixels and every transparent skip matched.
