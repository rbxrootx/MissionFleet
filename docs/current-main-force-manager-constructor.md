# `CPannelForceManager` constructor evidence

Ghidra identifies `FUN_58872030` by its `CPannelForceManager::vftable`
assignment after the `CMenuScreen` base initializer. It creates a screen tree
from indexed sprite resources and child-panel constructors. Several child
relationships have independent evidence in the decompilation:

- `param_1[0x2D]` (`+0xB4`) receives `FUN_5886DDA0`, identified as
  `CPannelForceInfo`.
- `param_1[0x2F]` (`+0xBC`) receives `FUN_588B0940`, identified as
  `CPannelShipTree`.
- `param_1[0x31]` (`+0xC4`) receives `FUN_58868B40`, identified as
  `CPannelForceCompositionManager`.

Other children include sprite-backed controls and panels whose exact roles are
not established. Resource table indices, control labels, actions, and the full
receiver layout remain unresolved.

## Caller evidence

Ghidra records two direct callers: `FUN_587dba00` and `FUN_587d6cb0`. In
`FUN_587dba00`, the returned child pointer is stored at parent offset `+0xDB4`,
and the caller sets its draw-depth field to `0x428`. The caller establishes
parent ownership and subsequent setup; its own semantic class is not asserted
here.

## Validation and limits

Ghidra reports one contiguous body range, `0x58872030..0x5887302D`, totaling
4,094 bytes. `tools/generate_mapped_client_asm.py` emits source from the locally
captured mapped client image for that exact range. ObjDiff verified all 4,094
bytes and 138 mapped operand records. This is an exact machine-code match, not
verification of all control meanings, visual appearance, or runtime behavior.
No emulator test or screenshot comparison was performed.
