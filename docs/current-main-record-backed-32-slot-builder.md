# Current Main record-backed 32-slot builder

The installed FleetMission `Main.dll` maps this routine at `0x587A6220`.
Ghidra reports three body ranges totaling 2,951 bytes:
`0x587A6220..0x587A62F9`, `0x587A6300..0x587A6397`, and
`0x587A63A0..0x587A6DB4`.

## Behavior supported by the original code

The sole direct caller recorded by Ghidra is now byte-matched handler
`FUN_58807910`. Before calling this routine, it selects the pointer stored at
`DAT_58A247F8+0x10` and writes it to `DAT_58A247F8+4`. The selected pointer
determines the routine's main path. If it is null, the function mirrors the
current byte at `param_1+0x93` to the 16-bit field at `param_1+0x90`. Otherwise
it clears 32 pointer slots beginning at `param_1+8` and walks 32 selected-record
entries. The caller's packet/event route and record-walk evidence are described
in [the 0x80020113 handler notes](current-main-80020113-state-record-handler.md).

For entries with the observed discriminator `0x05`, the function copies a
`0x2D`-dword record into local storage, requests a `0x24508`-byte block through
`FUN_5897CC4E`, and initializes it through `FUN_587B3AE0`. For discriminator
`0x06`, it copies `0x2A` dwords, requests a `0x3A5C`-byte block through the same
helper, and initializes it through `FUN_587B58F0`. Both branches then call
additional helpers and populate the corresponding pointer slot. Arithmetic
branches adjust copied values using fields in the record and a mode value at
`DAT_58A245A8+0x204`.

A second 32-entry pass applies fields to each non-null result, including values
from the selected record, coordinate helpers, and special handling for the
observed discriminators. It sets bits `0x10` or `0x20` in the byte at
`param_1+0x93`, then stores that byte as a 16-bit value at `param_1+0x90`.
The coordinate normalization helper called at `0x587A6B98` is now matched and
documented in [its helper notes](current-main-child-coordinate-normalization.md).

The source preserves the instructions from those exact three Ghidra ranges and
was compared against the pinned mapped image with ObjDiff 3.8.0. Local analysis
artifacts include the decompilation at
`var/current-main-next/587a6220-ghidra.c`, its range/caller logs, and the
caller decompilation at `var/current-main-next/58807910-ghidra.c`.

## Unresolved details

Ghidra does not establish what the `0x05` and `0x06` record types represent,
the semantic names or units of copied/scaled fields, or the ownership and
lifetime of the allocated blocks. The identity of the owning class for
`param_1` is also unknown. This byte match verifies emitted machine code; no
emulator runtime test was performed.
