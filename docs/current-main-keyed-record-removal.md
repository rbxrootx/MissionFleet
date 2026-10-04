# Current Main.dll keyed 0x54-byte record removal

`FUN_58835A10` is a 278-byte routine in the hash-pinned mapped installed-client
`Main.dll`. Verified callers are packet/message dispatcher `FUN_587BB700` and
event dispatcher `FUN_588C1650`; both obtain the receiver from an object field
at `+0x160` and pass a record pointer. The complete corrected function extent
matches at 100% under objdiff, including all ten mapped operand targets.

The indexed inventory previously assigned this function 270 bytes, ending at
`0x58835B1E` inside the two-byte `xor eax,eax` instruction. The remaining
epilogue restores `EBX`, releases eight stack bytes, and returns with `ret 4` at
`0x58835B23`. The next function starts at `0x58835B30`; the ten bytes between
the return and that entry are `0xCC` padding. The function inventory and its
extent regression test now include the full body and exclude the padding.

The routine walks the receiver's entry range from `+0x19C` to `+0x1A0` in
0x54-byte steps, with pointer consistency checks against `+0x190`. It compares
the data beginning at entry `+0x2D` with the same offset in the input record,
using the callback at `0x5898C1A4`. A match causes every later 0x54-byte record
to shift down one slot via `rep movsd`; the end pointer at `+0x1A0` is reduced
by 0x54 and the function returns 1. No match returns 0. Pointer or range
invariant failures call `0x5897CC72`.

The receiver and record types, the meaning and encoding of the key bytes, the
callback's exact comparison contract, and the caller-visible meaning of the
return value remain unresolved. No runtime or emulator test was performed.
