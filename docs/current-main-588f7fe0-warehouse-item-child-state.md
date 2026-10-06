# Current Main warehouse-item child-state method

`FUN_588F7FE0` is a 140-byte contiguous method at
`[0x588F7FE0, 0x588F806C)`. Ghidra's data-reference audit places it at slot
`+0x0C` of the RTTI-backed `CWarehouseItem` vtable at `0x589A20D4` and the
`CWarehouseItemForce` vtable at `0x589A210C`. A third reference at
`0x589A21E0` belongs to an unresolved table; no direct code callers are listed.

If receiver word `+0x24` has bit 2 set, the method walks the linked child list
rooted at `+0x3C`. For each entry it calls virtual slot `+0x0C`, following the
next link at child `+0x38` until it reaches the head. When receiver byte
`+0x98` is not 1, it tests `FUN_58731540(DAT_58A284C8+4)`. A successful test
dispatches child slot `+0x18` with mode 3 and the receiver counter at `+0x9C`,
then increments the counter. Otherwise, a nonzero counter dispatches mode 4
with value 0. The method clears the counter after this state handling.

The child roles, state-bit meaning, counter semantics, gate helper, global
state, and third vtable owner remain unknown. The exact 140-byte body matches
the installed Main.dll capture; emulator runtime behavior has not been tested.
