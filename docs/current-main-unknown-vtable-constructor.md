# Current Main five-argument constructor wrapper

`FUN_58907C80` is a 47-byte routine directly called by five verified
functions: `FUN_5873FE80`, `FUN_587A4440`, `FUN_587E9A10`, `FUN_588D4300`, and
`FUN_588F55C0`. Three callers contain repeated callsites. The callsites pass
five stack arguments and use the returned receiver, consistent with this
function's observed constructor-style contract.

The body forwards the five arguments, in their original order, to
`FUN_58734A30` with the new receiver in ECX. It then writes vtable address
`0x589A2988` at receiver offset `+0`, returns the receiver in EAX, and removes
the five arguments with `ret 0x14`.

This is the full behavior supported by the mapped instructions. The class name
for vtable address point `0x589A2988`, constructor purpose, and argument roles
remain unresolved in the current RTTI and callsite evidence. The source at
`src/client-current/Main/FUN_58907c80.cpp` matches the complete indexed extent;
objdiff 3.8.0 reports 47/47 identical bytes and checks both mapped operands.
No original-client runtime test was performed.
