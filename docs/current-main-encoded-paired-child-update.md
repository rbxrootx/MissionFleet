# Current Main.dll encoded and paired-child update helpers

Verified airborne-state handlers `FUN_5877EC80` and `FUN_58782CF0` both call
three nearby helpers with computed deltas. Their mapped x86 bodies and direct
call sites establish the following behavior.

`FUN_5877EBB0` reads DWORD receiver `+0x1264`, XORs it with `0xAAAAAAAA`,
adds its argument modulo 2³², XORs with the same mask, stores the encoded
result, and returns that result. Its complete body is 29 bytes. The C++ source
expresses the decode/add/encode operation; an empty register constraint keeps
the original load-before-XOR instruction ordering.

`FUN_5877EC00` reads child receiver `+0x10BD4` and its field `+0x64`, then
calls verified `FUN_58907360` on that child with the field plus delta. After
the call it reloads the first child and its current `+0x64`, and calls
`FUN_58907360` on child receiver `+0x10BE8` with that value. The parallel
`FUN_5877EC30` uses first child `+0x10BE0` and second child `+0x10BF4`.
`FUN_58907360` writes its argument to child fields `+0x64` and `+0x60` and
then calls `FUN_58907040`; its effects are not reduced to a plain assignment
here. Each propagation helper is 47 bytes and has two audited direct calls.

Both propagation sources express the pointer reads and calls in C++. Register
constraints preserve the original second-load order; one two-byte move in
each source is fixed as bytes because clang-cl otherwise chooses a different,
equivalent x86 encoding. The original helper reloads the first child after
the first call, so the source does too. All three functions recompile to the
original 123 bytes at objdiff 3.8.0 100% identity.

The receiver and child classes, delta units, reason for the XOR mask, and
runtime-visible effect remain unknown. No runtime client test was performed.
