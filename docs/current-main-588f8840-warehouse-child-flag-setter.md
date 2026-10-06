# Current Main `CWarehouseItemForce` child flag setter

`FUN_588F8840` is a 47-byte virtual method with one contiguous Ghidra body,
`[0x588F8840, 0x588F886F)`, comprising 12 instructions. The mapped body and
Ghidra pseudocode agree on its effect: argument 0 sets bit 0 in the 16-bit
word at `([this + 0xC0] + 0x24)`, argument 1 clears that bit, and all other
values return without changing it.

The function pointer at `0x589A212C` occupies vtable slot `+0x20` in the
RTTI-backed `CWarehouseItemForce` table at `0x589A210C`. Ghidra found no direct
code callers or outgoing calls. This establishes the virtual method's class
and slot, but not its concrete dispatch path.

The source expresses the captured branches and 16-bit flag operations as inline
x86 mnemonics. A typed C++ version expressed the same flag effect, but clang-cl
changed the branch layout and narrowed the flag operations to byte writes, so
it did not byte-match. The inline-assembly version matches the installed
`Main.dll` body exactly.

The child control's semantic identity, the user-visible labels for arguments 0
and 1, and the runtime dispatch site remain unresolved. Emulator behavior has
not been tested.
