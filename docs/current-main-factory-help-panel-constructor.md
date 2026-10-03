# Current Main factory-help panel constructor

`FUN_588522b0` is the constructor Ghidra labels with
`CPannelFactoryHelp::vftable`. It initializes a `CMenuScreen` base and
occupies one contiguous 2,583-byte range in the captured current-client
`Main.dll`. ObjDiff 3.8.0 matches the range and checks 68 mapped operands.

## Evidence from the original code

Ghidra reports a direct call at `0x587DC206` from `FUN_587dba00`, whose vtable
is `CPageFactory_ControlMenuScreen::vftable`. That parent loads `ITPNFS.spr`,
`ITPNFS2.spr`, `ITPNST.spr`, and `ShipStructureMarket.spr`. This constructor
loads the separate `FactoryHelp.spr` asset.

After the base initializer, the body installs the `CPannelFactoryHelp` vtable
and creates a 15-entry group of `CSpriteBundleScreen` objects. Each entry also
gets three sprite-backed controls. The code selects resource indices from
explicit groups and copies frame rectangles when the indexed source record is
present. Further loops construct additional paired and indexed bundle/data
screen groups. These loops, class labels, calls, and asset path are present in
the original Ghidra pseudocode.

## Uncertainties

The sprite-frame labels and factory-help topics, entry meanings, screen
arrangement, and interaction are not established by this constructor alone.
No emulator render or input test was performed.
