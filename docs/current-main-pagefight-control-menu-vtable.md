# `CPageFightOn_ControlMenuScreen` vtable coverage

The RTTI-backed class table at `0x5899D180` is named
`.?AVCPageFightOn_ControlMenuScreen@@` through locator `0x589A7CE8` and
TypeDescriptor `0x589CC260`. Matched constructor `FUN_588011C0` installs this
table at `0x58801230`; matched code calls that constructor at `0x5878C650`.

All seven entries now have byte-identical matches:

| Slot | Function | Bytes | Evidence-backed role |
|---:|---:|---:|---|
| `+0x00` | `FUN_58804460` | 30 | Deleting-destructor wrapper; Ghidra's split 27-byte extent omitted reachable stack cleanup. |
| `+0x04` | `FUN_587EF330` | 1,495 | Fight screen and fog-grid setup. |
| `+0x08` | `FUN_587EF910` | 1,068 | Previously matched virtual method. |
| `+0x0C` | `FUN_587FD890` | 6,314 | Previously matched virtual method. |
| `+0x10` | `FUN_587FF340` | 160 | State-gated linked-child event dispatch. |
| `+0x14` | `FUN_587E80B0` | 419 | Gated child updates and coordinate/callback handling. |
| `+0x18` | `FUN_587E6010` | 444 | Event-code handling and child/resource updates. |

The constructor, RTTI locator/name, all seven slot pointers, deleting-wrapper
cleanup, direct fog-constructor edge, method returns, and byte boundaries are
checked by `tools/verify_current_pagefight_control_method.py`. Each newly
matched method is also verified against the complete mapped body by
`tools/verify_client_matches.py`.

The open direct dependencies from this analysis now have independent byte
matches: `FUN_587B63B0` (24 bytes), `FUN_587FF150` (344 bytes), destructor
`FUN_587FFBC0` (1,927 bytes across three ranges), and event helper
`FUN_587FD810` (1,897 bytes across four ranges). `FUN_58734920` was already
matched. `FUN_587FD810`'s 80-byte entry block is ordered first in the source
map even though its other three code ranges precede it in memory.

The destructor's 1,889-byte indexed/Ghidra body ends at `0x5880032B`, but
decoded fallthrough cleanup continues through `ret` at `0x58800351`. Fourteen
INT3 bytes separate that return from the next indexed function at `0x58800360`.
The destructor tail is conditional on the callback at `0x5897CC42` returning:
that thunk jumps through `0x5898C1F8` to a captured address outside `Main.dll`.
The mapped fallthrough and a second call site with the same cleanup pattern
support including the epilogue; the callback's runtime return behavior is
unverified. Transitive helper contracts and the screen's visual/runtime
behavior remain unresolved.
The event codes, child object types, coordinate units, resource-selection
thresholds, and meaning of several state fields remain unresolved. This is
static byte-match coverage; no runtime fight-screen test has been performed.

The matched slot `+0x0C` update method also calls the 857-byte out-of-field
ring-out monitor `FUN_587EA6C0` at `0x587FEE19`. Its exact body and observed
message/state behavior are recorded in the
[ring-out monitor notes](current-main-pagefight-ringout-monitor.md).
The same update sequence calls the 815-byte position-and-bounds helper
`FUN_587E8260` at `0x587FEE0D`; its observed map-window adjustments are
documented in the [position helper notes](current-main-pagefight-position-bounds.md).
