# Main.dll `0x80023102` request-display path

This closure is anchored in the byte-matched `FUN_588C4210` message dispatcher.
Fresh Ghidra output shows its `0x80023102` case calling byte-matched
`FUN_5881DC30` at `0x588C42A6`. The mapped call setup loads the count from the
event record, places `0x58A245B4` in ECX, and passes the payload pointer and
count. `FUN_5881DC30` copies the fixed `0x594`-byte header to receiver `+0xD2C`,
replaces the prior allocation at `+0x12C4` with `count * 0x1C` bytes, copies the
trailing records, and calls `FUN_58842980` at `0x5881DCCA` with the object at
receiver `+0xDC` in ECX. These callsites and setup instructions were rechecked
against both matched caller bodies.

`FUN_58842980` reads the 5-bit state in the child words at `+0x24` of the
objects referenced from its receiver `+0x160` and `+0x16C`. State 1 or 2 on
the first child selects `FUN_5874DDD0`. Otherwise state 1 or 2 on the second
child enters `FUN_58824610`, which refreshes three request/display groups in
order through `FUN_58827610`, `FUN_588285B0`, and `FUN_588272D0`.

The refresh code exposes localized string keys including
`DISPSCREEN_CMMDIP_AS_NUMOF_TOTALREQUEST`,
`DISPSCREEN_CMMDIP_AS_NUMOF_ATTACKREQUEST`,
`DISPSCREEN_CMMDIP_AS_NUMOF_DEFENSEREQUEST`,
`DISPSCREEN_CMMDIP_AS_CONTENT_ATTACKREQUEST`,
`DISPSCREEN_CMMDIP_AS_CONTENT_DEFENSEREQUEST`,
`DISPSCREEN_CMMDIP_IR_ATTACKSUPPORT`,
`DISPSCREEN_CMMDIP_IR_DEFENSE`, and
`DISPSCREEN_CMMDIP_IR_DEFENSESUPPORT`. `FUN_588272D0` counts values 1 and 2 in
three global slots, formats total/attack/defense labels, rebuilds the
per-request string list, and calls `FUN_58826F60` to update two status
controls. `FUN_58827610` filters the 0x1C-byte records, formats defense and
support labels, and rebuilds associated string-pointer arrays. `FUN_588285B0`
populates repeated rows from request-related global arrays, using
`FUN_587537E0` to find matching 0x48-byte table rows and `FUN_58755FF0` to
obtain associated display data. The lookup helper returns row DWORD `+8` when
the first two DWORDs match its keys, or zero when no row matches.

The exact direct-call closure contains seven functions / 4,093 bytes across 12
Ghidra ranges. Every member is reachable from `FUN_58842980`; the focused
verifier checks complete mapped instruction coverage, all 28 transfers to
already byte-verified functions, no unmatched direct transfer, the internal
helper sites, and the matched `0x80023102` dispatcher-to-refresh chain.

| Function | Bytes | Exact body ranges |
| --- | ---: | --- |
| `587537E0` | 198 | `587537E0..587538A6` |
| `58824610` | 23 | `58824610..58824627` |
| `58826F60` | 221 | `58826F60..5882703D` |
| `588272D0` | 821 | `588272D0..58827605` |
| `58827610` | 1,398 | `58827610..5882773A`; `58827740..58827B8C` |
| `588285B0` | 1,321 | `588285B0..588286A7`; `588286B0..58828739`; `58828740..58828969`; `58828970..58828A7A`; `58828A80..58828AF6` |
| `58842980` | 111 | `58842980..588429EF` |

The Ghidra ranges are preserved in
`config/NF2_2026/main-dispscreen-80023102-body-ranges.tsv`. This byte-exact
instruction-stream slice does not establish the server response schema, exact
screen/control types, localization text, row ownership rules, or user-visible
runtime result. No emulator or visual test has been run.
