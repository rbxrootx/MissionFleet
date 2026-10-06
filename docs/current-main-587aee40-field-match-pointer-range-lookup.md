# Current Main field-match pointer-range lookup at `0x587AEE40`

The literal source at
[`FUN_587aee40.cpp`](../src/client-current/Main/FUN_587aee40.cpp) matches the
162-byte contiguous function extent `[0x587AEE40, 0x587AEEE2)`, including nine
checked relocations. The x86 body receives an ECX pointer, takes one stack
argument, and returns with `ret 4`.

## Behavior visible in the original code

The function reads receiver fields `+0x04`, `+0x10`, and `+0x14`, then walks
the pointer range from `+0x10` up to `+0x14` in four-byte increments. For each
slot it loads the pointed-to object and compares that object's dword at `+0x50`
with the stack argument. It returns the matching object pointer, or null when
the range ends without a match. The body calls matched import thunk
`FUN_5897CC72` when its pointer/range checks fail.

In the matched state gate `FUN_58807E80`, states 4, 5, and 10 call this helper
three times at `0x58807EC1`, `0x58807F77`, and `0x58807FA8`, with ECX from
global `0x58A24828` and argument `0xF4241`, when bit 0 of byte
`[0x58A245A8+0x1BC]` is set. The caller ignores the returned pointer and then
continues to its state-threshold check. Ghidra decomp outputs also show calls
from unmatched `FUN_587AF8F0` with argument 1,000,000 and unmatched
`FUN_58804A40` with `local_218[0x10]`; these observations are not a complete
independent xref audit.

## Unresolved details

The receiver's container type, meanings of its pointer fields and element
`+0x50`, and the imported thunk's runtime behavior are unknown. No emulator
runtime test has been performed.
