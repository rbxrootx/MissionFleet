# Current Main state-16 child-entry refresh

`FUN_588A70F0` is a 216-byte helper called directly by byte-matched
[`FUN_587BB700`](../src/client-current/Main/FUN_587bb700.cpp) at
`0x587C0509`. Ghidra's reference dump and a scan of executable sections in the
installed mapped `Main.dll` find that single direct call. Its contiguous body
is `[0x588A70F0, 0x588A71C8)`, ending in `RET`, with three calls to the matched
`FUN_58903290` and one call to matched `FUN_58902CE0`.

## Behavior supported by the original code

The dispatcher calls this helper only when `[0x58A245A8]+0x204` equals
`0x10`. It loads ECX from `[0x58A245A8]+0x174` and pushes no stack arguments.
The call sits in observed message case `0x80021103`, inside the branch where
the event-record word at `+0x0A` equals 1, after `FUN_588A6C70` and
`FUN_588A6D60`.

The helper branches on receiver byte `+0x1DC`. If zero, it walks the eight
dword entries beginning at `+0x1BC` and calls `FUN_58903290` for each entry
with ECX equal to the entry pointer, second-level arguments `(selector, 8)`,
and selectors `0x101, 0x113, 0x125, 0x137, 0x151, 0x163, 0x175, 0x187` in
array order. If nonzero, it first walks entries `+0x1CC` through `+0x1D8` with
the first four selectors, then entries `+0x1BC` through `+0x1C8` with the
last four. The matched setter stores its supplied values at entry offsets
`+4/+8` and performs its recorded child update path.

After either branch, the helper ORs bit 0 into the word at the child pointer
stored at receiver `+0xD4`, offset `+0x24`; calls `FUN_58902CE0` on that child
with argument `0x100`; ORs `0xF` into the word at the child pointer stored at
receiver `+0x15C`, offset `+0x24`; and sets byte `+0x100` on that child to 1.
The matched `FUN_58902CE0` stores its argument at object offset `+0x28` and
walks the child chain under its observed flag condition.

## Unresolved details

The receiver/child types, meaning of byte `+0x1DC`, roles of the pointer
entries, and meanings of the selectors remain unknown. Callee-local mechanics
are supported by byte-matched functions, but the combined visible effect has
not been tested in the emulator.
