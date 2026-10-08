# Current Main panel item manager

Ghidra identifies `FUN_58883f80` at `0x58883F80` as a constructor that first
initializes `CMenuScreen` and then installs the `CPannelItemManager` vtable.
`FUN_5878af40` calls it at `0x5878CA20`.

The body creates many `CSpriteDataScreen` and `CSpriteBundleScreen` children,
selects records from mapped global tables, and passes record-derived fields to
the observed sprite/text helper routines. It also resolves the localized key
`ITEM_NAME_PREMIUMSHIP`. The record schemas and the identities and layout of
the other constructed items remain unknown.

Ghidra assigns eleven body ranges totaling the inventory's 10,242 bytes.
Capstone confirms all ten intervening gaps are seven- or six-byte alignment
NOP sequences. ObjDiff 3.8.0 reports a 100% match for all eleven compiled
segments; 479 mapped operands were audited. This is static byte-match evidence;
the panel was not rendered in the original client.

## Primary vtable closure

The installed image's complete-object locator is at `0x589A8FE0`, its type
descriptor is at `0x589CD010`, and its primary address point is `0x5899F918`.
The RTTI name is `.?AVCPannelItemManager@@`; the recorded base chain is
`CControlMenuScreen`, `CMenuScreen`, and `CScreen`. The seven primary slots
are:

| Slot | Function | Evidence from the mapped body |
| --- | --- | --- |
| `+0x00` | `588826D0` | Derived cleanup wrapper; conditionally calls matched delete helper `5897CC42` |
| `+0x04` | `5887DA90` | State-`0x500` transition resets observed selection fields and child flags |
| `+0x08` | `5887A470` | State-`0x200` transition writes target coordinates and notifies the screen manager |
| `+0x0C` | `5887A500` | Advances state/position fields and updates linked controls |
| `+0x10` | `588826F0` | Routes observed input codes including `0x100`, `0x200`, `0x201`, `0x202`, and `0x20A` |
| `+0x14` | `58902FE0` | Already byte matched; shared child update path |
| `+0x18` | `58881680` | Routes observed event kinds 2, 3, and 4 across item controls |

The next bytes after slot `+0x18` begin the localized string
`ITEM_NAME_REINFORCEITEM`, confirming that the primary table ends there. The
matched constructor writes the address point at `0x58883FF9`; matched caller
`FUN_5878AF40` calls that constructor at `0x5878CA20`. The constructor body
above is evidence for control creation and localized names, while the fresh
slot references tie the open methods to this exact class.

The six open slots and their transitive direct-call closure contain **20
functions, 25 exact Ghidra ranges, 6,867 bytes, and 2,240 instructions**. Two
independent Ghidra exports agree on the full closure and its 118 direct
transfer edges: 28 remain inside the closure and 90 reach functions already
byte matched. That count includes 117 `CALL` instructions and one tail jump
from `5887BE10` to matched `5887B240`. The closure has six data-reference
rows. Capstone coverage, RTTI, all seven table entries, vtable installation,
the matched constructor caller, and the byte-match catalog are checked by
[`verify_current_main_item_manager_vtable.py`](../tools/verify_current_main_item_manager_vtable.py).

Fresh Ghidra output shows item-name keys `ITEM_NAME_PREMIUMSHIP` and
`ITEM_NAME_SHIPITEM`; helper paths pass identifiers `0x8001C004` and
`0x8001C005` to the existing dispatcher. One guarded state-3 selection branch
calls matched `FUN_58759E90(0xFF)` and forwards its return value through the
`0x8001C005` helper. This adds an evidenced caller from ItemManager into the
DiplomacyTab constructor path. The page-loading path also copies
`TEXTSTRING_TRANSFERINGDATAFROMSERVER`. These are observed strings and call
arguments; they do not prove a successful network request or identify the
server-side fields. The six item-control records, their asset mapping, event
code meanings, and exact visible layout remain unresolved. Across this
closure, 62 indirect call sites still have dynamic targets. No emulator
runtime or visual test was performed.

Each of the 20 emitted `.cpp` files preserves the original mapped instruction
bytes from the exact Ghidra ranges. ObjDiff reports a 100% byte match for all
20 functions. This establishes machine-code equivalence for the selected
bodies, not recovered high-level C++ or rendered behavior. Rerun the installed
client capture and focused checks with:

```powershell
rtk tools\run_current_main_item_manager_vtable_fresh.cmd
rtk python tools\export_current_main_item_manager_vtable_manifests.py --check
rtk python tools\verify_current_main_item_manager_vtable.py
rtk python tools\verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 587BA0A0 --only 587BA0C0 --only 5887A3E0 --only 5887A470 --only 5887A500 --only 5887A770 --only 5887A810 --only 5887A980 --only 5887AD20 --only 5887ADC0 --only 5887BE10 --only 5887D1C0 --only 5887DA90 --only 58881150 --only 58881680 --only 58881C30 --only 588826D0 --only 588826F0 --only 588C5C30 --only 588F3FA0
```
