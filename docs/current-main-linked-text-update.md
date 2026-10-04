# Current Main.dll linked-text update path

`FUN_5888D250` is a 119-byte routine in the hash-pinned mapped installed-client
`Main.dll`. It is directly called by verified functions `0x587B83E0`,
`0x587BB700`, `0x587FC9C0`, and `0x58890110`; the first and last contain
repeated callsites. Its complete extent matches at 100% under objdiff, with all
five direct-call relocations checked.

The routine takes a receiver and two stack arguments. It passes the first
argument, `-1`, and the second argument to `0x589088D0` on the context at
receiver `+0x4C4`. That helper scans the first argument to its null terminator
and rebuilds linked storage. `0x58908170` counts linked nodes; when the count
matches the context field at `+0x88` minus ten, the routine recalculates a
boundary through `0x58908870` and selects the node at count minus one through
`0x58908830`. It then passes both arguments to `0x5890BD90` on the companion
context at receiver `+0x4C0`, stores the second argument at that context's
`+0x6C`, clears `+0x70`, and returns with `ret 8`.

The receiver class, argument meanings, purpose of the ten-node threshold, and
user-visible effect remain unresolved. The evidence supports a linked-text
operation because the input is scanned as a null-terminated sequence; it does
not establish whether this is a chat log, list control, or another UI feature.
Byte identity establishes the captured instruction stream, not runtime
correctness or a playable-client milestone.
