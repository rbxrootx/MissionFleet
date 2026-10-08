# Aircraft fire-control panel

The installed `Main.dll` identifies the class as
`CPannelFireControlAddOnAircraft` through the RTTI complete-object locator at
`0x5899EA10`. The primary vtable begins at `0x5899EA14` and has 14 entries.
Its constructor path is also grounded in the original code: matched
`FUN_58854A00` calls matched derived constructor `FUN_5885AAA0` at
`0x58855C6A`; Ghidra identifies the derived vptr assignment and sprite-backed
children there. The mapped table, both constructors, and every primary-vtable
target are now byte-matched.

The work closed this class in two evidence-led slices. The event-handler slice
contains five functions / 2,826 bytes:

| Function | Bytes | Original-code evidence |
| --- | ---: | --- |
| `FUN_5885A460` | 1,494 | Slot `+0x10`; dispatches event records by fields at `+4` and `+8`, updates panel and indexed-slot state, and routes work to the helpers below. |
| `FUN_588585D0` | 126 | Packs state from eight receiver slots into a four-byte payload and passes it to matched `FUN_587E5A70` with identifier `0x16`. |
| `FUN_58858AB0` | 287 | Aggregates counters from selected indexed entries and normalizes values through matched `FUN_587A1640`. |
| `FUN_58858F20` | 335 | Checks mode and slot state, updates a selected counter and an adjacent XOR-masked field, then calls matched `FUN_58907360` and `FUN_58858AB0`. |
| `FUN_58859070` | 584 | Tests a receiver counter after division by 1,000 and, on the passing path, resets indexed state and refreshes related values. |

The vtable remainder adds nine functions / 2,670 bytes, including the seven
previously open primary slots and their two open destructor callees:

| Function | Bytes | Original-code evidence |
| --- | ---: | --- |
| `FUN_58858670` | 27 | Slot `+0x00`; deleting-destructor wrapper calls the derived destructor and conditionally the matched deallocator. |
| `FUN_58858030` | 814 | Derived destructor; releases and clears child pointers, then calls the base destructor. |
| `FUN_58857E40` | 114 | Base destructor restores the base vptr, releases the child at `+0x84`, and calls matched cleanup. |
| `FUN_5885C060` | 228 | Slot `+0x0C`; updates eight latched control slots and dispatches a linked child. |
| `FUN_5885BAF0` | 1,347 | Slot `+0x18`; handles selection/state transitions, emits the observed four-byte `0x16` event payload, and refreshes state. |
| `FUN_58857F00` | 3 | Slot `+0x20`; one-instruction no-op shared by several vtables. |
| `FUN_58858650` | 19 | Slot `+0x2C`; returns an indexed value XOR-encoded with `0xAA`. |
| `FUN_58858550` | 59 | Slot `+0x30`; increments the decoded indexed value and calls matched normalization helpers. |
| `FUN_58858590` | 59 | Slot `+0x34`; decrements the decoded indexed value and calls matched normalization helpers. |

The earlier five-function slice covers handler `FUN_5885A460` at slot `+0x10`,
plus its four direct helpers. Its event identifiers include `0x100`, `0x101`,
`0x102`, and `0x20A`. Fresh Ghidra pseudocode shows the handler and selection
method `FUN_5885BAF0` both construct a four-byte payload sent with event id
`0x16`; protocol meaning is not established.

The original five-function Ghidra evidence remains in
[`current-main-fire-control-aircraft-body-exports.tsv`](../config/NF2_2026/current-main-fire-control-aircraft-body-exports.tsv)
and
[`current-main-fire-control-aircraft-call-edges.tsv`](../config/NF2_2026/current-main-fire-control-aircraft-call-edges.tsv).
Its focused check validates the RTTI slot, five exact bodies, 36 direct calls,
and the complete event-handler helper closure.

Two independent fresh Ghidra body exports agree on the nine new functions,
their 11 exact code ranges, and their instruction counts. Their edge exports
agree on 22 direct calls, ten vtable data references, and the constructor call.
The focused checker also validates the mapped RTTI structure, all 14 vtable
entries, every byte-matched target, the complete 763-instruction stream, and
that the direct-call closure covers all nine functions. Run it with:

```powershell
rtk python tools/verify_current_main_fire_control_aircraft_vtable.py
```

The body and edge evidence are preserved in
[`current-main-fire-control-aircraft-vtable-body-exports.tsv`](../config/NF2_2026/current-main-fire-control-aircraft-vtable-body-exports.tsv)
and
[`current-main-fire-control-aircraft-vtable-call-edges.tsv`](../config/NF2_2026/current-main-fire-control-aircraft-vtable-call-edges.tsv).
ObjDiff verified the new nine functions at 100.0%, totaling 2,670 bytes.

The decompilation identifies 35 indirect dispatch sites in this remainder:
30 in the derived destructor, and one each in the base destructor and update
method, plus three in the selection handler. Their exact destinations and
contracts remain unresolved. The control-slot layouts, resource thresholds,
selection units, callback meanings, and in-game appearance also remain
uncertain. This slice validates exact instruction reproduction and the static
class/constructor relationships; it has not been exercised in the emulator.
