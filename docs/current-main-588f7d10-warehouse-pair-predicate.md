# Current Main `CWarehouseItemForce` pair predicate

`FUN_588F7D10` is a 30-byte virtual method with one complete Ghidra body,
`[0x588F7D10, 0x588F7D2E)`, containing 10 instructions. It returns 1 exactly
when the byte at `this + 0x6A` equals its first 32-bit argument and the byte at
`this + 0x6B` equals its second 32-bit argument; otherwise it returns 0.

Ghidra's reference audit places the function at slot `+0x28` in the
RTTI-backed `CWarehouseItemForce` vtable at `0x589A210C`. It also finds a data
reference at `0x589A20FC` in a second static table whose owner is unresolved.
No direct code callers or outgoing calls were found, so neither virtual
dispatch path is traced.

The typed C++ comparison compiled to equivalent results but not the same
instruction sequence: clang-cl replaced the second conditional branch with
`sete`. The source therefore uses the Ghidra-verified x86 branches and return
sequence directly; the verifier confirms an exact byte match.

The meanings of the two receiver bytes and arguments remain unknown. This
function has not been exercised in the emulator.
