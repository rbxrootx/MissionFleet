# Current Main.dll spatial-record processing

This slice follows a call from the byte-matched `FUN_588D4300`, whose RTTI-backed
virtual-table entry belongs to `CShell_MapObjectScreen`. Fresh Ghidra output
shows that caller invoking `FUN_587A5120` at `0x588D606C`. It builds a local
descriptor with tag `0x0B`, mode `2`, and sentinel `-1`, then passes that
descriptor with the shell's current position and range-related fields. The
mapped call instruction and its containing caller body are byte-verified.

`FUN_587A5120` accepts only tag `0x0B`, validates a pointer-backed candidate
range, and walks its entries. It checks object state `0x40000000`, compares
coordinate deltas against 50, then follows a radius-squared path when the
coordinate test does not pass. A candidate reaches `FUN_587A3F30`; successful
processing can dispatch tag `0x0B` through `FUN_588D6C90` and remove the current
entry through `FUN_58849980`. Matched `FUN_587A4440` also calls
`FUN_587A3370` at `0x587A4B4D` and `0x587A4CB0`.

`FUN_587A3370` walks a global object list, filters for state `0x40000000`,
excludes type 6 and the receiver's current target, checks proximity through
`FUN_5876C8D0`, and passes qualifying records to the byte-matched
`FUN_587EFD60` resolver. `FUN_587A3F30` derives a decrement from descriptor
fields, caps one input field at 2500, and subtracts the result from receiver
`+0x74`. It can allocate `0x11C`-byte records; its depletion path reaches
`FUN_587A3680`, which resets receiver state and refreshes related resources and
position data. `FUN_587A2F20` is the state predicate used by the root.

The complete direct-call closure contains five functions and 2,592 bytes in
five Ghidra body ranges. All five are reachable from `FUN_587A5120`; all 49
transfers leaving the closure target byte-verified functions, and the audit
found no unresolved target or body-coverage gap.

| Function | Bytes | In-slice direct callees |
| --- | ---: | --- |
| `587A2F20` | 16 | — |
| `587A3370` | 319 | — |
| `587A3680` | 585 | `587A3370` |
| `587A3F30` | 1,074 | `587A3680` |
| `587A5120` | 598 | `587A2F20`, `587A3F30` |

The exact ranges are recorded in
`config/NF2_2026/main-spatial-record-processing-body-ranges.tsv`. The emitted
instruction streams pass ObjDiff 3.8.0 at 100% for all five functions. The
focused verifier checks full instruction coverage, closure reachability, all 49
verified boundary transfers, the root call from the RTTI-identified shell-map
method, and both calls from the matched handler.

This is a byte-exact mapped-code slice emitted as native instruction bytes; it
does not recover the original readable source. The descriptor schema,
coordinate units, state names, resource/effect identities, and gameplay
semantics of tags `0x0B` and `0x0C` remain uncertain. No runtime or visual test
was run.
