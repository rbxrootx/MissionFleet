# Current Main control-record layout update

`FUN_588aefb0` has three Ghidra body ranges totaling 2,807 bytes:

| Ghidra range (inclusive) | Bytes |
| --- | ---: |
| `0x588AEFB0..0x588AF278` | 713 |
| `0x588AF280..0x588AF764` | 1,253 |
| `0x588AF770..0x588AFAB8` | 841 |

The 8-byte and 12-byte gaps are excluded from the source and comparison. ObjDiff
3.8.0 verifies all three ranges against the captured mapped image.

## Evidence from the original code

Ghidra assigns a `void __thiscall` signature but no class name. It reports direct
calls from `FUN_588b0870` at `0x588B08BB` and `FUN_5877a650` at `0x5877A6EF`.
Separately, the matched event dispatcher `FUN_587bb700` calls
`FUN_588b0870` for observed subcase 10 of event `0x80021034`.

The function copies `0x60` dwords from the supplied record into the receiver at
`+0xAC`, clears a child flag mask, selects bounded records from shared tables,
and writes selected pointers and copied fields into child objects. It calls
`FUN_58903290` repeatedly to update child positions. One loop processes 100
indexed entries; another processes up to eight entry slots. Branches based on
the supplied bytes and words select different record sources and child arrays.
All counts, offsets, and branches come from the original Ghidra body. ObjDiff
checks all 2,807 bytes and 62 mapped operand targets.

## Uncertainties

The receiver class, payload schema, record identities, coordinate units, and
visible meaning of the 100 indexed entries remain unknown. The second caller's
higher-level role and the resulting visual layout have not been established.
No emulator runtime or visual test was performed.
