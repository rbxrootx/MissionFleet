# Installed Manage Fleet tab: byte-matched vtable slice

This slice reconstructs the previously unmatched methods in the installed
2026 `Main.dll` class `CPannelCommunicatorConfigManageFleetTab`. Its RTTI
CompleteObjectLocator pointer is at `0x5899E1D0`; the locator at
`0x589A84B4` identifies TypeDescriptor `0x589CC698`, whose name is
`.?AVCPannelCommunicatorConfigManageFleetTab@@`. The primary address point is
`0x5899E1D4`. Its 11 slots end at `0x5899E200`, immediately before the
`STR_SHORT_COMMUSERSTATUS_UNDERBATTLE` key in the mapped image.

The byte-matched table, in slot order, is:

| Slot | Function | Status for this slice |
|---:|---:|---|
| `+0x00` | `FUN_58835900` | Matched here; deleting-destructor wrapper |
| `+0x04` | `FUN_587B6A60` | Previously matched |
| `+0x08` | `FUN_587B6A70` | Previously matched |
| `+0x0C` | `FUN_587B6ED0` | Previously matched |
| `+0x10` | `FUN_58834680` | Matched here; event handler |
| `+0x14` | `FUN_587B6F10` | Previously matched |
| `+0x18` | `FUN_58835F70` | Previously matched |
| `+0x1C` | `FUN_58835370` | Matched here; visible-state update |
| `+0x20` | `FUN_5882F000` | Previously matched |
| `+0x24` | `FUN_587B6A80` | Previously matched |
| `+0x28` | `FUN_58833D70` | Previously matched |

Matched parent `FUN_58843380` allocates `0x348` bytes and calls the matched
constructor `FUN_58836B90` at `0x588442A1`, then stores the result at parent
offset `+0x160`. The constructor installs the Manage Fleet vtable at
`0x58836BFF`. Cleanup body `FUN_58834C00` installs the same table at
`0x58834C2B`. These constructor, parent, and vtable references tie the open
methods to this RTTI class rather than to a nearby class inferred from data.

The slice adds five complete functions totaling **4,252 bytes, 1,220
instructions, and 11 Ghidra body ranges**. Two independent Ghidra exports agree
on the ranges and direct edges, and the mapped image decodes all of them. Each
function compiles to 100% byte-identical output under objdiff 3.8.0.

| Function | Bytes | Instructions | Observed role |
|---:|---:|---:|---|
| `FUN_58835900` | 27 | 10 | Calls class cleanup and conditionally releases the object |
| `FUN_58834680` | 1,017 | 263 | Dispatches observed `0x200`, `0x201`, `0x100`, and `0x20A` events |
| `FUN_58835370` | 1,314 | 344 | Updates child state and member status labels/colors |
| `FUN_58834120` | 101 | 31 | Bounded selector step followed by three value writes and refresh |
| `FUN_58834C00` | 1,793 | 572 | Destroys child pointers and clears the stored fields |

The exact source bodies preserve the mapped x86 instruction bytes, while the
interpretations above come from the fresh decompilation, RTTI, vtable, and
matched caller path. Across the five bodies Ghidra records 91 direct call
sites: two connect functions inside this closure and 89 target 18 already
matched functions. All three open vtable methods have corresponding data
references in both edge exports.

Fifty-eight indirect call sites remain unresolved: 56 child-vtable destructor
calls in `FUN_58834C00`, one child event callback in `FUN_58834680`, and one
status-string callback in `FUN_58835370`. The child object types, event schema,
resource-to-control mapping, status-source semantics, and rendered pixels have
not been established. This is a static byte-match validation; no emulator
interaction or visual test was performed.

The evidence is reproducible with
`tools/export_current_main_communicator_manage_fleet_tab_manifests.py --check`,
`tools/verify_current_main_communicator_manage_fleet_tab.py`, and
`tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json`
for the five addresses listed above. The range and edge snapshots are stored in
`config/NF2_2026/current-main-communicator-manage-fleet-tab-body-exports.tsv`
and `config/NF2_2026/current-main-communicator-manage-fleet-tab-call-edges.tsv`.
