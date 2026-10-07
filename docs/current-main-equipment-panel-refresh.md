# Current Main.dll equipment and mine-count panel refresh

This slice follows the installed client's matched message dispatcher into
`FUN_588429F0`. Fresh Ghidra output places that call in
`FUN_588C4210`'s `0x8002312A` response branch. Case `0x8002312D` also reaches
the same label for some subtypes. At the call site `0x588C5A8C`, the captured
x86 first loads `[EDI+8]`, compares it with `1`, and skips the call unless it
equals one. It then loads `ECX` from global `0x58A245B4` followed by offset
`+0xDC`, and directly calls `FUN_588429F0`. The original caller is already
byte-verified, so both the branch and receiver setup are anchored to the
mapped client code.

The root changes state words at offsets `+0x50` on several receiver-linked
children, calls virtual slot `+8` on seven child pointers and virtual slot
`+4` on another, then stores a returned value at receiver `+0x170`. It rebuilds
three candidate tables, refreshes row state, and updates label/data helpers.
Ghidra's string references make the visible purpose more specific than the
raw offsets alone: `FUN_5882BA00` and `FUN_5882BBA0` format
`MESSAGESTRING__EQUIP_1`, `_EQUIP_2`, and `_EQUIP_3`; `FUN_5882D160` updates
`MESSAGESTRING__CURRENT_NUM_OF_MINE` and `MESSAGESTRING__MAX_NUM_OF_MINE`.

The mode-dependent routine `FUN_5882EAA0` branches on receiver byte `+0x188`
values 1 and 2. Each branch clears low-nibble flags on one child group, enables
the corresponding controls, updates paired `+0x50` fields, and refreshes the
matching equipment labels and item list. The candidate-list helpers
`FUN_5882C7E0`, `FUN_5882C940`, and `FUN_5882CA80` filter original global
records using selected keys, packed flags, and state fields; accepted entries
are written as 20-byte rows. The exact meanings of these selectors and packed
fields are still unknown.

The direct-transfer closure contains 23 functions / 5,086 bytes across 28
Ghidra body ranges. The table records each selected body and its direct callees
as seen in the fresh Ghidra reference dump; calls outside this closure target
already verified functions.

| Function | Bytes | Direct callees |
| --- | ---: | --- |
| `58786030` | 96 | — |
| `58786090` | 90 | — |
| `587860F0` | 90 | — |
| `58786340` | 112 | — |
| `587863C0` | 112 | — |
| `58786460` | 18 | — |
| `58786480` | 14 | — |
| `587864A0` | 14 | — |
| `5882B9F0` | 13 | — |
| `5882BA00` | 408 | `58778DC0`, `587860F0`, `587864A0`, `589081E0`, `589087F0`, `589088D0`, `5897CBDA`, `5897CC48` |
| `5882BBA0` | 328 | `58778DC0`, `587860F0`, `587864A0`, `589087F0`, `589088D0`, `5897CBDA`, `5897CC48` |
| `5882C310` | 176 | `58786090`, `587864A0`, `58908170` |
| `5882C3D0` | 178 | `587860F0`, `587864A0`, `58908170` |
| `5882C490` | 185 | `587860F0`, `587864A0`, `58908170` |
| `5882C7E0` | 341 | `58778B20`, `58786480` |
| `5882C940` | 307 | `58778D00`, `58786480`, `5897CC48` |
| `5882CA80` | 301 | `58778D00`, `58786480`, `5897CC48` |
| `5882CBC0` | 557 | `58778B20`, `58786090`, `58786150`, `58786250`, `587864A0`, `5882C310`, `58907360`, `589081E0`, `589087F0`, `589088D0`, `5897CBDA`, `5897CC48` |
| `5882CDF0` | 427 | `58778D00`, `587860F0`, `58786340`, `587863C0`, `587864A0`, `5882C3D0`, `58907360`, `589081E0`, `589087F0`, `589088D0`, `5897CBDA`, `5897CC48` |
| `5882CFA0` | 433 | `58778D00`, `587860F0`, `58786340`, `587863C0`, `587864A0`, `5882C490`, `58907360`, `589081E0`, `589087F0`, `589088D0`, `5897CBDA`, `5897CC48` |
| `5882D160` | 136 | `58731CE0`, `58786030`, `58786460`, `58907360` |
| `5882EAA0` | 471 | `587860F0`, `5882BA00`, `5882BBA0`, `5882CDF0`, `5882CFA0` |
| `588429F0` | 279 | `5882B9F0`, `5882C7E0`, `5882C940`, `5882CA80`, `5882CBC0`, `5882D160`, `5882EAA0`, `5882F0B0` |

The audit found 70 direct calls from this closure into verified functions, no
unresolved direct targets, and no gaps in Ghidra's body coverage. All 23
functions passed the pinned objdiff comparison at 100.0%; the focused verifier
also checks closure reachability, the 70 verified call boundaries, and the
matched caller's state gate and receiver setup.

This adds byte-exact instruction-level source, not a complete portable C++
reconstruction of the screen. The protocol response's user-facing meaning,
packed item-field semantics, owning class layout, and the seven dynamic virtual
call targets remain unresolved. No emulator or live-client test was run.
