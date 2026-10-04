# Current Main.dll outbound state report

`FUN_587BAF70` is a 469-byte routine in the hash-pinned installed-client
`Main.dll`. The indexed caller graph lists verified callers `FUN_587F21E0` and
`FUN_588E5150`. In the available `FUN_588E5150` decompilation, a state-gated
branch passes the word at receiver `+0x350` and selector zero, then sets local
flag `+0x63C0`.

The helper builds a variable-length payload for message `0x80013111` and hands
it to verified transport routine `FUN_58970C70`. It derives two values from
the input word, the active object's byte at `+0x354`, selector-specific
constants, and a table entry rooted through receiver `+0x40` and `+0x58`. It
allocates a buffer sized as three times the shared DWORD returned by
`FUN_58789FB0`, plus ten bytes. It then writes a header, walks the list rooted
at `0x58A247F8 + 0xC`, appends encoded node fields and summary flags, sends the
payload, and releases the temporary buffer through `FUN_5897CE26`.

ObjDiff verifies the complete 469-byte body, `ret 8`, and all 18 mapped
operand targets. The server-side schema, table/key meanings, field units, and
selector meanings remain unknown. No live server or emulator exchange was
available to validate the packet contents.
