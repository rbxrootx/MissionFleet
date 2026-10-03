# Current Main mission-event `DoAction` routine

Ghidra references the assertions `p_Event && "DoAction"` and
`MissionEventManager.cpp` from `FUN_587a90d0`, including source line
`0x277`. This identifies the routine as the mission-event `DoAction` path, but
does not establish its containing C++ class type. Ghidra records five body
ranges totaling 5,041 bytes:
`587A90D0..587A9D58`, `587A9D60..587A9EB9`, `587A9EC0..587AA0D9`,
`587AA0E0..587AA367`, and `587AA370..587AA49B`. ObjDiff 3.8.0 verifies all
ranges against the captured mapped client at 100%, with 287 relocation
operands checked.

The routine asserts a non-null event pointer and dispatches on the 32-bit event
discriminator at event offset `+0x74`, with cases `0` through `0x15`. Cases
inspect other event fields, manipulate event records and linked-list entries
through helper calls, and some allocate and position sprite-control children.
Direct calls are recorded from `FUN_587aa540` and `FUN_587aa5d0`; their caller
contracts have not been independently identified. Individual event meanings,
the event data layout, and helper contracts remain unresolved.

The instruction-free gaps are `587A9D59..587A9D5F` (7 bytes),
`587A9EBA..587A9EBF` (6 bytes), `587AA0DA..587AA0DF` (6 bytes), and
`587AA368..587AA36F` (8 bytes). Branch references enter the following body
ranges; these spans are not included in the matched body. No emulator runtime
test was performed.
