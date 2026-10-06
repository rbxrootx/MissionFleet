# Current Main warehouse-item virtual message handler

`FUN_588F7EF0` is a 228-byte contiguous virtual method body at
`[0x588F7EF0, 0x588F7FD4)`. Ghidra's data references place it at slot `+0x10`
of the RTTI-backed `CWarehouseItem` vtable at `0x589A20D4` and the
`CWarehouseItemForce` vtable at `0x589A210C`. A third vtable reference at
`0x589A21E4` has an unresolved owner; Ghidra reports no direct code callers.

When the receiver's word at `+0x24` has bit 1 set, the method walks the child
structure rooted at `+0x3C`, repeatedly calling each child's virtual slot
`+0x10` with the message record. A null child returns 0. It then reads a
message ID at record `+4`: ID `0x200` may call `FUN_58903290` when receiver byte
`+0x98` is 1; ID `0x201` requires `FUN_58731540(DAT_58A284C8+4)` to return 1,
then dispatches slot `+0x18` on the child at receiver `+0x30`. The callback
`DAT_5898C3E8(0x11)` selects a value passed to that child method. Remaining
paths return the value stored at receiver `+0x34`.

The IDs' meanings, child-list and receiver-field roles, global state schema,
callback contract, and third vtable owner remain unresolved. The full 228-byte
body matches the installed Main.dll capture; virtual dispatch and visible
runtime behavior have not been exercised in the emulator.
