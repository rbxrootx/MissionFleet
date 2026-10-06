# `FUN_587B7500`: scaled child-coordinate and virtual update helper

The candidate at [`src/client-current/Main/FUN_587b7500.cpp`](../src/client-current/Main/FUN_587b7500.cpp)
matches the contiguous 124-byte body `[0x587B7500, 0x587B757C)`, including
`ret 0xC` at `0x587B7579`. Four `CC` padding bytes follow before the next
function. The exact x86 stream preserves its x87 floating-point operations
and checks five mapped operand targets.

Ghidra records five callers. The two calls from byte-matched
`FUN_5873A7C0` occur at `0x5873ADD5` and `0x5873AEB0`; a third matched call
from `FUN_5873FE80` occurs at `0x58740849`. All three put an object at
`+0x520` in ECX and push three stack values. The other callers,
`FUN_587CB6B0` and `FUN_587CBE00`, are not byte-matched.

The helper scales two integer inputs by the mapped value at `0x5898CF08`,
derives another float from `FUN_5897CC90` and `0x5899A158`, and passes three
floats to `FUN_58907820`. It then invokes vtable slot `+0x14`; when that
returns zero, it calls slot `+4` with 1. The child object's identity, units,
virtual-method contracts, and visible effect remain unknown. Ghidra's
prototype lists two stack parameters even though the matched callers push
three and the function returns with `ret 0xC`, so the argument mapping is
left unresolved. No emulator runtime test has been performed.
