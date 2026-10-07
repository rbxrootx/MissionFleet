# Current Main map-object state-update path

`FUN_588DE3D0` sets a receiver state to `0x50000` and refreshes child objects
and shared map-position fields. Its open direct-call closure adds 10 exact
matches / 2,325 bytes across the ranges in
[`config/NF2_2026/main-map-object-state-update-body-ranges.tsv`](../config/NF2_2026/main-map-object-state-update-body-ranges.tsv).

## Evidence from the installed client

Fresh Ghidra records one complete 482-byte root body at
`0x588DE3D0..0x588DE5B2` (131 instructions). The root is called by the
byte-matched `FUN_587F8760` at `0x587F9614`. That caller's class is not
identified. In the root, the code writes `0x50000` at `+0x6090`, calls
`FUN_588D7BD0`, and invokes the `+0x0C` virtual method on each non-null child
among 32 slots starting at `+0x17C`. It copies a selected global record pointer
to `+0x54` on the observed global-state branch, clears fields and child flags,
and conditionally refreshes children at `+0x6020` and `+0x6024` plus shared
position helpers when the global active object equals the receiver.

The closure also contains helpers that normalize an observed value within a
`0xE10` range, set per-child mapped positions, and derive paired values from 32
child records before dispatching them through a child virtual method. These
are direct observations of the instructions; the field names and meanings are
not known.

Four byte-matched caller functions provide 11 mapped callsites into the
closure. `FUN_588DEB30` calls the included mode and child helpers at six sites.
The RTTI-identified `CShip_MapObjectScreen` constructor `FUN_588E05C0` calls
two included helpers, and its RTTI-identified update `FUN_588E5150` calls
`FUN_588D7BD0` at `0x588E60CC` and `0x588E63FD`. Together with the direct
`FUN_587F8760` root call, these tie the closure to map-object child/control
refresh while leaving the root's owner uncertain. Two additional callers of
`FUN_58853F90`, `FUN_587B2360` and `FUN_587B4640`, remain unmatched.

The fresh body export covers every instruction byte in all 10 ranges. A mapped
transfer scan reaches all 10 functions, finds no unresolved direct targets,
and confirms 12 outbound transfers to matched functions (10 calls and two tail
jumps). ObjDiff 3.8.0 verifies all 10 functions / 2,325 bytes at 100%. Run
`rtk python tools/verify_current_main_map_object_state_update.py` to repeat the
closure and matched-caller checks.

## Uncertainties

The root has no recovered RTTI owner. The caller `FUN_587F8760` has an unknown
class, and it may use this root as part of a shared object update. The exact
meanings of the state values, child types, record fields, and rendered effect
remain unknown. No emulator launch or visual interaction test was performed.
