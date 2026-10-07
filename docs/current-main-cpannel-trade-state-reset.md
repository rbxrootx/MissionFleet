# Current Main `CPannelTrade` state reset

The installed `Main.dll` virtual method at `0x588B5840` is RTTI-backed as
`CPannelTrade` vtable slot `+0x08`. This slice adds four exact
instruction-stream matches / 1,164 bytes at objdiff 3.8.0 byte-identical. The
four functions occupy six exact Ghidra ranges listed in
[`config/NF2_2026/main-cpannel-trade-state-reset-body-ranges.tsv`](../config/NF2_2026/main-cpannel-trade-state-reset-body-ranges.tsv).

## Original-code evidence

The vtable address point is `0x589A0954`; the complete-object locator pointer
stored at `0x589A0950` leads to `0x589A98B0`, whose type descriptor pointer is
`0x589CD57C`. That descriptor contains the decorated name
`.?AVCPannelTrade@@`. Vtable slot `+0x08` at `0x589A095C` contains
`0x588B5840`, and fresh Ghidra records that data reference. The root has no
direct code caller in the fresh reference export, so the exact virtual dispatch
path remains untraced.

The method checks its short field at receiver `+0x19C`. If the value is neither
10 nor 11, it calls `FUN_587B9110`, which passes event `0x80010D01` and five
zero arguments to `FUN_58970C70`. The method then changes flags at `+0x24`,
clears sixteen child-record fields at `+0x50`, conditionally releases two child
collections, calls `FUN_588BB5E0` and `FUN_588BCB00`, clears six short counters
from `+0x178` through `+0x184`, and zeros `+0x1D4` and `+0x1D8`.

The complete direct-call closure is four open functions / 1,164 bytes. The
mapped x86 scan validates three calls within the closure and 15 calls to already
byte-matched functions, with no unresolved direct-call targets. Two of the
helpers also have byte-matched callers: `FUN_588FC770` calls both helpers at
`0x588FC7C0` and `0x588FC7D2`, and `FUN_588FD180` calls `FUN_588BB5E0` at
`0x588FD3E7`. The focused verifier checks instruction coverage, exact transfer
sites, those matched callsites, the RTTI/vtable pointers, and the event ID.

## Limits

RTTI establishes the method's owning class and slot, but does not identify the
runtime call path. Indirect virtual targets, the meaning of the state and child
fields, and the event receiver remain unresolved. No emulator launch or trade
panel visual/interaction test was performed.
