# Ship-map route-child update at `0x588DBF10`

`FUN_588DBF10` has one Ghidra body range, `0x588DBF10..0x588DC0CB`, totaling
444 bytes. Ghidra records calls from the byte-verified
`CShip_MapObjectScreen` update method `FUN_588E5150` at `0x588E6054` and
`0x588E60FB`. The first follows `FUN_588DB610` inside the caller's
`(this + 0x60B0) & 0xF0000000 == 0x40000000` path. The second appears in a
separate caller branch guarded by a bit test of globals at offsets `+0x10488`
and `+0x10490` from `DAT_58A2459C`.

This routine uses `+0x609C` as a separate phase field. Its observed transitions
are:

| `+0x609C` | Observed work and next value |
| --- | --- |
| `0` | If `*(this + 0x23C) + 0x34` is nonzero, bounds-checks the index at `*(this + 0x23C) + 0x68` against the record count at `DAT_58A246F0+0x160`, then selects a 0x40-byte-stride record from the table pointer at `DAT_58A246F0+0x190`. It installs that record into the child at `+0x146C`, resets the child's counter at `+0x50`, and sets `+0x609C` to `0x50000000`. |
| `0x50000000` | Reads a word at the installed record's `+0x0C` (or zero if its pointer is null). If the child counter equals that value times 3 minus 1, selects the next table entry at index `current+1`, installs it through `FUN_58734920`, and sets `+0x609C` to `0x70000000`; otherwise increments the child counter. |
| `0x70000000` | If `*(this + 0x23C) + 0x34` is zero, calls `FUN_587317E0` with the index at `*(this + 0x23C) + 0x68` plus 2, installs its result through `FUN_58734920`, resets the child counter, and sets `+0x609C` to `0x60000000`. Otherwise it increments the existing child counter. |
| `0x60000000` | Uses the same record-word-times-3-minus-1 counter check. At the terminal value it clears `+0x609C`; otherwise it increments the child counter. |
| Any other value | No phase-specific change is visible; execution still reaches the position update below. |

On every path, including an unrecognized phase, the function computes target
coordinates from the values indexed by `+0x605C` in the paired tables at
`+0x17BC` and `+0x17C0`, combines them with the object's `+4/+8` coordinates,
and calls `FUN_58903290` on the child at `+0x146C`. That 77-byte helper writes
the new coordinates, computes the movement delta, walks the child list rooted
at `+0x3C` using links at `+0x38`, and calls `FUN_58902E10(deltaX, deltaY)` for
children whose word at `+0x24` has bit `0x2000` set. `FUN_58734920` is a 54-byte
record-install helper: it stores a pointer at child `+0x54` and, when non-null,
copies six DWORDs from record offsets `+0x18..+0x2C` to child offsets
`+0x0C..+0x20`.

`FUN_587317E0`'s mapped body compares its stack index and receiver count as
signed DWORDs, rejects negative or out-of-range indices and a null table, then
returns `table + index*0x40`. At the `0x70000000` route phase, the caller adds 2
to the selection index and passes that value to the helper with the global
record-table object. The table's full schema, meaning of the record word at
`+0x0C`, the game purpose of the `index+2` choice, the meaning of descendant
flag `0x2000`, and the user-visible animation or effect are not identified.
The state and copied fields are therefore described by offsets and observed
operations rather than assigned game-design names. No live client or emulator
execution was observed.

The matching instruction-level candidate is
[`FUN_588dbf10.cpp`](../src/client-current/Main/FUN_588dbf10.cpp). It preserves
the captured instruction bytes; it does not claim to recover the original
high-level C++ source. ObjDiff 3.8.0 verifies all 444 bytes at 100.0%, with all
10 operand targets checked. The candidate uses the same pinned clang-cl 19.1.4
compiler entry as `FUN_588DB610`. This verifies the isolated function body; it
does not establish a complete-client link or emulator runtime behavior.

The separate readable C++ normal-path model is
[`ShipMapRouteChildUpdate.cpp`](../src/client-current/semantic/ShipMapRouteChildUpdate.cpp),
with offset-named state and child records in its header. Its tests exercise all
four phase transitions, signed table bounds and null-record copies,
`index+2` record selection, coordinate wrapping, and recursive movement through
flagged descendants while traversing circular and null-terminated lists. The
model adds safe capacity guards around captured table and route-offset input;
the original checks the record count but directly indexes the route-offset
table. `FUN_587317E0` now has a direct normal-path model in the route updater,
including its signed index checks and 0x40-byte stride. Descendant movement
uses the readable normal-path port of `FUN_58902E10` in
[`ShipMapRouteDescendantMovement.cpp`](../src/client-current/semantic/ShipMapRouteDescendantMovement.cpp):
it adds the wrapped DWORD deltas to the selected node and recursively follows
its `+0x3C/+0x38` chain, recursing only when a node's `+0x24` flags contain
`0x2000`. This behavior follows the mapped 71-byte helper body. The model
assumes valid nodes and list shapes, and the semantic field names and coordinate
units remain unknown. Build and execute the native test from the repository
root with:

```powershell
rtk run python tools/verify_ship_map_route_child_update.py
```

This semantic model is not included in byte-match progress and has not been run
inside the game or emulator.
