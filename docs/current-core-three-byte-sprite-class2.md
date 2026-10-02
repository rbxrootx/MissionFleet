# Installed Core.dll three-byte-target sprite class, selector 2

This is the selector-2 sibling of the
[selector-0 class](current-core-three-byte-sprite-class.md) and
[selector-1 class](current-core-three-byte-sprite-class1.md). Evidence is from
the installed, hash-pinned mapped `Core.dll` at runtime base `0x58480000`.

## Selection and dispatch

The ship sprite parser at `0x587B6D70` enters its output-depth-3 branch and
calls constructor `0x58819F20` for local class selector 2. Ghidra shows the
constructor calling common initialization at `0x587C9800` and installing
vtable address point `0x588BE73C`. The captured vtable contains:

| Offset | Target | Role supported by evidence |
| --- | --- | --- |
| `+0x00` | `0x58819F90` | Cleanup and deleting-destructor wrapper |
| `+0x04` | `0x58819FC0` | Sprite slot 1 renderer |
| `+0x08` | `0x5881E330` | Sprite slot 2 renderer |

The common screen dispatcher at `0x587BA830` calls sprite slot 1 with target
buffer, position, clip, and color/effect arguments. This vtable identifies
`0x58819FC0` as the slot-1 target for this class. A specific slot-2 invocation
site has not been found.

## Observed span and blend behavior

Both render methods check the payload pointer at object offset `+0x0C`, reject
nonintersecting rectangles, and obtain destination origin and pitch from
screen helpers. They traverse compressed row/span records and use mask-based
channel blend loops selected by the final color/effect arguments. In the
slot-1 Ghidra output, clipped rows are skipped by walking nonnegative span
records; `-1` ends a row, while controls below `-1` return early. Literal runs
are clipped and blended into the target. Slot 2 follows a related traversal,
but its caller and exact effect contract are unknown.

The selector's semantic meaning, pixel channel layout, runtime mask setup, and
full color/effect contract remain unresolved. The capture's zero-filled global
defaults do not establish their values after initialization. No original
client frame has been compared pixel-for-pixel.

## Byte verification

The constructor, destructor wrapper, and two render slots match the captured
instruction stream using the pinned VC6 and objdiff 3.8.0 pipeline: **29,400
bytes at 100%**, with **1,199 captured operand targets checked**.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x58819F20` | Constructor | 45 |
| `0x58819F90` | Cleanup/destructor slot | 46 |
| `0x58819FC0` | Slot-1 renderer | 17,246 |
| `0x5881E330` | Slot-2 renderer | 12,063 |

This proves the emitted bytes, not recovery of the original high-level C++
source.
