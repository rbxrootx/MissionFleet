# Current Main shell-map nearby-effect processing

The open routine at `0x588D3390` is called by byte-matched
`FUN_588D4300` at `0x588D45EF`. The caller's mapped vtable and RTTI identify
it as a method of `CShell_MapObjectScreen`; see the
[`shell-map update notes`](current-main-shell-map-object-update.md). Four other
byte-matched functions call helpers in this closure: `FUN_587EFD60` calls
`FUN_588DC990`, `FUN_5873F020` and `FUN_588DE620` call `FUN_588DCD80`, and
`FUN_587F2DD0` calls `FUN_588E6650`. The focused verifier checks all five
incoming mapped call instructions.

## Behavior observed in the mapped code

Fresh Ghidra 12.1.3 output gives `FUN_588D3390` two exact body ranges:
`0x588D3390..0x588D344B` (188 bytes) and
`0x588D3450..0x588D382F` (992 bytes). It starts when receiver `+0x1DC` is
nonzero, then walks linked records rooted at `[0x58A247F8]+0x0C`, following
each record's `+0x78` link. For each record passing a matched helper check, it
iterates eight child-list entries beginning at `+0x1390`. It applies an
observed scaled-field comparison, coordinate-delta and squared-distance
bounds, then calls a record's virtual slot `+0x1C` as a final predicate.

When the predicate succeeds, the routine checks a global flag and a non-null
record pointer before comparing the bytes at `+0x354` in two pointed-to
records. Unequal values enter the update path: it calls matched update helpers,
updates a field at `+0x128C` in the selected record, and calls `FUN_588DC990`
under observed global-state gates. When the selected record equals the global
local-record pointer, it accumulates a count and value. If a second global gate
is set, it formats the literal keys `MESSAGESTRING__BATTLE_MESSAGE_16` and
`MESSAGESTRING__BATTLE_MESSAGE_1` and passes the resulting text through the
matched text updater.

`FUN_588DC990` visits 32 indexed entries. The decompilation shows a
random-table test over packed values at `+0x47C`, updates byte counters at
`+0xA28` with a cap read from `0x589C3E94`, and synchronizes packed fields
through `FUN_588E6650` and `FUN_588DC830`. `FUN_588E6650` increments one
indexed byte at `+0xA28` and applies the same cap. `FUN_588DC830` adjusts two
10-bit fields in packed values at `+0x47C` and `+0x87C`, and sets observed
global flags when its record pointer equals the global local-record pointer.
`FUN_588DCD80` adds its argument to receiver `+0x12A4` for a fixed set of
observed global state values.

The closure contains five functions and 2,131 bytes across six exact Ghidra
ranges. All five are reachable from `FUN_588D3390`; its four in-closure calls
and 11 transfers to byte-matched functions are verified against the mapped
image. Exact ranges are recorded in
[`main-shell-map-nearby-effect-processing-body-ranges.tsv`](../config/NF2_2026/main-shell-map-nearby-effect-processing-body-ranges.tsv).
ObjDiff 3.8.0 reports all five emitted instruction streams byte-identical at
100.0%. The focused check is
[`verify_current_main_shell_map_nearby_effect_processing.py`](../tools/verify_current_main_shell_map_nearby_effect_processing.py).

These observations establish record traversal, comparison, field-update, and
message-formatting behavior. The record and child-list types, coordinate and
scaled-field units, packed-field meanings, random-table purpose, meanings of
the state values, effect identity, message semantics, and server-authoritative
outcome remain unresolved. This is static mapped-code evidence; no original
client or emulator test was performed.
