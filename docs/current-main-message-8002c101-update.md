# `0x8002C101` non-null update path

The installed `Main.dll` dispatches message code `0x8002C101` through the first
entry of the jump table in matched `FUN_58882d80`. Its non-null payload branch
passes the payload to `FUN_58880f00`; a null payload branches to the separate
`0x0FA2` helper path. After the update call returns, the handler invokes
`FUN_5887a3f0` with identifier `0x1004`. The byte-level dispatch, table entry,
payload gate, direct call, and post-update call are checked by
[`verify_current_main_message_8002c101.py`](../tools/verify_current_main_message_8002c101.py).

Ghidra shows `FUN_58880f00` obtaining a record through
`FUN_58778b20(param+0x24)` and comparing the low four bits of a global byte
with the byte at record offset `+0x35C`. The equal branch calls
`FUN_587e0090` with the record's first word and payload; the other branch calls
`FUN_588f3e70` with the payload and `payload+0xB8`. Both call
`FUN_58880df0`. That shared helper checks receiver fields `+0x70` and `+0x74`,
selects a record through an indexed global array, copies six dwords, and
dispatches state values `0` through `4` to five type-specific helpers. Their
Ghidra bodies reference event-ship, premium-ship, force-item, and related text
keys. These observations do not establish field names, item semantics, or a
server protocol contract.

The exact direct `CALL`/`JMP` closure contains 16 functions, 12,289 bytes, and
34 Ghidra body ranges. All bytes match the installed image under ObjDiff 3.8.0;
the closure audit confirms all members are reachable from the message-specific
root and checks 166 direct transfers to 14 previously verified boundary
functions, with no unmatched direct transfer. Run
`python tools/verify_current_main_message_8002c101.py` to check the caller,
branch, body-range manifest, byte-match catalog, and closure.

The update helper is shared: six other open call sites enter this closure,
including five callers of `FUN_58880df0`. Payload layout, the meanings of the
record fields and state values, and the runtime effect of the update remain
uncertain. This work did not run a live client or emulator test, and exact
instruction matching does not itself prove high-level source recovery.
