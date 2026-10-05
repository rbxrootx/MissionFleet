# Ship-map secondary visual destruction

The secondary visual's deleting destructor is `FUN_58788F60`; its captured
`0x58996B40` vtable address point uses that function at `+0x00` and
`FUN_58788F90` at `+0x0C`. The destructor installs the derived vtable, calls
`FUN_589038A0`, and tests the low bit of its deleting flag. When that bit is
set, it forwards `this` to `FUN_5897CC42`. The final helper is an external
release-thunk call: its six-byte body is verified, but its resolved target
(`0x59873F03` in the captured snapshot) is outside `Main.dll`, so the target's
ownership or deallocation effect is not established.

`FUN_589038A0` installs the bundle-base vtable and tail-calls
`FUN_58902D60`. That function installs root-base vtable `0x589A24E4`, then
repeatedly removes the child at `+0x3C` from both observed child lists. The
circular list uses owner/previous/next at `+0x30/+0x34/+0x38`; the sorted list
uses `+0x40/+0x44/+0x48` and head `+0x4C`. Each removed child's list fields
are reset (circular links point to itself; sorted links and owners become
null). The loop does not call child destructors. After child cleanup it
unlinks the receiver itself through `FUN_58902C20` and `FUN_58902C70`, then
returns to the derived destructor, which performs the conditional release-thunk
call.

[`ShipMapVisualSecondaryDestruction.cpp`](../src/client-current/semantic/ShipMapVisualSecondaryDestruction.cpp)
models the observed vtable transitions, both child-list detach operations, the
receiver unlink, and release-thunk ordering. The semantic node representation
uses external owner-view pointers. For child teardown, the circular and sorted
owner views must mirror the receiver's `+0x3C` and `+0x4C` child heads; this is
an adapter requirement, not a recovered native object layout. The release
operation remains an injected hook so tests can verify ordering without
pretending that the external target's behavior is known.

Evidence: `FUN_58902D60` (167 bytes, four relocations), `FUN_589038A0` (11
bytes, two relocations), `FUN_58902C20` (78 bytes), `FUN_58902C70` (99 bytes),
and `FUN_5897CC42` (6 bytes, one relocation) each pass the repository's ObjDiff
verifier at 100%. The deleting destructor's indexed extent is 33 bytes in
`client-functions.tsv`, while control flow in the mapped image reaches its
`ret 4` at `0x58788F81..0x58788F83` (36 bytes total from `0x58788F60`). That
extent discrepancy and the destructor itself do not yet have a tracked
instruction-level source/ObjDiff record.

Run `rtk python tools/verify_ship_map_visual_secondary_destruction.py` for
native tests covering two children in both lists, receiver unlinking, vtable
state and release ordering, plus the non-deleting path. The expiry path in
`verify_ship_map_visual_secondary_update.py` also verifies that update-side
unlinking precedes the destructor and release callback. These are semantic
tests, not a full-client or emulator run. The live `+0x28` scheduler, actual
rendered output, and external release target remain open.
