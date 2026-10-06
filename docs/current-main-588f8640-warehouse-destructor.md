# Current Main `CWarehouseItemForce` destructor path

This slice covers the class destructor body and its scalar-deleting-shaped
vtable wrapper. Ghidra ties both to `CWarehouseItemForce`; byte verification
checks the 470-byte body and the wrapper's full 30-byte mapped instruction
stream.

## Destructor body

`FUN_588F8640` spans `[0x588F8640, 0x588F8816)`: 470 contiguous bytes and 155
instructions. Its only direct code caller is `FUN_588F8820` at `0x588F8823`.
The body writes `CWarehouseItemForce::vftable` to the object, then conditionally
releases and clears 16 child pointers at receiver byte offsets `+0xAC`,
`+0xB0`, `+0xC0`, and `+0xCC` through `+0xFC`. Each child release dispatches
through virtual slot 0 with delete flag 1; one release also receives an extra
argument. The body calls `FUN_588F7C00` at `0x588F87FF`, restores the saved
exception-list state, and returns.

## Deleting wrapper and boundary correction

`FUN_588F8820` occupies slot `+0x00` in the RTTI-backed vtable at
`0x589A210C`. It calls the destructor body, tests bit 0 of its stack flag,
conditionally pushes `this` and calls `FUN_5897CC42`, then returns `this` with
`ret 4`.

Ghidra assigns 27 bytes to two ranges, `[0x588F8820, 0x588F8835)` and
`[0x588F8838, 0x588F883E)`. The mapped instructions include a reachable
`add esp, 4` at `0x588F8835` between those ranges and `ret 4` at `0x588F883B`.
Ghidra omitted the cleanup because it treats `FUN_5897CC42` as non-returning;
the six-byte target is an indirect jump through callback slot `0x5898C1F8`,
whose deallocation contract is unavailable. The match therefore covers the
complete 30-byte physical stream and records the cleanup and return.

The 16 child roles, ownership/deletion contract, effect of `FUN_588F7C00`, and
whether the external callback returns remain uncertain. No emulator runtime
test has been performed.
