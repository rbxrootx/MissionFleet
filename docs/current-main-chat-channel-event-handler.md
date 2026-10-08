# Current Main chat/channel event handler

The installed FleetMission `Main.dll` maps `FUN_587b83e0` across two Ghidra
ranges: `0x587B83E0..0x587B8B09` and `0x587B8B10..0x587B8F10`, totaling 2,859
bytes. The six bytes between these ranges are excluded from the reconstructed
function body.

Ghidra reports no direct code caller and a data reference at `0x5899A178`. The
pinned mapped image stores the function address `0x587B83E0` at that slot,
supporting an indirect callback registration. The table owner and dispatch
path are not identified.

## Behavior supported by the original code

The routine reads a group discriminator at `param_2+6`, a message code at
`param_2+4`, and associated fields at `+8`, `+0xC`, and `+0xE`. It branches on
the observed groups `0x8000`, `0x8001`, and `0x8002`; these are observed field
values, not recovered protocol declarations.

In the `0x8001` group, two cases send messages `0x8002000F` and `0x80020010`
through the separately verified outbound sender. The `0x8000` group has a
branch that sends `0x8001B101` with the channel-name buffer at `0x58A0B450`.

The `0x8002` group routes `0x80020A00` records to different chat/UI helpers
based on screen and subtype fields. Codes `0x8002B111` through `0x8002B115`
handle channel and member results: branches display localized strings for
full/already-joined conditions, update stored channel/member entries, and
format supplied user-list text for display. The executable contains message
keys such as `MESSAGESTRING_ALL_CHATTING`, `MESSAGESTRING_USER_LIST_FLEET`,
`MESSAGESTRING_USER_LIST_SQUADRON`, and
`MESSAGESTRING_USER_LIST_DIRECTFLEET`. The `0x8002B115` path copies the
provided list into display chunks of up to 100 bytes.

The `0x80020A00` case's paired message/display routines and their verified
direct-call closure are documented separately in
[`current-main-message-80020a00-chat-display.md`](current-main-message-80020a00-chat-display.md).

The `0x8002B111` channel-result and matching `0x8002B112` removal branches
refresh the main control menu through `FUN_5888DF10`; the mapped body and
caller evidence are documented in
[`current-main-chat-channel-menu-refresh.md`](current-main-chat-channel-menu-refresh.md).

The two source segments preserve the Ghidra body ranges and were compared
against the pinned mapped image with ObjDiff 3.8.0. Local analysis artifacts
include `var/current-main-next/587b83e0-ghidra.c`, its range/reference log, and
the mapped pointer value at `0x5899A178`.

## Unresolved details

The callback table owner, exact group/message schemas, meanings of stored
fields, and compatibility with the live server remain unknown. The local
capture contains no matching server exchange, and chat/channel behavior has
not been tested in the emulator.
