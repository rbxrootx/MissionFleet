# `CRoomTypeNormal` constructor

The installed Main.dll contains a 171-byte constructor at
`[0x588CF880, 0x588CF92B)`. Fresh Ghidra exports cover 59 instructions in one
contiguous range; the emitted instruction source matches that full range.

Byte-matched `CRoomSettingManager` (`FUN_588C9280`) calls this constructor at
`0x588CAA9E` after the lookup at `0x588CAA79` accepts resource `0x74`. It
passes manager fields at `+0x68` and `+0x12C`, plus the caller's EBX and EBP
values, then calls the constructor. The return value is stored at manager
`+0x19C` after the resource-present and resource-missing branches converge.
The focused verifier checks those mapped caller instructions directly.

The constructor calls byte-matched `FUN_588D02E0`, `FUN_5897CC4E`, and
`FUN_58897930`, then installs vtable `0x589A0E20`. RTTI on that table identifies
`.?AVCRoomTypeNormal@@`. When resource `0x1B4` is accepted, it calls
`FUN_58897930`, whose matched body is identified as
`CPannelNormalRoomSetting`, passing the receiver, two zero values, constants
`0x40` and `7`, and two values derived from saved arguments by adding `0x2C`
and `0xBD`. It stores the returned pointer at receiver `+0x70`.

The resource meanings, manager fields, EBX/EBP-derived argument meanings and
units, and child panel's visual and interactive roles remain unknown. The
instruction stream and its direct call closure are byte-matched, but this
path has not been tested in the emulator or compared visually with the
original client.
