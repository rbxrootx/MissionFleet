# Current Main fleet message handler

The event dispatcher `FUN_587bb700` calls `FUN_588c1650` at `0x587C1CEE`.
Ghidra shows the handler switching on the 32-bit message ID at the second
argument's `+4`, with packet bytes passed separately. The explicit cases
include `0x80020F00` through `0x80020F14`; the decompiler also identifies
later message cases and a shared default path.

The recovered branches update screen and member state, call specialized helpers,
and format localized notifications. Observed string keys include member join
proposals, member joining or leaving fleet/squadron, joining a fleet from a
squadron, fleet-out penalties, and fleet/squadron dissolution. The packet
schema, exact opcode contract, and effects of each helper are not established
by this function alone.

Ghidra assigned nine ranges totaling 10,679 bytes. Capstone found six omitted
reachable continuations after release-helper calls, including stack cleanup and
jumps to a shared block at `0x588C405E`; these add 101 bytes. The remaining two
gaps decode as alignment NOPs. The corrected 10,780-byte function is emitted
as 15 ranges. ObjDiff 3.8.0 reports 100%, with 915 immediate and address
operands checked against the mapped image.

The handler was statically analyzed only. No original-client network session or
runtime notification was used to validate the packet meanings.
