# Installed Core.dll ship animation attachment and draw path

This slice follows the installed ship render-node path in the hash-pinned
mapped `Core.dll` at runtime base `0x58480000`. The installed file SHA-256 is
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.

## Evidence from mapped code

`0x58482CD0` returns its input pointer plus `0x18`; `0x58486980` returns its
input pointer plus `0x20`. `0x58486C60` stores the supplied animation-record
pointer at node offset `+0x54`. When nonnull, it calls those accessors and
copies a pair of DWORDs from record `+0x18` to node `+0x0C/+0x10` and four
DWORDs from record `+0x20` to node `+0x14..+0x20`. These are the position
anchor and clip rectangle described in the
[client render-path notes](client-render-path.md); their exact source-level
names remain inferred.

`0x5849C770` checks that the animation's frame count at `+0x0C` and the screen
argument are nonzero. It divides elapsed time by the period at `+0x08`, wraps
the result by the frame count, uses a `0x24`-byte frame stride to apply the
selected frame's x/y offsets, and reads the selected sprite pointer from the
separate pointer table at `+0x14`. It then calls the screen dispatcher at
`0x587BA830` with that sprite, the updated position, clip, color, and effect
arguments.

The render-node function `0x587B5DB0` checks flag bit 0 and nonnegative elapsed
time, processes eligible linked-node callbacks, and calls `0x5849C770` when
the attached animation pointer and screen are usable. It supplies the
parent-adjusted position, clip rectangle, node color, and node effect. The
mapped vtable table at `0x58894C94` contains `0x587B5DB0` at both `+0x14` and
`+0x30`.

## Byte verification

These five functions match the hash-pinned mapped image at 100% with the
repository's VC6 plus objdiff 3.8.0 verification pipeline: 728 bytes and 11
captured operand targets.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x58482CD0` | Anchor accessor, record `+0x18` | 17 |
| `0x58486980` | Rectangle accessor, record `+0x20` | 17 |
| `0x58486C60` | Animation-record attachment | 86 |
| `0x5849C770` | Timed-frame wrapper | 220 |
| `0x587B5DB0` | Render-node draw slot | 388 |

This confirms emitted machine-code identity, not original source recovery.
The function assumes a positive frame period; invalid-period behavior, exact
helper semantics, and pixel-for-pixel live frame output remain unverified.

## C++ semantic port and validation

[`CoreShipAnimationFrameDraw.cpp`](../src/client-current/semantic/CoreShipAnimationFrameDraw.cpp)
implements the valid sprite path of `0x5849C770` and the sprite arm of
`0x587B5DB0`. The port keeps the two frame tables separate, applies x86
32-bit-wrapped node, anchor, parent, and frame-offset sums, preserves the node
flag and negative-time gates, and sends the selected sprite through the
existing screen dispatcher and RGB16 slot-1 implementation. It does not run
the ship node's surrounding linked-child callbacks; those callback loops
remain outside this sprite-path slice. The portable view also checks table
lengths and returns a status for malformed input, while native code assumes
those tables are valid. A nonpositive period is rejected safely here; the
original signed divide would fault for zero and assumes positive data.

Run the native integration check:

```text
python tools/verify_core_ship_animation_frame_draw.py
```

It pins the mapped Core capture, verifies the direct call from the ship node to
the timed-frame wrapper and from that wrapper to the screen dispatcher, checks
the ship-node vtable slots, and renders selected frames into a real test
framebuffer. Cases cover the first frame, a frame boundary, wraparound,
per-frame sprite selection and offsets, parent/anchor position, clipping,
negative time, invalid records, x86 coordinate wrap, and color/effect
forwarding. The original naked functions remain separately byte-verified with:

```text
python tools/verify_client_matches.py --config config/NF2_2026/core-verifications.json --only 5849C770 --only 587B5DB0
```

The tests use synthetic, source-shaped RGB16 sprite payloads. They validate
the C++ path against the recovered machine-code behavior and existing slot-1
port, not against a live original-client frame capture.
