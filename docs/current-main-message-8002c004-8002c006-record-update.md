# Main message `0x8002C004` / `0x8002C006` record update

The installed `Main.dll` record-transfer path adds 15 exact instruction-stream
matches / 2,634 bytes at objdiff 3.8.0 byte-identical. The functions occupy 17
fresh Ghidra body ranges in
[`main-message-8002c004-8002c006-record-update-body-ranges.tsv`](../config/NF2_2026/main-message-8002c004-8002c006-record-update-body-ranges.tsv).

## Original-code evidence

Fresh Ghidra decompilation of byte-matched `FUN_587BB700` routes message
`0x8002C004` to `FUN_588869A0` at `0x587C14B4`, `0x587C14CD`, and
`0x587C14DE`. Message `0x8002C006` routes to `FUN_58886AE0` at `0x587C150B`
and `0x587C1527`. The dispatcher passes the receiver loaded from global
`0x58A245E4`; its state fields select an incoming row count and pointer or the
zero-row reset path.

Both handlers work with receiver-owned ranges of `0x22`-byte rows. The
`0x8002C004` path appends rows from the other buffer and supplied payload; the
`0x8002C006` path appends supplied rows and reconciles the two buffers when
their counts differ. Their shared helpers validate row bounds, append or shift
rows, grow storage when capacity is exhausted, and reset the observed control
state. `FUN_5887BEE0` writes the localized keys
`TEXTSTRING_TRANSFERINGDATAFROMSERVER` and `TEXTSTRING_TRANSFERINGCOMPLETE`
while updating child values and a state bit.

The exact direct-call closure contains 15 functions / 2,634 bytes, including
the three-range, 655-byte `FUN_588823D0` insertion routine. The focused
validator checks all 17 instruction-complete ranges against the mapped image,
requires every direct transfer to reach a function in this closure or an
already byte-matched function, and verifies all five calls from the matched
dispatcher. All 15 sources pass objdiff at 100.0%; 40 outgoing direct calls
resolve to matched code.

## Limits

The record schema, meanings of the two buffers and packet state values, owning
class of global `0x58A245E4`, and visible result remain unresolved. Other
callers of shared row helpers are outside this slice. This is static analysis
of the installed client; no emulator launch or UI runtime test was performed.

Re-run the focused audit with:

```powershell
rtk python tools/verify_current_main_message_8002c004_8002c006_record_update.py
```
