# Current Main record-driven control refresh

`FUN_5886ba60` is a byte-matched method in the installed `Main.dll`. Ghidra
assigns four body ranges totaling the inventory size of 8,814 bytes:

- `5886BA60..5886C13C` (1,757 bytes)
- `5886C140..5886D7B7` (5,752 bytes)
- `5886D7C0..5886D857` (152 bytes)
- `5886D860..5886DCE0` (1,153 bytes)

Capstone decodes every byte in the three intervening gaps as alignment
instructions. ObjDiff 3.8.0 verifies all four reconstructed segments at 100.0%,
including 492 mapped operands.

Ghidra records two direct callers. Raw caller instructions establish the
calling convention more clearly than its `__fastcall` pseudocode: the receiver
is in `ECX` and a second argument is pushed on the stack. `FUN_5886ffa0` stores
its first stack argument at receiver offset `+0x84`, then forwards its second
argument. `FUN_58868a00` obtains a nested receiver and pushes `1` before calling
the method.

The decompiled body first resets fields and child controls, then returns if
receiver `+0x84` is null. Otherwise it reads a record through that field,
consults indexed global tables, copies presentation descriptors, and updates
associated values, timers, and status fields. Calls to `FUN_5886b9b0`,
`FUN_58903290`, and `FUN_58903360` are visible in the body. This supports a
record-driven control or presentation refresh role, but does not establish a
particular screen, control name, or user-visible feature.

Ghidra reports many blocks as unreachable and the pseudocode includes unresolved
registers, so its control-flow reconstruction is incomplete. The byte match
covers the inventory extent, including code bytes in the assigned ranges; it
does not prove that the decompiler recovered all behavior. Receiver and record
layouts, descriptor meaning, timer units, branch semantics, and runtime effects
remain uncertain. This is static function-level evidence; no original-client
or emulator visual test was performed.
