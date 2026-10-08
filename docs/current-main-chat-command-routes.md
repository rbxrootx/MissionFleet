# Current Main slash-command route handlers

This slice extends the matched input and submission handler documented in
[`current-main-chat-submit-handler.md`](current-main-chat-submit-handler.md).
Fresh Ghidra body and call-edge exports from two separate projects agree on all
five bodies and their direct references. The mapped string-pointer table at
`0x589CC0F0..0x589CC130` and the matched dispatch sites in
`FUN_587FC9C0` establish these routes:

| Input tokens | Handler | Bytes | Observed route behavior |
| --- | --- | ---: | --- |
| `/r`, `/reply` | `FUN_587F5EE0` | 437 | Builds a 0x30-byte context from two six-word global records, appends the supplied text after the matched token, and calls `FUN_587B8110(1, 0, ..., 1)`. It updates the stored index at `DAT_58A245C0+0x5F4` and calls `FUN_587EE240`. |
| `/a`, `/all` | `FUN_587F60A0` | 482 | With trailing text, builds a context and calls `FUN_587B8110(2, 0, ..., 1)`. Both the text and bare-token paths set fields at `DAT_58A2459C+0x20D20`, `+0x20D24`, and `+0x21CE4`, then request `MESSAGESTRING_ALL_CHATTING`. |
| `/t`, `/team` | `FUN_587F62A0` | 534 | With trailing text, calls `FUN_587B8110(3, value-at-+0x354, ..., 1)`. It updates the corresponding mode fields and requests `MESSAGESTRING_TEAM_CHATTING`. |
| `/x`, `/exit` | `FUN_587F73B0` | 378 | Parses a numeric argument, rejects the observed out-of-range path above `0xFFFF`, formats the value, and passes it to `FUN_587B7FD0`; it then requests `MESSAGESTRING_ALL_CHATTING`. |
| Shared sender helper | `FUN_587B7FD0` | 315 | Compares the supplied text against three 0x18-byte entries at receiver `+0x130`; on a match it builds a 0x49-byte payload and calls matched `FUN_58970C70` with selector `0x8001B112` and flags `0x50000`. |

The five functions total **2,146 bytes** in 9 Ghidra body ranges and 670
instructions. All direct destinations outside this slice were already
byte-matched. The sender helper also has a caller in matched `FUN_58890110` at
`0x58892458`, so it is a shared helper rather than a helper exclusive to
`/x` and `/exit`. The focused verifier checks both Ghidra exports, exact body
ranges, all 44 distinct call edges independently in both exports, mapped call
instructions and destinations, the command strings reached through the original
pointer table, and the byte-match catalog.

The command strings and observed state writes are established by the installed
image and Ghidra pseudocode. The purpose of the `/x` numeric value, the schema
of the three sender entries, the meaning of message `0x8001B112`, and the
server-side effect are still unknown. The mode fields' wider lifecycle and
runtime effects were not tested in the emulator; localized text lookup remains
an indirect callback through `DAT_5898C030`.

Implementation and checks:
[`verify_current_main_chat_command_routes.py`](../tools/verify_current_main_chat_command_routes.py),
[`FUN_587f5ee0.cpp`](../src/client-current/Main/FUN_587f5ee0.cpp),
[`FUN_587f60a0.cpp`](../src/client-current/Main/FUN_587f60a0.cpp),
[`FUN_587f62a0.cpp`](../src/client-current/Main/FUN_587f62a0.cpp),
[`FUN_587f73b0.cpp`](../src/client-current/Main/FUN_587f73b0.cpp),
[`FUN_587b7fd0.cpp`](../src/client-current/Main/FUN_587b7fd0.cpp).
