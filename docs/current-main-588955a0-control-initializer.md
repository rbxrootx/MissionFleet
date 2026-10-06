# `FUN_588955a0`: range and progress control initializer

Fresh Ghidra evidence records two direct callers, both already byte-matched:
`FUN_588DEB30` at `0x588DF15F` and `FUN_58857020` at `0x58857096`. Both pass
the child/control pointer in ECX and three stack arguments, right-to-left:
the range at `[global+4]+0xDAC`, a counter at `[global+4]+0xD98` XOR
`0xAAAAAAAA`, then a counter at `[global+4]+0x398` XOR `0xAAAAAAAA`. The
target ends in `ret 0x0C`, confirming a thiscall with three stack arguments.

Ghidra confirms one contiguous 257-byte body,
`[0x588955A0,0x588956A1)`. It stores the range at receiver `+0xA8` and
derives one, two, and three fifths at `+0xC0`, `+0xBC`, and `+0xB8`. It
initializes numeric child values from the two counters, configures three child
controls through `FUN_5877E7A0` (using 10,000 when the range is zero for one
child), and copies the first counter into fields `+0x94` through `+0xA0`. It
then calls `FUN_589032E0` twice with scaled values of the form
`((counter * 0x373) / range) + 0x7E`.

Calling this a range/progress control is inferred from the matched callers'
counter/range arguments, the fifths-based thresholds, and the ratio-based
helper calls. The exact visual role, resource labels, field names, and helper
contracts remain uncertain. The ratio calculations divide by the supplied
range; a nonzero invariant is not established. No emulator runtime test has
been performed.
