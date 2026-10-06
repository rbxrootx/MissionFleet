# Current Main gated child-state refresh

`FUN_588A6E30` is a 312-byte helper called directly by byte-matched
[`FUN_5888D390`](../src/client-current/Main/FUN_5888d390.cpp) at
`0x5888D52C`. Ghidra's reference dump and a Capstone scan of executable
`.text` inventory ranges find that single direct call. The body is one
contiguous range, `[0x588A6E30, 0x588A6F68)`.

## Behavior supported by the original code

The caller reads `[0x58A245A8]+0x204`, proceeds when that word is 8 or 9, loads
ECX from `[0x58A245A8]+0x174`, and pushes no stack argument.

The helper initializes receiver dword `+0xAC` to 0. It continues only when
`(word at receiver +0x24 & 0x1F00) == 0x0200`, then calls matched
`FUN_588EB130` with ECX=`0x58A24810`. A zero result stores 1 at `+0xAC` and
returns. For a nonzero result, it selects children from the global object at
`0x58A246D8`. If its `+0x170` dword exceeds 2 and `+0x194` is nonzero, the
child at `+8` is passed in ECX to matched `FUN_58907990` with stack value
`0x58A248F8`, then its vtable slot `+4` is called with argument 0. If `+0x170`
exceeds 7, the equivalent operations use the child at `+0x1C` and stack value
`0x58A248FC`.

The helper then calls matched `FUN_587B9600` with receiver words `+0x96` and
`+0x94` as its two stack arguments. That matched wrapper sends fixed code
`0x80010019`. The helper clears the low four bits of the word at child
`+0x194 + 0x24`, restores ESI, and tail-jumps through the child at `+0x188`,
vtable slot `+8`. Ghidra models the final indirect jump as a call/return; the
mapped bytes show `pop esi; jmp eax`.

## Unresolved details

The meaning of the `0x200` flag test, receiver field `+0xAC`, global child
counts and indices, and indirect vtable contracts remain unknown. When the
global child-count or pointer guards fail, the machine code zeros ECX before
the following indirect slot call; the invariant that prevents a null
dereference is not established. No emulator runtime test has been performed.
