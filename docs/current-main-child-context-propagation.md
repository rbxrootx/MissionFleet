# Current Main child-context pointer propagation

`FUN_587B1310` is a 35-byte helper called from both verified child-builder
paths. `FUN_587A6220` calls it twice, at `0x587A6699` and `0x587A69A2`, passing
the pointer stored at `[0x58A247F8] + 4`. The verified ship-map builder
`FUN_588D84D0` calls it at `0x588D8BD6` with `param_1`. The original caller
decompilations are recorded in `var/current-main-next/587a6220-ghidra.c` and
`var/current-main-next/588d84d0-ghidra.c`; their byte-matched instruction
streams are preserved in `src/client-current/Main/FUN_587a6220.cpp` and
`src/client-current/Main/FUN_588d84d0.cpp`.

The helper stores its input pointer at receiver `+0x88`. It reads the pointer
at receiver `+0x168`; if that pointer is nonnull, it copies the DWORD at input
`+0x6060` into the child at `+0xA4`. A null child skips the copy. The function
ends with `ret 4`; its complete instruction stream has no mapped operand
targets.

The types and meanings of these fields, the purpose of the copied value, and
the caller-side guarantee that the input is valid whenever a child exists
remain unresolved. This documents only observed behavior and call evidence;
no emulator runtime test was performed. ObjDiff 3.8.0 is used to verify the
rebuilt function against the mapped client.
