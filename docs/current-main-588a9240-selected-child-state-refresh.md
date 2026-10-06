# Current Main selected-child state refresh at `0x588A9240`

The literal source at
[`FUN_588a9240.cpp`](../src/client-current/Main/FUN_588a9240.cpp) covers the
188-byte contiguous function extent `[0x588A9240, 0x588A92FC)`. Its mapped
operand records are checked by the exact-match verifier.

## Behavior visible in the original code

Ghidra identifies one `__fastcall` parameter in ECX and no stack arguments.
The function sets dword `+0x68` on the child at receiver `+0x17C` to one, then
calls that child's vtable slot `+4`. When receiver word `+0x9C` is neither 8 nor
9, it conditionally selects `[0x58A246D8+0x194]+0x3C` in ECX if global dword
`+0x170` exceeds 15 and pointer `+0x194` is nonnull; otherwise it clears ECX.
It calls `FUN_58907990` with `[0x58A248F8]`, repeats the conditional selection,
and invokes the selected object's vtable slot `+4` with argument zero.

At the end, it clears dwords `+0x58` and `+0x50` on the object at receiver
`+0x154`, then stores the zero-extended byte `[0x58A247F8+4]+0x354` at child
`+0x58`.

Ghidra's direct-reference dump found two call sites, both in verified
functions. `FUN_588059B0` calls it at `0x58805A2D` after loading ECX from its
receiver's `+0x174` field when the selected object's word `+0x350` matches.
`FUN_58807910` calls it at `0x58807D1A`, also with ECX from receiver `+0x174`,
after its `0x04000000`-gated call to `FUN_588059B0`.

## Unresolved details

The receiver and child types, meanings of state values 8 and 9, global fields,
selected-object byte `+0x354`, and both vtable/helper contracts remain unknown.
The call sites tie it to selected-object updates but do not establish its
feature-level purpose or visible result. No emulator runtime test has been
performed.
