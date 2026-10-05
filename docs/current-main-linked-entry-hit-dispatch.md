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

The Ghidra index originally recorded only 352 bytes, cutting off the final
`jne` at `0x587C45AE`. Control flow continues back to the loop at `0x587C4480`,
then reaches `ret 0x14` at `0x587C45B9`. The corrected extent ends at
`0x587C45BC`; the next function begins at `0x587C45C0`, with four `INT3` bytes
between them. `tests/test_current_main_extent.py` asserts that complete branch,
return, and padding boundary against the captured mapped image.
