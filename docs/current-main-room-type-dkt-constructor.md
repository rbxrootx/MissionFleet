# `CRoomTypeDKT` constructor

The installed Main.dll contains an exact 291-byte constructor at
`[0x588CCF80, 0x588CD0A3)`. Fresh Ghidra body and edge exports cover 92
instructions in that contiguous range.

Byte-matched `CRoomSettingManager` (`FUN_588C9280`) calls it at
`0x588CA9EA` after `FUN_5897CC4E` accepts resource `0x70`. It passes manager
fields `+0x68` and `+0x12C` along with EBX and EBP; the returned pointer is
stored at manager `+0x184`. The focused verifier checks these caller
instructions against the mapped image. The constructor's only direct call is
the byte-matched base constructor `FUN_588D02E0`.

The constructor installs vtable `0x589A0D10`, whose RTTI type descriptor names
`.?AVCRoomTypeDKT@@`. It reads a pointer from global slot `0x58A24690` and
checks fields `+0x164` and `+0x18C`. If the count exceeds `0x23` or `0x24`, it
reads record pointers at offsets `+0x8C` or `+0x90`. It stores those pointers
at child objects selected through receiver `+0x60` and `+0x64`, at each child's
`+0x50`, and copies six DWORDs from record offsets `+0x10` through `+0x24` to
child offsets `+0x0C` through `+0x20`. The first record's `+8` value is also
written through the child at receiver `+0x5C` to that child's `+0x74`.

The resource and global-field meanings, thresholds, record schema, child
roles, and visible behavior remain unresolved. On the absent-record path, the
mapped code clears EAX and reads `[EAX+8]`, an absolute address-`0x8` access;
its valid-state behavior is unknown. This slice has static binary and RTTI
verification, but no emulator or visual runtime test.
