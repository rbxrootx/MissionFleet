# Current Main lazy child initializer

`FUN_5878f990` is a 2,986-byte function in the installed, mapped `Main.dll`.
Ghidra reports one body range, `0x5878F990..0x58790539`. ObjDiff 3.8.0
verified every byte and checked 79 mapped operand records.

## Evidence from the original

Ghidra reports one data reference at `0x58996C30` and no direct code callers.
The target address holds this function pointer in a nearby table, but the
table's owner and dispatch contract have not been identified.

The function first calls `FUN_5878ae50` and `FUN_5878ad50`, then lazily creates
children when receiver slots are null. It allocates `0x84`-byte screen
children from checked resource entries at table offsets `+0x63C` and `+0x724`,
creates `0xAC`-byte controls through `FUN_5875dda0`, and builds repeated
sprite-backed entries from bounded shared tables. It iterates receiver-held
counts to update child data and flags. Near the end, it accesses
`SOFTWARE\FleetMission\FleetMissionCN` through host API function pointers,
checks a stored value against `0x20060413`, then calls `FUN_587c48f0`.

The allocations, field offsets, table bounds, registry path, comparison value,
and helper calls come from the Ghidra body. No broader UI role is inferred.

## Uncertainty and validation

The owning class, callback-table contract, child identities, count and record
schemas, registry value name, and visible behavior remain unknown. This is a
static byte match; no original-client runtime or visual test was performed.
