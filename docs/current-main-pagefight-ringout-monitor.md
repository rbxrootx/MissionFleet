# PageFight out-of-field ring-out monitor

`FUN_587EA6C0` is called by matched `FUN_587FD890` at `0x587FEE19`. That
caller is slot `+0x0C` of the RTTI-backed `CPageFightOn_ControlMenuScreen`
vtable at `0x5899D180`. The original call reloads ECX from ESI immediately
before transferring control. Ghidra's reference query and both fresh edge
exports report this as the only incoming direct call to the helper.

Both fresh body exports agree on one complete range:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `0x587EA6C0..0x587EAA19` | 857 | 215 |

The body has 11 direct call sites, targeting seven already byte-matched
functions. It also calls through message and object callbacks. ObjDiff 3.8.0
verifies the mapped candidate at 100%; the tracked body/edge projections and
focused verifier compare both Ghidra exports to the mapped instructions.

## Behavior visible in the original code

The helper returns unless the global current-player pointer is present,
`FUN_588D66E0()` returns `0x40000000`, and receiver flags at `+0x10474` pass
the `0xF00` mask. It checks the boundary every 25 updates using receiver
counter `+0x104F4`. A mode value at `+0x105F0` selects one of two margin sets;
coordinates at `+4` and `+8` on the current-player record are compared with
dimension products reached through receiver `+0x10524`.

For an out-of-field result, counts below 16 format
`MESSAGESTRING__XX_WILL_RINGOUT` with a countdown of `15 - count`. Another
branch formats `MESSAGESTRING__XX_HAS_BEEN_OUT_FROM_FIELD` when the observed
player field at `+0x100C` is nonzero. The helper then sets bit `0x20000000` in
receiver `+0x10474`, writes `1` to `+0x10478`, and calls matched
`FUN_587B9760` with player and receiver values. It calls matched
`FUN_587315F0` with the selected state, increments `+0x104EC`, and clears
`+0x104F0`. On an in-field result it decreases `+0x104EC` when positive, sets
`+0x104F0` to `1`, and calls `FUN_587315F0(0)`. A mode-7 branch also updates
additional fields and globals.

The message keys support describing this path as an out-of-field warning and
ring-out state update. The exact object and coordinate types, margin units,
mode meanings, counter semantics, callback behavior, and gameplay outcome are
not established by static code alone. No live battle or emulator behavior was
tested.

Run the focused checks with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-pagefight-ringout-monitor-body-ranges.tsv
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 587EA6C0
rtk python tools/verify_current_main_pagefight_ringout_monitor.py
```
