# Current Main control-menu settings initializer

Ghidra's function inventory identifies `FUN_5888D110` as a 314-byte body.
The matched setup caller `FUN_5878AD50` calls it at `0x5878ADD9` with
`DAT_58A0B450`. ObjDiff 3.8.0 verifies all bytes and checks 13 mapped operand
targets using the pinned `clang-cl` 19.1.4 source compiler.

The method clears 0x30 bytes at receiver offset `+0x78`, reads dwords at `+0x18`
and `+0x1C` from the supplied record into globals `0x58A0B468` and
`0x58A0B46C`, XORs those values with `0xAAAAAAAA`, and passes them to two
helpers. It then makes calls through callback slots at `0x5898C198` and
`0x5898C030`, calls `FUN_5875F940` on the object at `+0x154`, and scans a
null-terminated string at child offset `+0x80`. The resulting length is stored
at child offsets `+0x8C` and `+0x94`. Finally, branches on globals
`0x58A0B4A0` and `0x58A0B4A4` select writes to receiver offsets `+0x638`,
`+0x63C`, `+0x640`, and `+0x644`, and state value 5 to child offset `+0x50`.

The operations and addresses above follow the decoded mapped instructions and
the direct caller. The supplied record schema, helper and callback contracts,
field identities, branch meanings, and visible screen effects remain unknown.
The targeted Ghidra decompilation did not return; no high-level names are
inferred from that failed query. No emulator or visual test was performed.
