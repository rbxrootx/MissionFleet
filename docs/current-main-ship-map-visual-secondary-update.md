# Ship-map visual secondary update

`FUN_58789040` installs vtable address point `0x58996B40`; its `+0x0C` entry
is `FUN_58788F90`, a 172-byte mapped function. The captured vtable's `+0x00`
entry is `FUN_58788F60`, the deleting-destructor path; Ghidra shows it calling
`FUN_589038A0` and conditionally calling the release thunk `FUN_5897CC42`.
The thunk's concrete target and deallocation effect are not verified.
The owner-side circular-list walker `FUN_58903040` dispatches child vtable
`+0x0C` when the owner's flag word at `+0x24` contains `0x0004`. The mapped
vtable also places that walker at `+0x28`. The higher-level caller that
schedules the owner's `+0x28` method, and a live call/frame, remain unresolved.

When the receiver's `+0x24` bit `0x0004` is set, a non-null resource record
controls lifetime. The code zero-extends the word at record `+0x0C`,
multiplies it by the signed DWORD at `+0x08`, subtracts one with 32-bit wrap,
then compares signed frame counter `+0x50` against that signed result. At or
beyond the bound, the function unlinks the receiver from its circular owner
list (`+0x3C`) and sorted owner list (`+0x4C`), then calls its vtable `+0x00`
with `1`. A null record bypasses this expiration check.

On the active path, tick `+0x58` increments. If signed `tick / int32(+0x5C)`
is nonzero, frame `+0x50` increments, tick resets to zero, and one `rand()`
sample yields x drift `1 - rand()%3`. `FUN_58902E60` applies that delta to
`+0x04` and propagates it to `+0x3C/+0x38` descendants whose flag `+0x24`
contains `0x2000`. Every active tick, `FUN_58902EA0(+0x60)` applies the y
delta at `+0x08` with the same propagation rule. Finally the method's
`+0x3C` children receive their virtual `+0x0C` update in circular-list order.

The normal-path model is
[`ShipMapVisualSecondaryUpdate.cpp`](../src/client-current/semantic/ShipMapVisualSecondaryUpdate.cpp).
Its tests cover the flag gate, null-record ticking, frame cadence, random x
drift, recursively filtered x/y deltas, child update order, expiry/unlink/
destructor order, and the `IDIV` zero-divisor fault. The original constructor
sets `+0x5C` to 1; the divide fault is kept explicit for corrupted or
uninitialized inputs. The observed derived/base destructor chain now has a
separate semantic model for child and receiver list cleanup; its release-thunk
target remains unresolved. Arbitrary child vtable bodies, the outer scheduler,
and rendered output are still outside this model. See the
[`secondary destruction note`](current-main-ship-map-visual-secondary-destruction.md).

The function's indexed 172-byte extent is listed in
[`client-functions.tsv`](../config/NF2_2026/client-functions.tsv), and its
field accesses and branches, including the 32-bit multiply/subtract and
signed compares at `0x58788FA8..0x58788FB7`, were checked against the captured mapped
`Main.dll` at `reports/unpacked-current-main/Main.mapped.bin` and the Ghidra
decompilation. `FUN_58788F90` does not yet have a tracked instruction-level
source or an ObjDiff byte-match record. Run
`rtk python tools/verify_ship_map_visual_secondary_update.py` for its focused
native tests. The existing exact-byte sources for `FUN_58903040`,
`FUN_58902E60`, `FUN_58902EA0`, `FUN_58902C20`, and `FUN_58902C70` remain
separate low-level evidence.
