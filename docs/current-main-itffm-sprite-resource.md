# Installed Main.dll `ITFFM.spr` resource conversion

This subsystem contains the installed client's `ITFFM.spr` resource handler
`FUN_58755CF0` and its record-to-frame helper `FUN_587555C0`. The two functions
total 2,473 bytes and form a closed direct-call slice: the handler calls the
helper once per indexed record, while every other direct call or jump leaving
these bodies targets code already verified byte-identical.

## Original-code evidence

The byte-matched `FUN_58756020` calls `FUN_58755CF0` at `0x58756088` on its
observed selector-1 path. The handler contains the strings `Sangduck Sprite
File` and `ITFFM.spr`, reads a record count at receiver `+8`, allocates an
indexed pointer array, and calls `FUN_587555C0` at `0x58755DC3` for each
record. For each returned structure it allocates metadata, copies `0x1C`
DWORDs from `+0x100`, passes dimensions and byte data to matched
`FUN_5897CD4C`, and accumulates observed byte values. A later branch passes the
the relative `ITFFM.spr` path through a runtime file/API callback.

The helper selects a record through the pointer table at receiver `+0x20`,
derives row and byte-stride values from its fields, allocates staging storage,
and copies scanlines through matched `FUN_5897CD4C`. It builds a `0x174`-byte
result structure with two `%d.BMP` strings, observed dimensions/stride fields,
and additional row-scan output. The nested field types and resulting pixel
format are not recovered.

Ghidra's exact instruction ranges and the mapped-image coverage checked by
`tools/verify_current_main_sprite_resource.py` are:

| Entry | Exact body ranges | Bytes |
| --- | --- | ---: |
| `58755CF0` | `58755CF0+312`, `58755E30+76`, `58755E85+312`, `58755FC6+38` | 738 |
| `587555C0` | `587555C0+797`, `587558E0+782`, `58755BF5+103`, `58755C5F+53` | 1,735 |

ObjDiff 3.8.0 confirms all 2,473 bytes identical. The focused audit also checks
the matched caller, the open edge at `0x58755DC3`, 29 direct transfers, and 11
indirect transfer sites. The indirect sites include register-held callbacks
and file/format callbacks through `0x5898C180`, `0x5898C184`, and `0x5898C3C4`.

## Uncertainties and validation limits

The receiver and record schema, field types, pixel format, transparency
meaning, and BMP output contract remain uncertain. No direct vtable/RTTI
reference identifies either entry as a class method. Static direct-call closure
does not identify the indirect callback targets, and no original-client or
emulator render test has confirmed visible output. The generated sources
preserve original instructions for byte matching; they are not a clean semantic
rewrite of the format handler.

Re-run the focused checks with:

```powershell
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58755CF0 --only 587555C0
rtk python tools/verify_current_main_sprite_resource.py
```
