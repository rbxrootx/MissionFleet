# Installed Core.dll scene resource text renderer

The 15 text rows populated by `0x586EB530` are native Core controls, not a
separate page-image layer. Constructor `0x584823B0` installs vtable address
point `0x58894C58`, allocates a `0x80`-byte text buffer at `+0x6C`, and copies
the initial string through `0x584860A0`. The mapped vtable entry at `+0x14`
points to `0x587B6280`, tying the row objects from the
[resource viewport](current-core-scene-resource-row-view.md) directly to this
draw callback.

Ghidra's decompilation and mapped instructions show `0x587B6280` checking node
flag bit 0 before rendering. It dispatches children with negative signed
ordering keys from `+0x26` before the node's own draw. It combines the node's
position and offsets (`+0x04`, `+0x08`, `+0x0C`, `+0x10`) with the incoming
origin, constructs the node rectangle from `+0x14` through `+0x20`, and
intersects it with the incoming clip. It draws only when that intersection has
positive width and height.

For a visible node, the callback computes a text origin, uses the width helper
`0x584958D0` in its alignment-flag branches, and sends the buffer at `+0x6C`,
style fields at `+0x60`, `+0x64`, and `+0x68`, the clipped bounds, and flags at
`+0x54` through the renderer interface's virtual slot `+8`. Helper
`0x584849C0` returns the renderer-context field at `+0x50`, which is passed as
an argument to that draw operation. The callback then continues the child
render traversal. This proves the control-flow and render-call inputs; it does
not identify the concrete renderer implementation or every style-bit meaning.

All three newly reconstructed functions—`0x584849C0` (17 bytes),
`0x584958D0` (23), and `0x587B6280` (671)—match the installed mapped Core image
at **100% across 711 bytes** under the pinned VC6 SP5 and objdiff 3.8.0
pipeline. The 12 fixed call targets in the main callback were audited.
Ghidra's source and the vtable bytes establish the row-to-renderer route, but
there is still no live frame capture proving the final pixels.
