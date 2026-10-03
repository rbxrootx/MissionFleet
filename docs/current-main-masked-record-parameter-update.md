# Current Main masked record parameter updater

`FUN_5880d270` occupies 2,724 bytes in two discontiguous ranges in the captured
current-client `Main.dll`. The source keeps each Ghidra-owned range separate
and excludes the unowned gap. ObjDiff 3.8.0 matches both ranges and checks 74
mapped operands.

## Evidence from the original code

Ghidra reports a direct call at `0x5880FC28` from `FUN_5880fc20`, which passes
an object at `param_1 + 0x6E4`; `FUN_5880fc50` calls that wrapper at
`0x5880FDEB`. This updater XOR-decodes selected DWORDs with `0xAAAAAAAA`, reads
a mode value at `DAT_58A2459C + 0x105F0` and a five-bit subtype from an object
reached through `DAT_58A247F8`, then applies mode-dependent integer percentage
factors to fields at offsets `0x108`, `0x10C`, `0x124`, `0x12C`, and `0x138`.
It calls helper routines, clamps selected fields to calculated limits,
re-encodes fields, and calculates a byte-sum field over a 0x71-iteration loop
before calling `FUN_5875b3f0`. These operations are visible in Ghidra's
pseudocode and are preserved in the matched original ranges.

## Uncertainties

The record's class, field names, mode and subtype meanings, helper semantics,
caller lifecycle, and effect on visible or gameplay behavior have not been
established. The source is an exact machine-code representation of the captured
ranges; this match alone does not establish a readable high-level port. No
emulator/runtime test was performed.
