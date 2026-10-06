# Current Main `CWarehouseItem` destructor body

`FUN_588F7C00` is the 254-byte destructor body installed by the RTTI-backed
`CWarehouseItem` vtable at `0x589A20D4`. That vtable's slot `+0x00` points to
`FUN_588F7D40`, whose direct call at `0x588F7D43` enters this body. Ghidra also
records direct calls from `FUN_588F8640` at `0x588F87FF` and `FUN_588FAFB0` at
`0x588FB00C`; four additional references are from exception/unwind helpers.

Ghidra assigns one contiguous 254-byte function body,
`[0x588F7C00, 0x588F7CFE)`, and decompiles the complete range. The body installs
`CWarehouseItem::vftable`, then
conditionally releases and clears seven child pointers at receiver byte
offsets `+0xA0`, `+0xA4`, `+0xA8`, `+0xAC`, `+0xB0`, `+0xB4`, and `+0xB8` through
each child's virtual slot 0 with delete flag 1. At the first virtual call, the
frame's security-cookie local also occupies the next stack argument position;
whether the child destructor consumes it is unresolved. The body calls
`FUN_58902C10` with the receiver in ECX, restores the saved exception-list
state, and returns.

The seven child roles and ownership rules, the helper's effects, and emulator
runtime behavior are unresolved. The class attribution is based on the vtable
installed by the body and its RTTI-backed deleting wrapper; exact bytes are
verified against the pinned installed-client capture, but the destructor path
has not been exercised in the emulator.
