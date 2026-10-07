# Current Main ship-map type-9 selected-entry transition

`FUN_58861F40` is the selected-entry transition helper reached from the exact
matched type-9 timer handler `FUN_588628D0`. Ghidra places the complete body in
one contiguous range, `[0x58861F40, 0x58862452)`, for 1,298 bytes and 376
instructions. The decompile and range/caller audit are saved under
`var/current-main-next/58861f40-ghidra.c` and
`var/current-main-next/58861f40-ghidra.log`.

At `0x58862BE7`, `FUN_588628D0` passes the current entry in ECX and the loop
index on the stack. Its countdown has reached zero, the paired counter is
nonzero, and it has just selected state 4 and set a latch. Ghidra lists three
additional direct callers at `0x587EE3C6`, `0x588625E9`, and `0x588631CD`; those
call paths have not been audited.

The helper stores the selected index at receiver `+0x11C`, clears an observed
`+0x478` field for entries in state `0x10`, then updates five child rows. It
toggles child visibility bits and copies six DWORDs from records in the global
resource table into row children. The selected row uses table offsets `+0x440`
and `+0x4C0`; other rows use indices derived from per-row ushort values. It
also refreshes children at `+0x72C`, `+0x744`, `+0x748`, `+0x754`, and `+0x758`
from table-backed data before calling `FUN_58860070(0)`.

The exact instruction stream is emitted from the captured mapped image using
Ghidra's body range, and the relocation audit records 33 mapped operand
targets. The verification catalog ties the function to the byte-matched
handler callsite. Field meanings, row/resource schemas, the helper's secondary
callers, and visible runtime effects remain uncertain. No emulator visual test
has been run.

After the selected child resources are refreshed, the transition calls
`FUN_58860070(0)` to route the selected row's state and resource; see the
[state/resource router notes](current-main-ship-map-state-resource-router.md).
