# `FUN_5873DAE0` initialization subsystem

`FUN_5873F020` loads its saved object pointer into `ECX` and calls
`FUN_5873DAE0` at source line 869. The 2,551-byte callee is fully decoded,
ends with `ret` at `0x5873E4D6`, and matches the mapped `Main.dll` bytes exactly;
66 mapped operand targets were checked.

The connected subtree adds 52 matched callees, for 53 functions and 14,321
bytes total. The evidence includes the existing 2,983-byte `FUN_5873CEE0`
initializer and its direct children, the state/range helpers, resource and
child setup paths, and the nested pointer-range helpers reached through
`FUN_588F6890` and `FUN_588F66E0`. Their direct call edges and argument setup
come from the matched instruction streams. Across the 53 functions, 296 mapped
operand targets were checked. A depth-eight callgraph audit records 158 indexed
edges and no unmatched indexed callees.

Five Ghidra extents ended before reachable epilogues. Each was extended only
through the observed final instruction; padding and the next indexed function
remain outside the body.

| Function | Indexed size | Verified size | Boundary evidence |
| --- | ---: | ---: | --- |
| `5877FAA0` | 432 | 435 | `ret 0x0C` at `0x5877FC50`; `int3` padding begins at `0x5877FC53`. |
| `5873BC90` | 78 | 81 | Reachable `jne` at `0x5873BCDE` falls through to `ret` at `0x5873BCE0`; padding begins at `0x5873BCE1`. |
| `5878A160` | 36 | 39 | `ret 4` at `0x5878A184`; padding begins at `0x5878A187`. |
| `5876C7E0` | 190 | 202 | The loop branch at `0x5876C89E` targets `0x5876C810`; the epilogue returns at `0x5876C8A9`. |
| `588F66E0` | 421 | 424 | `ret 0x10` at `0x588F6885`; padding begins at `0x588F6888`. |

All listed candidates were rebuilt and passed objdiff byte comparison. The
initializer's class identity, field and table meanings, resource roles, and
runtime visual behavior remain unresolved; no client runtime test was part of
this slice.
