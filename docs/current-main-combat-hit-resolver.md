# Current Main combat hit and damage resolver

Ghidra still labels `FUN_587efd60` generically. It reports a long
`__thiscall` signature and ten direct callers: `FUN_5873f020`,
`FUN_5875e430`, `FUN_58783c80`, `FUN_587a3370`, `FUN_587a4440`,
`FUN_588d4300`, `FUN_588d2db0`, `FUN_588f55c0`, `FUN_588f4db0`, and
`FUN_5875bd60`.

The optional diagnostic strings establish several inputs and branches without
requiring guessed names: a hit record includes source and target name fields,
position, a seed, and values labeled `AP`, `HE`, `Pi`, `Ms`, and `Ca`; the
routine selects `Torpe` versus `Shell` and `Curve` versus `Strgh`. It reads
target defense fields, applies state- and random-dependent defense and
penetration calculations, and has separate `Penetrated` and `Defenced`
paths. It then derives damage values, calls hit/effect helpers, updates
attacker/target counters and per-side statistics, and can emit retreat,
battle, and kill messages. The role description is based on the captured
format strings and observed reads, writes, branches, and calls; the combat
rules are not claimed to be completely recovered.

Ghidra assigns two body ranges: `587EFD60..587F1282` and
`587F1290..587F218B`, totaling the inventory's 9,247 bytes. Capstone decodes
all 13 bytes between them as alignment (`lea esp,[esp]` and `lea ebx,[ebx]`).

Both reconstructed source segments match the mapped client at 100.0% under
ObjDiff 3.8.0, with 534 mapped operands checked. Important unknowns remain:
most argument types and field meanings/units, full state and weapon semantics,
random-table behavior, helper contracts, and how the local calculation maps
to server outcomes. There has been no original-client or emulator battle
test; this is function-level byte evidence.
