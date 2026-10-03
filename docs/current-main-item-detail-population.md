# Current Main item-detail population routine

`FUN_5879dd90` is a `__thiscall` routine that populates and refreshes the item
detail panel rendered by the already-matched `FUN_5879b3b0`. Its callers are
`FUN_587a0090` (`0x587A01C8`) and `FUN_587d8510` (`0x587D8576`). The first
builds records with a `0x14`-byte stride and passes category `1` plus their
count; the second forwards a category, a 16-bit count, and a record pointer.
The schema and field meanings of those records are not recovered.

The routine clears detail state and child-control flags, selects shared sprite
resources by category, walks records whose first byte matches the category,
performs category-specific data lookups, formats item fields, and constructs
text and control children. Categories `5` and `6` take separate selection
paths. When it has detail state to redraw, it invokes `FUN_5879b3b0`. The
no-usable-entry path sends the observed localized `Item Type Mismatch` message
through `FUN_5875f360`. Item stat units, most labels, purchase effects, and the
precise role of each child remain uncertain.

The Ghidra body has five ranges totaling 6,702 bytes:

- `5879DD90..5879E14C` (957 bytes)
- `5879E150..5879EE5C` (3,341 bytes)
- `5879EE60..5879F41C` (1,469 bytes)
- `5879F420..5879F47C` (93 bytes)
- `5879F480..5879F7C9` (842 bytes)

Each of the four three-byte gaps contains no Ghidra instruction or function
ownership; an unconditional jump skips to the next range. ObjDiff reports an
exact match for all 6,702 bytes and checks 214 mapped operands.

This match validates compiled bytes against the captured installed `Main.dll`.
It does not validate the item schema or panel appearance in the emulator.
