# Current Main child/link-list primitives

Two direct support functions of the verified 32-slot child updater
`FUN_5877C660` now match their complete `Main.dll` extents: `FUN_5877B130`
(147 bytes) and `FUN_587C4250` (69 bytes). ObjDiff 3.8.0 checks all four
relocated operands in the first method; the second has none.

`FUN_5877B130` calls the allocator `0x5897CC4E` for a 0x14-byte node. The
observed paths write `0x5899688C` at node `+0`, clear its link/reserved fields
at `+4`, `+8`, and `+0x10`, store the supplied pointer at `+0x0C`, and append
through receiver fields `+4` and `+8`, updating the receiver's `+0x0C` count.
These offsets behave as head, tail, and count in the observed paths; the
collection type and ownership contract are unknown.
It is called twice by the child updater at `0x5877C6A1` and `0x5877C80D` and
twice by the verified `CForce` child factory `FUN_588F43F0`, at `0x588F4450`
and `0x588F4492`. The factory's allocation and constructor evidence is in
[`the CForce notes`](current-main-force-constructor.md).

`FUN_587C4250` removes a nonnull linked entry by repairing its neighboring
`+4`/`+8` links or the receiver's head/tail fields, calls the entry's first
virtual slot with argument 1, and decrements the receiver's `+0x0C` count. It is
called by `FUN_5877C660` at `0x5877C795` and twice by the verified linked-entry
hit dispatcher `FUN_587C4450`; its loop and conditional caller evidence is in
[`the dispatch notes`](current-main-linked-entry-hit-dispatch.md).

The allocator/list/node types, literal at node `+0`, ownership rules, virtual
callback contract, and gameplay meaning of these links remain unverified. The
two helpers serve different observed call paths; identical collection semantics
are not established. The functions
are exact instruction matches; no emulator runtime test was performed.
