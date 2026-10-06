# Current Main ship-map helper paths

These helpers were selected from direct Ghidra call references in the
RTTI-backed `CShip_MapObjectScreen` methods. ObjDiff 3.8.0 verifies all three
against the captured mapped client at 100%: 4,033 bytes and 167 relocation
operands in total.

| Helper | Owned Ghidra ranges | Size | Exact caller edge | Evidence and limits |
| --- | --- | ---: | --- | --- |
| `FUN_588DD520` | `0x588DD520..0x588DD779`, `0x588DD780..0x588DD92C`, `0x588DD930..0x588DD9B9`, `0x588DD9C0..0x588DDA57` | 1,321 | `FUN_588E5150` calls it at `0x588E5674` | Branches on object field `+0x164`, adjusts values across grouped children, and routes modes 3/6 through `FUN_587315F0`. The mode and child-value meanings remain unresolved. |
| `FUN_588DE620` | `0x588DE620..0x588DEB20` | 1,281 | `FUN_588E5150` calls it at `0x588E63B4` | Walks map-object and grouped-record lists, applies state/allegiance filters and threshold calculations, then conditionally dispatches record slot `+0x18`. Record schema and runtime visual effect remain unknown. |
| `FUN_588DF9B0` | `0x588DF9B0..0x588DFD6E`, `0x588DFD74..0x588DFD8B`, `0x588DFD95..0x588DFDA4`, `0x588DFDAE..0x588DFF3F`, `0x588DFF43..0x588DFF60` | 1,431 | `FUN_588E0240` calls it at `0x588E0243` | Reinstalls the class vtable and clears/releases child pointers and arrays, with state-dependent cleanup for `0x40000`, `0x50000`, and `0x60000`. External callback `FUN_5897CC42` and runtime destruction behavior remain unverified. |

The `E8 rel32` call edges and each helper's byte-match record are checked by
[`verify_current_ship_map_vtable.py`](../tools/verify_current_ship_map_vtable.py).
This confirms static ownership and the direct call graph; no emulator runtime
or client-visual test has been performed for these paths.
