# Main.dll CRoomTypeMission construction

Byte-matched `FUN_588C9280` is identified by Ghidra as the
`CRoomSettingManager` constructor. It allocates `0xA4` bytes and calls
`FUN_588CEF50` at `0x588CAA63`, passing the new child object plus layout values
from its receiver. The returned child pointer is stored at receiver `+0x17C`.
The allocation, argument setup, and call are checked against the matched
constructor's mapped instructions.

Ghidra labels `FUN_588CEF50` as the `CRoomTypeMission` constructor. It calls
`FUN_588D02E0` to initialize a `CRoomTypeObject` base, installs the
`CRoomTypeMission` vtable, loads `.\SPR\ITFMSN.spr`, constructs sprite and
resource-backed controls, and finishes by calling `FUN_588CEC10(1)`. That
initializer sets the observed `MAP_NAME_MISSION` and
`MESSAGESTRING_ROOMTYPE_MISSION` keys, changes child flags, and consults the
global entry table at `0x58A24828`. Its selector helper, `FUN_587AEEF0`, checks
array bounds, compares entries' `+0x50` fields, examines object and global
state, and returns the observed status values or `-1`; those values have no
recovered names.

`FUN_587AEEF0` is shared with the byte-matched `CPageChannelBattle_ControlMenuScreen`
method `FUN_587D51D0` at vtable slot `+0x10`. In its event `0x201` route, that
method calls the helper with argument `1` and branches on its result before
continuing to `FUN_587BA7C0`. The matched instruction setup around this call is
also verified. The fresh closure audit found 18 external incoming control-flow
sites from 18 functions; only two source functions are already byte-verified,
while 16 remain unmatched.

The exact direct-call closure contains four functions / 3,634 bytes across
four fresh Ghidra body ranges. All four are reachable from `FUN_588CEF50`, all
72 outgoing transfers land in byte-verified functions, and no direct
in-module target is unresolved.

| Function | Bytes | Exact body range |
| --- | ---: | --- |
| `587AEEF0` | 757 | `[587AEEF0, 587AF1E5)` |
| `588CEC10` | 825 | `[588CEC10, 588CEF49)` |
| `588CEF50` | 1,389 | `[588CEF50, 588CF4BD)` |
| `588D02E0` | 663 | `[588D02E0, 588D0577)` |

The ranges are preserved in
`config/NF2_2026/main-room-type-mission-body-ranges.tsv`. All four emitted
instruction-stream sources match under objdiff 3.8.0 at 100.0%. The resource
table schema, child purposes, selector/status meanings, complete room-type
behavior, and actual screen appearance remain uncertain. No runtime or visual
test was performed.
