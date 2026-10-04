# Current Main.dll selector-driven child rebuild

`FUN_58780640` is called from both the virtual state/update method
[`FUN_5877EC80`](current-main-airborne-state-update.md) and the RTTI-identified
`CHCB_LandingTank` method
[`FUN_58782CF0`](current-main-chcb-landing-tank-method.md). Both callers pass
the selected object's byte at `+0x354`. Before the call, each compares it with
the active object's byte at the same offset and may set a neighboring child
flag when the values differ.

The callee returns early when its `+0xAC`/`+0xA8` count condition fails or byte
`+0xC4` is zero. Otherwise it stores the requested byte at `+0xB8`, resets
bookkeeping fields, and rebuilds receiver-owned child references from tables
rooted at globals `0x58A245C4`, `0x58A247F8`, and `0x58A24640`. The branches
compare the requested byte with the active object's value and perform bounded
lookups at observed indices 7, 8, `0xBB`, and `0xBC`. A selected record's four
dwords are copied into child storage, pointer links are updated, and a link
field is cleared across eight receiver entries before return.

ObjDiff verified all 605 bytes and checked 18 operand targets. The selector's
domain meaning, receiver/child types, global table schema, index meanings, and
visible/gameplay effects remain unresolved. Caller evidence establishes where
the selector comes from, but not its semantic labels. No emulator test was
performed.
