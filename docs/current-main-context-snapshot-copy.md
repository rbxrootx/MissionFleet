# Current Main.dll shared context snapshot copy

`FUN_587D6BD0` is a 48-byte helper in the installed, mapped `Main.dll`.
Byte-matched callers `FUN_587BB700` at `0x587BBF40` and `FUN_588C4210` at
`0x588C5AD7` both load ECX from global `0x58A24598` and pass a source pointer
as the stack argument. This ties the helper to the shared event-dispatch
context without assigning a guessed class or record type.

The helper reads its destination pointer from receiver offset `+0x1028`. It
calls byte-matched thunk `FUN_5897CC48` with `(destination, 0, 0x3C8)`, then
copies `0xF2` dwords (968 bytes) from the incoming source pointer to the same
destination with `REP MOVSD`. It restores its saved registers and returns with
`ret 4`. The full extent `[0x587D6BD0, 0x587D6C00)` is decoded through the
return.

The thunk jumps through pointer slot `0x5898C1FC`; its runtime target and the
effect of its three arguments are unresolved, so the call cannot be described
as a proven zero-fill. The snapshot schema, receiver type, and reason for
preparing the destination before copying remain unknown. No emulator runtime
test has been performed.
