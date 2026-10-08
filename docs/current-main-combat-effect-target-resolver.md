# Current Main combat-effect target resolver

This slice contains the target/range resolver called by the byte-matched
combat-effect update, plus its two previously unmatched direct helpers:

| Function | Exact body | Instructions | Caller evidence |
| --- | ---: | ---: | --- |
| `FUN_588F4B10` | `[0x588F4B10,0x588F4DA6)` / 662 bytes | 181 | Matched `FUN_588F55C0` at `0x588F5980` |
| `FUN_588DB040` | `[0x588DB040,0x588DB04A)` / 10 bytes | 3 | `FUN_588F4B10` at `0x588F4BFC` and `0x588F4C31` |
| `FUN_587E5FE0` | `[0x587E5FE0,0x587E6001)` / 33 bytes | 7 | `FUN_588F4B10` at `0x588F4C2A` |

A fresh read-only Ghidra run against the installed `Main.unpacked.dll` confirms
the three exact bodies, instruction coverage, all direct call sites, and the
matched updater's incoming call. The resolver's other direct callees
`FUN_588D66E0`, `FUN_588D6960`, and `FUN_588EC100` already have byte-identical
catalog entries. Thus the resolver's five direct callees are all represented
by matched code after this slice lands.

## Behavior supported by the original code

`FUN_588F4B10` squares a receiver value at offset `0x184`, capped at 60, then
walks the object list rooted at `DAT_58A247F8+0x0C`. For each candidate it calls
`FUN_588D66E0`. When that returns `0x40000000`, it checks the two receiver and
candidate coordinates through `FUN_588D6960`; an accepted candidate's pointer
and identifier are stored at receiver offsets `0x3F8` and `0x14C`. A field at
candidate offset `0x164` and a kind value reached through candidate offset
`0x100C` determine whether the observed result is 1 or 3.

For the other query result, it computes `dx² + 1.4*dy²`, ignores candidates
whose field at `+0x164` is 6 for the nearest-distance comparison, and retains
the smallest value. `FUN_588DB040` returns the square of the current candidate's
field at `+0xDC4`; the callsites load that candidate into ECX before calling the
helper, so the squared field is compared with its own weighted squared distance.
The resolver sets flag bit 0 at its receiver offset `+0x24` on the qualifying
path. For one global-object match it loads `[DAT_58A2459C]` into ECX and calls
`FUN_587E5FE0(1)`. That helper sets a bit through the global object's
`+0x10BC0` child and writes 100 at `+0x10BC4`. A later qualifying path emits
`(0x20, 0x81, 0)` through matched `FUN_588EC100`. The resolver can return status
2 after its range-threshold check; matched caller `FUN_588F55C0` handles
statuses 1/3 and 2 on separate branches.

The C++ candidates preserve the mapped instruction bytes in exact Ghidra body
ranges. The behavior summary above is based on the fresh Ghidra decompilation
and call/reference exports, not inferred from the emitted bytes alone.

## Unresolved details

The object types, ownership of the global list, field meanings and units,
`0x40000000` sentinel meaning, classification field at `+0x354`, and policy
behind statuses 1/2/3 remain unidentified. The relationship between the
object pointed to by `DAT_58A2459C` and the candidate list is unknown. Fresh
Ghidra also shows a separate
incoming call to `FUN_588DB040` from unverified `FUN_587A3170` at
`0x587A3254`; that caller is outside this slice. No runtime client or emulator
test was performed.
