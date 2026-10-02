# Installed Core.dll three-byte-target sprite class, selector 1

This is the selector-1 sibling of the
[selector-0 three-byte-target class](current-core-three-byte-sprite-class.md).
The selector-2 sibling is documented in the
[adjacent class evidence](current-core-three-byte-sprite-class2.md).
The evidence comes from the installed, hash-pinned mapped `Core.dll` at runtime
base `0x58480000`.

## Selection and dispatch

The ship sprite parser at `0x587B6D70` branches on
`DAT_58905F98 == 3`; within that branch, its selector-1 case calls constructor
`0x587F3930`. Ghidra shows that constructor delegating to base initializer
`0x587C9800` and installing vtable address point `0x588BE6FC` on the sprite
object. The vtable words in the mapped image identify:

| Offset | Target | Role supported by evidence |
| --- | --- | --- |
| `+0x00` | `0x587F39A0` | Cleanup and deleting-destructor wrapper |
| `+0x04` | `0x587F39D0` | Sprite slot 1 renderer |
| `+0x08` | `0x587F7C00` | Sprite slot 2 renderer |

The screen dispatcher at `0x587BA830` invokes sprite slot 1 with the target
buffer, position, clip, and final color/effect values. The vtable therefore
ties `0x587F39D0` to the ordinary screen draw dispatch. A particular indirect
call site for slot 2 is still unknown.

## Observed span and blend behavior

Both render methods reject a null payload at object offset `+0x0C` and a
nonintersecting rectangle. They use screen helpers for destination origin and
pitch, clip the sprite bounds, and walk a row/span stream. The slot-1 Ghidra
output shows `0xFFFF` as a row terminator and returns on signed control values
below `-1`. For a literal span, it reads the pixel count from the span record,
advances to the pixel payload, and clips the run against the left and right
edges before writing. It has separate mask-based channel blend loops selected
by the color/effect arguments; slot 2 follows a related traversal, but its
dispatch condition is not recovered.

These names describe observed mechanics, not a confirmed asset-format label.
The selector's semantic meaning, pixel channel layout, mask initialization,
and full effect contract remain uncertain. No original-client frame has been
compared pixel-for-pixel.

## Byte verification

The constructor, destructor wrapper, and both render slots were reconstructed
from the mapped instruction stream and verified with the pinned VC6 and objdiff
3.8.0 pipeline: **28,886 bytes at 100%**, with **1,210 captured operand targets
checked**.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x587F3930` | Constructor | 45 |
| `0x587F39A0` | Cleanup/destructor slot | 46 |
| `0x587F39D0` | Slot-1 renderer | 16,940 |
| `0x587F7C00` | Slot-2 renderer | 11,855 |

This verifies the emitted machine-code bytes, not recovery of original
high-level C++ source.
