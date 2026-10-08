# Current Main event `0x80025102`

This slice reconstructs the complete open direct-call closure of event
`0x80025102` in the installed client's already byte-matched dispatcher
`FUN_587BB700`. It adds 15 functions, 2,990 bytes, 20 exact Ghidra body ranges,
and 974 decoded instructions. Every emitted function passed ObjDiff's 100%
byte comparison against the pinned mapped `Main.dll`.

## Evidence from the original client

The matched dispatcher has an explicit `0x80025102` switch case. In that case
it calls the shared state helper `FUN_588FC560` at `0x587C0E7F`, then selects
one of three paths based on the observed word at event offset `+0x0A` and the
selector at `param_2[3]`:

| Call site | Target | Observed path |
| --- | --- | --- |
| `0x587C0E7F` | `FUN_588FC560` | Shared pre-handler state update |
| `0x587C0EB6` | `FUN_588FB8C0` | Discriminator 1, selector 1; payload pointer depends on observed length threshold `0x188` |
| `0x587C0EE0` | `FUN_588FB8A0` | Discriminator 1, selector 0; sibling detail path |
| `0x587C0EFF` | `FUN_588FC210` | Discriminator is not 1; status/message fallback |

The two detail paths share the already matched lookup `FUN_588FF0F0`. When it
returns a record, they test the captured cursor coordinates against the
supplied rectangle and build their respective child objects. The decompiled
text path uses resource keys `TEXT_SLOT_BASIC`, `TEXT_SLOT_PCROOM_PREMIUM`,
`TEXT_SLOT_CASH_NOPERIOD`, and `TEXT_SLOT_LOCKED`; one state also derives an
index through `FUN_588F9AD0`. The fallback path maps observed discriminator
and selector values to identifiers from `0x1777` through `0x178C` before
calling the matched message dispatch helpers. These names and branches support
a slot-information UI interpretation, but do not establish purchases or
server-side effects.

The tracked exact ranges are in
`config/NF2_2026/main-event-80025102-body-ranges.tsv`. Two independent Ghidra
body exports and the fresh selected-function Ghidra log agree on each range.
The independent call/data edge exports agree, and the direct-call graph from
the four branch roots reaches exactly these 15 functions. The focused verifier
also decodes the mapped x86, compares every in-slice transfer with Ghidra,
requires each out-of-slice in-image target to have an existing byte-match
record, and checks the four dispatcher call instructions at their original
addresses.

## Uncertainties

The event payload schema, meanings of its discriminator and selector fields,
localized text rendered for a particular slot, object layouts, and the
fallback identifiers' user-facing meaning remain unknown. `FUN_588FC560` is
shared with neighboring `0x800251xx` cases, but it is included here because
the original dispatcher calls it before this case's branch selection. No live
client or emulator interaction test was run.
