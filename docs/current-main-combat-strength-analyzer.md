# Installed Main.dll combat-strength analyzer closure

This subsystem adds six byte-identical functions from the installed FleetMission
`Main.dll`: 3,582 bytes across ten discontiguous Ghidra body ranges. Fresh
Ghidra 12.1.3 headless output on the pinned mapped image supplied the function
bodies and references. The byte candidates were built with the repository's
pinned MSVC 6.0 SP5 toolchain and verified at 100% by ObjDiff 3.8.0.

The call closure rooted at `FUN_58758EE0` contains:

| Function | Ghidra body ranges | Bytes | Observed role |
| --- | --- | ---: | --- |
| `FUN_58758EE0` | `58758EE0–58758F6A`, `58758F70–5875909D` | 439 | Ghidra labels its vtable `CCombatStrengthAnalyzer`; constructs `CShipData`, expands fields at `+0x268` and `+0x26C` into two 32-entry bit arrays, and calls the processing loop. |
| `FUN_58758870` | `58758870–58758957`, `58758960–58758ED9` | 1,632 | Walks 32 receiver-associated entries. Observed record-type bytes `0x05` and `0x06` select separate copying, calculations, object construction, and state updates. |
| `FUN_587B4060` | `587B4060–587B40E2` | 130 | Ghidra labels its vtable `CMountedWeapon_TpLauncher`; calls a base initializer, sets fields, and clears buffers. |
| `FUN_588E9E10` | `588E9E10–588E9F56` | 326 | Ghidra labels its vtable `CShipData`; initializes fields and calls `FUN_588E9C70`. |
| `FUN_588E9C70` | `588E9C70–588E9CF7`, `588E9D00–588E9E0E` | 405 | Copies an object prefix, initializes 32 rows with `0xAA`-derived patterns, copies selected rows, resets fields, and gates a helper call on `DAT_58A2485E`. |
| `FUN_588E92B0` | `588E92B0–588E943D`, `588E9440–588E953D` | 650 | Processes up to 32 present entries, transforms three packed 10-bit values using supplied parameters and a global scale, calls `FUN_588E7C10`, and repacks values. |

The root directly calls `FUN_588E9E10` and `FUN_58758870`; those lead to the
remaining four functions. The verifier confirms all six are reachable, all
24 transfers from this closure to already verified functions are accounted for,
and each instruction is fully decoded across the fresh Ghidra body ranges.

Five incoming sites were checked against the mapped executable:

| Source | Site → target | Evidence |
| --- | --- | --- |
| `FUN_587BB700` (byte-matched) | `587BFF8E`, `587C00FE` → `FUN_58758EE0` | Ghidra identifies an event dispatcher and records the `0x80000100` route; the dispatch-table owner and runtime entry are not established. |
| `FUN_588D84D0` (byte-matched) | `588D8AF0` → `FUN_587B4060` | Ship-map state initializer, called from the matched `CShip_MapObjectScreen` constructor. |
| `FUN_588E05C0` (byte-matched) | `588E0653` → `FUN_588E9E10` | Ghidra and matched constructor context identify `CShip_MapObjectScreen`. |
| `FUN_587B58F0` (open) | `587B5912` → `FUN_587B4060` | Caller function is not yet byte-matched. |

The exact record layouts, the meanings and units of fields, the meaning of
record types `0x05` and `0x06`, the scale constant and formulas, and the
resulting visible behavior remain uncertain. Ghidra's class labels are analysis
evidence, not runtime confirmation. This is a static byte-match subsystem; no
client launch, server interaction, or visual test was performed, and it does
not yet make the client bootable.

The checked-in range and caller manifests are
[`main-combat-strength-analyzer-body-ranges.tsv`](../config/NF2_2026/main-combat-strength-analyzer-body-ranges.tsv)
and
[`main-combat-strength-analyzer-callers.tsv`](../config/NF2_2026/main-combat-strength-analyzer-callers.tsv).
Run `python tools/verify_current_main_combat_strength_analyzer.py` to validate
the pinned image hash, exact ranges, closure, caller sites, and verified call
boundaries.
