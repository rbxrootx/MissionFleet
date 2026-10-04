# Current Main.dll indexed object refresh and callback dispatch

`FUN_58755520` uses its second stack argument as an index into receiver arrays
at `+0x10` and `+0x20`, bounded by count `+0x0C`. When an existing pointer
is present at `+0x20[index]`, it is passed through callback thunk
`0x5897CC42` and cleared. The helper sets `+0x10[index]` to 1, obtains a
replacement through `0x5897152E` using the fourth argument, stores the result
at `+0x20[index]`, then dispatches the replacement and supplied values through
`0x5897CD4C`. The out-of-range path also marks the status, allocates/stores a
replacement, and dispatches it.

Verified callers `FUN_587BB700` and `FUN_588C1650` both use global object
`0x58A245E0` as the receiver and provide record-derived values. The array
roles, status value, allocation ownership, object type, callback contracts,
and protocol semantics remain unknown.

Ghidra's 143-byte indexed extent ended on the first byte of a direct call.
Mapped bytes extend the body through the call, stack cleanup, register restores,
and `ret 0x10` at `0x587555B9..0x587555BB`; INT3 padding follows. The corrected
156-byte body matches mapped `Main.dll` under objdiff 3.8.0, with all five
operand targets checked. No runtime client or emulator test was performed.
