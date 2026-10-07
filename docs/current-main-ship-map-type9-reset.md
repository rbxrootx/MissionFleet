# Current Main ship-map type-9 child reset

The byte-matched `FUN_588DEB30` refresh selects `FUN_5885FC40` when the current
record's low five type bits equal 9. Ghidra records the direct call at
`0x588DF189`; the matched caller explicitly loads ECX from
`[0x58A245C4+0xA0]` and passes no stack arguments. It immediately calls the
already matched type-9 handler `FUN_588628D0` at `0x588DF19A`.

Ghidra assigns `FUN_5885FC40` two body ranges:

- `0x5885FC40..0x5885FCD6` (151 bytes)
- `0x5885FCE0..0x5885FDB5` (214 bytes)

The intervening 9 bytes are outside the Ghidra function body. ObjDiff 3.8.0
verifies the reconstructed 365-byte instruction stream at 100%, with 12
relocation operands checked.

The function copies the value at the current object's resource offset `+0x388`
into receiver `+0xB8`, initializes `+0xB4` to `0x7D` through
`FUN_587A15E0`, updates three child fields at `+0xEC`, `+0xE4`, and `+0xF4`,
then clears observed counters and flags. It resets five child rows, including
their state words and flag bits, calling `FUN_58793E00` for each row. When the
global table has at least `0x18` records and a nonnull data pointer, it takes
the record at offset `+0x5C0` and copies six DWORDs into the child at receiver
`+0x72C`.

The branch establishes the type-9 call path, but the child-row schema, counter
and flag meanings, resource identity, and downstream visual effects remain
unknown. No emulator runtime or visual test has been run for this branch.

The alternate non-type-9 branch has its own exact-match record and notes in
[non-type-9 reset](current-main-ship-map-nontype9-reset.md).
