# Main.dll state-9 selected-record application

The installed FleetMission `Main.dll` now has a byte-identical reconstruction
of the 20-function direct-call closure rooted at `FUN_587780D0`: 7,633 mapped
bytes across 28 exact Ghidra body ranges. The root is reached from an existing
byte-matched state-9 updater after it finds a matching row key. All 20 bodies
passed ObjDiff 3.8.0 against the installed capture. This is an instruction
stream match, not recovered original C++ source or an emulator runtime test.

## Matched table-scan caller

Byte-matched `FUN_587F8760` compares its state word with 9 at `0x587F8D55` and
branches away at `0x587F8D59` when it differs. It first calls the already
matched `FUN_58788880` at `0x587F8D6C`. Then it loads the key at `0x58A0ADD0`,
scans from `0x589BAAB0` in `0xE84`-byte steps, and compares each row's leading
word with that key. The exclusive end `0x589C2D54` is nine strides after the
start. On equality, it forms a row pointer as
`0x589BB838 + index * 0xE84`, pushes that pointer, loads ECX from
`[EBP+0x21C48]`, and calls `FUN_587780D0` at `0x587F8DB7`.

The exact call, state gate, scan stride and bound, row-pointer calculation,
and receiver/argument setup are checked by
[`verify_current_main_state9_record_bind.py`](../tools/verify_current_main_state9_record_bind.py).
The table's semantic identity and the meaning of the key remain unknown.

## Observed record and child updates

Fresh Ghidra decompilation shows `FUN_587780D0` stores the selected row pointer
at receiver `+0x98`, calls `FUN_587AF8F0` with that pointer, and calls
`FUN_58777F30` with `1,000,000`. It then copies DWORDs from row offsets
`+0x80`, `+0x84`, `+0x88`, and `+0x8C` to receiver offsets `+0x9C`, `+0xA4`,
`+0xA0`, and `+0xA8` respectively.

`FUN_58777F30` stores its input at receiver `+0xB8` and looks it up through
`FUN_587AEE40`. When the lookup succeeds, it uses the record's count at `+0x68`
to build child entries: it retrieves a per-index value through
`FUN_58777810`, allocates 0x28 bytes, and invokes `FUN_58735650`. That
constructor sets the observed `CAIFleet::vftable` pointer. The caller appends
the child pointers using fields at `+0x64..+0x6C`, copies lookup-record fields
`+0xD8`, `+0x124`, and `+0x128` to receiver `+0x88`, `+0x8C`, and `+0x90`,
invokes `FUN_58777710(0x80)`, and clears `+0x94`. If lookup-record field
`+0x134` is nonzero, it also calls `FUN_587A8E00` and `FUN_587AB4D0`.

`FUN_587A8E00` copies fields from its input record and asserts on a null event
root using the literal `m_EventRoot && "InitManager"` in
`.\\MissionEventManager.cpp` at line `0x23`. This ties part of the shared
closure to the mission-event manager, while leaving the selected-row path's
user-visible role unproven.

## Shared callers and closure evidence

The open direct-call audit found six incoming external call sites from four
functions. The matched entry sites are `FUN_587F8760@0x587F8DB7` to the root,
`FUN_587F8760@0x587F9274` to child builder `FUN_58777F30`, and
`FUN_587A90D0@0x587A981E` to shared helper `FUN_587A85E0`. The other inbound
sites are from still-open functions. From within the selected closure, 111
direct calls cross to already verified functions; there are no unresolved
internal targets and no Ghidra body-coverage issues.

The 20 exact members are `FUN_58735650`, `FUN_58735840`, `FUN_587358C0`,
`FUN_58735950`, `FUN_58736110`, `FUN_587374B0`, `FUN_587429B0`,
`FUN_58777420`, `FUN_58777710`, `FUN_58777810`, `FUN_58777F30`,
`FUN_587780D0`, `FUN_5878A0E0`, `FUN_587A85E0`, `FUN_587A8E00`,
`FUN_587AB4D0`, `FUN_587AF500`, `FUN_587AF8F0`, `FUN_587B2140`, and
`FUN_588DCD00`. The frozen ranges are in
[`main-state9-record-bind-body-ranges.tsv`](../config/NF2_2026/main-state9-record-bind-body-ranges.tsv).

The focused verifier checks all 28 exact ranges against the installed image,
the complete direct-call closure, its 111 verified call boundaries, the
state-9 match condition, and shared matched caller sites. ObjDiff checked 240
encoded operand targets across the 20 functions.

## Remaining uncertainties

The table and lookup-record schemas, key meaning, copied field meanings,
receiver and vector types, child-object purpose, and visible game effect remain
unresolved. Some closure members have independent paths into the
mission-event manager, so their behavior is not exclusive to this state-9
branch. No live-client or emulator runtime test was run.
