# `FUN_587A6E90`: child flag low-nibble update

Two fresh Ghidra projects agree that the helper is one contiguous body at
`[0x587A6E90, 0x587A6F52)`, 194 bytes and 71 instructions. The mapped client
decodes across the full range, the method has no outgoing calls, and it returns
with `ret 4`. The following indexed function begins at `0x587A6F60`.

The receiver holds 32 optional child pointers in eight groups of four, from
`this+0x08` through `this+0x84`. For each non-null child, the helper updates the
word at `child+0x24` to `(old & 0xFFF0) | (argument == 1 ? 0 : 0xF)`. The upper
12 bits stay unchanged; the low nibble is cleared for argument 1 and set to
`0xF` for the other value observed here, argument 0.

Fresh Ghidra edge exports show exactly two direct callers, and both already
match byte-for-byte. `FUN_588DEB30` calls at `0x588DF024` from the
`OPCONVOY__REJOIN_BATTLE` preparation path, passing zero in `EBX` after its
zero-initialization. `FUN_588DFFB0` calls at `0x588E0046` on its active-object
transition path, passing 1. Both load the receiver from
`[0x58A2459C]+0x20C9C`. The checked verifier records the two independent body
exports and call-edge exports and checks the argument and receiver setup in the
matched caller instruction streams.

The child class and low-nibble meaning remain unknown. No RTTI or vtable
ownership was found, and the evidence does not justify naming this as
visibility, enablement, or another domain state. No client or emulator runtime
test has been performed; the emitted source preserves the mapped x86 stream.
