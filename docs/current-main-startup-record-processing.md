# Current Main startup record-processing subtree

This pass closes the indexed direct-call subtree from `FUN_587AF6D0` through
`FUN_587AD4B0` to depth three. Nine newly matched functions add 1,141 bytes.
ObjDiff 3.8.0 reports 100% for each function and checks 21 mapped operands.
The call-graph audit finds no unmatched direct-call target within this depth.

The matched helpers and the behavior visible in their captured instructions are:

| Address | Bytes | Instruction-level behavior |
| --- | ---: | --- |
| `5897CEDA` | 6 | Jumps through import pointer slot `0x5898C298`; called twice from the `0x587AF6D0` 0x30-byte stride path. |
| `587AC9A0` | 498 | Allocates a 0xBC-byte object, performs nested allocation/setup, and recurses while linking data at offsets `+0xA0`, `+0xA4`, and `+0xA8`. |
| `587867E0` | 99 | Calls `58786750`, compares linked entries, conditionally invokes `5897CC72`, and stores a selected entry field at receiver `+8`. |
| `58786750` | 138 | Follows nodes through `+0x18`, `+4`, `+8`, and `+0xC`, checking byte `+0x15` and writing two selected values through output pointers. |
| `58786150` | 138 | Iterates the table at `0x360..0x3BC`, resolves each entry through `58778B20`, and updates one of six receiver words based on the returned type bits. |
| `58786250` | 5 | Returns the receiver's 16-bit field at `+0x3E`. |
| `58778D00` | 81 | For query type 5, scans `+0x78` using count `+0x6C` and 0xB4-byte records; compares record bytes/word at `+1` and `+2`. |
| `58779780` | 62 | Scans `+0x64` using count `+0x58` and 0x9C-byte records, matching the word at record `+6`. |
| `587797C0` | 114 | Resolves a record through `58778D00`, then scans `+0xE4` using count `+0xF0` and 0xAC-byte entries, comparing word `+0xA2` and a low-nibble condition from byte `+0x9B`. |

The direct callers and exact instruction ranges are recorded in the match
evidence alongside each source file. The record schemas, import target, node
ownership, selector meanings, and receiver class identities remain unresolved.
This establishes byte identity and indexed direct-call coverage only; it does
not establish that the client runs or renders correctly.
