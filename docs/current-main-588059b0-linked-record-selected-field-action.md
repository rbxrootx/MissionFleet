# Current Main linked-record selected-field action at `0x588059B0`

The literal source at
[`FUN_588059b0.cpp`](../src/client-current/Main/FUN_588059b0.cpp) matches the
156-byte Ghidra body in two ranges: `[0x588059B0, 0x588059C7)` and
`[0x588059D0, 0x58805A55)`. The nine-byte gap between them is not part of the
function. ObjDiff verifies both segments and checks their mapped operands.

## Behavior visible in the original code

Ghidra decompiles this as a `__thiscall` with a receiver in ECX and stack
arguments of byte, word, and DWORD width. It walks the linked list rooted at
`[0x58A247F8+0x0C]` through each node's `+0x78` link. For each node whose byte
`+0x354` equals the first argument, it calls `FUN_588DB3A0(0, third_argument)`.
After the walk it calls `FUN_5878A160(second_argument)` and
`FUN_588DB3A0(1, (char)third_argument + 10)`.

It then compares the selected object's word at `+0x350` with the second
argument. On equality, it sets bit `0x4` in receiver DWORD `+0x78`, calls
`FUN_588A9240`, and returns. Otherwise, when the selected object's byte
`+0x354` equals the first argument, it calls `FUN_588A6680`.

The Ghidra reference dump found exactly two direct call sites. Verified queue
dispatcher [`FUN_588075e0`](current-main-588075e0-queue-dispatcher.md) calls it
for record ID `0x40` with local values `local_148`, `local_14c`, and zero.
Verified `FUN_58807910` calls it when bit `0x04000000` is set, passing the
selected object's byte `+0x354`, word `+0x350`, and one; that caller then calls
`FUN_588A9240` as well.

## Unresolved details

The selected-object and linked-node types, meanings of fields `+0x78`,
`+0x350`, and `+0x354`, argument domains, and helper side effects are unknown.
The callers establish the inputs and conditions, not the feature-level meaning
or visible result. No emulator runtime test has been performed.
