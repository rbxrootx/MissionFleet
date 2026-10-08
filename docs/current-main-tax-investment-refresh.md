# Tax and investment control refresh

The installed `Main.dll` refresh routine at `0x5882FC60` and its open direct-call
helpers form a 19-function, 1,196-byte closure. All 19 recompile to exact mapped
bytes under objdiff 3.8.0. The recorded Ghidra ranges cover 371 instructions;
the focused verifier checks those ranges and all 76 direct-call references.

Fresh Ghidra output shows `FUN_5882FC60` deriving an indexed entry from
`FUN_58786480` and table bounds/pointer fields at global `DAT_58A246B4`. It
copies six entry values into child objects reached through receiver offsets
`+0x70` and `+0x74`, then updates more values through helper functions. Under
observed input gates it formats `MESSAGESTRING__TAXUP_REQUIREDPRODUCTIVITY`;
it also formats `MESSAGESTRING__DAILY_INVESTMENT_LIMIT` twice using getter
results and the argument `1,000,000`. The helpers expose the exact nested DWORD,
pointer, and 16-bit offsets recorded in the per-function verification evidence.

The byte-verified `FUN_588C4210` message handler reaches this updater at
`0x588C4DB0` in case `0x8002311B` and at `0x588C4EC4` in case `0x8002312B`.
Fresh Ghidra references also show 18 calls from four other functions:
`FUN_5882F270`, `FUN_5882F350`, `FUN_58830010`, and `FUN_58830280`. The paired
update-event handlers `FUN_58830010` and `FUN_58830280` are byte-matched; the
HarborInfoTab closure now byte-matches `FUN_5882F270` and `FUN_5882F350` as
well. Their display-update behavior is checked in
[`current-main-communicator-config-harbor-info-tab-event-closure.md`](current-main-communicator-config-harbor-info-tab-event-closure.md).
All four incoming callers are now byte-verified. The paired update-event
handlers' dispatcher cases and observed field updates are documented in
[`current-main-tax-investment-update-events.md`](current-main-tax-investment-update-events.md).
The closure's 33 outbound direct calls resolve to functions that are already
byte-verified.

The source files preserve the pinned instruction streams as compiler-emitted
x86 bytes. Ghidra decompilation and the transfer manifest provide behavioral
evidence for this slice; this does not claim that its C++ types, receiver class,
control labels, table schema, or localization arguments have been recovered.
The visible runtime result has not been tested in the emulator.
