# Current Main panel item manager

Ghidra identifies `FUN_58883f80` at `0x58883F80` as a constructor that first
initializes `CMenuScreen` and then installs the `CPannelItemManager` vtable.
`FUN_5878af40` calls it at `0x5878CA20`.

The body creates many `CSpriteDataScreen` and `CSpriteBundleScreen` children,
selects records from mapped global tables, and passes record-derived fields to
the observed sprite/text helper routines. It also resolves the localized key
`ITEM_NAME_PREMIUMSHIP`. The record schemas and the identities and layout of
the other constructed items remain unknown.

Ghidra assigns eleven body ranges totaling the inventory's 10,242 bytes.
Capstone confirms all ten intervening gaps are seven- or six-byte alignment
NOP sequences. ObjDiff 3.8.0 reports a 100% match for all eleven compiled
segments; 479 mapped operands were audited. This is static byte-match evidence;
the panel was not rendered in the original client.
