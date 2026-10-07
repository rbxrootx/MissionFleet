# Current Main ship-map refresh helpers

These four helpers were selected from direct Ghidra call references in the
already byte-matched `CShip_MapObjectScreen` refresh `FUN_588DEB30`. Their
complete Ghidra bodies total **655 bytes** across four contiguous ranges.
ObjDiff 3.8.0 verifies all 655 bytes at 100%, including 25 mapped operand
checks.

| Function | Ghidra body range | Size | Call edge from `FUN_588DEB30` | Reconstructed behavior and limits |
| --- | --- | ---: | --- | --- |
| `FUN_588D6570` | `0x588D6570..0x588D65BF` | 80 | `0x588DEB95` | Normalizes counter `+0x6060` by the observed 0xE10 span, rounds and derives a value for `+0x605C`, then wraps values at 0x24. The units and field roles are unknown. Ghidra also records a call from `FUN_588D8080` at `0x588D8083`. |
| `FUN_588DCE90` | `0x588DCE90..0x588DCF49` | 186 | `0x588DEDB0` | Forwards a pair to `FUN_58903290` and `FUN_58749900`, then clears and updates paired fields under receiver `+0x6028` and writes the values to `+0x6044/+0x6048`. Receiver type and field semantics remain unknown. Ghidra also records two calls from `FUN_587A90D0`. |
| `FUN_588E6540` | `0x588E6540..0x588E6566` | 39 | `0x588DEE93` | If receiver `+0xCDC` is nonzero, multiplies two observed 16-bit values and stores the result at `+0xA60`. The input and output field meanings are unresolved. |
| `FUN_588E7480` | `0x588E7480..0x588E75DD` | 350 | `0x588DEE7F` | Searches 0x18-byte child records rooted at `+0x118` using the count encoded in `+0x48`, matches a key byte, and copies two encoded record bytes into receiver tables at `+0xAC0/+0xAC2`. A nonzero third argument and successful `FUN_58778F30` lookup trigger four rendering/update helper calls. The record schema and visible effects are unknown. |

The caller addresses and all seven direct edges across this refresh path are
checked by [`verify_current_ship_map_vtable.py`](../tools/verify_current_ship_map_vtable.py),
which also confirms that each call lies inside a byte-matched caller body.
These checks establish static code identity and call ownership; no emulator
runtime or client-visual test has been run for these helpers.
