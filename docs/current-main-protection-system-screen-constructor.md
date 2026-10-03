# Current Main protection-system screen constructor

`FUN_58733360` occupies one Ghidra range, `0x58733360..0x58733E6B`, for 2,827
bytes in the pinned mapped `Main.dll`. The candidate source emits the decoded
instruction bytes from that mapped image. ObjDiff comparison against the
installed image determines whether this is accepted as a verified match.

## Evidence from the original client

Ghidra identifies the function's vtable assignment as
`C2ndProtectionSystemManager::vftable`. It calls the base initializer at
`0x589031A0`, writes object state and child pointers, and loads
`.\\SPR\\ITPNNMPD.spr` through the sprite loader at `0x588F3D70`.

The body constructs three groups of children: 11 records through
`FUN_58733280`, ten data-backed `CSpriteDataScreen` nodes, and multiple controls
through `FUN_5875DDA0`. It also creates three additional sprite-data nodes and
selects some child records conditionally from shared data-table bounds. The
constructor returns the initialized object. Ghidra reports a direct call from
`FUN_5878AF40` at `0x5878CA6C`; the caller's exact call bytes are preserved in
the already verified caller source.

## Uncertainties

The class name is supported by Ghidra's vtable label, but visible control names,
the meaning of each indexed record, and the user-facing meaning of
“protection-system” remain unconfirmed. Data-table schemas and runtime ownership
of each child are not recovered here. No live client or emulator screen test was
performed. This is a byte-identical reconstruction claim only after the recorded
compiler and ObjDiff checks pass; it does not establish screen behavior.
