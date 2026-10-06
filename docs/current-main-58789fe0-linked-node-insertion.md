# Current Main.dll allocated linked-node insertion helper

`FUN_58789FE0` is a 250-byte `__thiscall` in the installed Main.dll capture.
Ghidra assigns the contiguous range `[0x58789FE0,0x5878A0DA)`, ending in
`ret 0x0C` at `0x5878A0D7`.

Ghidra references and an independent inventory-wide call scan identify exactly
two callers, both byte-matched. `FUN_587F8760` calls at `0x587F8867` with ECX
loaded from `0x58A247F8` and stack arguments consisting of a local-buffer
pointer and two zeros. `FUN_58806F60` calls at `0x58806FEB` with the same ECX
and three values from EDI, ESI, and EDX; EDX is computed as ESI plus a
0x18-byte stride times the masked count derived from `[EDI+0x44]`.

The function requests `0x6654` bytes through `FUN_5897CC4E`, then calls
`FUN_588E05C0` with its three incoming stack values, six zeros, and `0x40` when
allocation succeeds. For an empty receiver, it clears link fields `+0x0C`,
`+0x10`, `+0x14`, and `+0x18` on allocation failure, or initializes them all
to the new object on success. For a nonempty receiver, it links the new object
from the prior tail using offsets `+0x78` and `+0x74`, updates receiver `+0x10`
to the new tail, increments the receiver count at `+8`, and returns `+0x10`.
The source preserves the observed SEH path and all 250 mapped bytes; objdiff
confirms byte identity.

The receiver and node types, link-field roles, count meaning, allocation
ownership, constructor contract, and caller data schema remain unknown. The
nonempty allocation-failure path still executes the observed link updates with
a zero result; its runtime effect is unresolved. No emulator test has been
performed.
