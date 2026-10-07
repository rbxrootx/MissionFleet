# Main.dll event 0x80020115 pending-state cleanup

This slice follows a concrete route in the installed client. The byte-matched
event dispatcher FUN_587BB700 labels a switch arm 0x80020115; fresh mapped
instructions normalize that event to jump-table index 3 and route it to
0x587BCA1B. After the event word at [EBP+0x0A] equals 10, the dispatcher
loads the observed global receiver and calls FUN_587CF530 at 0x587BCAA4.
The event's external runtime entry path remains unknown.

FUN_587CF530 checks receiver field +0x114, looks up a related record using
the two 16-bit keys at +0xA06 and +0xA04, and, when the lookup succeeds,
passes the stored handle to FUN_5874B0E0 before clearing +0x114.
FUN_5874B0E0 runs a validation chain. It requires observed receiver state
words +0x98 and +0x94 to equal 0x40000000, checks map-resource data and
layout conditions, calls three receiver virtual methods, and then clears those
state words and dispatches virtual slot +0x28 on success.

The validation chain includes a file operation using the observed path format
.\MAP\%s, table scans that decode object words with >> 4 and XOR 0xAA,
and map-cell helpers that inspect one selected cell plus adjacent bytes. The
exact types and result meanings are not recovered. A second byte-matched caller,
FUN_587D51D0 at 0x587D52F1, reaches FUN_587D02B0; RTTI identifies that
caller as the +0x10 method of CPageChannelBattle_ControlMenuScreen.

The audited direct-call closure contains 15 functions and 2,831 bytes across
17 exact Ghidra body ranges. Two functions have discontiguous bodies:
FUN_5874AE20 has 615 bytes in two ranges, and FUN_58796C80 has 183 bytes in
two ranges. Every selected function is reachable from FUN_587CF530; the
closure has no unresolved direct internal targets and all 28 transfers across
its boundary target byte-verified functions.

| Function | Bytes | Observed role |
| --- | ---: | --- |
| 5874A9B0 | 190 | Scans the 32-entry resource table for decoded minimum and maximum values |
| 5874AA70 | 98 | Scans a requested range of resource entries |
| 5874AAE0 | 157 | Applies receiver bounds to decoded resource values |
| 5874ADD0 | 80 | Checks four receiver words for the required value in one observed mode |
| 5874AE20 | 615 | Validates shared state, map data, resource constraints, and virtual-method results |
| 5874B0E0 | 62 | Runs the validator and clears state before a virtual callback on success |
| 58789710 | 60 | Searches a linked collection using two receiver-supplied keys |
| 58796C80 | 183 | Opens and processes a resource under .\MAP\ |
| 587CF0A0 | 237 | Computes an observed cell-status code for one resource case |
| 587CF190 | 233 | Computes an observed cell-status code for one resource case |
| 587CF280 | 232 | Computes an observed cell-status code for one resource case |
| 587CF370 | 221 | Computes an observed cell-status code for one resource case |
| 587CF450 | 218 | Computes an observed cell-status code for one resource case |
| 587CF530 | 69 | Event-root handle lookup, validation dispatch, and field clear |
| 587D02B0 | 176 | Selects map-resource checks and dispatches to cell-status helpers |

The candidate emitter reproduced all 15 selected functions byte-for-byte;
ObjDiff verified 2,831 / 2,831 bytes. The focused verifier checks all 17
mapped ranges, complete instruction decoding, the exact in-closure transfer
set, all 28 verified boundary transfers, the event jump-table route, and both
byte-matched callers.

The static evidence does not establish the server-side meaning of event
0x80020115, the receiver or resource record types, the semantics of the
cell-status codes, or the visible gameplay effect. No emulator runtime test was
performed.
