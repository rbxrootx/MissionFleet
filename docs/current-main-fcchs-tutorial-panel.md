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

## RTTI-rooted tutorial progression and message panels

The installed image identifies three adjacent tutorial classes through their
Complete Object Locators, TypeDescriptors, and vtable pointers:

| Class | Vtable | Slots | Open tutorial entries |
| --- | ---: | ---: | --- |
| `CFCCH_MainManager` | `0x58995C20` | 6 | `5876ED60`, `588A3A00`, `5876ED80`, `58770800` |
| `CFCCH_PannelTutorialMessage` | `0x58996170` | 7 | `58770AC0`, `58770AE0`, `58771330`, `58770B90`, `58770A10` |
| `CFCCH_PannelTutorialStart` | `0x58996190` | 7 | `587713C0`, `587713E0`, `58771330`, `58771430`, `58771370` |

The other two slots in the manager table and two slots in each panel table
already match. The Start table's final method is `FUN_58771370` at slot `+0x18`;
the following bytes start a message string, which confirms the seven-slot table
boundary.

The Start panel routes type-2 child events into `FUN_587708E0`, which advances
the tutorial step, loads the level's localized message records, refreshes the
page, and invokes a child virtual method. The refresh path constructs its
message panel with `FUN_58770D50`, selects state through `FUN_5876FD20`, formats
nation and harbor names through `FUN_5876EF70`, and updates the visible child
controls through `FUN_58770130`. The MainManager handles the observed
`0x100`/`0x200`/`0x400` state transitions, checks step readiness, and traverses
its children. The Message panel routes its own child events and scroll
adjustments; its shared scroll helpers clamp the observed position to the
content and viewport bounds. These behaviors are from the installed image's
Ghidra output and mapped x86 instructions; state names and user-visible text
meaning remain unresolved.

The three tables contain 14 open slot entries (13 unique targets); those
methods and their direct-call paths close over 29 open functions. Two fresh
Ghidra project exports agree on **9,237 indexed bytes,
3,008 instructions, and 44 exact body ranges**. ObjDiff 3.8.0 verifies all 29
functions at 100%; direct-flow validation finds 21 edges within the closure and
93 transfers to 30 already byte-matched functions. The standalone verifier
also checks each RTTI record, every vtable slot, the class-rooted call closure,
all external transfer targets, and the localized tutorial message keys.

Ghidra leaves 15 physical fragments totaling 76 bytes between indexed body
ranges. Six fragments contain code or epilogues and nine contain alignment
instructions; their exact bytes are preserved and checked in
`config/NF2_2026/main-fcchs-tutorial-vtables-unindexed-fragments.tsv`. Four
indirect switch dispatches use separate tables at `0x5876F458` (6 entries),
`0x5876F470` (8), `0x587700E8` (7), and `0x58770104` (9). Their 120 bytes are
outside the indexed body total and are verified separately. The 66 indirect
calls and the two remaining indirect jumps invoke dynamic child or virtual
targets that are not resolved here.

`FUN_58771330` and `FUN_588A3A00` also appear in sibling panel tables, and the
two scroll helpers have ten incoming calls from five other open functions.
Those shared users remain outside this tutorial slice. The field meanings,
state labels, localized strings, virtual callback targets, sibling behavior,
and runtime visual result remain unverified; no emulator test was performed.
The new exact ranges are recorded in
`config/NF2_2026/main-fcchs-tutorial-vtables-body-ranges.tsv` and validated by
`tools/verify_current_main_fcchs_tutorial_flow.py`.
