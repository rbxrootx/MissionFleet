# Current Main `CMarketBoard` cleanup

The RTTI-backed `CMarketBoard` vtable at `0x58998080` is installed by the
verified constructor `FUN_58799EB0`; its type descriptor names
`.?AVCMarketBoard@@`. The deleting-destructor wrapper `FUN_58797680` calls
`FUN_58797100`, the 858-byte cleanup body matched here against the captured
mapped `Main.dll`. ObjDiff 3.8.0 verifies all 858 bytes and five mapped operand
targets.

The body reinstalls the class vtable while destruction runs, releases owned
children through their virtual deleting destructors, clears 40 repeated child
pointers plus groups of three and seven pointers, releases the allocation at
`+0x2D4`, and calls the already verified base cleanup helper
`FUN_58902C10`. This is consistent with teardown of the controls initialized
by the matched constructor. The semantic names of individual child fields and
the allocation at `+0x2D4` remain unknown. No emulator runtime test was run;
this is function-level binary evidence, not proof of complete market-board
behavior.
