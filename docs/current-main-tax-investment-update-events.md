# Tax and investment update events

The paired update handlers `FUN_58830010` and `FUN_58830280` and their eight
direct local helpers add 10 exact functions / 1,498 bytes / 400 instructions.
Objdiff 3.8.0 confirms all emitted instruction bytes against the installed
`Main.dll`. The focused verifier compares body ranges and direct-call edges from
two fresh Ghidra exports, the checked-in manifests, and the mapped image.

The byte-matched dispatcher `FUN_588C4210` routes event `0x8002311B` to
`FUN_58830010` at `0x588C4E93` and `0x588C4F50`, and event `0x8002311C` to
`FUN_58830280` at `0x588C5028` and `0x588C508E`. The observed active and subtype-3
paths pass a record identifier and two payload values. The `0x231B` path also
calls the verified refresh routine `FUN_5882FC60`; both event paths write
selected-record fields. These callsites and event IDs come from the dispatcher
decompilation and matching fresh edge exports.

Both handlers compare the supplied record identifier with the entry selected
through receiver `+0x120` and the byte at `+0x21C`. The `0x231B` handler updates
nested values at `+0x48`, `+0x50`, and `+0x58`; the paired `0x231C` handler uses
`+0x4C`, `+0x54`, and `+0x5C`. Their scaled getters read `+0x48` or `+0x4C`,
apply the observed negative-value adjustment, multiply by the global at
`0x5898CB38`, and round. On the selected-record path, each handler passes a
getter result and `1,000,000` to the `MESSAGESTRING__DAILY_INVESTMENT_LIMIT`
formatter. The handlers also clear paired receiver fields and update child
state; Ghidra shows a `0xFFFFFF` value written to a child field on the observed
path.

The eight leaf helpers are null-guarded setters for nested offsets `+0x48`,
`+0x4C`, `+0x50`, `+0x54`, `+0x58`, and `+0x5C`, plus scaled getters for `+0x48`
and `+0x4C`. Across each fresh export, the selected edge boundary contains 48
outgoing calls from the handlers and four incoming dispatcher calls. All 11
distinct external callees already have byte-matched bodies; no unresolved
direct callee remains in this slice.

The record and payload schemas, receiver class, numeric units and scale, meaning
of subtype 3 and selector `0x45F`, localization callback contract, and visual
effect remain unknown. This evidence is static; the handlers have not yet been
exercised in the emulator.
