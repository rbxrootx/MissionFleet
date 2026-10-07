# Communicator-configuration panel child initialization

`FUN_58833980` is a 998-byte routine in the installed `Main.dll`. Both fresh
Ghidra projects agree on its two body ranges: `0x58833980..+157` bytes
(46 instructions) and `0x58833A20..+841` bytes (260 instructions). The mapped
image decodes across those same ranges. The emitted instruction-level source is
[`FUN_58833980.cpp`](../src/client-current/Main/FUN_58833980.cpp); the five-byte
gap between ranges is excluded.

The only incoming call in either full fresh edge export is from the
byte-matched communicator-configuration panel constructor `FUN_58843380`, at
`0x5884421D`. The parent requests `0x84` bytes, sets ECX to the allocation,
passes `[parent+0x90]`, EBP, EDI, 0, 0, and `0x40`, then stores the result at
its `+0x158` member. The parent's Ghidra decompilation expresses this as
`FUN_58833980(param_1[0x24], param_3, param_4, 0, 0, 0x40)`.

Inside the body, the function calls matched `FUN_589031A0`, writes observed
vtable and receiver fields, allocates and initializes child records under
null and bounds checks, updates two child objects through matched
`FUN_58902D20`, and creates additional controls through matched
`FUN_58733280`. Its 17 direct calls all target byte-matched code:
`FUN_589031A0` twice, `FUN_5897CC4E` seven times, `FUN_58902D20` twice,
`FUN_58733280` four times, and `FUN_5875DDA0` twice. There are no indirect
call instructions.

The parent ties the routine to one child object created by the communicator-
configuration panel. The exact child class, displayed content, resource
meanings, and the domain meanings of its fields and arguments remain unknown.
The source preserves the mapped x86 instruction stream for byte matching; no
emulator runtime or visual test was performed. A focused verifier checks both
Ghidra exports, the mapped extents, all dependency matches, and the parent
caller's setup:
[`verify_current_main_58833980.py`](../tools/verify_current_main_58833980.py).
