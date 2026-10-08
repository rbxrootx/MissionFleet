# Current Main ship-map constructor helper slice

This subsystem byte-matches 13 routines called directly by the already matched
`CShip_MapObjectScreen` constructor at `0x588E05C0`. It covers several child
constructors and record-derived screen setup paths; it is a slice of that
constructor's direct callees, not its complete construction path. The existing
[constructor evidence](current-main-ship-map-screen-constructor.md) identifies
the caller through its vtable reference and records the unresolved receiver and
field layout.

Fresh Ghidra body and call-edge exports `58758EE0` and `587CEF70` agree on every
selected body and all 59 selected edge rows per project. The bodies total 4,281
bytes and 1,150 instructions. Their 41 direct calls target functions already
byte-matched in the current client inventory. The mapped instructions include
no indirect calls. `FUN_588DDBF0` has a switch-table jump at `0x588DDC10`; the
six table destinations at `0x588DDCC8` match the decompiled default and cases
1 through 5. The one-instruction `FUN_5897D180` is a separate indirect tail
jump through `0x5898C304`, whose runtime target and contract remain unknown.

| Function | Body bytes | Instructions | Evidence from the original body |
| --- | ---: | ---: | --- |
| `FUN_58749800` | 255 | 66 | Installs `CAutoRouting::vftable`, initializes observed fields, and clears a 0x30-byte region. |
| `FUN_58756750` | 579 | 165 | Installs `CClickDestinationLine::vftable`, creates 32 `CSpriteDataScreen` children, and uses an observed 0x90-byte allocation gate before initializing another object. |
| `FUN_5877E440` | 140 | 45 | Installs `CFrameRounding::vftable` and initializes fields using an observed child value. |
| `FUN_5877FC60` | 441 | 136 | Installs `CHCB_Airborne::vftable` and creates four `CSpriteBundleScreen` children. |
| `FUN_588C08A0` | 10 | 3 | Stores its second argument at receiver `+0x78`. |
| `FUN_588D8230` | 667 | 184 | Reads packed values from the record at receiver `+0x100C` and writes derived values into screen storage. |
| `FUN_588D9D60` | 171 | 55 | Selects a bounds-checked global-table entry and stores the `FUN_587B7350` result at `+0x604C`. |
| `FUN_588DA5F0` | 758 | 146 | Initializes observed screen fields and clears three storage regions. |
| `FUN_588DA8F0` | 238 | 61 | Derives byte flags by checking four pointer slots in each of eight groups. |
| `FUN_588DAD30` | 720 | 217 | Builds one square byte grid and 36 transformed grids from record-derived dimensions. |
| `FUN_588DDBF0` | 214 | 47 | Selects observed `[MD]`, `[GM]`, or `[DV]` text and a color by argument value. |
| `FUN_588E6570` | 82 | 24 | Returns 1 for one of eight observed numeric values and 0 otherwise. |
| `FUN_5897D180` | 6 | 1 | Transfers control through the global pointer at `0x5898C304`. |

The constructor calls these functions at `0x588E07CF`, `0x588E0954`,
`0x588E0959`, `0x588E09A0`, `0x588E0A3D`, `0x588E0B20`, `0x588E0BC2`,
`0x588E0BDA`, `0x588E121B`, `0x588E1233`, `0x588E18B1`, `0x588E18F1`,
`0x588E3364`, `0x588E3533`, `0x588E356E`, and `0x588E3A19`. The setter
`FUN_588C08A0` also has calls from `FUN_5877A060` and `FUN_5877A650`; those
callers are not byte-matched and their behavior is outside this slice.

All 13 emitted instruction streams match the installed mapped `Main.dll` at
100% under ObjDiff 3.8.0; 77 relocations were checked across the functions with
relocations. The tracked range manifest and both fresh Ghidra body/edge
projections are under `config/NF2_2026`. The focused verifier checks those
exports against the mapped instruction stream, direct-call closure, constructor
call sites, byte-match inventory, switch destinations, and the unresolved tail
jump. No emulator runtime or visual test was performed, and the record schema,
field meanings, child roles, flag meanings, and UI effects remain uncertain.

Run the focused checks with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-ship-map-constructor-helper-body-ranges.tsv
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58749800 --only 58756750 --only 5877E440 --only 5877FC60 --only 588C08A0 --only 588D8230 --only 588D9D60 --only 588DA5F0 --only 588DA8F0 --only 588DAD30 --only 588DDBF0 --only 588E6570 --only 5897D180
rtk python tools/verify_current_main_ship_map_constructor_helpers.py
```
