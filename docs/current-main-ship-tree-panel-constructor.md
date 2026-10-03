# Current Main ship-tree panel constructor

`FUN_588b0940` is the constructor Ghidra labels with
`CPannelShipTree::vftable`. It initializes a `CMenuScreen` base and occupies a
single contiguous 2,592-byte range in the captured current-client `Main.dll`.
ObjDiff 3.8.0 matches that range and checks 99 mapped operands.

## Evidence from the original code

Ghidra reports a direct call at `0x58872419` from `FUN_58872030`. That caller
initializes a `CPannelForceManager` and constructs this child with arguments
`(param_2, 0x70, 0x54, 0, 0, 0x40)`.

The constructor installs the `CPannelShipTree` vtable, sets internal offsets
`0x70` and `0x5D`, and constructs several sprite-backed children from resource
indices based on `param_7`. Its first visible repeated group creates eight
pairs of `CSpriteDataScreen` objects while advancing the resource-record
pointer by `0x1D` each iteration. A later loop creates 100 `CSpriteBundleScreen`
objects and one `CSpriteDataScreen` child for each, storing the loop index in
the bundle object. Additional `CSpriteDataScreen` and `FUN_5875dda0` controls
are initialized at positions derived from the constructor coordinates. These
facts are directly visible in Ghidra's pseudocode and the matched machine-code
body.

## Uncertainties

The resource indices' artwork and semantic labels, the child data schema,
tree-selection behavior, and visible/runtime layout remain unknown. This
constructor has not been exercised in the emulator.
