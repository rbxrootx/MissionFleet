# Current Main warehouse-item vtable tail-jump and return slots

Ghidra's references from the RTTI-backed `CWarehouseItem` vtable at
`0x589A20D4` place `FUN_5897CE32` in slots `+0x1C` and `+0x20` (references at
`0x589A20F0` and `0x589A20F4`). Its six-byte body at
`[0x5897CE32, 0x5897CE38)` is one instruction, `jmp dword ptr [0x5898C248]`.
The RTTI-backed `CWarehouseItemForce` vtable overrides those slots. Ghidra
records no direct code callers; other references to the thunk are in tables
whose owners remain unresolved.

`FUN_588F7D30` is a five-byte method at `[0x588F7D30, 0x588F7D35)`, fully
covered by `mov al, 1; ret 4`. Its references identify slot `+0x24` in both the
RTTI-backed `CWarehouseItem` vtable (`0x589A20F8`) and
`CWarehouseItemForce` vtable (`0x589A2130`). The instruction sets AL to 1 and
returns while removing four stack bytes; it does not establish the upper bits
of EAX. Ghidra lists no direct code callers.

Both bodies were emitted from the pinned mapped `Main.dll` and verified
byte-for-byte. The tail-jump pointer's destination, both virtual contracts,
other table owners, concrete dispatch sites, and emulator behavior remain
unknown.
