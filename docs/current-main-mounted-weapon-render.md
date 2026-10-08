# Main.dll mounted-weapon rendering path

`FUN_587B3200` is the virtual method at slot `+0x3C` in the mapped
`CMountedWeapon_Gun` and `CMountedWeapon_GunL` vtables. Their complete-object
locators are at `0x58999ED0` and `0x58999F20`; the corresponding method entries
are `0x58999F10` and `0x58999F60`. Both entries point to `0x587B3200`, and
their RTTI type descriptors name the two classes. Fresh Ghidra data references
agree with the mapped pointers.

The method has two complete instruction ranges: 139 bytes at `0x587B3200` and
1,993 bytes at `0x587B3290`, separated by five bytes. Its body stores the
packed input word at receiver `+0x94`, extracts two fields whose precise
coordinate/direction meanings remain unknown, and iterates over
the low three bits of receiver `+0x224`. For each active mount, it computes
table-based offsets, creates a sprite/effect object through matched
`FUN_588D3A60` with flag `0x40`, initializes selected callbacks, and may create
additional `CEffectFireSpit_SpriteBundleScreen` objects when either of two
global overlay gates is active.

The direct open-call closure contains six functions and 2,794 bytes (839
instructions): the virtual method plus `FUN_587B1AE0`, `FUN_5875EC90`,
`FUN_5875EC60`, `FUN_588D2B50`, and `FUN_588DD370`. Across the closure, Ghidra
records 30 direct calls: 28 from the virtual method, one from
`FUN_5875EC90` to matched `FUN_58734A30`, and one from `FUN_588DD370` to matched
`FUN_58970C70`. Ten calls from the root reach its five open helpers. Two
independent fresh Ghidra body and call-edge exports agree on the ranges,
instructions, and edges. The focused verifier checks those against the mapped
image, both RTTI slots, the byte-match catalog, and the complete direct-call
closure. All six source bodies pass ObjDiff at 100%.

`FUN_587B1AE0` combines indexed values from tables at `0x58A0B4D8` and
`0x58A0ED18` into four output components. `FUN_5875EC90` installs the
`CEffectFireSpit_SpriteBundleScreen` vtable, initializes its copied/scaled
fields, and derives frame counts from the supplied resource dimensions.
`FUN_5875EC60` updates three index fields from its inputs. `FUN_588D2B50`
stores three values at receiver offsets `+0x230`, `+0x234`, and `+0x238`.
`FUN_588DD370` sets state `+0x1330`, invokes a callback through `0x5898C1A8`,
then sends event `0x80012101` through matched `FUN_58970C70`.

The weapon/mount record layout, packed-field meanings and units, lookup-table
encoding, overlay identities, and several object fields remain unresolved.
RTTI establishes the virtual-table slots, but this pass did not establish their
constructor paths or test the rendered result in the emulator. The callback
contract in `FUN_588DD370` also remains unknown. Shared helpers
`FUN_5875EC60` and `FUN_5875EC90` have additional callers outside this closure.

Re-run the focused verification and byte-match checks with:

```powershell
rtk python tools/verify_current_main_gun_render.py
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 587B3200 --only 587B1AE0 --only 5875EC90 --only 5875EC60 --only 588D2B50 --only 588DD370
```

The Ghidra body and call-edge manifests are in
`config/NF2_2026/current-main-gun-render-*.tsv`.
