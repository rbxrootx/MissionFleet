# Main.dll FCCHS tutorial-panel lifecycle

The matched `FUN_587E2E80` method belongs to the `CPageFactory_ControlMenuScreen`
vtable at `0x5899B824`, slot `+0x04`. Its mapped instructions load
`0x58A248CC` into ECX and call `FUN_58770530` at `0x587E3006`. Fresh Ghidra
decompilation shows the same method initializing PageFactory state before that
call. `FUN_58770530` is also called from two other Ghidra-recorded methods,
`FUN_58770680` and `FUN_58863D00`; the PageFactory method is not its only caller.

The lifecycle helper checks receiver fields `+0x70` and `+0x74`, then obtains a
status from `FUN_5876F560`. For status bytes 1 through 3, it loads
``.\spr\ITFCCHS.spr`` through `FUN_588F3D70` when receiver `+0x50` is empty,
allocates and creates a `CFCCH_PannelTutorialStart` through `FUN_58771840`
when `+0x54` is empty, routes the status through `FUN_587714C0`, invokes child
vtable slot `+4`, and stores the status at `+0x7A`. If both `+0x70` and `+0x74`
are zero, the observed branch instead calls `FUN_5876EE90` to release the
associated child objects and set `+0x74` to 1.

`FUN_5876F560` first walks the linked structure at `0x58A247F4+4`; an entry
whose referenced object byte at `+0x35C` is nonzero produces the function's
immediate masked return. Otherwise it scans the structure at
`0x58A247F4+0x14`, reads each referenced object's word `+0x5E` and DWORD
`+0xA4`, and returns low-byte status values 1, 2, or 3 under the observed
category-count conditions. The field roles and status meanings are not
identified by this code alone.

The panel constructor installs the Ghidra-labeled
`CFCCH_PannelTutorialStart` vtable after its `CMenuScreen` setup, then creates
repeated `CAutoLineFeedEditScreen` children through `FUN_587494D0` at mapped
positions and color values. Seven such child-construction callsites are inside
the matched 1,646-byte constructor. Two additional children are created
through `FUN_5875DDA0`. The edit-screen constructor calls `FUN_58731700`,
initializes two 0x101-byte buffers and embedded sprite-bundle state, and selects
additional layout values from an observed global language/code switch.

`FUN_587714C0` selects literal message keys by status. The observed identifiers
include `MESSAGESTRING__FCCHS__STARTTITLE_LEVEL1/2/3`,
`MESSAGESTRING__FCCHS__STARTSUBTITLE_LEVEL1`,
`MESSAGESTRING__FCCHS__LEVEL1/2/3`, and `MESSAGESTRING__FCCHS__FIN`; it sends
them through `FUN_58770A80` and clears selected child text buffers in the level
2/3 branches. These keys and branches establish the mapped behavior, while the
expanded text and exact gameplay interpretation remain unknown.

The exact direct-call closure contains six functions / 4,026 bytes across
seven Ghidra ranges. All six are reachable from `FUN_58770530`; the focused
verifier checks complete instruction coverage, all 73 outgoing transfers to
byte-verified functions, no unmatched direct transfer, the internal callsites,
and the matched PageFactory call at `0x587E3006`.

The ranges below use half-open intervals `[start, end)`.

| Function | Bytes | Exact body ranges |
| --- | ---: | --- |
| `587494D0` | 780 | `[587494D0, 587497DC)` |
| `5876EE90` | 213 | `[5876EE90, 5876EF4D)`; `[5876EF53, 5876EF6B)` |
| `5876F560` | 177 | `[5876F560, 5876F611)` |
| `58770530` | 322 | `[58770530, 58770672)` |
| `587714C0` | 888 | `[587714C0, 58771838)` |
| `58771840` | 1,646 | `[58771840, 58771EAE)` |

The exact Ghidra ranges are preserved in
`config/NF2_2026/main-fcchs-tutorial-panel-body-ranges.tsv`. All six emitted
instruction-stream sources match under objdiff 3.8.0 at 100.0%. The FCCHS
acronym, status/category meaning, indirect virtual contracts, localization
text, and actual on-screen result remain unverified. No emulator runtime or
visual test has been run.
