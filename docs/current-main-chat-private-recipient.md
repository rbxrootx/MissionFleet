# Current Main private-chat recipient submission

The byte-matched chat input handler `FUN_587FC9C0` checks the carriage-return
event and compares the entered prefix with the mapped strings `/w` and
`/whisper` at `0x5899BD40` and `0x5899BD34`. When either command is followed by
a space, it calls `FUN_587F59F0` at `0x587FD6B9`. The focused verifier checks
that call in the matched handler and checks both original string pointers and
values in the pinned `Main.dll` image.

Fresh Ghidra output assigns `FUN_587F59F0` 1,225 bytes across five exact body
ranges. Capstone confirms complete decoding of the 358 instructions:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `[0x587F59F0, 0x587F5A49)` | 89 | 25 |
| `[0x587F5A50, 0x587F5D67)` | 791 | 213 |
| `[0x587F5D70, 0x587F5DFD)` | 141 | 48 |
| `[0x587F5E00, 0x587F5EAA)` | 170 | 61 |
| `[0x587F5EAF, 0x587F5ED1)` | 34 | 11 |

The body distinguishes the short `/w` form from `/whisper`, reads the
recipient token, and requires its length plus a terminator to be under 14
bytes (at most 12 non-NUL bytes). It builds a record containing that token and
the remaining message. It compares the recipient against four 24-byte slots
beginning at `0x58A245C0 + 0x57C`, updates that small list, and passes the
record through verified guarded chat dispatcher `FUN_587B8110`. It then calls
`FUN_587EE240` to update chat input state.

`FUN_587EE240` is 120 bytes in one Ghidra range; Capstone confirms all 32
instructions:

| Range | Bytes | Instructions |
| --- | ---: | ---: |
| `[0x587EE240, 0x587EE2B8)` | 120 | 32 |

The child stores supplied values in receiver fields `+0x21CE8` and `+0x21CE4`,
resets input through verified `FUN_5875F940`, passes a mode value to verified
`FUN_5888CDF0`, copies the recipient text to a child buffer at `+0x80`, writes
its length at `+0x8C` and `+0x94`, and updates global field `0x58A245C0 + 0xB8`.
All twelve direct calls from these two functions target byte-matched routines
or the other member of this closure.

ObjDiff 3.8.0 verifies all 1,345 bytes at 100.0%. The
[focused verifier](../tools/verify_current_main_chat_private_recipient.py)
checks all six Ghidra ranges and instruction counts, all twelve direct calls,
the matched caller call site, and the original `/w` and `/whisper` strings.
The generated instruction streams are
[`FUN_587f59f0.cpp`](../src/client-current/Main/FUN_587f59f0.cpp) and
[`FUN_587ee240.cpp`](../src/client-current/Main/FUN_587ee240.cpp); the fresh
range manifest is
[`current-main-chat-private-recipient-body-ranges.tsv`](../config/NF2_2026/current-main-chat-private-recipient-body-ranges.tsv).

The exact record schema, empty-token handling, recent-recipient policy,
meanings of the mode fields, guard/filter decisions, and server/protocol
effects remain unresolved. Ghidra records fourteen other incoming calls to
`FUN_587EE240` from adjacent chat-input routines that are outside this slice.
No client or emulator runtime test was performed.

The neighboring numeric user-chat channel route is documented separately in
[`current-main-user-chat-channel-command.md`](current-main-user-chat-channel-command.md).
