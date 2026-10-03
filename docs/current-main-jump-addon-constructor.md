# Current Main jump add-on constructor

`FUN_58887760` initializes a `CMenuScreen` base and assigns the Ghidra-labeled
`CPannelJump_AddOn::vftable`. Its body has nine ranges totaling 2,772 bytes:

| Ghidra range (inclusive) | Bytes |
| --- | ---: |
| `0x58887760..0x58887FC9` | 2,154 |
| `0x58887FD0..0x58888018` | 73 |
| `0x58888020..0x58888068` | 73 |
| `0x58888070..0x588880B8` | 73 |
| `0x588880C0..0x58888108` | 73 |
| `0x58888110..0x58888158` | 73 |
| `0x58888160..0x588881A8` | 73 |
| `0x588881B0..0x588881F8` | 73 |
| `0x58888200..0x5888826A` | 107 |

Unowned gaps between these ranges are excluded from the source and comparison.
ObjDiff 3.8.0 verifies all nine ranges against the captured mapped `Main.dll`.

## Evidence from the original code

The verified parent constructor `FUN_58889640`, identified as
`CPannelJump_ControlMenuScreen`, calls this constructor at `0x5888A134` and
`0x5888A1B8`. The body initializes child controls from bounded shared-resource
entries. It obtains localized text through the exact keys
`MESSAGESTRING__HARBOR_NAME_USA`, `_UK`, `_JPN`, `_GM`, `_FRANCE`, `_SOVIET`,
`_ITALY`, `_CHINA`, and `_NONE`, then copies each into a child text buffer with
an observed 0x80-byte bound and null terminator. These keys and copy loops are
directly present in Ghidra's pseudocode. ObjDiff checks all 2,772 bytes and 90
mapped operand targets.

## Uncertainties

The control-to-key mapping is visible from indexed child slots, but its user
interaction, the intended meaning of `GM`, and appearance at runtime remain
unverified. No emulator test was performed.
