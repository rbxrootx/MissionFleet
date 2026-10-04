# Current Main.dll bounded text notification builder

`FUN_587B7D90` is a 220-byte helper called three times from verified event
handler `FUN_587B83E0` and at multiple sites in verified event dispatcher
`FUN_588C1650`. The first caller varies a 16-bit value decorated with masks
`0x40000`, `0x20000`, or `0x10000`, and passes zero as the other explicit
stack value.

The helper clears a local 0x48-byte buffer. If a text pointer read from the
surrounding caller stack is non-null, it copies at most 0x17 non-NUL bytes into
the buffer at offset `+0x30` and terminates the result. It clears a 0x49-byte
local area and copies the full 0x48-byte buffer into it. It then calls
`FUN_58970C70` with selector `0x8001B111`, a zero field, the first explicit
stack argument, and the local payload. If the pointer is null, it still sends
selector `0x8001B111`, using the first stack argument and zero fields. The
helper returns with `ret 8`.

All 220 mapped bytes match at 100% under objdiff 3.8.0, with all six operand
targets checked. The text source/layout, meaning of the caller's masks,
receiver type, payload schema, and visible meaning of selector `0x8001B111`
remain unknown. Event-path usage does not establish a domain label. No runtime
behavior test was performed.
