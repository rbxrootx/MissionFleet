# Current Main communicator user-status panel slice

The installed `Main.dll` has four now byte-matched methods in the
`CPannelCommunicatorConfigPannel` path, totaling 1,922 bytes and 543 decoded
instructions. Their exact Ghidra body ranges are:

| Function | Body ranges | Bytes |
| --- | --- | ---: |
| `FUN_588424D0` | `588424D0..58842759` | 649 |
| `FUN_58842B10` | `58842B10..58842D99` | 649 |
| `FUN_58844CA0` | `58844CA0..58844D3D`, `58844D40..58844D89`, `58844D90..58844EE0` | 566 |
| `FUN_58888F10` | `58888F10..58888F4A` | 58 |

Ghidra identifies the vtable at `0x5899E400` as
`CPannelCommunicatorConfigPannel`. Its slot `+0x04` points to `FUN_58844CA0`,
and the matched handler `FUN_588450B0` occupies slot `+0x18`. The handler calls
`FUN_588424D0` at `0x588450D5`, `0x588456D0`, and `0x58845914`, and calls
`FUN_58842B10` at `0x588457EA`. `FUN_58844CA0` calls `FUN_588424D0` at
`0x58844D51` and `FUN_58888F10` at `0x58844E1C`.

The two list refresh methods walk linked records using the next pointer at
`+0x54`. The first starts from the list head at the root record's `+0x6C`; the
second starts at `+0x64`. Both inspect status at `+0x9E`, clan-related fields
at `+0x78`, `+0x7C`, and `+0x80`, and child pointers at `+0x70` and `+0x74`.
They update text through `FUN_589088D0`. Status values 0 through 6 select the
observed localization keys `STR_COMMUSERSTATUS_LOGOFF`,
`STR_COMMUSERSTATUS_SHIPYARD`, `STR_COMMUSERSTATUS_BATTLECHANNEL`,
`STR_COMMUSERSTATUS_CHATTING`, `STR_COMMUSERSTATUS_BATTLEREADY`, and
`STR_COMMUSERSTATUS_UNDERBATTLE`; value 0 uses gray `0x777777`, while the
recognized nonzero statuses use white `0xFFFFFF`. Clan labels use the observed
formats `[FM] %s`, `[SM] %s`, `[F] %s`, or `[S] %s`; the no-clan branch requests
`STR_COMMCLANNAME_NOCLAN`.

`FUN_58844CA0` changes panel and child state bits, refreshes the first list,
and conditionally calls `FUN_58888F10`. That 58-byte helper clears the low four
bits of the 16-bit state at `child+0x24` for the five child pointers stored at
panel offsets `+0xDC` through `+0xEC` in four-byte steps. The panel method also
uses an indirect child callback at virtual slot `+0x18`; its destination and
contract are unresolved.

The verifier checks each exact instruction range against the mapped image,
compiled bytes with ObjDiff 3.8.0, all 37 outgoing direct calls, the four
matched-parent callsites, the RTTI name and vtable slots, and 41 selected CALL
edges in each of two fresh Ghidra exports. Every direct callee is already
byte-matched. Remaining uncertainties include which records belong to each
list, the meaning of the record and state fields, localization and callback
contracts, and the runtime appearance. No emulator test has been run.
