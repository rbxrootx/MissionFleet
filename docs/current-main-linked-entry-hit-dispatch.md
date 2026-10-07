# Current Main.dll linked-entry hit dispatch

`FUN_587C4450` is a 364-byte routine in the hash-pinned mapped installed-client
`Main.dll`, directly called by verified functions `0x587A4440`, `0x588D4300`,
and `0x588F55C0`. The entire extent matches at 100% under objdiff, with all 13
mapped operand targets checked.

The routine walks linked entries rooted at receiver `+0x1DB8`, follows each
entry's `+8` link, and processes the object at entry `+0x0C` when its `+0xAC`
field is nonzero. It first invokes virtual slot `+0x18` with two stack
arguments. One successful path forwards six words from a record to
`0x5874A010` and invokes virtual slot `+0x24` when that helper succeeds. If the
virtual test fails, the routine computes squared coordinate differences,
compares their sum with the square of another argument, then on the in-range
branch calls `0x5897CC90`, `0x5897CCA0`, and `0x5876BF80` to derive values for a
second `0x5874A010` call. Success again invokes virtual slot `+0x24`. A
successful entry tagged `0x0B` may also call `0x588D6C90`; entries with object
field `+0xA4` set may be passed to `0x587C4250`. The tag helper's receiver
updates and byte match are documented in [the shell-map tag-counter notes](current-main-shell-map-tag-counter.md).
It returns with `ret 0x14`.

The receiver and entry types, meanings of the virtual slots and five stack
arguments, semantics of the record, and user-visible effect remain unknown.

## Verified update helper

The two calls to `FUN_5874A010` in this caller now match the installed image,
together with its four direct open helpers: `FUN_58749F50`, `FUN_58749F80`,
`FUN_58749FA0`, and `FUN_587E6480`. Fresh Ghidra reports one exact contiguous
body range per function: 1,466, 40, 29, 112, and 37 bytes respectively. All
five produce 1,684 byte-identical bytes under ObjDiff 3.8.0.

Ghidra shows the update root checking receiver state `+0x98`, selecting fields
from the receiver and arguments, and using an indexed shared table in its
amount calculation. It subtracts the resulting amount from receiver `+0x54`,
clamps at zero, updates `+0x98`, and calls other helpers. Under the state-2 and
second-object guards it changes fields `+0x128C` and `+0x1284` on that object
and calls the bookkeeping helpers. `FUN_58749F50` adds to a counter array at
`+0x20D88` and conditionally calls the number-state setter; `FUN_58749F80`
updates an XOR-encoded field at `+0x20DE8`; `FUN_58749FA0` updates one of eight
XOR-encoded slots at `+0x109F4` and may adjust child `+0x64`; `FUN_587E6480`
calls `FUN_58907360` twice with the same value.

[`verify_current_main_5874a010_update.py`](../tools/verify_current_main_5874a010_update.py)
checks both calls from byte-matched `FUN_587C4450`, the five fresh Ghidra
ranges, closure reachability, and all direct transfer boundaries. It also
checks known external callers of the shared helpers. The closure has 13 direct
transfers to seven already verified boundary functions and no unmatched
direct transfer.

The bookkeeping helpers are shared with other paths: `FUN_587E6480` is also
called by matched `FUN_5873F020` and `FUN_588DE620` and by open
`FUN_588D3390`; `FUN_58749FA0` is also called twice by matched `FUN_588DFFB0`.
The object classes, field units, random-table purpose, and exact gameplay
meaning remain unresolved. No runtime or emulator test was run.

The Ghidra index originally recorded only 352 bytes, cutting off the final
`jne` at `0x587C45AE`. Control flow continues back to the loop at `0x587C4480`,
then reaches `ret 0x14` at `0x587C45B9`. The corrected extent ends at
`0x587C45BC`; the next function begins at `0x587C45C0`, with four `INT3` bytes
between them. `tests/test_current_main_extent.py` asserts that complete branch,
return, and padding boundary against the captured mapped image.
