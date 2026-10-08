# Current Main `/user` chat command

The byte-matched chat-input handler `FUN_587FC9C0` routes the `/user ` prefix
to `FUN_587EDF60` at `0x587FD1B1`. The command text pointer at `0x589CC134`
resolves to `/user`; the matched parent checks for a following space before
calling the handler. The next pointer at `0x589CC138` is a separate `/c`
command branch. This reconstruction covers only `/user` and its open direct-call
closure, not the surrounding chat parser.

Fresh Ghidra ranges from two independent projects and a third selected-function
decompilation agree on every byte and instruction in the closure:

| Function | Exact body range | Bytes | Instructions |
| --- | --- | ---: | ---: |
| `FUN_587EDF60` | `0x587EDF60..0x587EE236` | 727 | 228 |
| `FUN_587B7700` | `0x587B7700..0x587B7804` | 261 | 94 |
| `FUN_5873A730` | `0x5873A730..0x5873A75F` | 48 | 23 |
| `FUN_5897CFF6` | `0x5897CFF6..0x5897CFFB` | 6 | 1 |

The handler copies up to `0x32` bytes from the current chat text after the
six-byte command prefix, runs indirect validation callbacks, and scans a
decimal digit token. It accumulates the value through a decimal-power helper,
rejects values above `0xFFFF`, formats the value, and reaches
`FUN_587B7700` for selector validation or notification. That helper checks
receiver fields or one of three stored channel strings. Its accepted paths call
the matched outbound sender `FUN_58970C70` with event `0x8001B115`; its fallback
requests `MESSAGESTRING_NOT_ALLOWED_CHANNEL_TO_USE_COMMAND`. The other open
helpers are the repeated-squaring decimal-power routine and a six-byte thunk
through pointer slot `0x5898C2EC`.

The three other functions are shared with byte-matched `FUN_58890110`. That
caller confirms helper reuse, but it does not dispatch to the `/user` root and
does not enlarge this command branch. The evidence includes two independent
Ghidra body and edge exports, the exact mapped command string and call site,
and complete decoded instruction ranges. The emitted x86 instruction bodies
match the pinned `Main.dll` capture at **100% under ObjDiff 3.8.0**, across all
1,042 bytes.

The parsed number's meaning, the indirect callback policy and target, the
meaning of event `0x8001B115`, and its server-side effect remain unknown. No
emulator runtime test was performed.

Implementation and checks: [`FUN_587edf60.cpp`](../src/client-current/Main/FUN_587edf60.cpp),
[`verify_current_main_user_command.py`](../tools/verify_current_main_user_command.py),
and [`main-user-chat-command-body-ranges.tsv`](../config/NF2_2026/main-user-chat-command-body-ranges.tsv).
