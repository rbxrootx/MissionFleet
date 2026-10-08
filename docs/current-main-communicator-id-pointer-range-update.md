# Current Main communicator ID panel pointer-range update helper

`FUN_5884A820` is called twice by the byte-matched `CPannelCommunicatorIDPannel`
input method `FUN_5884AB90`, at `0x5884B0CD` and `0x5884B0F3`. The input method
is the RTTI-backed panel vtable's slot `+0x10`; its original code passes the
same receiver in ECX, with EBP at the first call and the value loaded from
`[EDI+0xA4]` at the second. The panel and input method are described in the
[constructor notes](current-main-communicator-id-panel-58849b70.md) and
[input-method notes](current-main-communicator-id-input-5884ab90.md).

Both fresh Ghidra projects agree on the complete 871-byte, 307-instruction
body and the same 48 selected incoming/outgoing edge rows per project. It makes
44 direct calls: 34 to `FUN_5897CC72`, four to `FUN_588205F0`, two each to
`FUN_5897CC54` and `FUN_588F6890`, and one each to `FUN_58849980` and
`FUN_587A54D0`. All six direct callees are already byte-matched. The mapped
function has no indirect calls or indirect jumps.

The helper checks the pointer range referenced through receiver `+0x8C`,
`+0x98`, and `+0x9C`, scans entries, and compares the supplied value against
the entries and a value observed at entry `+0x60`. One path calls
`FUN_588205F0(0)`, passes a local output pair and iterator values to
`FUN_58849980`, passes the supplied value's address to `FUN_587A54D0`, and
later calls `FUN_588205F0(1)`. Another path shifts pointer entries through
`FUN_5897CC54`, subtracts four from the observed end pointer, and calls
`FUN_588F6890` when the capacity test requires growth. Repeated range checks
call `FUN_5897CC72`. These are instruction-level observations; the exact
container layout and higher-level operation are not established.

Ghidra also records two calls to this helper outside the matched input method:
`FUN_58820EA0` at `0x58820EBB` and `FUN_58820F70` at `0x58820FA1`. Those callers
are not byte-matched and their behavior remains outside this slice. The helper
source matches the installed mapped `Main.dll` at 100% under ObjDiff 3.8.0,
with all 54 relocation targets checked. The tracked body and edge projections
are under `config/NF2_2026`; the focused verifier compares both Ghidra exports
against the mapped instructions and checks all four incoming call sites. No
emulator runtime or visual test was performed. The entry type, field meanings,
`FUN_588205F0` argument contract, and user-visible effect remain unknown.

Run the focused checks with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-communicator-id-pointer-range-update-body-ranges.tsv
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 5884A820
rtk python tools/verify_current_main_communicator_id_pointer_range_update.py
```
