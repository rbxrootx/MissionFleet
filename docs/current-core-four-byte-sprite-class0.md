# Installed Core.dll four-byte-target sprite class, selector 0

This slice follows the next class chosen by the installed ship sprite parser.
Evidence comes from the hash-pinned mapped `Core.dll` at runtime base
`0x58480000`.

## Selection and dispatch

The parser at `0x587B6D70` enters its `DAT_58905F98 == 4` branch and calls
constructor `0x587D8110` when its local class selector is zero. The constructor
calls common initialization at `0x587C9800` and writes vtable address point
`0x588BE6CC` into the sprite object. The mapped vtable contains:

| Offset | Target | Role supported by evidence |
| --- | --- | --- |
| `+0x00` | `0x587D8160` | Cleanup and deleting-destructor wrapper |
| `+0x04` | `0x587D8190` | Sprite slot 1 renderer |
| `+0x08` | `0x587D9560` | Sprite slot 2 renderer |

The common screen dispatcher at `0x587BA830` calls sprite slot 1 with target
buffer, position, clipping rectangle, and color/effect arguments. The vtable
therefore identifies `0x587D8190` as the ordinary dispatch target. A specific
invocation site for slot 2 has not been established.

## Observed render behavior

Both methods test the payload pointer at object offset `+0x0C`, reject
nonintersecting geometry, clip the rectangle, and use shared screen helpers to
obtain target origin and pitch. They calculate addresses using the configured
`DAT_58905F98` stride and use the channel-mask globals in several blend paths.
The final color/effect arguments select branches in Ghidra's pseudocode. Slot 2
uses additional channel-related globals and a distinct parameter shape, but
its exact rendering contract and call condition are still unknown.

This is identified as the parser's four-byte output-stride branch; the source
channel order, runtime mask values, alpha semantics, and complete color/effect
meaning remain unresolved. No original-client frame has been compared
pixel-for-pixel.

## Byte verification

The four class functions were reconstructed from the mapped instruction stream
and verified by the pinned VC6 plus objdiff 3.8.0 pipeline at **100%**: 9,745
bytes and 337 captured operand targets checked.

| Address | Role | Bytes |
| --- | --- | ---: |
| `0x587D8110` | Constructor | 37 |
| `0x587D8160` | Cleanup/destructor slot | 46 |
| `0x587D8190` | Slot-1 renderer | 5,067 |
| `0x587D9560` | Slot-2 renderer | 4,595 |

This establishes emitted machine-code identity, not recovery of the original
high-level C++ source.
