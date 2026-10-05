# Installed Core.dll render-node draw behavior

This semantic port covers `Core.dll!FUN_587B5F40`, the generic child draw-slot
callback reached under the resource-scene renderer. The live path is
`0x5882E060` (Core frame loop) → `0x587B5430` (scene wrapper) → `0x587B5320`
(scene child traversal) → each child's virtual slot `+0x14`; constructor
`0x58482320` installs `0x587B5F40` in the generic render-node slot. The
locally mapped installed Core image is pinned by SHA-256
`2b8ed57633a6d1d4bb51d45c28d6d2117c4525dd7c9d9028454e946c7f90261a` and the
function's 378 bytes match `src/client-current/Core/FUN_587b5f40.cpp` exactly.

The semantic port at
`src/client-current/semantic/CoreRenderNodeDraw.cpp` follows the observed
callback order. Node flag bit 0 gates drawing. A child-list head whose first
DWORD is at most `0x10000` is cleared from `+0x4C`; later invalid entries end
the local walk. Negative signed keys at `+0x26` call child slot `+0x14` before
the node's own sprite. If `+0x50` is non-null, the sprite dispatcher receives
the x86-wrapped sum of node position (`+0x04/+0x08`), node anchor
(`+0x0C/+0x10`), and incoming origin, plus a four-DWORD copy of the clip and
the passthrough values at `+0x28/+0x2C`. The remaining list is then drained
through the child callback, regardless of key sign. Each `+0x48` next link is
read after the child callback, preserving callback-side list mutations.

The adapter can be installed in the preceding scene semantic model using a
`MissionFleetCoreRenderNodeBinding`; the sprite draw itself is represented by
an injected callback for the next renderer layer. This does not claim the
actual pixels or every concrete child vtable have been reproduced.

## Uncertainty

The `0x10000` first-DWORD cutoff is directly visible, but its sentinel/tag
meaning is unknown. The ordering field is known to be signed because the
consumer reads it with sign extension; its original name and intended user
meaning remain unknown. Values at `+0x28` and `+0x2C` are forwarded unchanged;
their semantic names are not established. The portable model verifies control
flow and callback arguments, not live output from the protected client.

## Validation

`python tools/verify_core_render_node_draw.py` checks the pinned mapped-image
hash, function-body hash, and constructor-installed vtable target before
building and running native tests for painter order, link mutation, sentinel
handling, coordinate wraparound, clip copying, argument forwarding, and the
scene-slot adapter. `python tools/verify_core_resource_scene_render.py`
validates the parent scene wrapper and traversal model.
