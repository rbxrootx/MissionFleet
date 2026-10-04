# Current Main.dll bulk pointer cleanup pass

`FUN_588AEEF0` passes receiver pointers `+0x68` and `+0x88` to helper
`0x58902E60` with the first stack argument. When the second argument's low
byte is exactly 1, it processes receiver `+0x70` as well. It then visits
100 pointers beginning at `+0x20F8`, eight pointers beginning at `+0x8C`,
and three pointers beginning at `+0x2418`, passing the same first argument
for every helper call.

Verified callers `FUN_588AEFB0` and `FUN_588B1580` show the helper is used in
multiple object-update paths with different first values and optional-field
flags. The contract of `0x58902E60`, pointer types, and meaning of the first
argument remain unresolved.

The indexed Ghidra extent stopped at 145 bytes immediately after `pop edi`.
The mapped bytes continue with `pop esi; pop ebp; pop ebx; ret 8` at
`0x588AEF81..0x588AEF86`, followed by INT3 padding. With that six-byte
epilogue included, the complete 151-byte body matches mapped `Main.dll` under
objdiff 3.8.0; all six mapped operand targets were checked. No runtime client
or emulator test was performed.
