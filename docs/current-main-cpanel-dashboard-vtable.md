# CPanelDashboard primary-vftable slice

The installed 2026 `Main.dll` identifies `CPanelDashboard` in RTTI and records its single-inheritance chain as `CPanelDashboard` → `CControlMenuScreen` → `CMenuScreen` → `CScreen`. Its primary address point is `0x5899D6D4`, with seven entries. The first four were open: `FUN_58810520`, `FUN_588104B0`, `FUN_588104E0`, and `FUN_58814480`. The final three, `FUN_5873B360`, `FUN_58902FE0`, and `FUN_589033F0`, were already byte-matched. The next locator at `0x5899D6F0` belongs to the separate `CPanelNoticePopup` table and is excluded.

The newly matched slice is the union of four open direct-call closures:

| Root | Open functions | Bytes |
| --- | ---: | ---: |
| Slot `+0`, cleanup wrapper | 2 | 1,082 |
| Slot `+4`, state setup | 1 | 48 |
| Slot `+8`, state setup | 1 | 59 |
| Slot `+0x0C`, dashboard update | 7 | 3,799 |

Together these are 11 functions / 4,988 bytes across 13 exact Ghidra ranges. ObjDiff 3.8.0 reports every function at 100.0%. The tracked manifests compare targeted fresh Ghidra output with the independent body and call-edge inventories. The focused verifier checks complete instruction coverage, all 46 direct-call sites, four exact closure sets, and 39 transfers to functions already verified byte-identical.

The `+0` wrapper calls `FUN_58810090`, which writes the dashboard vftable and invokes the first virtual method on non-null child members before clearing their pointers. The wrapper then conditionally calls `FUN_5897CC42` when bit 0 of its second argument is set. Slots `+4` and `+8` write mode values `0x100` and `0x400` into the word at `this+0x24`; the first sets bit 2, while the second clears it and zeros the byte at `this+0xB4`.

The `+0x0C` update returns unless bit 2 at `this+0x24` is set. It advances mode `0x100` to `0x200` and `0x400` to `0x500`, clearing observed low bits in both transitions. In mode `0x200`, it calls three common open helpers and the already matched `FUN_58810CB0`. A five-bit global value equal to 9 selects two additional open helpers, `FUN_58811960` and `FUN_58811E30`; other observed values select the single alternate helper `FUN_58811AD0`. It then traverses the linked structure at `this+0x3C` and dispatches child slot `+0x0C`.

The helpers operate on observed record fields and child pointers. `FUN_588106E0` calculates scaled values for children at `this+0x84` and `this+0x94`; `FUN_58810850` selects threshold-gated records and copies six fields through `this+0xA8`; `FUN_58810AC0` scans 32 indexed entries and writes two scaled outputs through `this+0xFC` and `this+0x100`. The selected-record helpers use the records at `DAT_58A245C4+0x9C` and `+0xA0`, refresh resource offsets, and update indexed child values. These observations come from fresh decompilation and the mapped instruction stream; they do not establish labels or visual meanings for the controls.

Forty-four virtual calls remain unresolved: 43 first-slot child calls in cleanup and one linked-child `+0x0C` update call. Child class identities, record schemas, state labels, resource names, and rendered results remain unknown. No runtime visual test has been performed, so the result establishes exact code bytes and static relationships rather than a playable-client test.

The matched `FUN_58812170` constructor installs the dashboard table at `0x588121E5`; matched caller `FUN_5878AF40` invokes it at `0x5878C86C`. That constructor/caller path supports the class boundary and is not included in the new function count. The repeatable read-only Ghidra runner is [`tools/run_current_main_cpanel_dashboard_vtable_fresh.cmd`](../tools/run_current_main_cpanel_dashboard_vtable_fresh.cmd). [`tools/write_current_main_cpanel_dashboard_vtable_manifests.py`](../tools/write_current_main_cpanel_dashboard_vtable_manifests.py) writes the cross-checked manifests, and [`tools/verify_current_main_cpanel_dashboard_vtable.py`](../tools/verify_current_main_cpanel_dashboard_vtable.py) validates the byte ranges, calls, RTTI, table boundary, and matched setup path.
