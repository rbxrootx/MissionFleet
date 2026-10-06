# `FUN_58893E80`: chat-message formatting and whisper history

Fresh Ghidra decompilation of the installed `Main.dll` identifies a message
formatting routine with 2,025 body bytes in two ranges:

- `[0x58893E80, 0x588941DA)` — 858 bytes
- `[0x588941E0, 0x5889466F)` — 1,167 bytes

The six mapped bytes between the ranges decode as `lea ebx,[ebx]`, a
multi-byte no-op. Ghidra leaves this alignment padding out of the function
body. The candidate at
[`src/client-current/Main/FUN_58893e80.cpp`](../src/client-current/Main/FUN_58893e80.cpp)
emits only the exact body ranges. The verifier reports 100% objdiff identity
for all 2,025 bytes across both segments and checks 109 mapped relocations.

The decompilation switches on message-type and flag fields, builds localized
Whisper, Team, GM, and channel strings, and applies channel visibility and
filter conditions before forwarding the selected text and color to the
byte-matched `FUN_5888D250`. One Whisper path compares a sender against four
0x18-byte entries and updates that history when the sender is not already
present. The function then calls `FUN_5888D5C0`; its effect is not established
here.

Ghidra reports four direct callers: `FUN_587B83E0` at `0x587B86CA` and
`0x587B879F`, `FUN_587E8C00` at `0x587E9283`, and `FUN_58805A60` at
`0x58805B1E`. At the two sites in the byte-matched `FUN_587B83E0`, ECX is
loaded from `[0x58A245C0]`; each call pushes four stack values. The observed
epilogue also uses `ret 0x10`. Ghidra's inferred prototype exposes only three
stack parameters, so the fourth value and the semantic parameter names remain
uncertain. The other two callers are not yet byte-matched.

The exact flag meanings, remaining callers' setup, effects of
`FUN_5888D5C0`, and in-game chat rendering have not been runtime-tested. The
function is byte-matched static code, not a claim that the client or chat
subsystem is independently runnable.
