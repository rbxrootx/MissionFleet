# Ship-map visual secondary construction

`FUN_588DB610` allocates a `0x68`-byte object after it has created a candidate,
then calls `FUN_58789040`. The call uses owner `DAT_58A2459C + 0x10524`, record
23 from the resource table at `DAT_58A246F0` when the table has more than 23
entries, the last candidate's x coordinate, its y coordinate minus 5, and its
16-bit key. The mapped caller applies mode `0xFFFFFEFF` through
`FUN_58902D20` after construction. `FUN_588DC1B0` is a second direct caller and
passes jittered coordinates and key 9000.

The 180-byte mapped body first calls the already modeled `FUN_58734A30` base
constructor. It then writes derived vtable `0x58996B40` (Ghidra labels it
`CHitSmoke_SpriteBundleScreen`), clears `+0x50`, stores the record at `+0x54`,
and copies the six DWORDs at record `+0x18..+0x2C` to object `+0x0C..+0x20`.
It reads a 16-bit divisor from record `+0x0C`, writes `0x80 / divisor` to
`+0x64`, and calls the mapped `rand` thunk once. After that call it writes
`+0x60 = -3`, `+0x5C = 1`, `+0x58 = 0`, and `+0x2C = 0xFFFFFEFF`, adds
`rand()%6` to `+0x64`, and clears flag bits `0x4000` and `0x2000`. Given the
base flags `0xE00F`, the resulting flags are `0x800F`.

The normal-path model is in
[`ShipMapVisualCandidateConstruction.cpp`](../src/client-current/semantic/ShipMapVisualCandidateConstruction.cpp).
The ship-map scan now allocates semantic host storage for the native `0x68`
request and calls the constructor directly; the constructor itself consumes the
injected rand callback at the point observed in the original. The tests verify
copied fields, list ownership, offsets, final flags, the rand-call order, and
the values passed by the scan.

The original faults with an x86 divide error when the record is null or its
word at `+0x0C` is zero. The semantic model raises `std::domain_error` at that
point, before calling rand or writing the trailing derived fields. The field's
meaning is not yet established. Vtable `0x58996B40` is recovered directly from
the mapped constructor bytes; no byte-match claim is made for the semantic
model. The `0x68`-byte allocation adapter maps to the larger host node type, so
the semantic type is not a native-layout replacement. Renderer output is still
not validated by a live client frame.

Run `rtk python tools/verify_ship_map_visual_state_child_scan.py` for the
portable constructor and scan tests. The previous byte-match records for the
base constructors and child-list helpers are unchanged.
