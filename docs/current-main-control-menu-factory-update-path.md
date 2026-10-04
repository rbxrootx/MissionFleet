# Current Main control-menu factory update path

`FUN_587DF580` is called by `FUN_587E0E40` inside the verified control-menu
update path. Its direct-call audit found fourteen unmatched helpers. Tracing
those callees uncovered twenty more unmatched helpers one and two levels below
them. All 34 functions now match the captured mapped `Main.dll` byte for byte:
20,339 bytes total, with 295 relocation entries checked.

## Direct callees of `FUN_587DF580`

| Address | Bytes | Original callsite evidence |
| --- | ---: | --- |
| `588E9260` | 77 | Receiver comes from `[esi + 0xD78]`. |
| `588ECEA0` | 2,217 | Receiver comes from `[esi + 0xDAC]`. |
| `588F2CF0` | 2,050 | Receiver comes from `[esi + 0xDBC]`. |
| `58873300` | 850 | Receiver is `[esi + 0xDB4]`; `[esi + 0xD78]` is also passed. |
| `5888AAC0` | 1,268 | Called through a nested receiver loaded from field `+0x78`. |
| `587D6520` | 268 | Four calls pass a word from `[+0xD78 + 0xCC0 + 0x1C]`. |
| `58734920` | 54 | Three calls prepare values for child fields `+0x340` and `+0x344`. |
| `587D7DC0` | 234 | Method receiver plus two stack arguments. |
| `587D9DB0` | 650 | Method receiver in a repeated update path. |
| `587DF010` | 1,379 | Method receiver in a loop/update path. |
| `587D8110` | 862 | Method receiver in a child construction/update path. |
| `587D6830` | 89 | Pushes `ebp` and passes the method receiver. |
| `587D8470` | 151 | Called after an indirect callback with the method receiver. |
| `587D9460` | 558 | Called immediately after `587D8470` with the method receiver. |

## Nested helpers

| Address | Bytes | Parent evidenced by the callgraph |
| --- | ---: | --- |
| `588E6A70` | 74 | `FUN_588E8570`, seven calls with a promoted word argument. |
| `588E7C10` | 2,385 | `FUN_588E8570`, after a floating-point stack pop. |
| `588E7700` | 1,289 | `FUN_588E9260`. |
| `5897D17A` | 6 | `FUN_588ECEA0`. |
| `5877E740` | 39 | `FUN_588ECEA0`, repeated record path. |
| `5877E770` | 38 | `FUN_588ECEA0`, repeated record path. |
| `587317E0` | 39 | `FUN_588ECEA0`. |
| `588F42F0` | 59 | `FUN_588ECEA0`. |
| `587D6C00` | 7 | `FUN_588ECEA0`. |
| `58908190` | 38 | `FUN_588F2CF0`, two calls. |
| `588F13B0` | 548 | `FUN_588F2CF0`. |
| `58908830` | 54 | `FUN_588F2CF0`. |
| `587E6E80` | 727 | `FUN_588F2CF0`. |
| `587D90F0` | 578 | `FUN_588F2CF0`. |
| `588730F0` | 519 | `FUN_58873300`. |
| `587DAF90` | 1,113 | `FUN_587DF010`, two calls. |
| `588EF5F0` | 11 | `FUN_587DF010`, five calls. |
| `5876BFA0` | 101 | `FUN_587D8110`, six calls. |
| `5874FCC0` | 15 | `FUN_587D8470`, five calls. |
| `588E6B60` | 1,992 | `FUN_588E7C10`. |

## Corrected function extents

Four old inventory extents ended inside reachable instructions. Their branch
targets, loop edges, and return sequences establish the corrected ends; the
next indexed function or padding follows each return.

| Function | Old size | Corrected size | Boundary evidence |
| --- | ---: | ---: | --- |
| `58873300` | 827 | 850 | The loop continues through `jne 58873620`; its cleanup ends with `ret 4` at `5887364F`. |
| `587DF010` | 1,361 | 1,379 | The loop back-edge targets `587DF560`; the complete epilogue returns at `587DF572`. |
| `587D8110` | 852 | 862 | The truncated near conditional at `587D8460` resolves to `jb 587D8160`; stack restoration ends at `ret` `587D846D`. |
| `588E6B60` | 1,985 | 1,992 | `je 588E7317` enters the alternate cleanup block, which returns at `588E7327`. |

These matches establish the machine instructions and parent/child argument
relationships. They do not identify the UI labels, object types, record schema,
or visible state changes. A depth-five audit still finds unmatched descendants
below several newly matched helpers, including the branches under
`FUN_588E7700`, `FUN_588F13B0`, `FUN_588730F0`, `FUN_587DAF90`, and
`FUN_58764D30`; those remain for later subsystem work. Runtime behavior remains
untested.
