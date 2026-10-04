# Current Main.dll global-gated paired child release

`FUN_58907650` is a 67-byte helper called three times by the already verified
airborne-state handlers `FUN_5877EC80` and `FUN_58782CF0`. Those callers put a
selected child object in `ECX` before the call. The instruction source in
`src/client-current/Main/FUN_58907650.cpp` reproduces the complete original
body and both absolute global operand targets byte for byte.

The helper first checks DWORD globals `0x58A28534` and `0x58A28538`. When both
are zero it returns without visiting either receiver field. Otherwise it
examines the pointer at receiver `+0x1C`, then the pointer at `+0x18`. For each
non-null pointer, it reads that pointer's first DWORD, loads the function
pointer at offset `+8` from that value, pushes the child pointer, calls the
loaded function, and clears the receiver field after the call. There is no
caller-side stack adjustment, so the callback must clean its stack argument.

The global gate's meaning, exact receiver and child types, precise callback
ABI and ownership contract, and behavior if a callback fails or reenters are
not established. A high-level C++ candidate changed the prologue and indirect
call sequence, so it is not counted as a match. No runtime client test was
performed. The checked match is the instruction-level source, verified as 67
of 67 bytes with two relocation targets checked.
