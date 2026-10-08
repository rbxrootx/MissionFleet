# Current Main `/e` and `/enter` chat-input command

The byte-matched input handler `FUN_587FC9C0` dispatches to `FUN_587F7000` at
`0x587FD674`. Its mapped command table points to `/e` at `0x589CC124` and
`/enter` at `0x589CC128`; the Ghidra caller and instruction stream show this
route requires a space after the command. This is distinct from the numeric
`/<digits>` route through `FUN_587F6C40` documented in
[`current-main-user-chat-channel-command.md`](current-main-user-chat-channel-command.md).

Both fresh Ghidra projects agree on the following ranges, and Capstone decodes
each byte and instruction from the installed mapped `Main.dll`:

| Function | Exact body ranges | Bytes | Instructions |
| --- | --- | ---: | ---: |
| `FUN_587F7000` | `0x587F7000..0x587F723A`, `0x587F7240..0x587F73AD` | 935 | 294 |
| `FUN_587B78D0` | `0x587B78D0..0x587B792D` | 93 | 43 |
| `FUN_587B7E70` | `0x587B7E70..0x587B7EE9`, `0x587B7EF0..0x587B7F2D`, `0x587B7F30..0x587B7FC5` | 331 | 117 |
| `FUN_587EE9C0` | `0x587EE9C0..0x587EE9FE` | 62 | 25 |

The root handler scans a numeric token after the command prefix, formats the
observed number, and updates fields around receiver `+0x21CEC..+0x21D20`. One
branch compares the formatted text against up to three receiver entries
starting at `+0x130`, spaced `0x18` bytes apart, through `FUN_587B78D0`.
`FUN_587B7E70` clears local storage, copies three observed strings into
`0x18`-byte areas, assembles a `0x49`-byte payload, and sends it through matched
`FUN_58970C70` with selector `0x8001B111` and flags `0x50000`. The root also
copies text into receiver `+0xC0` through `FUN_587EE9C0`, which copies at most
`0x17` bytes and terminates the result. The other root path requests
`MESSAGESTRING_USERCHAT_NOT_ALLOWED` through an indirect callback.

The four functions make 19 direct calls in total; every direct destination is
byte-matched, including the three helpers in this slice. `FUN_587B78D0` and
`FUN_587B7E70` also serve matched `FUN_58890110`. `FUN_587EE9C0` has another
incoming call from currently unmatched `FUN_588AB330` at `0x588AB48B`, which is
preserved in the call-edge evidence. The focused verifier checks both fresh
Ghidra body and edge exports, all seven mapped body ranges, all direct-call
targets, the matched and unmatched callers, the command strings, and the
remaining indirect call.

The number's domain meaning, the three entry records' purpose, selector and
payload semantics, and the response or server effect are not established. The
indirect call at `0x587F734E` loads its target from `0x5898C030`; its owner and
policy remain unresolved. No emulator runtime test was performed.

Implementation and checks: [`FUN_587f7000.cpp`](../src/client-current/Main/FUN_587f7000.cpp),
[`FUN_587b78d0.cpp`](../src/client-current/Main/FUN_587b78d0.cpp),
[`FUN_587b7e70.cpp`](../src/client-current/Main/FUN_587b7e70.cpp),
[`FUN_587ee9c0.cpp`](../src/client-current/Main/FUN_587ee9c0.cpp),
[`verify_current_main_user_chat_enter_command.py`](../tools/verify_current_main_user_chat_enter_command.py).
