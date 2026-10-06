# Current Main conditional child refresh

`FUN_588A6C70` is an 86-byte helper called directly by byte-matched
[`FUN_587BB700`](../src/client-current/Main/FUN_587bb700.cpp) at
`0x587C04DE`. A scan of the installed mapped `Main.dll` and Ghidra's reference
dump both find that single direct call. The callee body is one contiguous
range, `[0x588A6C70, 0x588A6CC6)`, and contains one absolute operand targeting
`0x58A247F8`.

## Behavior supported by the original code

At the call site, the dispatcher loads ECX from `[0x58A245A8]+0x174` and pushes
no stack arguments. The call occurs in the observed event-record branch where
the word at `+0x0A` equals 1; the dispatcher calls `FUN_588A6D60` afterward.

The helper reads dword `+0x6074` from the object at `[0x58A247F8]+4`. When that
dword is nonzero, it calls vtable slot `+8` on receiver child `+0x1A8`, then
slot `+4` on child `+0x1AC`, then slot `+4` on child `+0x18C`. It always calls
slot `+8` on child `+0x198`, then restores ESI and tail-jumps through slot
`+8` on child `+0x19C`. The final `pop esi; jmp eax` is retained literally;
Ghidra's pseudocode models that indirect transfer as a call and return.

## Unresolved details

The record and child types, meaning of field `+0x6074`, event semantics, and
indirect method contracts and effects remain unknown. The direct caller is
byte-matched, but no emulator runtime test has been performed.
