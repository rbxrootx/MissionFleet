# Current Main startup object initializer

The matched `FUN_5875F4B0` is a 66-byte helper called from
`FUN_5881C730` at `0x5881CBD6`. ObjDiff 3.8.0 reports a 100% byte match and
checks both mapped operands. The caller's indexed direct-call audit through
depth two reports no unmatched callees.

The helper calls the already matched `FUN_58907100` with the receiver in ECX.
It then XORs receiver fields at `+0x60`, `+0x50`, and `+0x64` with a stack
argument, stores another stack argument at `+0xFC`, installs the pointer
`0x5898DA70` at offset `+0`, returns the receiver, and removes `0x18` bytes of
arguments. These operations are visible in the captured instruction stream;
the caller's complete argument roles are not yet established.

The object's class, field purposes, argument meanings, and vtable method
identities remain unresolved. This evidence confirms exact machine code and
the indexed call edge only. It does not confirm startup runtime behavior or
the client rendering correctly.
