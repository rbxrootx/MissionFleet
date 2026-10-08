# Installed-client ManageSquad tab

This note covers one class in the installed 2026 `Main.dll`. The mapped image's
complete-object locator at `0x589A850C` points to the type descriptor at
`0x589CC6D0`, whose name is
`.?AVCPannelCommunicatorConfigManageSquadTab@@`. Its primary vtable address
point is `0x5899E328`; the RTTI pointer is stored immediately before it at
`0x5899E324`.

The eleven primary slots are now exact byte matches:

| Slot | Function | Observed role in Ghidra |
| --- | --- | --- |
| `+0x00` | `5883ACB0` | Deleting-destructor wrapper; calls derived cleanup `5883A4D0` |
| `+0x04` | `587B6A60` | Sets child state byte to 1 and dispatches child slot `+0x1C` |
| `+0x08` | `587B6A70` | Sets child state byte to 3 and dispatches child slot `+0x20` |
| `+0x0C` | `587B6ED0` | Flag-gated child/list cleanup dispatch |
| `+0x10` | `5883A0A0` | Event handler for observed IDs `0x201`, `0x20A`, `0x100`, and `0x200` |
| `+0x14` | `587B6F10` | Flag-gated linked-child event dispatch |
| `+0x18` | `5883B500` | Control-event and state-field handler |
| `+0x1C` | `5883ACD0` | State-gated child and record update |
| `+0x20` | `5882F000` | Shared packed-state transition helper |
| `+0x24` | `587B6A80` | Shared child coordinate and state update |
| `+0x28` | `58833D70` | Shared packed-flag transition helper |

Six additional open direct callees complete the transitive open direct-call
closure: `587BAAE0`, `58839730`, `58839F30`, `58839FA0`, `5883A4D0`, and
`58848420`. The matched parent constructor `58843380` calls matched constructor
`5883BBE0` at `0x588442E6`; the latter installs this vtable. Its pseudocode
shows repeated indexed sprite-data children and fixed-offset controls. This
supports the class identity and construction path, while the individual
resource names and control labels remain unknown. The adjacent table beginning
at `0x5899E358` is a different class and is excluded.

Two independent Ghidra exports (`58758EE0` and `587CEF70`) agree on all 22
body ranges and all direct-call/data-reference rows. The 17 functions total
8,107 bytes and 2,372 instructions. The mapped code decodes completely across
those ranges, and local clang-cl/ObjDiff verification reports all 17 exact.
The slice has 140 direct calls: 11 to another function in this slice and 129
calls to 37 functions already byte matched in the current catalog. The
verifier rejects any direct callee that is neither in the slice nor already
matched. The 24 data references agree with the mapped image and the class's
vtable entries.

Ghidra pseudocode shows the event handler branching on the identifiers and
values listed above, and the control handler looking up the localization keys
`MESSAGESTRING__CLAN_CREDIT_DEPOSIT` and
`MESSAGESTRING__CLAN_CREDIT_WITHDRAW`. These string keys do not establish that
either branch completed a server-side deposit or withdrawal. The selection
helpers adjust a bounded index and refresh five pairs of child fields, but the
record schema and visible labels are not recovered. In total, 86 indirect
call sites remain unresolved: 62 in the derived cleanup body, 15 in the
control-event handler, and nine across the other six functions. Their target
objects and virtual callback contracts need runtime or further call-site
evidence.

The `.cpp` candidates preserve each mapped instruction byte using the project's
existing `_emit` reconstruction path. This verifies machine-code equivalence;
it does not recover the original high-level C++ or prove the UI works in the
emulator. No live-client visual or interaction test was performed.

Reproduce the checks with:

```powershell
rtk python tools/export_current_main_manage_squad_tab_manifests.py --check
rtk python tools/verify_current_main_manage_squad_tab.py
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 5883ACB0 --only 587B6A60 --only 587B6A70 --only 587B6ED0 --only 5883A0A0 --only 587B6F10 --only 5883B500 --only 5883ACD0 --only 5882F000 --only 587B6A80 --only 58833D70 --only 587BAAE0 --only 58839730 --only 58839F30 --only 58839FA0 --only 5883A4D0 --only 58848420
```
