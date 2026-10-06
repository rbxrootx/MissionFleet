# Current Main.dll conditional receiver-field and low-flag setter

`FUN_588B3B30` is a 34-byte `__thiscall` with one stack argument. Ghidra and
the mapped image agree on the contiguous extent
`[0x588B3B30,0x588B3B52)`, with `ret 4` exits at `0x588B3B43` and
`0x588B3B4F`.

Fresh Ghidra references identify five unconditional calls across three
callers. Byte-matched `FUN_587FD890` calls at `0x587FDF95` with ECX from
`[EDI]` and argument zero. Byte-matched `FUN_587EF910` calls at
`0x587EFBCC` with ECX from `[EDI]` and EBX pushed as the argument. Unmatched
`FUN_587E7B90` calls at `0x587E7BAE`, `0x587E7BD4`, and `0x587E7BF2` with ECX
from `[ESI]` and arguments 0, 1, and 1; there ESI points into the child
pointer array rooted at receiver `+0x218F0`.

The helper stores its argument at receiver `+0x128`. A nonzero argument
causes it to OR `0x000F` into the word at receiver `+0x24`; zero causes it to
AND that word with `0xFFF0`, clearing the low four bits. The instruction
stream is preserved exactly, and objdiff confirms byte identity.

The receiver type and meanings of `+0x128`, `+0x24`, and the four low bits
remain unknown. The EBX value passed by `FUN_587EF910` was not traced further.
One caller remains unmatched, and no emulator runtime test has been
performed.
