# Current Main ship-tree input handler

`FUN_588b1580` occupies 1,166 bytes across two Ghidra ranges in the captured
current-client `Main.dll`. ObjDiff 3.8.0 matches both ranges and checks 39
mapped operands.

## Evidence from the original code

The constructor `FUN_588b0940` installs `CPannelShipTree::vftable` at
`0x589A0828`. Ghidra records this handler as a data reference from
`0x589A0838`, the table's `+0x10` slot; the captured image stores
`0x588B1580` there. The function receives an event record and checks the
screen's enabled flag before handling it.

The body forwards events through a child-handler chain, maintains scroll
position and clamps it against the tree bounds. For event type `0x200`, it
hit-tests up to 100 bundle entries and calls `FUN_588b1b40` for a hit. For
`0x201`, it checks the scroll controls and eight visible item controls, updates
selection state, and calls selection helpers. Types `0x202` and `0x204` reset
scroll or selection fields; `0x20A` derives a scroll delta from the event's
short value, scales it by 8, and clamps it. For type `0x100`, key values
`0x0D`, `0x1B`, `0x25`, and `0x27` dispatch actions or adjust scrolling. Those
branches and helper calls come directly from Ghidra pseudocode.

## Uncertainties

Friendly event names, the item-data schema, exact selection side effects, and
the relationship between helper calls and visible state have not been
confirmed. Input behavior has not been exercised in the emulator.
