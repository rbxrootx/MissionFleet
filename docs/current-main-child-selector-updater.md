# Current Main.dll counted child selector updater: FUN_587A5A70

Verified `FUN_587A75E0` calls `FUN_587A5A70` at seven sites. The helper
branches on selector values including 4, 5, 6, 7, `0x14` and `0x15` and
walks a counted collection of child pointers reached through global
`0x58A247F8`. Its paths compare a supplied byte with per-child bytes at
active-object offsets `+0x1FC` and sometimes `+0x21C`, then conditionally
write child fields including `+0x108` and `+0x124`. Return paths derive a
word from receiver state at `+0x90/+0x92`.

The indexed Ghidra extent ended at `0x587A6177` immediately before live
instructions. The mapped bytes continue for 21 bytes through a shared
`ret 8` at `0x587A6189`; four `INT3` alignment bytes follow. The complete
callable body is **1,820 bytes**. It decodes without gaps, and the rebuilt
body matches the installed `Main.dll` byte for byte under objdiff 3.8.0,
with all 53 mapped operand targets checked.

The selector and child types, per-child byte schema, mutation meanings and
user-visible effect remain unresolved. No runtime client test was performed.
