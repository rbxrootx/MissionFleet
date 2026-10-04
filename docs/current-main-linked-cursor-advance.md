# Current Main.dll linked-cursor advance

`FUN_58908600` is a 68-byte linked-state helper in the hash-pinned mapped
installed-client `Main.dll`. It is called by verified functions
`0x5879D3F0`, `0x5879F810`, and `0x5879DD90`; all three contain repeated calls
while iterating associated object slots. Its complete extent matches at 100%
under objdiff with no mapped relocations.

When receiver `+0x84` is null, it copies receiver `+0x7C` to `+0x84` and
dispatches virtual slot `+0x3C`. Otherwise, it follows the current node's
`+0x10` link. If that link is null, it returns without changes. If it is
non-null, it advances `+0x84` to the linked node and also advances head `+0x80`
when the head pointed at the old current node; it then dispatches slot `+0x3C`.

The receiver, node type, pointer-field roles, and callback meaning remain
unresolved. Caller loops show repeated advancement across associated objects,
but do not identify the user-visible effect. The helper has no explicit stack
arguments and returns through the virtual callback when a transition occurs.
