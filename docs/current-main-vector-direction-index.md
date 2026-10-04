# Current Main.dll vector direction lookup

`FUN_587A0740` is a 458-byte routine in the hash-pinned installed-client
`Main.dll`. Both verified vector-update callers, `FUN_5877EC80` and
`FUN_58782CF0`, pass absolute values derived from signed components, then use
the return value to index the paired component arrays at `0x58A0ED18` and
`0x58A0B4D8`; they restore the original component signs afterward.

The helper divides argument two by argument one with x87 arithmetic. It chooses
a coarse candidate in 50-unit increments using thresholds at
`0x58998530..0x589984B0`, then refines that candidate against the qword table
at `0x589C96D8 + index*8`. It returns an index below `0x384`, or `-1` at the
upper bound. ObjDiff verifies the complete body, its `ret`, and all 28 mapped
operand targets.

The caller behavior supports interpreting the result as a first-quadrant
direction/angle index, but the unit scale and table-generation rules remain
unconfirmed. No emulator test was run.
