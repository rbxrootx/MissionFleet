# Current Main control-menu update helper branch

`FUN_587E0E40` is reached from the already verified control-menu state path.
Its instruction source records the exact callsites, receiver setup, and stack
arguments for eight previously unmatched direct callees. Ten functions in
total now match the captured mapped `Main.dll`: those eight direct callees and
two nested helpers. ObjDiff 3.8.0 verifies 1,063 bytes and 25 mapped relocation
targets at 100%.

| Function | Bytes | Evidence from the original callsites |
| --- | ---: | --- |
| `5876CF90` | 60 | Parent loads `[esi + 0xA8]` into `ecx` before calling. |
| `5875DD20` | 114 | Repeated calls use child fields `[esi + 0x58C]` and `[esi + 0x590]`, with mode arguments `1` or `7`. |
| `5876D1E0` | 333 | Called twice after preparing the receiver and three stack arguments. |
| `5877EAA0` | 54 | Called twice with a prepared receiver and object arguments. |
| `5876D040` | 83 | Called with child pointer `[esi + 0xD84]`. |
| `5876D800` | 118 | Also called with `[esi + 0xD84]`; this helper calls `5876D350`. |
| `5896FE40` | 3 | Two callsites pass six stack arguments; the matched body is `ret 0x18`. |
| `587D9070` | 126 | Called with `esi` and child value `[esi + 0xD78]`; this helper calls `587D8EF0`. |
| `5876D350` | 98 | Nested callee of `5876D800`. |
| `587D8EF0` | 74 | Nested callee of `587D9070`. |

These callsites and byte matches confirm the instruction flow and parameter
relationships. They do not identify the child types, mode names, or visible UI
effects. A depth-four recursive callgraph audit no longer reports unmatched
functions in this selected set; it still reports unmatched descendants under
neighboring helpers including `FUN_587DF580` and `FUN_588E8570`. Emulator
behavior remains untested.
