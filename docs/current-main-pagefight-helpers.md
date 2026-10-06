# Fight control-menu helper byte matches

These three unmatched callees were selected from the byte-matched
`CPageFightOn_ControlMenuScreen` method `FUN_587EF330`. Ghidra's call-reference
audit confirms the original direct call sites; each function was reconstructed
from its complete mapped extent using literal x86 instruction bytes.

`FUN_58894A60` is a 210-byte shared layout/state refresh helper at
`[0x58894A60,0x58894B32)`. The fight control-menu method calls it twice, at
`0x587EF714` and `0x587EF745`; Ghidra also records callers at `0x5878AE5B` and
`0x587E646C`. The body resets child and screen flags, copies position from a
parent field, derives width and height from `DAT_58A28520`, calls
`FUN_587B67A0`, dispatches through a child virtual method, and ends with a
virtual tail jump through the child at receiver `+0x500`.

`FUN_587EBA90` is a 541-byte helper called at `0x587EF7F8`. It clears two
0x38-byte records beginning at receiver `+0x21E80`, scans side-indexed entries,
allocates and fills value arrays through `FUN_587E6E80`, and saves maximum and
threshold-selected values. This is consistent with fight-side statistic
preparation, but the metric and field types have not been identified.

`FUN_5888CDF0` is a 13-byte `__thiscall` setter called at `0x587EF8E2` with
value 1. Its only operation is to store the argument at receiver `+0xBC` and
return with `ret 4`. Ghidra also records callers in other screen and menu
functions.

The verified identities, sizes, references, and byte matches are recorded in
`config/NF2_2026/client-verifications.json`. The mapped-image checks are
performed by the per-function objdiff verifier.

The screen-child types, geometry units, side-mask meaning, statistic metric,
and `+0xBC` field role remain unresolved. No runtime fight screen or layout
test has been performed.
