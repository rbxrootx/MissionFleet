# Installed Core.dll four-byte-target sprite class, selector 1

This slice follows the selector-1 class chosen by the installed ship sprite
parser for a four-byte output target. Evidence is from the hash-pinned mapped
`Core.dll` at runtime base `0x58480000`.

## Selection and dispatch

At `0x587B6D70`, the parser's `DAT_58905F98 == 4` branch selects constructor
`0x587FAA50` when its local class selector is 1. Ghidra shows that constructor
calling shared initialization at `0x587C9800` and writing vtable address point
`0x588BE70C` to the object. The four-byte entries read directly from that
address in the mapped capture are:

| Offset | Target | Role supported by evidence |
| --- | --- | --- |
| `+0x00` | `0x587FAAA0` | Cleanup and deleting-destructor wrapper |
| `+0x04` | `0x587FAAD0` | Sprite slot 1 renderer |
| `+0x08` | `0x587FDBA0` | Sprite slot 2 renderer |

The generic screen dispatcher at `0x587BA830` calls sprite vtable slot 1 with
the target buffer, geometry, and color/effect parameters. A specific invocation
site for slot 2 has not been established.

## Observed renderer behavior

Both render methods test the payload at object offset `+0x0C`, reject empty or
nonintersecting geometry, clip to the destination rectangle, obtain target
origin and pitch through shared screen helpers, then traverse sprite data using
the configured `DAT_58905F98` output stride. Slot 1 uses channel-mask globals
`DAT_58965F54` and `DAT_58965F5C` in its blend paths; slot 2 also uses
`DAT_58965F3C`, `DAT_58965F44`, and `DAT_58965F4C`. These different masks
establish separate channel-specialized paths, but their user-visible pixel
layout and effect meaning are not established by this evidence.

No captured original-client frame has been compared pixel-for-pixel, and the
runtime mask values and slot-2 caller remain unresolved.

## Byte verification

The four class functions were generated from the mapped instruction stream and
verified by the pinned VC6 plus objdiff 3.8.0 pipeline at **100%**: 24,372 bytes
and 824 captured operand targets checked.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x587FAA50` | Constructor | 37 |
| `0x587FAAA0` | Cleanup/destructor slot | 46 |
| `0x587FAAD0` | Slot-1 renderer | 12,482 |
| `0x587FDBA0` | Slot-2 renderer | 11,807 |

This establishes emitted machine-code identity, not recovery of the original
high-level C++ source.
