# Installed Core.dll scene resource row view

The resource screen keeps a selected descriptor index at object offset `+0x128`
and a first-visible line index at `+0x118`. Ghidra's decompilation of
`0x586E9880` shows tab-child pointer comparisons; a recognized tab stores its
descriptor index, resets the first-visible index when the descriptor is loaded,
updates the scrollbar, and calls `0x586EB530` to refill the visible rows.

`0x586EB530` fills 15 child slots. For each slot it adds the slot number to the
first-visible index, checks that value against the selected descriptor's string
count, obtains the 24-byte string element, and passes its character data to
`0x584860A0`. When the index is outside the vector, it passes an empty string
to clear that row. `0x584860A0` copies through `0x587B4180` into the receiver's
`+0x6C` buffer with a `0x80` capacity argument. The 15 repeated constructor
children at `0x586E8270` support identifying these as row controls; their exact
class and visible labels are not recovered.

`0x586EB640` advances the first-visible index while it is below the line count
minus 15, updates the scrollbar, and refills the rows. `0x586EB730` decrements
the index or clamps it at zero, then updates the scrollbar and rows.
`0x586E9AF0` contains keyboard, pointer, wheel, drag, and focus-related input
branches that reach those helpers. `0x586EAA50` updates grouped control state
and also refreshes the rows. Event ABI details and the live sequence of input
events have not been captured, so these are static paths rather than runtime
observations.

The supporting helpers establish the data path: `0x586E94F0` selects a 12-byte
resource descriptor, `0x58507730` selects a 24-byte string element,
`0x584C5D40` obtains its character data through `0x584AA480`, and
`0x584860A0` copies that text to the row object. Exact descriptor field names,
string encoding, scrollbar units, tab labels, and rendered pixels remain
uncertain.

All 11 functions in this path were rebuilt with the pinned Visual C++ 6 SP5
toolchain and compared against the captured mapped Core image using objdiff
3.8.0. They match at **100% across 7,184 bytes**, with 333 relocation targets
checked. The two large callbacks, `0x586E9AF0` and `0x586EAA50`, occupy
discontiguous Ghidra code ranges; the inventory records their full mapped linear
spans through their final instructions so verification includes the intervening
bytes. The exact instruction emission also works around VC6's unsupported
`cvttss2si` inline-assembly spelling.

These byte matches validate the reconstructed machine code and control flow.
They do not yet prove what the screen looks like or that the tab and scroll
input paths run correctly in a live client.
