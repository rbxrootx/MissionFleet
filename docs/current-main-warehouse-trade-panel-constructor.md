# Current Main warehouse trade panel constructor

`FUN_58900400` is the constructor Ghidra labels with
`CWarehouseTradePanel::vftable`. It initializes a `CMenuScreen` base and
occupies one contiguous 2,583-byte range in the captured current-client
`Main.dll`. ObjDiff 3.8.0 matches the range and checks 84 mapped operands.

## Evidence from the original code

Ghidra reports a direct call at `0x588FBC2B` from `FUN_588fb9b0`, whose vtable
is `CWarehouseManager::vftable`. That parent loads `ITFTRD.spr` and constructs
this panel at coordinates relative to the parent screen.

The body creates several sprite-backed child panels and controls, then copies
three strings from the captured image into child text buffers with a 0x80-byte
bound. Decoding those referenced bytes as GBK gives these messages:

- The item sale is valid for 120 hours.
- Goods unsold after 120 hours are automatically returned to headquarters.
- A confirmed payment is non-refundable.

It also reads a formatted message saying a percentage of coins or points will
be deducted from headquarters. The original pseudocode and source bytes are
the evidence for those text references and copy operations.

## Uncertainties

The exact locale context, item-data schema, transaction conditions, and
runtime presentation and interactions are not verified. The string decoding
does not prove that these messages are displayed in a particular emulator
state; no visual or transaction test was run.
