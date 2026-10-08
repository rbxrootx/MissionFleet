# Installed Main.dll chat-channel input helpers

The matched `FUN_587FC9C0` chat-submit handler dispatches to three channel
helpers after matching their respective input prefixes:

| Function | Caller site | Ghidra body ranges | Bytes / instructions | Route |
| --- | --- | --- | --- | --- |
| `FUN_587F69B0` | `0x587FD680` | `[0x587F69B0,0x587F6BB5)`, `[0x587F6BB8,0x587F6C32)` | 639 / 196 | Direct-fleet |
| `FUN_587F6740` | `0x587FD68C` | `[0x587F6740,0x587F6926)`, `[0x587F6929,0x587F69A3)` | 608 / 187 | Squadron |
| `FUN_587F64D0` | `0x587FD695` | `[0x587F64D0,0x587F66B6)`, `[0x587F66B9,0x587F6733)` | 608 / 185 | Fleet |

Fresh Ghidra reference and range exports confirm those caller sites and full
instruction coverage. Each pair of ranges is separated by a three-byte gap
outside the function body. The emitted sources keep the ranges separate rather
than treating the gaps as function bytes.

All three handlers read input text from `[this + 0x20D30] + 0x80`, derive a
prefix length from the initial encoded bytes, and pass text with an optional
payload through channel-specific gates. The direct-fleet route checks
`DAT_58A0B4A0`, `DAT_58A0B4A4`, and `DAT_58A245C0 + 0x640`; its filter helper is
`FUN_587B8370`, and its localized channel is
`MESSAGESTRING_CHANNEL_DIRECTFLEET_CHATTING`. The squadron route checks
`DAT_58A0B4A4` and `DAT_58A245C0 + 0x644`, uses `FUN_587B8300`, and resolves
`MESSAGESTRING_CHANNEL_SQUADRON_CHATTING`. The fleet route checks
`DAT_58A0B4A0` and `DAT_58A245C0 + 0x63C`, uses `FUN_587B8290`, and resolves
`MESSAGESTRING_CHANNEL_FLEET_CHATTING`. All three call `FUN_587EE240` with the
observed channel tuples `(2,4)`, `(2,3)`, and `(2,2)` respectively. On the
payload path, a zero result from the channel-specific filter helper triggers
`MESSAGESTRING__FORBIDDEN_WORD_INCLUDE`.

Each body contains 16 direct calls, all to functions with byte-identical
catalog records. The emission manifests preserve the 35/11, 33/11, and 33/11
relocations in their two exact ranges. Each handler also makes five indirect
localized-string calls through `DAT_5898C030`; fresh decompilation shows no
virtual calls in these bodies, but the pointer target remains unresolved.

The source files under `src/client-current/Main/` match 639 + 608 + 608 =
1,855 mapped instruction bytes with the pinned `clang-cl` build and objdiff.
The permission/filter field meanings, encoded prefix schema, and exact effect
of `FUN_587EE240` remain uncertain; no message-append behavior is inferred from
its name or arguments alone.
