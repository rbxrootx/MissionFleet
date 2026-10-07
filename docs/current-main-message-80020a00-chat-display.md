# Current Main `0x80020A00` chat/display path

This subsystem follows one observed message case in the installed
FleetMission `Main.dll` `FUN_587B83E0` handler. Fresh Ghidra decompilation shows
the dispatcher comparing the message code with `0x80020A00` at `0x587B852E`.
Within that case it calls `FUN_5881E120` at `0x587B861F`, `0x587B870A`, and
`0x587B874D`, and calls `FUN_587531B0` at `0x587B8646` and `0x587B8772`.
Capstone confirms those five instructions are direct calls to the recorded
targets; no additional calls to either root occur in the matched handler body.
The matched caller's Ghidra body is 2,859 bytes in two ranges, as recorded in
[`the handler evidence`](current-main-chat-channel-event-handler.md).

## Behavior visible in the original code

The two roots take different parameter layouts but share most of their
downstream helpers. For the observed `0x800` subtype, `FUN_5881E120` handles
values `-1`, `0`, and `1` by passing supplied text to the matched text routine,
formatting the key
`MESSAGESTRING_DO_NOT_SEND_MESSAGE_TO`, or displaying
`MESSAGESTRING_WHISPER_TO_GM`. `FUN_587531B0` has a related but not identical
branch: the zero and one values format those localized keys for a display
helper, while the `-1` value has no corresponding action in that branch. These
values are observations from the function arguments, not recovered protocol
definitions.

For other subtypes, both roots call `FUN_5881DBA0`, which compares a supplied
value against at most 128 entries at receiver offset `+0xFC`, stepping by
`0x18`. A no-match path can route through `FUN_5884B280`; that helper checks
global and child state and can either emit text through `FUN_58821480` or send
through the already matched `FUN_58751BF0`. `FUN_58821480` breaks text into
display chunks of at most `0x400` bytes. Its boundary-byte test is visible in
the code, but does not by itself identify the character encoding.

The shared closure includes two parallel panel paths. Ghidra identifies
`FUN_588206F0` and `FUN_58821E00` as constructors for
`CPannelCommunicatorChatPannel` and `CPannelCommunicatorChatPannel2`; each
initializes 128 entry flags and creates screen children. `FUN_588201F0` and
`FUN_58821900` check for a matching member, fill a free slot or append up to
the observed `0x80` count, and format
`MESSAGESTRING__IT_JOIN_TO_CHATTING`. Their duplicate and full-table branches
emit different observed error paths. The exact meaning of the stored fields
and error codes is not established.

## Byte and closure validation

The selected union contains 19 functions / 8,961 bytes across 19 fresh Ghidra
body ranges. The two roots each reach an 18-function closure, sharing 17
helpers. Capstone decodes every byte and matches Ghidra's instruction count for
each range. ObjDiff 3.8.0 verifies all 19 reconstructed bodies at 100.0%, with
559 mapped operand targets checked.

[`verify_current_main_message_80020a00.py`](../tools/verify_current_main_message_80020a00.py)
checks the exact function set and fresh body ranges, both root paths, all five
handler call sites, the dispatcher comparison, and the direct-transfer
boundary. Its current audit finds 168 direct transfers from the selected
functions to 24 already byte-verified functions, with no unresolved direct
targets. The reproducible body-range input is
[`message-80020a00-body-ranges.tsv`](../config/NF2_2026/message-80020a00-body-ranges.tsv).

## Unresolved details

The packet schema, parameter meanings, global and child state fields, text
encoding, and live-server compatibility remain unknown. The local capture has
no matching server exchange. The reconstructed functions have not been run in
the emulator, so this work verifies machine-code reproduction and static
control flow, not working chat behavior.
