# `FUN_58893430`: control motion and child-state callback

Fresh Ghidra analysis confirms one contiguous body,
`[0x58893430, 0x58893860)`, 1,072 bytes with no gaps. The candidate at
[`src/client-current/Main/FUN_58893430.cpp`](../src/client-current/Main/FUN_58893430.cpp)
matches the full body at 100% objdiff and records 41 mapped operand targets.

With bit 2 set in the word at `this+0x24`, the callback moves coordinates at
`this+4` and `this+8` toward targets at `this+0x50` and `this+0x54`. Its step
is a sign, half, or quarter of the remaining distance, depending on its size;
the deltas are passed to `FUN_58902E10`. On arrival in mode `0x100`, the
callback changes the mode, adjusts a child, dispatches its virtual slot `+4`,
and calls `FUN_5888D660`. In mode `0x200`, it steps the value at `this+0x170`
toward `[this+0x168]+4`, clamps each step to `[-0x10, 0x10]`, and calls
`FUN_58902E60`. A further completion gate marks child state fields and clears
`this+0x178`. If `this+0x4AC` is nonzero, repeated `FUN_58731540` checks select
branches that update children and call the byte-matched
`FUN_5888D5C0` at `0x58893760`, `0x588937A3`, `0x588937DC`, and `0x5889382A`.
Each loads ECX from ESI and pushes no explicit stack arguments. The function
ends by walking the circular child list at `this+0x3C` and dispatching each
child's virtual slot `+0x0C`.

Ghidra identifies `FUN_58893430` as slot `+0x0C` (index 3, fourth entry) in
the imported vftable at `0x5899FC9C`; its data xref is at `0x5899FCA8`, and
`FUN_58890110` occupies the next slot at `+0x10`. The vftable pointer is
written to `[ESI]` by byte-matched `FUN_5888E5E0` at `0x5888E64F` and by
`FUN_5888C7B0` at `0x5888C7DB`. The containing class and runtime event that
dispatches this slot remain unknown, and `FUN_5888C7B0` is not byte-matched.
The method's mode values, child-field meanings, and rendered UI effect remain
uncertain. No emulator runtime test has been performed.
