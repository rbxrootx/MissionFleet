# Ship-map visual candidate construction

This model follows the installed 2026 `Main.dll` call chain for a `0x58`-byte
candidate created by `FUN_588DB610`. The mapped image identity and analysis
method are recorded in [the client capture notes](client-unpacking.md).

At `0x588DB77F` and `0x588DB8C2`, the scan allocates `0x58` bytes and calls
`FUN_58907C80` on the returned object. The wrapper forwards five arguments to
`FUN_58734A30`, writes vtable `0x589A2988`, returns the receiver, and removes
five arguments. In this call chain the arguments resolve to owner, optional
resource record, x, y, and a 16-bit sort key. `FUN_58734A30` calls
`FUN_589031A0` with owner, x, y, zero, zero, and the sort key. It then installs
vtable `0x5898CA74`, clears `+0x50`, stores the resource pointer at `+0x54`,
and, when that pointer is non-null, copies six DWORDs from record `+0x18..+0x2C`
to candidate `+0x0C..+0x20`. The outer wrapper finally replaces the vtable with
`0x589A2988`.

The base initializer writes x/y at `+0x04/+0x08`, initializes the remaining
observed local fields, and produces flags word `0xE00F` from its OR/AND
sequence. With a non-null owner, it inserts the candidate into both lists
described in [the child-list evidence](current-client-child-lists.md): a
circular doubly linked list headed at owner `+0x3C`, and a null-terminated
doubly linked list headed at owner `+0x4C`. Both lists compare the signed
16-bit key at candidate `+0x26`, maintain ascending order, and insert equal
keys after existing equal keys. The scan then applies mode `0x102` through
`FUN_58902D20`.

The normal-path model is in
[`ShipMapVisualCandidateConstruction.cpp`](../src/client-current/semantic/ShipMapVisualCandidateConstruction.cpp)
and is called directly by
[`ShipMapVisualStateChildScan.cpp`](../src/client-current/semantic/ShipMapVisualStateChildScan.cpp).
It covers both the per-entry candidate and the post-scan candidate. The tests
exercise signed ordering, equal-key insertion, owner links, flags, resource
copying, null-record deltas, and the scan's allocation path. The allocator
adapter still receives the observed `0x58` request, but returns storage for the
larger host-side semantic node; the model never overlays a 64-bit-pointer view
on an 88-byte buffer.

The C++ node and owner types are semantic host-side views, not binary-layout
replacements for the original x86 classes. The owner view contains only the
two observed list heads. The class name, the purpose of the copied record
fields, and the full object hierarchy remain unknown. The `0x68`-byte
`FUN_58789040` object and visible effect/route rendering remain hooks; these
tests do not launch the client or validate a rendered frame.

The instruction-level sources for `FUN_58907C80`, `FUN_58734A30`,
`FUN_589031A0`, and the two list-insertion helpers retain their separate
byte-match records. The semantic constructor is not part of those byte-match
claims. Run `rtk python tools/verify_ship_map_visual_state_child_scan.py` for
the portable construction and scan tests.
