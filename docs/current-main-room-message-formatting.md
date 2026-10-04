# Current Main.dll room-message formatting helper

`FUN_5888D390` is a 521-byte routine in the hash-pinned installed-client
`Main.dll`. Verified packet handlers `FUN_587B83E0` and `FUN_587BB700` both
pass a receiver context, a packet-derived 16-bit selector, and a zero auxiliary
argument. The latter reaches it for message event `0x8002011C` when packet
word `+0xE` is 1.

The helper dispatches on selectors 0 through 5. Its mapped resource-key bytes
identify `MESSAGESTRING__ROOM_MESSAGE_6`, `ROOM_MESSAGE_1`, `ROOM_MESSAGE_7`,
`ROOM_MESSAGE_2`, `ROOM_MESSAGE_3`, `ROOM_MESSAGE_4`, and
`ROOM_MESSAGE_5`; one path also uses the literal format template `%s   %s`.
Selector 1 copies 25 DWORDs from its input record to receiver `+0x198`, builds
text in local buffers, and passes it with color `0xFFFF00` to `FUN_5888D250`.
The other selector paths retrieve or format a room-message resource and also
reach that display helper. ObjDiff verifies the full body, `ret 0xC`, and all
38 mapped operand targets.

The indirect callback contracts, packet schema, exact formatting, and display
conditions are not fully established from static evidence. The room-message
resource names identify the subsystem, but no live client chat test was run.
