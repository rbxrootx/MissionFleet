# Current Main communicator diplomacy tab constructor

Ghidra identifies `FUN_58824970` as the `CPannelCommunicatorConfigDiplomacyTab`
constructor from its vtable write, after it initializes the `CMenuScreen` base.
Its direct caller, `FUN_58843380`, writes the
`CPannelCommunicatorConfigPannel` vtable and calls this constructor at
`0x58844325` as one of its child tabs.

The constructor loads the observed sprite path `ITFCMM_DIP.spr`, creates a
`CSpriteBundleScreen`, and constructs repeated `CSpriteDataScreen` children
from indexed entries in that resource. It also creates text/sprite controls
using the constructor's supplied position values. The localized strings
`DISPSCREEN_CMMDIP_WD_NOCONQUERINGFLEET` and
`DISPSCREEN_CMMDIP_WD_UNCONQUERABLE` are passed to the observed text helper
while it initializes repeated controls. These resource and string references
support the diplomacy-tab identification; the meaning and layout of most
individual controls and the resource-table schema remain unknown.

Ghidra assigns three body ranges: `58824970..58825BEA`,
`58825BF0..588262F8`, and `58826300..58826F1E`. They total the inventory's
9,635 bytes. The first gap (`58825BEB..58825BEF`) contains a short jump to
`58825BF0` followed by alignment bytes. Ghidra assigns no function to those
addresses and reports no references to the jump. The preceding owned
instruction at `58825BE9` jumps to `58825BF4`, skipping the gap. The second
gap (`588262F9..588262FF`) contains alignment after the owned jump at
`588262F7` to `58826300`. These bytes are therefore excluded from the indexed
function extent rather than silently treated as function code.

All three reconstructed segments match the mapped client at 100.0% under
ObjDiff 3.8.0; the verifier checked 484 mapped operands. This is static
function-level byte evidence. The constructor has not been exercised in the
original client or emulator, and the tab's rendered appearance has not been
compared against the original.
