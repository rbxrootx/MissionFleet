# Installed Core.dll RGB16 sprite classes and span compositors

This slice covers both sprite classes selected by the installed client's
16-bit compressed-format-2 loading path: their constructors, slot-0 cleanup,
and slot-1/slot-2 span methods. The capture is tied to the
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

The 272-byte dispatcher at `0x587BA830` is byte-matched too. Its instruction
stream reads the screen origin and viewport, clamps the requested rectangle,
translates position and clip coordinates into screen-local space, gets the
target buffer at screen `+0x50`, and dispatches through sprite vtable slot 1.
The exact virtual call arguments follow from the emitted x86 stack sequence:
buffer, x, y, four clipped edges, color, and effect (nine DWORDs); the concrete
slot-1 methods clean those nine arguments with `ret 0x24`. Readable ITNTL code
independently confirms the same contract. The portable dispatcher and its
native integration test are in
`src/client-current/semantic/CoreSpriteScreenDispatch.cpp` and
`tests/native/core_sprite_screen_dispatch_test.cpp`. No inverted-clip reject
is present here; any no-op behavior belongs to the concrete sprite method.

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

The first class now has a bounded semantic slot-1 bridge in
`src/client-current/semantic/CoreRgb16SpriteSlot1.cpp`. It connects the
existing scene → node → screen dispatch path to the RGB16 span writer and
supports the directly reconstructed `color=0x100/effect=0` copy case and the
first class's observed `color=0x80/effect=0x101` RGB565 branch. The emulator
supplies target pitch and capacity because the captured dispatcher passes the
pixel pointer alone. The bridge rejects unknown parameter pairs and the
alternate class rather than applying untraced masks.
`tools/verify_core_rgb16_sprite_slot1.py` checks the slot-1 vtable targets
against the hash-pinned mapped image and builds an end-to-end framebuffer test.
`tools/verify_native_logo_blit.py` also compares both supported branches
against the existing Python model on installed Logo.spr payloads. These checks
validate the semantic model; they do not establish pixel identity against a
running game frame or replace the independent byte-match verification below.
The native v3.3 index path in `tools/verify_native_logo_index.py` now reaches
the same slot-1 bridge directly from original file bytes and compares its full
effect render against the Python model.

Both bodies traverse the span stream at `this+0x0C` and write to the target
pixel buffer. The first body contains an opaque copy branch and masked 16-bit
blend branches. The observed ship draw sets color to `0x80` and effect to
`0x101`; that pair selects its nonopaque blend branch. The RGB565 operation
order for this caller is recorded in the render trace. The sibling's exact
pixel-format distinction and all of its mask/effect cases still need their own
trace.

## Slot-2 sibling methods and class lifecycle

The constructors also establish the full vtables from the mapped Core image.
Ghidra confirms that `0x588009C0` calls shared initialization at `0x587C9800`
and stores `0x588BE71C` at object offset 0; `0x5880D370` performs the same
initialization and stores `0x588BE72C`. The vtable entries in the capture are:

| Class vtable | Slot 0 destructor | Slot 1 compositor | Slot 2 compositor |
| --- | --- | --- | --- |
| `0x588BE71C` | `0x58800A30` | `0x58800A60` | `0x588099F0` |
| `0x588BE72C` | `0x5880D3E0` | `0x5880D420` | `0x58816550` |

Each slot-0 method calls its class cleanup routine and conditionally releases
`0x38` bytes when flag bit 0 is set. Ghidra's decompilation of each slot-2
method shows an empty-stream guard at object offset `+0x0C`, an intersection
test for the supplied rectangle, screen helper calls, and row/span traversal
that writes masked 16-bit values to the target. The methods reference
different groups of pixel-mask globals, consistent with the two
mask-specialized class variants.

The constructor/vtable/slot relationship is established directly by the
mapped vtable contents and Ghidra's constructor bodies. No slot-2 invocation
site has been identified, so its runtime use and its relationship to the
ship's observed slot-1 draw path remain unproven. Ghidra's generic parameter
names do not establish every argument's semantic name, and the mask/effect
cases have not been exhaustively traced or compared against original-client
pixels.

An x86 call-site scan found generic virtual calls through vtable offset `+8`,
but that offset is shared by unrelated classes. For example,
`0x587C2EB0` calls the `+8` method on an object stored at its own `+0x50` with
one explicit value; the two compositor methods decompile with ten explicit
parameters. That call is not evidence for either compositor's dispatch. A
call site tied to vtables `0x588BE71C` or `0x588BE72C` remains unresolved.

The function bodies used for this trace were decompiled from the existing
Ghidra program `/Core.unpacked.dll`; the selected output is
`var/current-core-rgb16-siblings.c`, produced by
`var/run-current-ghidra-core-rgb16-siblings.cmd`. For example, the constructor
body stores `&DAT_588be71c` into `*param_1`, while the slot-2 bodies guard
`*(this + 0x0c)` before computing the clipped rectangle and reading the span
stream. These are direct observations from the decompiled functions, while the
field names and higher-level effect labels remain project interpretations.

## Byte-match validation and limits

The initial dispatcher and slot-1 pair (272, 36,733, and 37,154 bytes) were
emitted from the mapped runtime bytes and rebuilt with the repository's pinned
VC6 toolchain. Objdiff 3.8.0 reports 100% for the
complete 272-byte, 36,733-byte, and 37,154-byte bodies; 15, 925, and 925
captured immediate or address operands respectively are audited. The six
class lifecycle and slot-2 functions add 29,686 bytes: constructors of 45 bytes
each, destructors of 46 bytes each, and slot-2 bodies of 14,711 and 14,793
bytes. Their 1,310 captured immediate or address operands are audited. Objdiff
reports 100% for all nine functions (103,845 bytes total) against the
hash-pinned mapped capture. The generated source preserves the captured
instruction stream; it does not claim to recover the original compiler's
optimization decisions or high-level source.

The original on-disk Core.dll PE has zero raw bytes for the `.text` section
containing these extents. `tools/compare_current_core_disk.py` records that
limitation rather than treating rebuilt-image offsets as original file
offsets. Therefore the byte match is against the installed module's mapped
runtime capture, whose manifest path and original file hash are pinned, not a
direct comparison to raw on-disk function bytes. No pixel-for-pixel comparison
against a live original-client framebuffer has been made. The mask values at
runtime, slot-2 caller path, and complete blend contracts remain open.
