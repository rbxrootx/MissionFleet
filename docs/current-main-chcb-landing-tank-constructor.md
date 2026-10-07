# Current Main.dll `CHCB_LandingTank` constructor

`FUN_58782810` is the RTTI-identified `CHCB_LandingTank` constructor in the
installed client's mapped `Main.dll`. Fresh Ghidra 12.1.3 reports one exact
body range, `[0x58782810, 0x58782CE2)`: 1,234 bytes across 379 instructions.
The emitted instruction source matches all 1,234 bytes under objdiff 3.8.0.

## Evidence from the original code

The byte-matched `CShip_MapObjectScreen` constructor `FUN_588E05C0` calls this
constructor at `0x588E378F`. Ghidra shows that caller allocating eight
`CHCB_LandingTank` objects into an eight-entry array. The mapped instructions
show the returned pointer stored at `[ebx]`, the array pointer advanced by four
bytes, and the loop ending when its index reaches eight. The caller computes
positions with alternating 50-unit horizontal offsets and 20-unit row offsets;
the units and visible meaning of those coordinates are unknown.

The constructor writes vtable pointer `0x58996A68` at `0x58782874`. Its
complete-object locator `0x589A5EF4` points to the type descriptor at
`0x589C2D70`, whose name is `.?AVCHCB_LandingTank@@`. The same vtable's slot
`+0x0C` points to the already byte-matched `FUN_58782CF0`, documented in the
[existing method evidence](current-main-chcb-landing-tank-method.md).

Fresh Ghidra decompilation shows base initialization, then nine conditional
`0x58`-byte children with the `CSpriteBundleScreen` vtable. The constructor
selects observed records from table pointers rooted at `0x58A2459C` and
`0x58A24680`, copies several record fields into child objects, and updates
child flags. It also conditionally allocates five `0x20`-byte objects and
initializes them through `FUN_587B7350`; four observed calls pass zero, and the
last can pass a table value when its count/pointer gate succeeds. These are
observed allocations, pointer writes, and loops; the child control identities
and rendering effects are not established. All 22 direct calls target
functions already verified byte-identical in the same mapped image.

The focused verifier checks the committed Ghidra body-range manifest, full
Capstone instruction coverage, every direct-call site and verified target, the
matched caller's eight-entry loop and pointer store, and the RTTI-backed vtable
and known virtual method. Reproduce the checks with:

```powershell
rtk python tools\verify_current_main_chcb_landing_tank_constructor.py
rtk python tools\verify_client_matches.py --config config\NF2_2026\client-verifications.json --only 58782810
```

## Uncertainties

The sprite/data-table schemas, child object roles, receiver field types, flag
meanings, coordinate units, and rendered appearance remain unresolved. The
constructor and its direct boundaries are byte-verified, but no emulator or
live-client visual test was performed.
