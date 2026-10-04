# Current Main fixed-step grid record lookup

`FUN_587C3D60` is a 97-byte helper directly called by five verified functions:
`FUN_5877EC80`, `FUN_58782CF0`, `FUN_587A4440`, `FUN_588D4300`, and
`FUN_588F55C0`. The first two contain repeated callsites. Their instructions
pass two values to the helper and test the returned pointer and its first
dword; this supports a lookup role but does not name the records.

The helper divides its first and second arguments by receiver fields `+0x1D78`
and `+0x1D7C`. It only proceeds when both divisors equal `0x12`. The resulting
indices must be nonnegative and less than the respective bounds at `+0x1D70`
and `+0x1D74`. A valid pair returns a pointer into the table at `+0x1DB4`,
calculated as `(second_index * first_bound + first_index) * 0x14`; all invalid
steps or indices return zero. The function consumes both stack arguments with
`ret 8`.

This is consistent with a fixed-step, two-dimensional record lookup, but the
coordinate units, dimension names, table owner, and record schema are
unresolved. The reconstruction at `src/client-current/Main/FUN_587c3d60.cpp`
matches the complete extent: objdiff 3.8.0 confirms 97/97 bytes with no
relocations. No original-client runtime test was performed.
