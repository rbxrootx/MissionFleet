# Current Main Manage Squad tab constructor

`FUN_5883bbe0` is the installed `Main.dll` constructor whose Ghidra-discovered
vtable is `CPannelCommunicatorConfigManageSquadTab::vftable`. Ghidra assigns one
contiguous body range, `5883BBE0..5883DDE6`, totaling the inventory's 8,711
bytes. ObjDiff 3.8.0 verifies the reconstructed range at 100.0%, including 427
mapped operands.

Ghidra records one direct caller, `FUN_58843380` at `0x588442E6`. In the parent
pseudocode, it allocates `0x310` bytes for this child, passes the shared layout
arguments to the constructor, then stores the returned pointer at parent offset
`+0x164` (element `0x59`). This places the constructor in the communicator
panel's set of tab children; the exact user-visible actions are not established
by that call alone.

The constructor calls base initialization `FUN_587b6dd0`, installs the tab
vtable, stores layout and shared table fields, and builds many child objects.
The body bounds-checks indexed presentation records, creates
`CSpriteDataScreen` children through `FUN_589031a0`, copies descriptor fields,
and invokes other construction helpers such as `FUN_58733280` and
`FUN_5875dda0`. Its remaining instructions initialize and store additional
child pointers and tab state. This description follows the Ghidra body and the
direct parent call; it does not assign names or behavior to individual controls.

Ghidra reports no decompilation warnings for this function, but the underlying
object and resource-table layouts, meaning of indexed records, child-control
labels/actions, and runtime behavior remain uncertain. This is static
function-level byte evidence, not an original-client visual or interaction
test.
