# Aircraft fire-control event handler

The installed `Main.dll` has an RTTI-identified `CPannelFireControlAddOnAircraft`
vtable at `0x5899EA14`. Its `+0x10` slot at `0x5899EA24` points to
`FUN_5885A460`. This slice reconstructs that handler and the four open direct
helpers reachable from it:

| Function | Bytes | Reconstructed behavior |
| --- | ---: | --- |
| `FUN_5885A460` | 1,494 | Dispatches event records by fields at `+4` and `+8`, updates panel and indexed-slot state, and routes work to the helpers below. |
| `FUN_588585D0` | 126 | Packs state from eight receiver slots into a four-byte payload and passes it to matched `FUN_587E5A70` with identifier `0x16`. |
| `FUN_58858AB0` | 287 | Aggregates counters from selected indexed entries and normalizes values through matched `FUN_587A1640`. |
| `FUN_58858F20` | 335 | Checks mode and slot state, updates a selected counter and an adjacent XOR-masked field, then calls matched `FUN_58907360` and `FUN_58858AB0`. |
| `FUN_58859070` | 584 | Tests a receiver counter after division by 1,000 and, on the passing path, resets indexed state and refreshes related values. |

The handler directly covers event identifiers `0x100`, `0x101`, `0x102`, and
`0x20A`. Fresh Ghidra pseudocode shows a four-byte payload sent with event
identifier `0x16` in two branches. Those values are recorded as observed
behavior; their user-interface and server meanings remain unknown.

Two independent fresh Ghidra projects exported the same five exact body ranges
and the same 36 direct-call edges. Their exports are preserved in
[`current-main-fire-control-aircraft-body-exports.tsv`](../config/NF2_2026/current-main-fire-control-aircraft-body-exports.tsv)
and
[`current-main-fire-control-aircraft-call-edges.tsv`](../config/NF2_2026/current-main-fire-control-aircraft-call-edges.tsv).
The focused verifier checks those exports against the mapped image, the RTTI
locator and vtable slot, complete instruction coverage, byte-identical ObjDiff
catalog records, and the direct-call closure. ObjDiff verified all five
functions at 100.0%, totaling 2,826 bytes.

There are four indirect call sites in the handler. One walks a child list and
dispatches through a child vtable at `+0x10`; the contracts of that dispatch and
the three other indirect calls are not established. The panel fields, indexed
entry layout, counter units, XOR-masked value, payload schema, and event
semantics remain uncertain. The vtable evidence identifies the method but does
not establish constructor reachability. This is a five-function direct-call
closure, not a reconstruction of every method in the class; open same-class
slots `FUN_5885BAF0` and `FUN_5885C060` remain outside the slice. No emulator
runtime test was performed.
