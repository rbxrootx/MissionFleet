# Current Main item detail renderer

`FUN_5879b3b0` is an 8,189-byte routine in the locally captured installed
`Main.dll`. Its single contiguous Ghidra body range matches the reconstructed
source at 100.0% in objdiff 3.8.0, with 260 mapped operands checked.

The routine resets state for thirty receiver entries beginning at `+0xDC`,
then, when receiver field `+0x268` equals one, switches on the first byte of the
record reached through receiver field `+0x2F8`. The type-specific paths format
localized fields into fixed screen positions. Observed labels include tonnage,
speed, seconds, dimensions, ammunition, and aircraft categories. Some item
types populate additional receiver fields from indexed records before drawing
their rows.

Ghidra records direct calls from `FUN_5879d3f0`, `FUN_5879d480`,
`FUN_5879d550`, `FUN_5879dd90` (three sites), and `FUN_5879f810`. The nearby
event handler `FUN_5879f810` recognizes localized `SCROLL_UP`, `SCROLL_DOWN`,
`CANCEL`, and `BUY_EQUIP` actions and refreshes this renderer after handling
them. Together these call sites support describing the routine as an item or
equipment detail renderer; Ghidra does not recover a class or exact screen
name.

The item-record schema, type-code taxonomy, meanings and units of its fields,
localized text helper contracts, and relationship between displayed values and
purchase outcomes remain unresolved. The byte match is against the installed
mapped `Main.dll`; no client visual or purchase-flow test was performed.
