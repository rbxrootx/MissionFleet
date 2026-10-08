# PageFight map-window position and bounds helper

`FUN_587E8260` is called by matched `FUN_587FD890` at `0x587FEE0D`. The caller
is slot `+0x0C` of the RTTI-backed `CPageFightOn_ControlMenuScreen` vtable at
`0x5899D180` and loads ECX from ESI immediately before the call. Both fresh
Ghidra edge exports record this as the helper's only incoming direct-call site.

Both fresh body exports agree on one complete range:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `0x587E8260..0x587E858F` | 815 | 212 |

The original body contains no call instructions. ObjDiff 3.8.0 verifies the
mapped source candidate at 100%; the tracked range and edge projections are
compared with both fresh Ghidra exports by the focused verifier.

## Behavior visible in the original code

The helper runs its main path when the receiver's mode at `+0x105A2` is not 7
or bit 1 in its word at `+0x24` is set; it skips that path only when the mode
is 7 and the bit is clear. The path checks receiver state at `+0x10534`, a
global object field, and the global position at `+4/+8`.
When those values reach the map-window limits, it writes a value of 20 to
receiver `+0x398`, updates four direction bits in `+0x3A8`, and adjusts the
stored position at `+0x1052C/+0x10530` by the speed at `+0x104CC`. The helper
clamps those adjustments using map dimensions and current bounds through the
object at `+0x10524`.

When receiver `+0x3A0` is zero, it copies two values from the map object into
`+0x10464/+0x10468`. If the optional object pointer at `+0x10558` is present
and its coordinates remain within the checked interior, the helper adjusts the
stored position by that object's coordinate delta and saves the latest values
at `+0x10BB8/+0x10BBC`.

These operations are consistent with map-window positioning and edge
constraints, but the object types, coordinate units, direction-bit names,
mode/flag meanings, and global gate are not identified. No live PageFight
screen or emulator movement test was performed.

Run the focused checks with:

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-pagefight-position-bounds-body-ranges.tsv
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 587E8260
rtk python tools/verify_current_main_pagefight_position_bounds.py
```
