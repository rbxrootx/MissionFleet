# Current Main.dll state reset transition

`FUN_588DF450` is reached from verified transition helper `FUN_588DFFB0` when
the decoded state at receiver `+0x398` is nonpositive. Verified update routine
`FUN_587FD890` also calls it on a gated active-object path. The original
function inventory listed 589 bytes, but that extent ended two bytes into a
relative call. The mapped instruction stream continues through that complete
call, restores `EDI` and `ESI`, and returns at `0x588DF6A2`; fifteen `INT3`
bytes begin immediately after the return. The complete callable body is 595
bytes.

The routine clears receiver `+0x80`. Under global-state gates it dispatches
through `FUN_587BB160` or `FUN_587BAF70`, and under active-object conditions
clears eight child references with `FUN_58782790`. It resets three pairs of
receiver-owned child objects through `FUN_58902EE0` and `FUN_58902F50`, clears
observed flag bits from their words at `+0x24` and from six repeated slot pairs,
sets `+0x6078`, `+0x6080`, and `+0x6084` to `0xAAAAAAAA`, sets `+0x607C` to
`0xAAAAAAAB`, clears `+0x60C4`, and calls `FUN_588DE5C0`. Additional global
gates clear two active-object flags and dispatch through `FUN_587EB340` and,
conditionally, `FUN_58776F20`.

ObjDiff verifies the corrected 595-byte callable extent, the final `ret`, and
all 20 mapped operand targets. Object roles, flag meanings, and state-helper
semantics remain uncertain. No emulator test was run.
