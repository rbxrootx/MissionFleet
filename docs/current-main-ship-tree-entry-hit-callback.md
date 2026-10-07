# Current Main ship-tree entry hit callback

`FUN_588B1B40` is called by the byte-matched `CPannelShipTree` event handler
`FUN_588B1580` at `0x588B17B4`. The handler's `0x200` mouse-move path first
checks that the pointer is inside the tree bounds, then scans up to 100 indexed
child entries for a hit. For the first matching child it passes the associated
16-bit entry value, adjusted child coordinates, and a boundary flag derived
from whether the child's x coordinate is at most `0x167`. The mapped call loads
the callback receiver from `[ESI+0x2478]`; the focused verifier checks the
matched caller range and the original push/receiver/call sequence.

Fresh Ghidra output covers these three exact body ranges:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `[0x588B1B40, 0x588B1C04)` | 196 | 57 |
| `[0x588B1C10, 0x588B1D19)` | 265 | 73 |
| `[0x588B1D20, 0x588B1FDB)` | 699 | 201 |

The method looks up the supplied entry value through matched `FUN_58778AD0`
and returns if the lookup is null. Otherwise, it updates the callback
receiver's position through matched `FUN_58903290`, sets observed flag bits at
`+0x24`, and sends four values from the returned record to number controls
through matched `FUN_58907360`. It reads flag, count, and bit fields from that
record to populate up to eight controls in each of two receiver-relative
arrays, using version-gated global resource records and clearing unused child
flags. A caller-supplied boundary flag selects between two additional
version-gated resource paths. All six direct calls target functions already
verified byte-identical.

ObjDiff 3.8.0 verifies all 1,160 bytes at 100.0%. The
[focused verifier](../tools/verify_current_main_ship_tree_entry_hit_callback.py)
checks all three fresh ranges and instruction counts, each direct call target,
the matched caller body, and the original call sequence. The exact instruction
stream is in
[`FUN_588b1b40.cpp`](../src/client-current/Main/FUN_588b1b40.cpp); the fresh
range manifest is
[`current-main-ship-tree-entry-hit-callback-body-ranges.tsv`](../config/NF2_2026/current-main-ship-tree-entry-hit-callback-body-ranges.tsv).

The entry value's meaning, returned-record schema, flag/count semantics,
receiver and child-control types, resource identities, and visible hover or
selection result remain unresolved. This is static reconstruction evidence;
no emulator or live-client input test was performed. The matched event route is
described in the [ship-tree input-handler notes](current-main-ship-tree-input-handler.md).
