# Current Main `CPannelTrade` event method at slot `+0x18`

The installed `Main.dll` method at `0x588B8CB0` is referenced by the
RTTI-identified `CPannelTrade` vtable address point `0x589A0954` at slot `+0x18`
(`0x589A096C`). Its direct-call closure adds 23 exact instruction-stream
matches / 4,699 bytes. The body ranges are recorded in
[`config/NF2_2026/main-cpannel-trade-event-body-ranges.tsv`](../config/NF2_2026/main-cpannel-trade-event-body-ranges.tsv).

## Evidence from the installed client

The vtable's complete-object locator pointer at `0x589A0950` leads to
`0x589A98B0`; its type descriptor at `0x589CD57C` names
`.?AVCPannelTrade@@`. The mapped pointer at `0x589A096C` is `0x588B8CB0`, and
fresh Ghidra records that data reference. No direct code caller of this virtual
method was found.

The method handles callback values `2`, `61000`, and `0xF235` on observed
receiver-state branches. One path enumerates selected child records, resolves
their entries through the included accessors, validates per-record fields and
two amount totals against mapped limits, then builds a compact sequence of
16-bit values and passes it with the two totals to `FUN_587BA8F0`. That helper
dispatches event `0x80010D03` when its observed global state gate equals `3`.
Other branches update child flags and state, invoke the panel's existing
increment/decrement helpers, or reset the observed state and rebuild the two
displayed row sets through `FUN_588B7F70`.

The root closure includes 23 functions across 25 Ghidra ranges. The fresh
function-body export has complete instruction coverage for all ranges. The
mapped direct-transfer scan reaches every closure member, finds zero unresolved
targets, and verifies 67 outgoing transfers to already matched code. Three
byte-matched callers exercise included helpers: `FUN_588B96B0` calls the
selection helpers at nine sites, `FUN_588EC5D0` calls `FUN_58779890` at
`0x588EC711`, and `FUN_588FD180` calls row helpers at `0x588FD217`,
`0x588FD2D2`, and `0x588FD376`.

ObjDiff 3.8.0 verifies all 23 functions / 4,699 bytes at 100%. The root's
2,140-byte body is emitted as three exact ranges. Run
`rtk python tools/verify_current_main_cpannel_trade_event.py` to repeat the
closure, vtable/RTTI, matched-caller, instruction-coverage, and transfer checks.

## Uncertainties

The receiver field names, child identities, row schema, limits' meaning,
event-dispatch protocol, and visible effect remain unknown. The labels above
describe only observed fields and control flow. This validates the installed
client's static byte match; no emulator launch or panel interaction was tested.
