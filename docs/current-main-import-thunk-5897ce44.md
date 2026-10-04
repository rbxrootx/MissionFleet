# Current Main.dll import trampoline at `0x5897CE44`

`FUN_5897ce44` is a six-byte function in the installed, mapped `Main.dll`.
Objdiff 3.8.0 matches all six bytes against the hash-pinned client image and
checks its one mapped pointer operand.

The original instruction is `jmp dword ptr [0x5898C254]`. This is a tail jump
through an import slot, with no local stack adjustment. In the indexed current
Main.dll listing, 11 call sites reach it: eight in `0x587BB700`, one in
`0x587DA120`, and two in `0x588C4210`. The caller instructions push values
before some calls, but that alone does not identify the imported API.

The slot's resolved target and API contract remain unknown. The verified claim
is limited to the thunk bytes and mapped operand; no runtime test was performed.
