# PageFight control-layout helper

`FUN_58875830` records a small control-layout state transition used by the
PageFight control screen. Its body has two ranges, and the two fresh Ghidra
exports agree on both boundaries and all observed direct calls:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `[0x58875830,0x58875859)` | 41 | 13 |
| `[0x58875860,0x58875AB6)` | 598 | 160 |
| **Total** | **639** | **173** |

Matched `FUN_587FD890` calls it at `0x587FE0D8` from vtable slot `+0x0C` of
the RTTI-backed `CPageFightOn_ControlMenuScreen` class. The call passes mode 1
only when receiver field `+0x218E8` is zero and mode field `+0x105A2` is not 7;
the caller then sets `+0x218E8` to 1. Ghidra records ten additional calls from
four functions that are not yet byte-matched: `FUN_58876710` calls modes 0 and
2, `FUN_58876790` calls mode 0, `FUN_58876820` calls mode 0 at four sites, and
`FUN_58876AB0` calls modes 0 and 3. These call sites show the modes are used
during state changes, but do not identify the controls' visible labels.

The helper stores its signed-short mode at receiver `+0xCC`, clears `+0xCE`,
and clears bit 0 in the pointees referenced from `+0xAC`, `+0xB0`, `+0xB4`,
`+0xB8`, `+0xBC`, and `+0xC0`. Mode 1 sets that bit on `+0xAC` and `+0xB0`.
Mode 2 sets it on `+0xB4` and `+0xB8`; on the first transition only, it also
changes pointees at `+0x54`, `+0x58`, `+0x6C`, and `+0x70`, then records the
one-time state at `+0xC8`. Mode 3 clears the bit on `+0x6C` and `+0x70`, and
sets it on `+0x84`, `+0x88`, `+0xBC`, and `+0xC0`. Mode 0 clears the bit on
`+0x6C`, `+0x70`, `+0x84`, and `+0x88`. Other modes perform the initial reset
and return.

The 20 direct calls go only to `FUN_58902CE0` and `FUN_58902D20`, now confirmed
byte-identical as part of this call closure. Those helpers write supplied
values at offsets `+0x28` and `+0x2C` while walking child lists selected by
flags `0x4000` and `0x8000`. Their call arguments here include `0xFF`,
`0xFFFFFEFF`, and `0x101`.

The pointed-to types, meaning of bit 0, user-facing names for modes 0–3,
purpose of `+0xC8`, and visual meaning of the propagated scalar values are
unresolved. The four other callers remain unmatched. This is static evidence;
no live PageFight or emulator visual test has been run.

ObjDiff 3.8.0 verifies the 639-byte function at 100%, with 22 relocation
checks; each 59-byte direct callee also matches at 100%. The focused verifier
compares both fresh Ghidra body and call-edge exports, the mapped instruction
stream, the mode-1 caller sequence, and the original decompilation evidence.
See the [RTTI-backed PageFight vtable notes](current-main-pagefight-control-menu-vtable.md)
and the [focused verifier](../tools/verify_current_main_pagefight_control_layout.py).

Reproduce the focused checks with:

```powershell
rtk python tools/export_current_main_pagefight_control_layout_evidence.py
rtk python tools/emit_current_main_function_candidates.py --address 58875830 --segment 58875830:41 --segment 58875860:598
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58875830
rtk python tools/verify_current_main_pagefight_control_layout.py
```
