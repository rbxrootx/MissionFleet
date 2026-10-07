# Current Main.dll linked-record collection refresh

This slice follows the installed client's already byte-matched
`FUN_587F8760` into a mapped-code collection refresh. At `0x587FAE98`, the
caller invokes byte-matched `FUN_58748BE0`; at `0x587FAE9D`, it moves that
result from EAX to ECX; and at `0x587FAE9F`, it calls `FUN_587487C0`. The call
is at the end of `FUN_587F8760`, after its writes to receiver offsets
`+0x430` and `+0x434` and the conditional `SaveFile_0001` helper path. The
meaning of that literal and the value returned by `FUN_58748BE0` remain
unresolved. The caller bytes and register setup were checked against the
captured mapped image and the caller's byte-identical catalog record.

Fresh Ghidra decompilation of `FUN_587487C0` shows it maintaining an indexed
collection described by begin/end/capacity-like fields at receiver indices
`+0x20` through `+0x34`. While walking those slots, it follows a global linked
list rooted through `0x58A247F8 + 0x0C`. Each list node supplies a candidate
name through `node + 0x12E8`, then `+0x6C`. It copies that name into temporary
key strings through `FUN_58735000`, then resolves them through the shared
lookup path rooted at `FUN_58748270`. It compares the returned two-word record
pair to the current collection key and examines the corresponding child slot.

When an entry is selected for insertion, the root allocates `0x818` bytes and
calls `FUN_587430A0` on the allocation. It also updates the current linked-list
node through `FUN_58743080` and `FUN_587477A0`. `FUN_5896BF30` selects whether
the new child is retained; the retained path appends it through
`FUN_588F6890`, which handles collection growth. Existing child entries are
released and their fields at `+0xEC`, `+0xF0`, and `+0xF4` are cleared as the
routine advances through the indexed slots. Ghidra shows bounded checks around
the collection pointers throughout the loop.

The shared lookup support is also in this slice. `FUN_587FF2B0` resolves a
record object, `FUN_58748110` bounds a length-aware key comparison, and
`FUN_58748020` compares the remaining bytes. `FUN_58748270` returns the
selected two-word pair or the receiver's existing pair. These are descriptions
of observed control flow and field accesses; they do not assign undocumented
C++ type or game-data names.

The complete direct-call closure has 17 functions / 4,646 bytes across 27
exact Ghidra body ranges. Each selected function is reachable from
`FUN_587487C0`; all 59 direct transfers leaving the slice target functions
already verified byte-identical, and no unresolved external transfer or body
gap remains.

| Function | Bytes | In-slice direct callees |
| --- | ---: | --- |
| `587430A0` | 18 | — |
| `58744740` | 304 | `587A13E0` |
| `58744BB0` | 361 | `58744740` |
| `58745070` | 802 | — |
| `58745F80` | 822 | `58745070` |
| `587477A0` | 66 | `58744BB0`, `58745F80` |
| `58748020` | 116 | — |
| `58748110` | 110 | `58748020` |
| `58748270` | 143 | `58748110`, `587FF2B0` |
| `587487C0` | 751 | `587430A0`, `587477A0`, `58748270`, `5896BF30` |
| `587A0910` | 28 | — |
| `587A0930` | 27 | — |
| `587A0CC0` | 655 | `587A0910`, `587A0930` |
| `587A1080` | 215 | `587A0CC0` |
| `587A13E0` | 82 | `587A1080` |
| `587FF2B0` | 140 | `58748020` |
| `5896BF30` | 6 | — |

The exact body ranges are preserved in
`config/NF2_2026/main-linked-record-collection-refresh-body-ranges.tsv`.
The generated instruction-stream sources passed objdiff 3.8.0 at 100.0% for
all 17 functions. The focused verifier also checks complete instruction
coverage, exact closure reachability, all 59 verified boundary transfers, and
the matched caller setup and call site. This is a byte-exact slice emitted
from the mapped capture, not a portable high-level rewrite. The linked-list
and collection types, key schema, `FUN_5896BF30` mode meaning, visible result,
and runtime effect are still unverified. No emulator test was run.
