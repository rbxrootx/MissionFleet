# Current Main selected-record status refresh

`FUN_58879FB0` is a 982-byte helper called by byte-matched
[`FUN_588A6410`](current-main-588a6410-indexed-record-state-refresh.md) at
`0x588A6463`. Ghidra reports two body ranges: `[0x58879FB0, 0x58879FF8)`
(72 bytes) and `[0x5887A000, 0x5887A38E)` (910 bytes). The 8-byte gap from
`0x58879FF8` through `0x58879FFF` is outside the function and excluded from
the reconstructed source.

## Behavior supported by the original code

The caller passes a selected-record index, values and a pointer from the
indexed table entry, and a flag that is set when the active object's byte
`+0x354` equals the index. The helper first calls `FUN_58879CC0()`. It loops
over the count at record `+0x84`, calling `FUN_589032E0()` with values derived
from record `+0x180`. When global state word `[0x58A245A8]+0x204` is 16 and
record byte `+0x100` is zero, it instead passes `0xFF` and `0x112`.

The helper sets bit 0 in ushort `+0x24` for objects referenced by the pointer
array at record `+0xE4` when that same state and byte condition holds; otherwise
it clears the bit. It copies 18 dwords from its third argument to record
`+0x88`, then stores its other arguments at `+0xD0`, `+0xD4`, `+0xD8`, `+0xDC`,
and `+0xE0`.

It combines ten signed record bytes into seven display slots using this mapping:

| Input byte index | Slot |
| ---: | ---: |
| 0, 1 | 5 |
| 2 | 4 |
| 3 | 3 |
| 4, 5 | 2 |
| 6, 7 | 0 |
| 8 | 1 |
| 9 | 6 |

In state 16, it combines or clears auxiliary bytes at record `+0x92` and
`+0x9C`. If global byte `[0x58A245A8]+0x1BC` bit 0 is set and
`FUN_587AEE40(0xF4241)` returns an object whose `+0x6C` dword is nonzero, the
helper also adds bytes from the indexed 0x48-byte block at lookup result
`+0x19C + index*0x48`. It sends the folded values to `FUN_58907360()` and calls
`FUN_58902D20(-100)` for zero-valued fields. When its final flag is nonzero, it
maps the active object's field `[0x58A247F8+4]+0x100C+4`, masked with `0x1F`,
to a display slot, decrements that slot, and reports `-100` when the
corresponding object at record `+0x104 + slot*8` has a zero dword at `+100`.

The source emits the two original mapped body ranges as separate literal-byte
segments, records 45 mapped operand targets, and leaves the 8-byte gap out.
ObjDiff verification checks both segments independently.

## Unresolved details

The record and pointer-array types, semantic names for the ten input bytes and
seven slots, global state meaning, `0xF4241` lookup, and contracts of the value
and status setters remain unknown. Ghidra found one direct incoming reference;
indirect call paths are not ruled out. The argument prototype and state effects
have not been tested in the emulator.
