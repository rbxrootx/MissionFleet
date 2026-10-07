# Force-record population and refresh closure

The matched `FUN_587BB700` message dispatcher calls `FUN_588B8980` at
`0x587BDE7D` in its `0x80020D03` event case. Fresh Ghidra output shows the root
replacing two child arrays from the incoming record data. For the first list,
it reads the count from the input header, allocates a pointer array, constructs
each entry through the already-matched `CForce` constructor `FUN_5877CC30`, and
advances the input record by `0x180` bytes. The constructor copies `0x60`
dwords, also `0x180` bytes, from its input into the new object. This links the
observed repeated record extent to the matched constructor copy without
assigning meanings to the copied fields.

After constructing the second list through `FUN_588E9F60`, the root calls
`FUN_588B81F0`. That helper formats text from the first child list, performs
lookups using observed fields, scans a global object chain for matching values,
and calls `FUN_588B6050`. The final helper uses global index bounds to update
eight child entries from the selected records and toggles an observed child
flag. The values, record schemas, callback contracts, and displayed meaning
remain unknown.

The direct-call closure has three functions and 1,816 bytes in six fresh Ghidra
ranges. It has no unresolved internal targets; its direct caller is already
byte-matched, and its other direct callees are independently verified. The
committed range and transfer manifests are
`config/NF2_2026/current-main-force-record-refresh-closure-body-ranges.tsv`
and `config/NF2_2026/current-main-force-record-refresh-transfers.tsv`.

All three functions pass the pinned compiler and objdiff 3.8.0 at 100%. The
focused verifier checks every instruction in the six ranges, internal transfer
sites, and both the matched event-dispatcher and constructor calls:

```powershell
rtk python tools/verify_current_main_force_record_refresh.py
```

This is a static code match. The event's gameplay meaning and its runtime UI
effect have not been tested in the emulator.
