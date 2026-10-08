# CWarehouseSlotManager primary-vtable slice

The installed 2026 `Main.dll` identifies this table through RTTI as
`CWarehouseSlotManager`. Its primary address point is `0x589A23C4`; the
complete-object locator is `0x589AADC0`, the type descriptor is `0x589CDE8C`,
and the hierarchy descriptor resolves to
`CWarehouseSlotManager` → `CControlMenuScreen` → `CMenuScreen` → `CScreen`.
The next locator at `0x589AAE14` identifies a separate
`CWarehouseTradePanel` table.

| Offset | Original entry | Status and observed role |
| --- | --- | --- |
| `+0x00` | `FUN_588FFD90` | Included; deleting-destructor wrapper |
| `+0x04` | `FUN_58903400` | Already byte-matched |
| `+0x08` | `FUN_58903420` | Already byte-matched |
| `+0x0C` | `FUN_588FF890` | Included; state-gated child update |
| `+0x10` | `FUN_588FF940` | Included; child-event traversal |
| `+0x14` | `FUN_58902FE0` | Already byte-matched |
| `+0x18` | `FUN_588FF6B0` | Included; event and record dispatcher |

The four open slots and their direct-call closures add 23 functions / 3,741
bytes across 26 exact Ghidra ranges. The destructor closure has two functions,
the `+0x0C` update closure has five, the `+0x10` handler has one, and the
`+0x18` dispatcher closure has 18; shared helpers occur once in the 23-function
union. Fresh targeted Ghidra agrees with the independent body inventory on
every range and full instruction coverage. It also agrees with the independent
transfer inventory on all 87 direct call or tail-transfer sites: 26 transfer
within the open closure and 61 reach functions already verified by objdiff.
The focused verifier follows all four direct closures and finds no unresolved
direct target.

`FUN_588F7DF0` now has a semantic C++ implementation: it reads the child pointer
at receiver offset `+0xA8` and sets that child's low state nibble at `+0x24`.
The pinned `clang-cl` build emits all 12 original bytes, and the objdiff check
passes at 100%. The other 22 selected functions still use instruction-emission
sources; their Ghidra-derived behavior notes are evidence records, not completed
high-level C++ reconstructions.

The matched constructor `FUN_588FFE10` writes the class address point at
`0x588FFE84`; the matched initializer `FUN_588FB9B0` calls that constructor at
`0x588FBB0D`. Those source hashes and the call instruction are checked. The
four newly reconstructed entries are independently located in their exact
RTTI-backed primary slots. A still-open neighboring reset caller,
`FUN_588FFC90`, calls shared helper `FUN_588F9C00` at `0x588FFC9F`; its Ghidra
body and call are checked as an explicit open boundary, outside this slice.

The `+0x0C` entry iterates a linked child list through virtual slot `+0x0C`,
then checks a point against a 6-by-4 grid of `0x47`-by-`0x53` rectangles. It
tracks repeated one-based cell results and reaches a string/presentation helper
after ten repeats. The `+0x10` entry traverses children through virtual slot
`+0x10` and routes observed event value `0x204` to a shared state helper. The
`+0x18` entry branches on observed event values 1 through 4, reads record bytes
at `+0x6A` and `+0x6B`, updates child state, and reaches message senders carrying
IDs `0x80015102`, `0x80015104`, `0x80015105`, or `0x80017105` on observed paths.
Its state-pairing path queues four-dword records in a growable circular deque.
The destructor clears that collection and invokes deleting methods for child
pointers.

Twelve indirect calls and one indirect jump remain in the selected bodies.
They are concentrated in child virtual callbacks and destructor dispatch;
their runtime targets cannot be determined from the available static evidence.
The meanings of the record fields, event labels, message consumers, child
classes, and visible state changes remain uncertain. The exact reconstruction
matches the selected machine-code bytes; it does not prove that this client
boot path or these controls have been tested in the emulator.

The exact body ranges, independent and fresh body exports, call-edge exports,
and four root closures are tracked in
`config/NF2_2026/main-warehouse-slot-manager-*.tsv`. Rebuild candidates with

```powershell
rtk python tools/emit_current_main_function_candidates.py --ranges-tsv config/NF2_2026/main-warehouse-slot-manager-body-ranges.tsv
```

Run the focused structural verifier with
`rtk python tools/verify_current_main_warehouse_slot_manager.py`; run the
objdiff match verifier with `rtk python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only ADDRESS` for each selected
address.
