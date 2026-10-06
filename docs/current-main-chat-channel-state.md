# Current Main chat-channel state helper

`FUN_587E5C80` is a 44-byte helper called in verified client chat paths. The
all-chat event handler `FUN_587B83E0` calls it at `0x587B8BEB` with
`ECX=[0x58A2459C]` and stack arguments `(2, 0)` after selecting
`MESSAGESTRING_ALL_CHATTING`. The chat parser `FUN_58890110` calls it at
`0x58890DE3` with `(3, byte-at-selected-object+0x354)` in a
`MESSAGESTRING_CHANNEL_SQUADRON_CHATTING` path, and at `0x58891390` with
`(ESI, 0)` in a `MESSAGESTRING_CHANNEL_DIRECTFLEET_CHATTING` path. These caller
bodies are byte-matched. Their instruction streams are in
[`FUN_587b83e0.cpp`](../src/client-current/Main/FUN_587b83e0.cpp) and
[`FUN_58890110.cpp`](../src/client-current/Main/FUN_58890110.cpp); the
decompilation context is recorded in `var/current-main-next/587b83e0-ghidra.c`
and `var/current-main-next/58890110-ghidra.c`.

The helper reads the low word of its first stack argument and zero-extends it
into receiver `+0x21CE4`. It writes 1 to receiver `+0x20D24` exactly when that
argument equals 3, otherwise 0. It copies the low word of its second stack
argument to receiver `+0x20D20`, then returns with `ret 8`.

This records the observed fields and caller paths without assigning semantic
names to the offsets. The fields' domain meaning, units, second-argument
contract, and downstream visible effect remain unresolved. No emulator
runtime test was performed; the source is checked against the mapped client
with ObjDiff 3.8.0.
