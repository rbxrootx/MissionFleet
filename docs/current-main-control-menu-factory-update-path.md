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

## Additional nested update helpers

The next two callgraph layers add 24 more exact matches totaling 6,140 bytes.
`588E75E0` is shared by two parents and `588EFDB0` by three; each shared body
was verified once while retaining each caller relationship.

| Address | Bytes | Parent evidence |
| --- | ---: | --- |
| `587799F0` | 70 | `FUN_588E7700` |
| `587799B0` | 50 | `FUN_588E7700` |
| `588E75E0` | 96 | `FUN_588E7700` and `FUN_587DAF90` |
| `5877B080` | 111 | `FUN_588E7700` |
| `588E7660` | 81 | `FUN_588E7700` |
| `588F0EE0` | 631 | `FUN_588F13B0` |
| `588F0BB0` | 808 | `FUN_588F13B0` |
| `588F07C0` | 996 | `FUN_588F13B0` |
| `589089E0` | 182 | `FUN_588F13B0` |
| `58908110` | 39 | `FUN_588F13B0` |
| `5877A9B0` | 284 | `FUN_588730F0` |
| `5877AAD0` | 206 | `FUN_588730F0` |
| `58873030` | 187 | `FUN_588730F0` |
| `587316C0` | 54 | `FUN_587DAF90` |
| `587DA650` | 189 | `FUN_587DAF90` |
| `589082B0` | 39 | `FUN_588EF5F0` |
| `588E67E0` | 403 | `FUN_588E6B60` |
| `58779C30` | 83 | `FUN_5877B080` |
| `588EFDB0` | 376 | Shared by `FUN_588F0EE0`, `FUN_588F0BB0`, and `FUN_588F07C0` |
| `588E6770` | 81 | `FUN_588E67E0` |
| `588E6680` | 193 | `FUN_588E67E0` |
| `588EF860` | 444 | `FUN_588EFDB0` |
| `588EF790` | 194 | `FUN_588EFDB0` |
| `588EF620` | 343 | `FUN_588EFDB0` |

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
| `589089E0` | 179 | 182 | `je 58908A8F` targets the completed `mov ecx, 0x80070057` error path and `jmp 58908A43`; `int3` padding follows at `58908A96`. |

These matches establish the machine instructions and parent/child argument
relationships. The next `FUN_58764D30` frontier adds 12 new functions (952
bytes), with 36 mapped operand targets checked. The callgraph audit ties the
new leaves to their callers: `0x589028C0`→`0x58791F30`, `0x58902800`→
`0x5878D590`, `0x58901DE0`→`0x58901A80`/`0x58901D30`,
`0x589016D0`→`0x5897D186`, `0x587353D0` and `0x58743B80`→`0x58735360`,
`0x58734C80`→`0x5897CC60`, and `0x58902440`→
`0x588F6660`, `0x5878D5F0`, `0x58792120`, `0x588995E0`,
`0x58735110`, `0x588996D0`, and `0x58748180`.

Three extents were corrected against decoded instructions and adjacent
functions. `FUN_58791F30` now spans 176 bytes through its cleanup handler and
`ret` at `0x58791FDF`; `FUN_588995E0` spans 178 bytes through its cleanup
handler and `ret` at `0x58899691`; `FUN_58748180` spans 38 bytes through the
previously truncated final store and `ret` at `0x587481A5`. Each corrected
candidate was rebuilt and passed objdiff byte comparison. One additional
candidate, `FUN_58901A80`, was rechecked as part of the frontier and was already
in the verified inventory.

The matches establish machine instructions and caller/callee relationships.
They do not identify the UI labels, object types, record schema, or visible
state changes. Other high-fan-out descendants and runtime behavior remain
unresolved and untested.
