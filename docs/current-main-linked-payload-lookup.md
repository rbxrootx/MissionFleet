# Current Main.dll linked-payload lookup

`FUN_588f4090` is a one-argument lookup helper called directly by the verified
functions at `0x587BB700`, `0x58864FD0`, and `0x58882D80`. The first and third
callers use it repeatedly while resolving objects for later processing.

The mapped instructions walk a linked structure beginning at receiver offset
`+0x14`. A node's `+0x08` field is followed as the next-node pointer, while
`+0x0C` supplies the payload pointer. The helper compares the argument with
the DWORD at payload offset `+0x50`; it returns that payload on a match and
null after a miss. Both exits use `ret 4`, consistent with removing the single
stack argument.

The original function inventory listed this body as 38 bytes and stopped at
`mov eax, edx`, before the successful return. The mapped `Main.dll` bytes show
`ret 4` at `0x588F40B6`, followed by alignment padding and the next indexed
function at `0x588F40C0`. The audited executable extent is therefore 41 bytes.
Recompilation matches all 41 bytes with zero relocations.

The list and payload types, the meaning of payload offset `+0x50`, and the
domain meaning of the lookup remain unknown. Caller evidence supports an
object-resolution role but does not establish a screen, gameplay, or asset
label. No runtime behavior test was performed.
