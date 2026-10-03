# Current Main Manage Fleet tab constructor

`FUN_58836b90` is the installed `Main.dll` constructor whose Ghidra-discovered
vtable is `CPannelCommunicatorConfigManageFleetTab::vftable`. Ghidra assigns two
body ranges: `58836B90..58838464` (6,357 bytes) and `58838470..58838C9A`
(2,091 bytes), totaling the indexed 8,448 bytes. Capstone fully decodes the
11-byte gap as two alignment instructions. ObjDiff 3.8.0 verifies both ranges
at 100.0%, including 414 mapped operands.

Ghidra records one direct call from `FUN_58843380` at `0x588442A1`. Its
pseudocode allocates `0x348` bytes for the Fleet tab, calls this constructor,
and stores the result at parent offset `+0x160`. The same parent then allocates
`0x310` bytes and constructs the `CPannelCommunicatorConfigManageSquadTab`
documented in the [Manage Squad tab note](current-main-manage-squad-tab-constructor.md),
storing that sibling at `+0x164`.

The constructor calls base initialization `FUN_587b6dd0`, installs the
ManageFleetTab vtable, initializes layout and shared resource-table fields, and
creates many child controls. Its loops bounds-check indexed presentation
records and initialize `CSpriteDataScreen` children through `FUN_589031a0`;
other observed helper calls include `FUN_58733280`, `FUN_5875dda0`, and
`FUN_587c8960`. Individual controls, labels, and actions are not identified by
this evidence.

The receiver layout, record schemas, resource meanings, child-control behavior,
and runtime appearance remain unknown. This is static function-level byte
evidence, not an original-client visual or interaction test.
