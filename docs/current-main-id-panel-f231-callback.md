# Current Main.dll 0xF231 child callback

`FUN_588489E0` is a 28-byte helper reached from two byte-matched dispatchers:
`FUN_587BB700` calls it at `0x587BF253` and `0x587BF286`, and `FUN_588C1650`
calls it at `0x588C3338` and `0x588C3383`. Ghidra's reference dump and an
independent Capstone scan of the mapped `.text` agree on these four direct
calls. Each site loads ECX from `[[0x58A245B4]+0xD8]` and passes no stack
arguments to the helper; its branch context selects code `0x204` or `0x205`.

The mapped instruction extent is contiguous: `[0x588489E0, 0x588489FC)`. The
helper saves its receiver in ESI and calls matched `FUN_58848610`. It then loads
the pointer at receiver `+0x30`, reads that object's vtable slot `+0x18`, and
calls the slot with ECX set to that object and stack values `(receiver,
0xF231, 1)`. It restores ESI and returns. The complete stream includes one
rel32 call relocation at function offset `+3`, displacement field `+4`, to
`FUN_58848610`; objdiff verifies the reconstructed object code byte-for-byte.

The existing `FUN_58848610` evidence describes its local behavior as clearing a
linked-node chain, but does not establish that chain's relationship to this
receiver. The object type at `+0x30`, callback slot contract, meaning of
`0xF231` and `1`, and visible result remain unknown. No emulator runtime
comparison has been made.
