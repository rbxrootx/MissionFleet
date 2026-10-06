# Current Main map-event record and screen-state initializer

`FUN_58804A40` is called by byte-verified `FUN_587BB700` at `0x587BCEC5`.
At that site ECX is loaded from `[0x58A245A8]` and three stack values are
passed. The caller is reached through a dispatch table with a data reference
at `0x5899A30C`. Ghidra reports one direct call to this function.

The body has three discontiguous ranges: `0x58804A40..0x58804DEB` (939 bytes),
`0x58804DF0..0x58804EDA` (234 bytes), and `0x58804EE0..0x58804FE5` (261 bytes),
for 1,434 instruction bytes. The 5-byte and 6-byte gaps are excluded
alignment. The final range includes the complete security-cookie call at
`0x58804FD7`, stack cleanup at `0x58804FDC`, and `ret 0x0C` at
`0x58804FE2`.

Ghidra's decompilation shows the function copying 49 dwords from its input
record to receiver `+0x180`, then applying mode and record-type branches to
update global state and screen controls. It derives an identifier and calls
the mapped, byte-verified [`FUN_58800360`](current-main-map-resource-initializer.md)
to initialize map or harbor resources. The type-7 path requests the localized
key `MESSAGESTRING__OPCONVOY__ROOM_TITLE`. Later loops update child/control
flags and positions and reset receiver fields.

The segmented source matches all 1,434 bytes against the installed `Main.dll`
capture with 43 mapped operand targets checked. This confirms the function
bytes only; it does not establish emulator runtime behavior.

The input record schema, mode and record-type meanings, global state fields,
eight-slot child/control layout, localized title conditions, and visible map
behavior remain unresolved. Several helpers' effects are known only through
their call sites.
