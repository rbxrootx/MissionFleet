# Current Main.dll message 0x80021104 child refresh

`FUN_588A6CD0` is the 136-byte child-refresh helper selected by the matched
`FUN_587BB700` dispatcher for message `0x80021104`. The caller loads the
receiver from `[0x58A245A8]+0x174` into ECX and passes no stack arguments. Ghidra
records one direct reference at `0x587C057E`; a separate scan of the installed
mapped image found the same sole direct E8 call.

The mapped function extent is contiguous: `[0x588A6CD0, 0x588A6D58)`. It first
stores `1` at receiver offset `+0xA8`, then reads dword `+0x6074` from the
object at `[0x58A247F8]+4` and selects one of two child update paths:

- Nonzero: invoke each child's vtable slot `+8` at receiver offsets `+0x190`,
  `+0x188`, and `+0x19C`; then restore ESI and tail-jump through slot `+8` on
  child `+0x1A8`.
- Zero: invoke slot `+8` at offsets `+0x18C`, `+0x190`, and `+0x198`; then
  restore ESI and tail-jump through slot `+8` on child `+0x19C`.

The branch tails are literal `pop esi; jmp eax` instructions. Ghidra warns that
it could not recover a jumptable at either indirect transfer and represents
each as a call followed by return. The mapped bytes resolve the control flow
more precisely as tail jumps. The reconstruction preserves the complete
instruction stream, including the absolute global reference, and objdiff
verifies its object code byte-for-byte against the installed Main.dll capture.

The receiver and child types, global record schema, field `+0x6074` meaning,
and slot `+8` method contracts remain unknown. Only the direct caller has been
verified at this point; the indirect method effects and emulator-visible result
have not been runtime-tested.
