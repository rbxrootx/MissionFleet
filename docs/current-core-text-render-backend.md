# Installed Core.dll text-render backend dispatch

The row control's renderer object is a Core adapter, not the drawing engine
itself. Constructor `0x58585900` obtains an object from registered factory
callback `0x588940D4`, wraps it with `0x587B60F0`, and stores that wrapper at
scene offset `+0xA8`. `0x587B60F0` installs vtable address point
`0x588BDC5C` and stores the factory result at wrapper offset `+0x0C`. The
mapped vtable's slot `+0x08` points to `0x587B6530`, which is the virtual draw
target called by row callback `0x587B6280`.

Ghidra decompilation of `0x587B6530` shows the Core-side rendering contract.
It skips a null text input, acquires a drawing-surface object through the
global renderer at `0x584869C0` and virtual slot `+0x44`, applies state through
registered callback pointers, intersects the requested vertical bounds with
the supplied rectangle, and releases the surface through slot `+0x68`. The
mode selects format value `4` or `6`. In mode zero, when the optional second
color/value is nonzero, it issues an extra draw at `(x+1,y+1)` before the main
draw.

Each draw passes through `0x587B3FD0`. That helper uses `0x587B45C0` to obtain
a conversion count when needed, allocates a temporary buffer at twice that
count through `0x587B4550`, and calls the registered draw callback at
`0x588940B0` with the surface, coordinates, format, rectangle, text resource,
converted buffer and count. It then releases the temporary buffer. Both
conversion helpers use callback `0x5889429C` with graphics-context global
`0x58905F88`.

This evidence connects the resource rows to a concrete Core-side backend
adapter and records the exact call and clipping behavior. The implementations
behind the callback globals are supplied by runtime setup; their registration
site and native drawing implementation are not identified here. The callback
contract's character encoding, precise format semantics, colors, and final
pixels remain uncertain, and there is no live frame capture in this slice.

All four functions—`0x587B6530` (462 bytes), `0x587B3FD0` (116), `0x587B4550`
(105), and `0x587B45C0` (41)—match the hash-pinned mapped Core image at 100%
across 724 bytes using the pinned VC6 SP5 and objdiff 3.8.0 pipeline. The four
functions contain no audited absolute or relative relocation operands.
