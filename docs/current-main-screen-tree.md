# Current Main screen-tree updates and position propagation

This slice follows the current mapped `Main.dll` child list rooted at receiver
offset `+0x3C`; child links are at `+0x38`.

`FUN_58903040` checks receiver flag mask `0x0004`, then walks that child list
and invokes each child virtual slot `+0x0C`. Ghidra records data references to
the method, but the owning table types and runtime caller are unresolved. Its
complete 47-byte body is matched.

The normal-path C++ model is
[`ShipMapVisualNodeUpdateDispatch.cpp`](../src/client-current/semantic/ShipMapVisualNodeUpdateDispatch.cpp).
It preserves the owner flag gate, captures each child's `+0x38` link before
dispatch, and handles the observed circular and null-terminated endings. The
owner head is compared before each callback, matching the mapped instruction
order even if a callback changes list state. Tests cover the gate, empty list,
callback order, captured next-link behavior, and both list endings. The same
semantic traversal is used by the secondary object's update model; the
original functions contain separate loops and this reuse does not assert a
native call edge.

The `+0x0C` callback's return contract is unresolved. In the circular terminal
case, `FUN_58903040` tail-jumps to the final child's virtual method; the
semantic model tracks dispatch effects/order but does not preserve an
unverified return value. The table references still do not establish who
invokes the owner's `+0x28` method during a live frame.

Run `rtk python tools/verify_ship_map_visual_node_update_dispatch.py` for the
focused native tests. They validate the semantic loop, not a live-client frame.

`FUN_58903290` stores the supplied values at receiver offsets `+0x04` and
`+0x08`, derives the change from their previous values, and scans the same child
list. A child whose 16-bit flags at `+0x24` include mask `0x2000` receives the
delta through `FUN_58902e10`. Ghidra records ten direct calls from
`FUN_587312d0`, plus calls from `FUN_58764d30` and `FUN_58762a60`.

`FUN_58902e10` adds its two arguments to the receiver fields at `+0x04` and
`+0x08`, then recursively applies that same delta to descendants with mask
`0x2000`, following the `+0x3C` / `+0x38` child chain. Its Ghidra references
include the recursive call, `FUN_58903290`, `FUN_5890bd90`, `FUN_5890b900`,
`FUN_5890be10`, and `FUN_5890c020`.

The portable normal-path model in
[`ShipMapRouteDescendantMovement.cpp`](../src/client-current/semantic/ShipMapRouteDescendantMovement.cpp)
implements this helper and is used directly by the ship-map route-child model.
Native tests check nested flag filtering, circular and null-terminated child
chains, and 32-bit coordinate wraparound.

ObjDiff 3.8.0 reports 100% for all three complete contiguous bodies: 195 bytes
and four relocation operands checked. The client’s semantic names for these
fields and masks, coordinate units, and callback contract remain unknown. No
runtime screen movement or update pass was exercised.
