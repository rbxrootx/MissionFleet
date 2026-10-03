# Control-menu factory child initializer

`FUN_587DBA00`, identified in the existing factory evidence as
`CPageFactory_ControlMenuScreen`, directly calls `FUN_587D7B90` at
`0x587DDFB2` and `0x587DE5DD`. The first returned pointer is stored at receiver
offset `+0x504`; the second is stored at `+0x584`. This establishes that the
same initializer creates two child objects in this factory path, without
identifying their class names.

The 486-byte mapped body allocates `0xD4` bytes through `FUN_5897CC4E`. When
allocation succeeds, it calls `FUN_58794600` with fixed region values `0`,
`-0x320`, and `0x258`, plus a word derived from the receiver's `+0xB8` child.
It then reads values from three globals
(`0x58A246D8`, `0x58A246F0`, and `0x58A246B8`), checks their observed count and
pointer fields, and passes selected values to a sequence of child methods. It
updates words at `+0x24` and `+0x26`, conditionally calls `FUN_58902F50` and
`FUN_58902EE0`, and returns the initialized child pointer. These descriptions
follow the mapped fields and calls; no UI labels or table semantics are
assigned.

The indexed extent decodes continuously from `0x587D7B90` through its `ret` at
`0x587D7D75`. ObjDiff 3.8.0 reports a 100% match across all 486 bytes, with 19
mapped operand targets checked. The direct-call set has 12 functions; four
were already matched (`FUN_58902D20`, `FUN_58902EE0`, `FUN_58902F50`, and
`FUN_5897CC4E`) and eight remain unmatched. The child class, global table
schemas, and helper contracts are unresolved. No emulator runtime or visual
test was performed.
