# Current Main event child/resource update

`FUN_587ec290` is a 2,069-byte native helper called by the byte-matched
dispatcher `FUN_587BB700` at `0x587C1550` for event code `0x8002C010`. The
dispatcher decompilation shows values sourced from the event record being
placed on the stack before the call. The helper ends with `ret 0x18`, so its
raw callee-cleaned stack area is 24 bytes; Ghidra recovers fewer named stack
parameters than this cleanup implies.

The helper stores four 16-bit inputs in receiver fields `+0x21CCC`,
`+0x21CCE`, `+0x21CD0`, and `+0x21CD2`. The first field selects update paths for
values 0 through 3. Those paths change bit 0 on child flags, select resource
addresses from data rooted at `0x58A24728`, copy six DWORDs from selected
resources into child objects, and call `FUN_587315F0` or `FUN_587316C0` in the
observed branches. States 3, 8, and 9 at `[0x58A245A8]+0x1B6` suppress several
of these changes. This establishes an event-backed child/resource update;
the actual event meaning and rendered result remain unknown.

`src/client-current/Main/FUN_587ec290.cpp` emits the complete indexed stream
literally. The emitter decoded all 2,069 bytes and identified 43 mapped
operand targets. The caller establishes the event dispatch path, but the
payload schema, child/resource types, state labels, and user-visible effect
are unresolved. No runtime or emulator visual test was performed.
