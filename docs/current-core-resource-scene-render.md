# Installed Core.dll resource-scene render traversal

This semantic slice follows the current installed Core build, SHA-256
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`, through
the render callback reached from its normal frame loop. The mapped image is
`reports/unpacked-client/Core.mapped.bin`, base `0x58480000`, SHA-256
`2b8ed57633a6d1d4bb51d45c28d6d2117c4525dd7c9d9028454e946c7f90261a`.

Startup constructs the resource scene at `0x5857FE50`, stores it at
`0x58962228`, and aliases that pointer into the loop's scene globals. The
constructor installs vtable address point `0x588AA82C`; slot `+0x14` contains
`0x587B5320`. In each render pass, `0x5882E060` calls wrapper `0x587B5430`
with the scene at `0x5882E1A3`. The wrapper copies either the supplied
four-DWORD clip rectangle or the fallback words at render-context `+0x14`,
initializes a two-DWORD origin to zero, then calls the receiver's virtual slot
`+0x14`. This establishes a static path from the installed client's frame loop
to the scene child traversal; it does not establish actual pixels on screen.

`0x587B5320` returns if the context is null or flag bit 0 at scene offset
`+0x24` is clear. It traverses the child list rooted at `+0x4C`. A child whose
first DWORD is at most `0x10000` is treated as invalid; an invalid initial
head clears the scene's `+0x4C` field, while an invalid later child ends the
walk. The function reads a signed 16-bit key at child `+0x26`, dispatches
negative-key children first through each child's virtual slot `+0x14`, then
dispatches the remaining children. It passes the same context, clip pointer,
and origin pointer to every child and reads the next link at `+0x48` after the
child callback returns. It does not draw the scene container itself.

The existing sorted-list insertion routine `0x587B4CE0` inserts by the signed
key in ascending order and places equal keys after existing equals. The
renderer's two phases therefore preserve that established list order while
splitting negative from nonnegative keys. The portable implementation in
`src/client-current/semantic/CoreResourceSceneRender.cpp` models the wrapper
and this slot separately, keeping context/rectangle/origin pointers and the
callback order observable for tests. Its structs are evidence-oriented test
views, not recovered ABI declarations.

## Uncertainties

The conventional interpretation of `+0x26` as a painter-order key follows from
the sorted insertion and render split; the original field name is unknown. The
meaning of the `0x10000` first-DWORD cutoff is also unresolved. Child vtable
targets are heterogeneous and are not resolved here. Static reachability does
not verify runtime callback values, successful sprite draws, frame timing, or
visible output.

## Validation

`rtk python tools/verify_core_resource_scene_render.py` builds and runs native
tests for the context gate, flag gate, explicit/fallback clip copies, zero
origin, negative/nonnegative dispatch order, invalid-head clearing, invalid
suffix termination, unchanged argument forwarding, and link changes made by a
child callback. These tests validate the semantic model against the recovered
control flow; they are not a byte-match result for `0x587B5320` or `0x587B5430`.

The source extents in the pinned mapped image are 271 bytes for
`0x587B5320` (`8c9d6d6b2b03650959e5b4544d5d742df9fc25c56fc70671e2a51b5a9c165d4e`)
and 151 bytes for wrapper `0x587B5430`
(`9b9ed5a5b166f54050506aef2d974066bbaabd28fadbf647cb75f83b2cb2983e`).
