# CWarehousePageButton primary-vtable slice

The installed 2026 `Main.dll` identifies this class through RTTI as
`CWarehousePageButton`, with the single-inheritance chain
`CWarehousePageButton` → `CControlMenuScreen` → `CMenuScreen` → `CScreen`.
Its primary address point is `0x589A233C`; the complete-object locator is
`0x589AAC74` and the type descriptor is `0x589CDE04`.

The seven primary slots are:

| Offset | Original entry | Status |
| --- | --- | --- |
| `+0x00` | `FUN_588FDDD0` | Included; deleting destructor |
| `+0x04` | `FUN_58903400` | Already byte-matched |
| `+0x08` | `FUN_58903420` | Already byte-matched |
| `+0x0C` | `FUN_58822F10` | Already byte-matched |
| `+0x10` | `FUN_588FE460` | Included; event handler |
| `+0x14` | `FUN_58902FE0` | Already byte-matched |
| `+0x18` | `FUN_588FDD30` | Included; interaction callback |

The next locator at `0x589AACC8` names a separate `CWarehousePageInfo` table and
marks the end of this class slice.

The three open slots and their direct-call closures add 20 functions and 3,226
bytes across 22 exact Ghidra body ranges. The deleting destructor at `+0` has a
two-function closure. The event handler at `+0x10` has a 17-function closure,
and the interaction callback at `+0x18` has a 13-function closure; shared helpers
are represented once in the 20-function union. The interaction callback accepts
the observed event value `2`, maps four child pointers to bounded changes in the
field at `this+0x60`, and refreshes through `FUN_588FD790`. The event handler
routes observed event types `0x100`, `0x200`, and `0x201` into increment/decrement,
hover, and row-hit helpers. The refresh path iterates ten row positions, looks
up shared records at a `0x18`-byte stride, copies six fields into child objects,
and updates state words at page boundaries.

Fresh targeted Ghidra and the independent body and call-edge inventories agree
on every selected range and all 40 direct call or tail-transfer edges. The
verifier follows 23 transfers within the open closures and checks 17 transfers
to functions already verified by objdiff. It also checks the table entries,
RTTI base chain, class vtable installation references, and full Capstone
instruction coverage. The matched warehouse-list function `FUN_588FBEF0`
calls `FUN_588FF530`, `FUN_588FE9C0`, and `FUN_588FF420` at `0x588FBFBC`,
`0x588FBFC5`, and `0x588FBFF9`. The open neighboring callers
`FUN_588FC0D0` and `FUN_588FF6B0` account for three additional calls into this
slice and remain outside the verified boundary.

Seven indirect calls remain unresolved: six child cleanup dispatches in
`FUN_588FDC00` and one event callback in `FUN_588FE460`. `FUN_588F7D00` also
tail-dispatches through a child virtual slot. These targets, row-record fields,
control identities, state meanings, and rendered appearance are not established
by the current evidence. The work verifies reconstructed machine-code bytes; it
does not establish that the client boots or that these controls behave correctly
at runtime.

The generated source files are under `src/client-current/Main/FUN_588F*.cpp`.
The exact body ranges, two-source body exports, call-edge exports, and root
closures are tracked in `config/NF2_2026/main-warehouse-page-button-*.tsv`.
Rebuild candidates with
`python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-warehouse-page-button-body-ranges.tsv`.
The focused checks are `python tools/verify_current_main_warehouse_page_button.py`
and `python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 588FDDD0`
(repeat `--only` for the other selected addresses).
