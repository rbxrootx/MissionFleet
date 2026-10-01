# Installed Core.dll RGB16 span compositor pair

This slice covers the two sprite slot-1 compositors selected by the installed
client's 16-bit compressed-format-2 loading path. The capture is tied to the
installed `D:\FleetMission\Core.dll` hash
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`; the
mapped image hash is recorded in
`config/NF2_2026/core-verifications.json`, at runtime base `0x58480000`.

## Evidence-backed dispatch path

The traced ship draw path attaches a 64-byte animation record to a render node.
The node draw method `0x587B5DB0` selects a frame through `0x5849C770`, then
passes the chosen sprite, target screen, screen-local position and clip, color,
and effect through `0x587BA830`. That dispatcher calls slot 1 on the sprite
object. Readable `ITNTL.dll` independently confirms the screen-buffer and
geometry argument boundary at `0x100EB530` and the node call at `0x100EA3D0`.

For a 16-bit target and compressed format byte 2, the current Core loader
constructs one of two sprite types according to the display masks:

| Constructor | Installed vtable | Slot-1 body | Matched bytes |
| --- | --- | --- | ---: |
| `0x588009C0` | `0x588BE71C` | `0x58800A60` | 36,733 |
| `0x5880D370` | `0x588BE72C` | `0x5880D420` | 37,154 |

The constructor-to-vtable relationship, loader branch, sprite slot-1 call,
and render-node argument flow are visible in the local Ghidra reports and
documented in [the client render trace](client-render-path.md). This accounts
for the indirect dispatch: a lack of direct code references to the compositor
entrypoints does not indicate that they are unused.

Both bodies traverse the span stream at `this+0x0C` and write to the target
pixel buffer. The first body contains an opaque copy branch and masked 16-bit
blend branches. The observed ship draw sets color to `0x80` and effect to
`0x101`; that pair selects its nonopaque blend branch. The RGB565 operation
order for this caller is recorded in the render trace. The sibling's exact
pixel-format distinction and all of its mask/effect cases still need their own
trace.

## Byte-match validation and limits

Both indexed extents were emitted from the mapped runtime bytes and rebuilt
with the repository's pinned VC6 toolchain. Objdiff 3.8.0 reports 100% for the
complete 36,733-byte and 37,154-byte bodies, and 925 captured immediate or
address operands per body are audited. This validates exact output against the
hash-pinned mapped capture. The reconstruction emits each decoded instruction
byte; it does not claim to have recovered the original compiler's optimization
decisions or high-level source.

The original on-disk Core.dll PE has zero raw bytes for the `.text` section
containing both extents. `tools/compare_current_core_disk.py` records that
limitation rather than treating rebuilt-image offsets as original file
offsets. Therefore the byte match is against the installed module's mapped
runtime capture, whose manifest path and original file hash are pinned, not a
direct comparison to raw on-disk function bytes. No pixel-for-pixel comparison
against a live original-client framebuffer has been made. The mask values at
runtime and the complete sibling blend contract remain open.
