# Current client numeric user-chat channel command

The installed 2026 `Main.dll` routes slash-prefixed numeric input into
`FUN_587F6C40`. The mapped command table at `0x589CC120` points to the literal
`/`, and the byte-matched input handler `FUN_587FC9C0` calls this routine at
`0x587FD022` after recognizing `/` followed by a digit. This is the numeric
channel path adjacent to the separately documented `/w` and `/whisper`
recipient path.

The separate `/e` and `/enter` command route is documented in
[`current-main-user-chat-enter-command.md`](current-main-user-chat-enter-command.md);
it dispatches through `FUN_587F7000`, while the numeric `/<digits>` route here
uses `FUN_587F6C40`.

The routine parses decimal digits from the input, stopping at a space or NUL,
stores the parsed number at receiver offset `+0x21D1C`, formats it with the
mapped `%d` string at `0x5898D18C` into receiver buffer `+0x21CEC`, and mirrors
that text into `0x58A245C0 + 0xC0`. It then checks the text against three
receiver entries starting at `+0x130` with a `0x18`-byte stride through
`FUN_587B7870`. That helper returns 1 when any entry equals the supplied string
and 0 when all three miss. The same helper is called independently by matched
`FUN_58890110` at `0x58891BE4`.

When the channel string does not match an entry, the command displays
`MESSAGESTRING_ENTER_USERCHAT_CHANNEL_FIRST` and resets the input through
verified `FUN_5875F940`. For a match with trailing message text, the routine
builds a `0x30`-byte header, appends the text, and submits the record through
verified `FUN_587B81A0`. A zero result displays
`MESSAGESTRING__FORBIDDEN_WORD_INCLUDE`. The routine then formats
`MESSAGESTRING_CHANNEL_USERCHANNEL_CHATTING` and updates the input label through
verified `FUN_587EE240(2, 5, label)`. These observations establish the local
input and UI behavior; they do not establish the server response or a complete
wire protocol.

Fresh Ghidra body ranges cover 947 bytes / 288 instructions for
`FUN_587F6C40` and 89 bytes / 41 instructions for `FUN_587B7870`, totaling
1,036 bytes / 329 instructions in three ranges. The generated instruction
streams are [`FUN_587f6c40.cpp`](../src/client-current/Main/FUN_587f6c40.cpp)
and [`FUN_587b7870.cpp`](../src/client-current/Main/FUN_587b7870.cpp); the
range manifest is
[`current-main-user-chat-channel-command-body-ranges.tsv`](../config/NF2_2026/current-main-user-chat-channel-command-body-ranges.tsv).
ObjDiff 3.8.0 verifies both functions at 100.0%. The
[focused verifier](../tools/verify_current_main_user_chat_channel_command.py)
checks all three mapped ranges and instruction counts, all 20 direct calls,
both matched caller sites, and the original slash, `%d`, and localization-key
evidence.

The three entries' domain meaning, accepted numeric range, `0x30`-byte header
schema, `FUN_587B81A0` contract, localization display details, and server effect
remain unresolved. No client or emulator runtime test was performed.
