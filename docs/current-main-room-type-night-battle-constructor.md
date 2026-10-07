# `CRoomTypeNightBattle` constructor

The installed Main.dll contains an exact 275-byte constructor at
`[0x588CF570, 0x588CF683)`. Fresh Ghidra body and edge exports cover 89
instructions in that contiguous range.

Byte-matched `CRoomSettingManager` (`FUN_588C9280`) calls it at
`0x588CAAD9` only after `FUN_5897CC4E` accepts resource `0x70`. The caller
passes its fields at `+0x68` and `+0x12C`, along with EBX and EBP, and stores
the returned pointer at manager `+0x194`. The focused verifier checks these
mapped instructions. The constructor's only direct call is the byte-matched
base constructor `FUN_588D02E0`.

The constructor installs vtable `0x589A0DF8`; its RTTI type descriptor names
`.?AVCRoomTypeNightBattle@@`. It reads a pointer from global slot `0x58A24748`
and uses fields `+0x164` and `+0x18C` to select two records. It stores each
selected record pointer at a child object's `+0x50` and copies six DWORDs from
record offsets `+0x10` through `+0x24` to child offsets `+0x0C` through `+0x20`.
The first record's `+8` value is also written through the child at receiver
`+0x5C` to that child's `+0x74`.

The global pointer, field meanings, record schema, child roles, and visible
behavior are unresolved. On the absent-third-record path, the mapped code
clears EAX and reads `[EAX+8]`, an absolute address-`0x8` access; its valid-state
behavior remains unknown. This slice has static binary and RTTI verification,
but no emulator or visual runtime test.
