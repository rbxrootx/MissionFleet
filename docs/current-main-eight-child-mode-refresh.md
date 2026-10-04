# Current Main.dll eight-child mode refresh

The installed `Main.dll` has two related helpers reached from verified
`FUN_588561F0`. Their control flow and field writes below come from the
original mapped x86 body. The C++ match sources preserve those instruction
streams; this note records the reconstructed behavior separately.

`FUN_588542A0` takes one argument. It keeps its low bit and shifts it into
bit one, then visits eight child pointers at receiver offsets `+0x7C` through
`+0x98`. It clears bit one of each child's word `+0x24` and sets that bit to
the argument's low bit. `FUN_588561F0` passes one; `FUN_587EAE10` has an
observed zero call and another call using a register value. The helper has no
null checks for those eight pointers.

`FUN_58853B90` reads mode byte `+0x74` from global `0x58A2459C`. It makes no
updates unless the byte is zero or one. If receiver dword `+0x2CC` equals
`0x40000000`, it sends selector `0x2F` to `FUN_587A75E0` on the global's
`+0x20C9C` child, sends the same selector to `FUN_587E5C10` on the global,
clears receiver `+0x2CC`, and passes zero to `FUN_58853570` on the receiver.
Otherwise it makes the same calls with selector `0x10`, stores `0x40000000`
at `+0x2CC`, and passes that value to `FUN_58853570`. Verified
`FUN_588561F0` calls this helper when its receiver field compares equal to a
zero-valued register; verified `FUN_58856560` calls it when
`FUN_588DD2A0` returns zero.

The indexed extent of `FUN_588542A0` omitted its `ret 4`: the mapped binary
has `C2 04 00` at `0x588542F1`–`0x588542F3`, followed by twelve `CC`
alignment bytes before `FUN_58854300`. The inventory and match use the
complete 84-byte body. `FUN_58853B90` has a complete 130-byte body. Both
match the original byte for byte under objdiff 3.8.0, with nine mapped operand
targets checked.

The receiver and child classes, game meaning of bit one, mode byte, selectors,
and `+0x2CC` value are unresolved. No runtime client test was performed.
